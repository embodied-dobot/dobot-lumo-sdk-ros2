#include "dobot_robot_sdk/robot_client.hpp"

#include <rclcpp/rclcpp.hpp>

#include <chrono>
#include <thread>

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<rclcpp::Node>("dobot_command_publisher");
  dobot_robot_sdk::RobotClient client(node);
  std::string error;
  if (!client.init({}, &error)) {
    RCLCPP_ERROR(node->get_logger(), "%s", error.c_str());
    return 1;
  }
  dobot::msg::RemoteControl remote;
  remote.btn_move.x = static_cast<float>(node->declare_parameter<double>("move_x", 0.0));
  remote.btn_move.y = static_cast<float>(node->declare_parameter<double>("move_y", 0.0));
  remote.btn_turn.x = static_cast<float>(node->declare_parameter<double>("turn_x", 0.0));
  remote.btn_turn.y = static_cast<float>(node->declare_parameter<double>("turn_y", 0.0));
  const auto code = client.publish_remote(remote, &error);
  if (code != dobot_robot_sdk::ErrorCode::kOk) {
    RCLCPP_ERROR(node->get_logger(), "遥控指令被拒绝，%s", error.c_str());
    return 1;
  }
  dobot::msg::StandingControl stand;
  stand.head_yaw = static_cast<float>(node->declare_parameter<double>("head_yaw", 0.0));
  stand.waist_yaw = static_cast<float>(node->declare_parameter<double>("waist_yaw", 0.0));
  stand.body_height = static_cast<float>(node->declare_parameter<double>("body_height", 0.0));
  if (client.publish_standing(stand, &error) != dobot_robot_sdk::ErrorCode::kOk) {
    RCLCPP_ERROR(node->get_logger(), "站立指令被拒绝，%s", error.c_str());
    return 1;
  }
  RCLCPP_INFO(node->get_logger(), "已发布 /remote/control 和 /stand/cmd。下肢电机命令默认不发。");
  std::this_thread::sleep_for(std::chrono::milliseconds(200));
  rclcpp::shutdown();
  return 0;
}
