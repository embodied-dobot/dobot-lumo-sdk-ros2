#!/usr/bin/env python3
"""订阅下肢状态和骨盆 IMU，打印关键字段。"""

import rclpy
from dobot_robot_sdk import ClientConfig, RobotClient
from rclpy.node import Node


def main():
    rclpy.init()
    node = Node("dobot_state_listener_py")
    client = RobotClient(node)
    config = ClientConfig()
    config.model = node.declare_parameter("model", "SR_3588").value
    client.init(config)

    def on_state(msg):
        node.get_logger().info(f"下肢 ts={msg.timestamp_us} q0={msg.motor_state[0].q:.4f}")

    def on_imu(msg):
        node.get_logger().info(f"骨盆 IMU id={msg.imu_id} yaw={msg.rpy[2]:.4f}")

    client.subscribe_lower_state(on_state)
    client.subscribe_pelvis_imu(on_imu)
    node.get_logger().info("在等 /lower/state 和 /pelvis/imu/data。ROS_DOMAIN_ID 要和机器人相同。")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
