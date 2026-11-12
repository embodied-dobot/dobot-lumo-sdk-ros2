#!/usr/bin/env python3
"""Subscribe to lower-body state and pelvis IMU, and print key fields."""

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
        node.get_logger().info(f"Lower body ts={msg.timestamp_us} q0={msg.motor_state[0].q:.4f}")

    def on_imu(msg):
        node.get_logger().info(f"Pelvis IMU id={msg.imu_id} yaw={msg.rpy[2]:.4f}")

    client.subscribe_lower_state(on_state)
    client.subscribe_pelvis_imu(on_imu)
    node.get_logger().info("Waiting for /lower/state and /pelvis/imu/data. ROS_DOMAIN_ID must match the robot.")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
