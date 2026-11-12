#pragma once

#include <memory>
#include <string>
#include <vector>

#include "dobot/msg/clear_errors.hpp"
#include "dobot/msg/enable_motors.hpp"
#include "dobot/msg/fsm_info.hpp"
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
#include "dobot/srv/call_rpc.hpp"
#include "dobot/srv/execute_skill.hpp"
#include "dobot/srv/get_fsm_id.hpp"
#include "dobot/srv/get_fsm_list.hpp"
#include "dobot/srv/play_preset_action.hpp"
#include "dobot/srv/set_robot_mode.hpp"
#include "dobot/srv/set_velocity.hpp"
#include "dobot_robot_sdk/error.hpp"
#include "rclcpp/rclcpp.hpp"

namespace dobot_robot_sdk {

// Connects to one robot. It does not own the process's node; the caller keeps spinning their own node.
// Do not make synchronous service calls from this node's callbacks, or no thread is left to handle the response. Use the async versions in callbacks.
struct ClientConfig {
  // SR_3588 or SR_thor. Determines the default IP.
  std::string model = "SR_3588";
  // If empty, filled by model: 192.168.5.2 or 172.16.20.2. Used by JSON-RPC only.
  std::string robot_ip;
  int rpc_port = 51234;
  int rpc_timeout_ms = 1000;
  // If true, init calls GetFsmId once. If the robot is offline and require_rpc is false, init still succeeds.
  bool check_rpc = false;
  bool require_rpc = false;
  // Prepended to topic names. Empty means plain names such as /lower/state.
  std::string ros_topic_prefix;
  std::string service_prefix = "/dobot";
  bool auto_reconnect = true;
};

class RobotClient {
 public:
  explicit RobotClient(rclcpp::Node::SharedPtr node);

  // Returns true on success. On failure the reason is in error; does not throw.
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

  // Returns an error code if publishing fails. error may be null. Returns kInvalidArgument without publishing if kp or kd is negative or a float is not finite.
  ErrorCode publish_lower_cmd(const dobot::msg::LowerCmd& cmd, std::string* error);
  ErrorCode publish_upper_cmd(const dobot::msg::UpperCmd& cmd, std::string* error);
  ErrorCode publish_standing(const dobot::msg::StandingControl& cmd, std::string* error);
  ErrorCode publish_remote(const dobot::msg::RemoteControl& cmd, std::string* error);
  ErrorCode publish_set_fsm_id(const dobot::msg::SetFsmId& cmd, std::string* error);
  ErrorCode publish_enable_motors(const dobot::msg::EnableMotors& cmd, std::string* error);
  ErrorCode publish_clear_errors(const dobot::msg::ClearErrors& cmd, std::string* error);
  ErrorCode publish_go_home(const dobot::msg::GoHome& cmd, std::string* error);
  ErrorCode publish_calibration_flag(const dobot::msg::SetCalibrationFlag& cmd, std::string* error);

  // Synchronously calls /dobot/get_fsm_id. Returns kServiceUnavailable if the service is not available.
  ErrorCode get_fsm_id(int timeout_ms, std::int32_t* fsm_id, std::string* error);
  // mode: zero_torque damping custom_debug ready standing walking.
  ErrorCode set_robot_mode(const std::string& mode, int timeout_ms, std::int32_t* fsm_id, std::string* error);
  // vx is positive forward, m/s; vy is positive left, m/s; vyaw is positive counter-clockwise, rad/s. duration is in seconds.
  ErrorCode set_velocity(float vx, float vy, float vyaw, float duration, int timeout_ms, std::string* error);

  // Queries all FSMs on the robot, including dance. Corresponds to Motion::GetFsmList in the C++ SDK.
  ErrorCode get_fsm_list(int timeout_ms, std::vector<dobot::msg::FsmInfo>* fsm_list, std::string* error);
  // action: auto_enter_box auto_exit_box lie_down go_prone stand_up_supine stand_up_prone.
  // Success only means the switch was accepted, not that the action has finished. After auto_exit_box or stand_up_* returns, do not switch to standing immediately; see PlayPresetAction.srv.
  ErrorCode play_preset_action(const std::string& action, int timeout_ms, std::int32_t* fsm_id, std::string* error);
  // Plays a skill from the robot's skill directory. file_path is a file name on the robot. Success only means the RPC was accepted.
  ErrorCode execute_skill(const std::string& file_path, int timeout_ms, std::string* error);
  // Calls a JSON-RPC method directly, for methods that have no dedicated service yet. An empty params_json is treated as "{}".
  // kOk only means the transport succeeded. See response_json for the meaning of result.
  ErrorCode call_rpc(
      const std::string& method, const std::string& params_json, int timeout_ms, std::string* response_json,
      std::string* error);

  // Async version. The returned future completes only while the node is spinning. error only indicates the client is not ready yet.
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
  rclcpp::Client<dobot::srv::GetFsmList>::SharedPtr get_fsm_list_client_;
  rclcpp::Client<dobot::srv::PlayPresetAction>::SharedPtr preset_client_;
  rclcpp::Client<dobot::srv::ExecuteSkill>::SharedPtr skill_client_;
  rclcpp::Client<dobot::srv::CallRpc>::SharedPtr call_rpc_client_;
};

}  // namespace dobot_robot_sdk
