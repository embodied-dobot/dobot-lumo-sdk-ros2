#include "dobot_robot_sdk/robot_client.hpp"

#include <rclcpp/rclcpp.hpp>

#include <cmath>

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<rclcpp::Node>("dobot_closed_loop");
  const bool enable_output = node->declare_parameter<bool>("enable_output", false);
  const double yaw_limit = node->declare_parameter<double>("yaw_limit", 0.5);
  dobot_robot_sdk::RobotClient client(node);
  std::string error;
  if (!client.init({}, &error)) {
    RCLCPP_ERROR(node->get_logger(), "%s", error.c_str());
    return 1;
  }
  client.subscribe_pelvis_imu([&, enable_output, yaw_limit](const dobot::msg::IMUState::SharedPtr msg) {
    dobot::msg::RemoteControl remote;
    if (std::abs(msg->rpy[2]) > yaw_limit) {
      remote.btn_turn.y = msg->rpy[2] > 0.0f ? -0.1f : 0.1f;
    }
    RCLCPP_INFO(node->get_logger(), "yaw=%.3f，转向指令 %.2f", msg->rpy[2], remote.btn_turn.y);
    if (!enable_output) {
      return;
    }
    std::string why;
    const auto code = client.publish_remote(remote, &why);
    if (code != dobot_robot_sdk::ErrorCode::kOk) {
      RCLCPP_ERROR(node->get_logger(), "%s", why.c_str());
    }
  });
  RCLCPP_INFO(node->get_logger(), "闭环默认只打印。确认安全后加 enable_output:=true 才会发 /remote/control。");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
