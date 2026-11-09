# Dobot ROS 2 SDK

本目录是给调用方的安装结果，不是实现源码。当前 ROS 发行版是 Lyrical，Python 是 3.14。库按架构分开，换架构不能混用。

```text
x86_64/     该架构的安装前缀。还没有编译结果时，这个目录不存在
aarch64/    同上
example/    示例源码，两个架构共用
```

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

`closed_loop` 默认只打印。确认现场安全后再加 `enable_output:=true`。运控服务默认连 `192.168.5.2:51234`，SR_thor 是 `172.16.20.2`。

接口在 `dobot` 包里。C++ 客户端是 `libdobot_robot_sdk.so`，Python 是 `dobot_robot_sdk`。空白工程在 `example/template`。
