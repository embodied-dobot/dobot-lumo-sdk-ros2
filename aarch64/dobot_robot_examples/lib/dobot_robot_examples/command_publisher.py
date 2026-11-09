#!/usr/bin/env python3
"""发布遥控和站立指令。参数不合法时 SDK 会抛 DobotError，不会发出去。"""

import rclpy
from dobot.msg import RemoteControl, StandingControl
from dobot_robot_sdk import DobotError, RobotClient
from rclpy.node import Node


def main():
    rclpy.init()
    node = Node("dobot_command_publisher_py")
    client = RobotClient(node)
    client.init()
    remote = RemoteControl()
    remote.btn_move.x = float(node.declare_parameter("move_x", 0.0).value)
    remote.btn_turn.y = float(node.declare_parameter("turn_y", 0.0).value)
    stand = StandingControl()
    stand.head_yaw = float(node.declare_parameter("head_yaw", 0.0).value)
    stand.body_height = float(node.declare_parameter("body_height", 0.0).value)
    try:
        client.publish_remote(remote)
        client.publish_standing(stand)
    except DobotError as exc:
        node.get_logger().error(str(exc))
        raise SystemExit(1) from exc
    node.get_logger().info("已发布 /remote/control 和 /stand/cmd。")
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
