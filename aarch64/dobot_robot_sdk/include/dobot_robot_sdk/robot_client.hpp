#pragma once

#include <memory>
#include <string>
#include <vector>

#include "dobot/msg/clear_errors.hpp"
#include "dobot/msg/enable_motors.hpp"
#include "dobot/msg/gamepad_state.hpp"
#include "dobot/msg/go_home.hpp"
#include "dobot/msg/imu_state.hpp"
#include "dobot/msg/lower_cmd.hpp"
#include "dobot/msg/lower_state.hpp"
#include "dobot/msg/remote_control.hpp"
#include "dobot/msg/set_calibration_flag.hpp"
#include "dobot/msg/set_fsm_id.hpp"
#include "dobot/msg/standing_control.hpp"
#include "dobot/msg/upper_cmd.hpp"
#include "dobot/msg/upper_state.hpp"
#include "dobot/srv/get_fsm_id.hpp"
#include "dobot/srv/set_robot_mode.hpp"
#include "dobot/srv/set_velocity.hpp"
#include "dobot_robot_sdk/error.hpp"
#include "rclcpp/rclcpp.hpp"

namespace dobot_robot_sdk {

// 连一台机器人。不占有进程里唯一的节点，调用方继续 spin 自己的节点。
// 同步服务调用不要放在这个节点的回调里，否则响应没有线程处理。回调里用 async 版本。
struct ClientConfig {
  // SR_3588 或 SR_thor。决定默认 IP。
  std::string model = "SR_3588";
  // 空则按型号填 192.168.5.2 或 172.16.20.2。只给 JSON-RPC 用。
  std::string robot_ip;
  int rpc_port = 51234;
  int rpc_timeout_ms = 1000;
  // true 时 init 会打一次 GetFsmId。机器人不在线且 require_rpc 为 false 时，init 仍然成功。
  bool check_rpc = false;
  bool require_rpc = false;
  // 加在话题名前。空表示 /lower/state 这种名字。
  std::string ros_topic_prefix;
  std::string service_prefix = "/dobot";
  bool auto_reconnect = true;
};

class RobotClient {
 public:
  explicit RobotClient(rclcpp::Node::SharedPtr node);

  // 成功返回 true。失败时 error 里是原因，不抛异常。
  bool init(const ClientConfig& config, std::string* error);
  bool ready() const { return ready_; }
  const ClientConfig& config() const { return config_; }

  template <typename Callback>
  rclcpp::Subscription<dobot::msg::LowerState>::SharedPtr subscribe_lower_state(Callback&& cb) {
    return subscribe<dobot::msg::LowerState>("lower/state", "lower_state", std::forward<Callback>(cb));
  }
  template <typename Callback>
  rclcpp::Subscription<dobot::msg::UpperState>::SharedPtr subscribe_upper_state(Callback&& cb) {
    return subscribe<dobot::msg::UpperState>("upper/state", "upper_state", std::forward<Callback>(cb));
  }
  template <typename Callback>
  rclcpp::Subscription<dobot::msg::IMUState>::SharedPtr subscribe_pelvis_imu(Callback&& cb) {
    return subscribe<dobot::msg::IMUState>("pelvis/imu/data", "pelvis_imu", std::forward<Callback>(cb));
  }
  template <typename Callback>
  rclcpp::Subscription<dobot::msg::IMUState>::SharedPtr subscribe_torso_imu(Callback&& cb) {
    return subscribe<dobot::msg::IMUState>("torso/imu/data", "torso_imu", std::forward<Callback>(cb));
  }
  template <typename Callback>
  rclcpp::Subscription<dobot::msg::GamepadState>::SharedPtr subscribe_gamepad(Callback&& cb) {
    return subscribe<dobot::msg::GamepadState>("gamepad/state", "gamepad_state", std::forward<Callback>(cb));
  }
  template <typename Callback>
  rclcpp::Subscription<dobot::msg::SetFsmId>::SharedPtr subscribe_fsm(Callback&& cb) {
    return subscribe<dobot::msg::SetFsmId>("set/fsm/id", "set_fsm_id", std::forward<Callback>(cb));
  }

  // 发布失败返回错误码。error 可空。kp、kd 为负，或浮点不是有限数时返回 kInvalidArgument，不会发出去。
  ErrorCode publish_lower_cmd(const dobot::msg::LowerCmd& cmd, std::string* error);
  ErrorCode publish_upper_cmd(const dobot::msg::UpperCmd& cmd, std::string* error);
  ErrorCode publish_standing(const dobot::msg::StandingControl& cmd, std::string* error);
  ErrorCode publish_remote(const dobot::msg::RemoteControl& cmd, std::string* error);
  ErrorCode publish_set_fsm_id(const dobot::msg::SetFsmId& cmd, std::string* error);
  ErrorCode publish_enable_motors(const dobot::msg::EnableMotors& cmd, std::string* error);
  ErrorCode publish_clear_errors(const dobot::msg::ClearErrors& cmd, std::string* error);
  ErrorCode publish_go_home(const dobot::msg::GoHome& cmd, std::string* error);
  ErrorCode publish_calibration_flag(const dobot::msg::SetCalibrationFlag& cmd, std::string* error);

  // 同步调用 /dobot/get_fsm_id。服务不在时返回 kServiceUnavailable。
  ErrorCode get_fsm_id(int timeout_ms, std::int32_t* fsm_id, std::string* error);
  // mode: zero_torque damping custom_debug ready standing walking。
  ErrorCode set_robot_mode(const std::string& mode, int timeout_ms, std::int32_t* fsm_id, std::string* error);
  // vx 向前为正，m/s；vy 向左为正，m/s；vyaw 逆时针为正，rad/s。duration 单位秒。
  ErrorCode set_velocity(float vx, float vy, float vyaw, float duration, int timeout_ms, std::string* error);

  // 异步版本。返回的 future 要等节点被 spin 才会完成。error 只表示客户端还没建好。
  rclcpp::Client<dobot::srv::GetFsmId>::SharedFuture get_fsm_id_async(int timeout_ms, std::string* error);
  rclcpp::Client<dobot::srv::SetRobotMode>::SharedFuture set_robot_mode_async(
      const std::string& mode, int timeout_ms, std::string* error);
  rclcpp::Client<dobot::srv::SetVelocity>::SharedFuture set_velocity_async(
      float vx, float vy, float vyaw, float duration, int timeout_ms, std::string* error);

 private:
  template <typename Msg, typename Callback>
  typename rclcpp::Subscription<Msg>::SharedPtr subscribe(
      const std::string& suffix, const std::string& qos_stem, Callback&& cb) {
    auto sub = node_->create_subscription<Msg>(topic(suffix), qos_for(qos_stem, true), std::forward<Callback>(cb));
    subscriptions_.push_back(sub);
    return sub;
  }

  std::string topic(const std::string& suffix) const;
  std::string service(const std::string& suffix) const;
  rclcpp::QoS qos_for(const std::string& stem, bool subscriber) const;
  ErrorCode need_ready(std::string* error) const;

  rclcpp::Node::SharedPtr node_;
  ClientConfig config_;
  bool ready_ = false;
  std::vector<rclcpp::SubscriptionBase::SharedPtr> subscriptions_;
  rclcpp::TimerBase::SharedPtr timer_;
  std::vector<std::size_t> match_counts_;
  rclcpp::Publisher<dobot::msg::LowerCmd>::SharedPtr lower_cmd_pub_;
  rclcpp::Publisher<dobot::msg::UpperCmd>::SharedPtr upper_cmd_pub_;
  rclcpp::Publisher<dobot::msg::StandingControl>::SharedPtr standing_pub_;
  rclcpp::Publisher<dobot::msg::RemoteControl>::SharedPtr remote_pub_;
  rclcpp::Publisher<dobot::msg::SetFsmId>::SharedPtr fsm_pub_;
  rclcpp::Publisher<dobot::msg::EnableMotors>::SharedPtr enable_pub_;
  rclcpp::Publisher<dobot::msg::ClearErrors>::SharedPtr clear_pub_;
  rclcpp::Publisher<dobot::msg::GoHome>::SharedPtr home_pub_;
  rclcpp::Publisher<dobot::msg::SetCalibrationFlag>::SharedPtr calib_pub_;
  rclcpp::Client<dobot::srv::GetFsmId>::SharedPtr get_fsm_client_;
  rclcpp::Client<dobot::srv::SetRobotMode>::SharedPtr set_mode_client_;
  rclcpp::Client<dobot::srv::SetVelocity>::SharedPtr set_vel_client_;
};

}  // namespace dobot_robot_sdk
