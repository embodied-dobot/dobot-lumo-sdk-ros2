# Dobot ROS 2 SDK

本目录是给调用方的安装结果，不是实现源码。当前 ROS 发行版是 Lyrical，Python 是 3.14。库按架构分开，换架构不能混用。

```text
x86_64/     该架构的安装前缀。还没有编译结果时，这个目录不存在
aarch64/    同上
example/    示例源码，两个架构共用
```

## 用 Docker 部署

宿主机不用装 ROS 2，在容器里用。镜像里已有 ROS 2 Lyrical 和 Fast DDS 3.6.2：

| 架构 | 镜像 |
| --- | --- |
| x86_64 | `harbor.dobot.com/fastdds/emb/ros2-lyrical-fastdds-3.6.2:x86` |
| aarch64 | `harbor.dobot.com/fastdds/emb/ros2-lyrical-fastdds-3.6.2:arm` |

创建容器，只需要一次。把 `<本目录的上级>` 换成宿主机上放着本目录的路径，下面以 x86_64 为例：

```bash
docker run -d --name ros2_lyrical --network host --ipc host --privileged \
  -v <本目录的上级>:/root/workspace \
  harbor.dobot.com/fastdds/emb/ros2-lyrical-fastdds-3.6.2:x86 bash -lc 'sleep infinity'
docker exec -it ros2_lyrical bash
```

- `--network host` 必须加。容器要和机器人在同一网段收发 DDS，用默认的桥接网络收不到机器人的数据。宿主机连机器人的网卡要先配好同网段地址，例如 `192.168.5.x`，能 `ping` 通机器人。
- aarch64 镜像在 x86_64 宿主机上要多加 `--platform linux/arm64`，通过 qemu 运行。在 aarch64 设备上直接运行不需要。
- 镜像里没有 g++。只是使用本目录的安装结果不用装；要在容器里编译自己的工程时，先装一次：`apt-get update && apt-get install -y build-essential`。
- 容器删掉后，容器里写的东西都没了。要保留的文件放在挂载的目录里。

进入容器后，按下面「使用前先加载」的步骤加载 ROS 2 和本目录。路径换成容器里的，例如 `/root/workspace/dobot-sdk-ros2/x86_64/setup.bash`。

先确认能收到机器人的数据，再写自己的程序：

```bash
ROS_DOMAIN_ID=0 ros2 topic echo /lower/state --qos-reliability best_effort --once
```

话题能列出但收不到数据时，先看 `echo $FASTDDS_DEFAULT_PROFILES_FILE` 是不是指向本目录里的 `dobot_no_typeinfo.xml`，说明见本文下面「类型信息传播」一段。

使用前先加载本机的 ROS 2，再加载对应架构：

```bash
source /opt/ros/lyrical/setup.bash
source <本目录>/x86_64/setup.bash
```

aarch64 编完并拷贝之后，把上面的 `x86_64` 换成 `aarch64`。

`ROS_DOMAIN_ID` 与固件 Domain 相同，默认是 0。话题写 `/lower/state`，不要自己加 `rt/`。

```bash
ROS_DOMAIN_ID=0 ros2 topic echo /lower/state
ROS_DOMAIN_ID=0 ros2 run dobot_robot_examples state_listener
```

`closed_loop` 默认只打印。确认现场安全后再加 `enable_output:=true`。

## 运控服务：切换模式、预设动作、技能

先启动服务节点。它在你的电脑上把请求转成 JSON-RPC 发给机器人，机器人 IP 要能通，默认 `192.168.5.2:51234`，SR_thor 是 `172.16.20.2`：

```bash
ROS_DOMAIN_ID=0 ros2 run dobot_robot_examples dobot_motion_service --ros-args -p robot_ip:=192.168.5.2
```

没有这个节点，下面所有服务都不存在，`ros2 service list` 里看不到 `/dobot/...`。

| 服务 / 动作 | 作用 | 对应 C++ SDK |
| --- | --- | --- |
| `/dobot/set_robot_mode` | 切换模式：`zero_torque` 0、`damping` 1、`custom_debug` 2、`ready` 100、`standing` 300、`walking` 304 | `Motion::SetRobotMode` |
| `/dobot/get_fsm_id` | 查询当前状态机编号，0 也是合法编号 | `Motion::GetFsmId` |
| `/dobot/get_fsm_list` | 查询机器人上全部状态机，包括舞蹈 | `Motion::GetFsmList` |
| `/dobot/play_preset_action` | 预设动作：`auto_enter_box` 307、`auto_exit_box` 308、`lie_down` 310、`stand_up_supine` 311、`go_prone` 312、`stand_up_prone` 313 | `AutoEnterBox`、`AutoExitBox`、`LieDown`、`GoProne`、`StandUpFromSupine`、`StandUpFromProne` |
| `/dobot/set_velocity` | 下发底盘速度，停机用 0 | `Motion::SetVelocity` |
| `/dobot/execute_skill` | 播放机器人技能目录里的动作，`file_path` 是机器人上的文件名 | `MotionRpc::ExecuteAction` |
| `/dobot/call_rpc` | 直接调用一个 JSON-RPC 方法，给还没有单独服务的方法用 | `MotionRpc::Call` |
| 动作 `/dobot/execute_motion` | `command` 取 `set_mode`、`set_velocity`、`play_dance`（编号 350–400） | `Motion::PlayDance` 等 |

```bash
ROS_DOMAIN_ID=0 ros2 service call /dobot/get_fsm_id dobot/srv/GetFsmId "{timeout_ms: 3000}"
ROS_DOMAIN_ID=0 ros2 service call /dobot/get_fsm_list dobot/srv/GetFsmList "{timeout_ms: 3000}"
```

切换模式和预设动作会让机器人动起来，先确认周围安全。

- 返回成功只表示切换被接受，不表示动作做完。要确认到位，轮询 `get_fsm_id` 或订阅 `/set/fsm/id`。
- `auto_exit_box`、`stand_up_supine`、`stand_up_prone` 返回后先进入拟人行走（304），约 2 s 后自动进入站立（300）。返回后不要立刻切 `standing`。`auto_enter_box`、`lie_down`、`go_prone` 完成后自动进入阻尼（1）。
- 返回的 `code` 为 0 表示成功，非 0 是 `dobot_robot_sdk` 的错误码。机器人返回 0 算被拒绝，返回 -1 算运控内部错误，都是 `code` 7。
- `call_rpc` 的 `code` 为 0 只表示传输成功，`result` 的含义要自己看 `response_json`。

不想自己写服务调用时，用客户端库，同样要先启动上面的节点：

- C++：`RobotClient::set_robot_mode`、`get_fsm_id`、`get_fsm_list`、`play_preset_action`、`set_velocity`、`execute_skill`、`call_rpc`。同步调用不要放在该节点的回调线程里。`dobot_robot_sdk/motion.hpp` 里有 `FsmIdToString`，把编号翻成名称。
- Python：`RobotClient.call_set_robot_mode`、`call_get_fsm_id`、`call_get_fsm_list`、`call_play_preset_action`、`call_set_velocity`、`call_execute_skill`、`call_rpc`，返回 future，需要有人 spin 节点。`dobot_robot_sdk.fsm_id_to_string` 翻译编号。

**类型信息传播。** source 本目录后，`FASTDDS_DEFAULT_PROFILES_FILE` 会指向 `dobot/share/dobot/fastdds/dobot_no_typeinfo.xml`，关闭 Fast DDS 的类型信息传播；不关时能列出话题，但收不到机器人的数据。你自己已经设置过这个变量时不会覆盖，需要把 `fastdds.type_propagation=disabled` 合并进你自己的配置。

接口在 `dobot` 包里。C++ 客户端是 `libdobot_robot_sdk.so`，Python 是 `dobot_robot_sdk`。空白工程在 `example/template`。
