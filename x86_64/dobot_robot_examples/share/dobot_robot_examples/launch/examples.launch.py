from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(package="dobot_robot_examples", executable="state_listener", output="screen"),
    ])
