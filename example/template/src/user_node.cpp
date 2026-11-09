#include "dobot_robot_sdk/robot_client.hpp"

#include <rclcpp/rclcpp.hpp>

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<rclcpp::Node>("dobot_user_node");
  dobot_robot_sdk::RobotClient client(node);
  std::string error;
  dobot_robot_sdk::ClientConfig config;
  config.model = node->declare_parameter<std::string>("model", "SR_3588");
  if (!client.init(config, &error)) {
    RCLCPP_ERROR(node->get_logger(), "%s", error.c_str());
    return 1;
  }
  client.subscribe_lower_state([&](const dobot::msg::LowerState::SharedPtr msg) {
    // 在这里写业务。msg->motor_state[i].q 单位是 rad。
    RCLCPP_INFO_THROTTLE(node->get_logger(), *node->get_clock(), 1000, "收到下肢状态 ts=%lu", static_cast<unsigned long>(msg->timestamp_us));
  });
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
