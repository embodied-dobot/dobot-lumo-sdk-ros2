# Dobot ROS 2 SDK

**English** | [简体中文](./README.zh-CN.md)

ROS 2 SDK for controlling and monitoring Dobot humanoid robots (SR_3588, SR_thor): the `dobot` interface package, C++ and Python client libraries, and examples.

> **Status:** Early release. This directory is the installed result for callers, not the implementation source. The ROS distribution is Lyrical and Python is 3.14. Libraries are separated by architecture and must not be mixed.

```text
x86_64/     Install prefix for that architecture. Absent until it has been built
aarch64/    Same as above
example/    Example sources, shared by both architectures
```

## Quick start

### Deploy with Docker

You do not need ROS 2 on the host; use it in a container. The images already contain ROS 2 Lyrical and Fast DDS 3.6.2:

| Architecture | Image |
| --- | --- |
| x86_64 | `harbor.dobot.com/fastdds/emb/ros2-lyrical-fastdds-3.6.2:x86` |
| aarch64 | `harbor.dobot.com/fastdds/emb/ros2-lyrical-fastdds-3.6.2:arm` |

Create the container once. Replace `<parent of this directory>` with the host path that contains this directory. The example uses x86_64:

```bash
docker run -d --name ros2_lyrical --network host --ipc host --privileged \
  -v <parent of this directory>:/root/workspace \
  harbor.dobot.com/fastdds/emb/ros2-lyrical-fastdds-3.6.2:x86 bash -lc 'sleep infinity'
docker exec -it ros2_lyrical bash
```

- `--network host` is required. The container must be on the same network segment as the robot to exchange DDS traffic; the default bridge network does not receive the robot's data. Configure the host interface that faces the robot with an address in the same segment first, for example `192.168.5.x`, and make sure you can `ping` the robot.
- On an x86_64 host, the aarch64 image also needs `--platform linux/arm64` and runs under qemu. On an aarch64 device it is not needed.
- The images have no g++. You do not need it to use the install result in this directory; to build your own project in the container, install it once with `apt-get update && apt-get install -y build-essential`.
- Anything written inside the container is lost when the container is removed. Keep files you want to retain in the mounted directory.

### Load the environment

Inside the container, load ROS 2 first and then the architecture-specific install prefix. Use container paths, for example `/root/workspace/dobot-lumo-sdk-ros2/x86_64/setup.bash`:

```bash
source /opt/ros/lyrical/setup.bash
source <this directory>/x86_64/setup.bash
```

After the aarch64 build has been copied here, replace `x86_64` with `aarch64`.

`ROS_DOMAIN_ID` must equal the firmware domain, which defaults to 0. Write topics as `/lower/state`; do not add `rt/` yourself.

### Check that you receive data

Confirm that you can receive the robot's data before writing your own program:

```bash
ROS_DOMAIN_ID=0 ros2 topic echo /lower/state --qos-reliability best_effort --once
```

If topics are listed but no data arrives, first check that `echo $FASTDDS_DEFAULT_PROFILES_FILE` points to `dobot_no_typeinfo.xml` in this directory. See "Type information propagation" below.

### Run an example

```bash
ROS_DOMAIN_ID=0 ros2 topic echo /lower/state
ROS_DOMAIN_ID=0 ros2 run dobot_robot_examples state_listener
```

`closed_loop` only prints by default. Add `enable_output:=true` after you have confirmed the site is safe.

> [!WARNING]
> Switching modes, preset actions, and outputs such as `enable_output:=true` move the physical robot. Make sure the area around the robot is clear and an e-stop is within reach.

## Motion services: modes, preset actions, skills

Start the service node first. It runs on your computer and turns requests into JSON-RPC calls to the robot. The robot IP must be reachable; the default is `192.168.5.2:51234`, and `172.16.20.2` for SR_thor:

```bash
ROS_DOMAIN_ID=0 ros2 run dobot_robot_examples dobot_motion_service --ros-args -p robot_ip:=192.168.5.2
```

Without this node none of the services below exist, and `/dobot/...` does not appear in `ros2 service list`.

| Service / action | Purpose | C++ SDK counterpart |
| --- | --- | --- |
| `/dobot/set_robot_mode` | Switch mode: `zero_torque` 0, `damping` 1, `custom_debug` 2, `ready` 100, `standing` 300, `walking` 304 | `Motion::SetRobotMode` |
| `/dobot/get_fsm_id` | Query the current state machine (FSM) ID; 0 is also valid | `Motion::GetFsmId` |
| `/dobot/get_fsm_list` | List all state machines on the robot, including dances | `Motion::GetFsmList` |
| `/dobot/play_preset_action` | Preset actions: `auto_enter_box` 307, `auto_exit_box` 308, `lie_down` 310, `stand_up_supine` 311, `go_prone` 312, `stand_up_prone` 313 | `AutoEnterBox`, `AutoExitBox`, `LieDown`, `GoProne`, `StandUpFromSupine`, `StandUpFromProne` |
| `/dobot/set_velocity` | Send base velocity; use 0 to stop | `Motion::SetVelocity` |
| `/dobot/execute_skill` | Play an action from the robot's skill directory; `file_path` is a file name on the robot | `MotionRpc::ExecuteAction` |
| `/dobot/call_rpc` | Call a JSON-RPC method directly, for methods without a dedicated service | `MotionRpc::Call` |
| Action `/dobot/execute_motion` | `command` is `set_mode`, `set_velocity`, or `play_dance` (ID 350–400) | `Motion::PlayDance` and others |

```bash
ROS_DOMAIN_ID=0 ros2 service call /dobot/get_fsm_id dobot/srv/GetFsmId "{timeout_ms: 3000}"
ROS_DOMAIN_ID=0 ros2 service call /dobot/get_fsm_list dobot/srv/GetFsmList "{timeout_ms: 3000}"
```

- A successful return only means the switch was accepted, not that the motion has finished. To confirm, poll `get_fsm_id` or subscribe to `/set/fsm/id`.
- After `auto_exit_box`, `stand_up_supine`, and `stand_up_prone` return, the robot first enters humanoid walking (304) and about 2 s later automatically enters standing (300). Do not switch to `standing` immediately. After `auto_enter_box`, `lie_down`, and `go_prone` finish, the robot automatically enters damping (1).
- A returned `code` of 0 means success; non-zero is an error code of `dobot_robot_sdk`. If the robot returns 0 it counts as rejected, and -1 counts as an internal motion-control error; both are `code` 7.
- For `call_rpc`, `code` 0 only means the transport succeeded. Read `response_json` to interpret `result`.

### Client libraries

If you do not want to write service calls yourself, use the client libraries. The node above must be running for them too:

- C++: `RobotClient::set_robot_mode`, `get_fsm_id`, `get_fsm_list`, `play_preset_action`, `set_velocity`, `execute_skill`, `call_rpc`. Do not make synchronous calls from the callback thread of that node. `dobot_robot_sdk/motion.hpp` has `FsmIdToString`, which turns an ID into a name.
- Python: `RobotClient.call_set_robot_mode`, `call_get_fsm_id`, `call_get_fsm_list`, `call_play_preset_action`, `call_set_velocity`, `call_execute_skill`, `call_rpc`. They return futures, so someone must spin the node. `dobot_robot_sdk.fsm_id_to_string` translates an ID.

### Type information propagation

After you source this directory, `FASTDDS_DEFAULT_PROFILES_FILE` points to `dobot/share/dobot/fastdds/dobot_no_typeinfo.xml`, which disables Fast DDS type information propagation. With it enabled, topics are listed but the robot's data is not received. The type information sent by ROS differs from the firmware side, and the Fast DDS on the robot does not accept it; the exact cause has not been found. If you have already set this variable, it is not overridden; merge `fastdds.type_propagation=disabled` into your own configuration.

## Layout

The interfaces are in the `dobot` package. The C++ client is `libdobot_robot_sdk.so` and the Python one is `dobot_robot_sdk`. A blank project is in `example/template`.

## Support and contact

- **Bug reports and feature requests:** open an issue in this repository's [Issues](../../issues) tab.

When reporting a bug, include the architecture, ROS distribution, robot model, steps to reproduce, and expected versus actual behavior.

## Security

Do not report security vulnerabilities in public issues. Use GitHub's private vulnerability reporting: open the **Security** tab of this repository and choose **Report a vulnerability**.

## License

MIT License. See [LICENSE](./LICENSE). Notices for bundled third-party components are in [licenses/](./licenses/).
