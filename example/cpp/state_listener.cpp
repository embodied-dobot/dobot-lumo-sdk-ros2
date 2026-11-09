#include "dobot_robot_sdk/robot_client.hpp"

#include <rclcpp/rclcpp.hpp>

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<rclcpp::Node>("dobot_state_listener");
  dobot_robot_sdk::RobotClient client(node);
  std::string error;
  dobot_robot_sdk::ClientConfig config;
  config.model = node->declare_parameter<std::string>("model", "SR_3588");
  if (!client.init(config, &error)) {
    RCLCPP_ERROR(node->get_logger(), "%s", error.c_str());
    return 1;
  }
  client.subscribe_lower_state([&](const dobot::msg::LowerState::SharedPtr msg) {
    RCLCPP_INFO(node->get_logger(), "下肢 ts=%lu q0=%.4f", static_cast<unsigned long>(msg->timestamp_us), msg->motor_state[0].q);
  });
  client.subscribe_pelvis_imu([&](const dobot::msg::IMUState::SharedPtr msg) {
    RCLCPP_INFO(node->get_logger(), "骨盆 IMU id=%u yaw=%.4f", msg->imu_id, msg->rpy[2]);
  });
  RCLCPP_INFO(node->get_logger(), "在等 /lower/state 和 /pelvis/imu/data。ROS_DOMAIN_ID 要和机器人相同。");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
