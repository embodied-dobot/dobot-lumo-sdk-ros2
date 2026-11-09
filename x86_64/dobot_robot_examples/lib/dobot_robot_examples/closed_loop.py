#!/usr/bin/env python3
"""读骨盆 IMU 的偏航，超限时生成一个小的转向指令。默认只打印。"""

import rclpy
from dobot.msg import RemoteControl
from dobot_robot_sdk import DobotError, RobotClient
from rclpy.node import Node


def main():
    rclpy.init()
    node = Node("dobot_closed_loop_py")
    enable_output = bool(node.declare_parameter("enable_output", False).value)
    yaw_limit = float(node.declare_parameter("yaw_limit", 0.5).value)
    client = RobotClient(node)
    client.init()

    def on_imu(msg):
        remote = RemoteControl()
        if abs(msg.rpy[2]) > yaw_limit:
            remote.btn_turn.y = -0.1 if msg.rpy[2] > 0.0 else 0.1
        node.get_logger().info(f"yaw={msg.rpy[2]:.3f} 转向={remote.btn_turn.y:.2f}")
        if not enable_output:
            return
        try:
            client.publish_remote(remote)
        except DobotError as exc:
            node.get_logger().error(str(exc))

    client.subscribe_pelvis_imu(on_imu)
    node.get_logger().info("闭环默认只打印。确认安全后加 enable_output:=true。")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
