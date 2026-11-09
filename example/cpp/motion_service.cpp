#include "dobot_robot_sdk/error.hpp"
#include "dobot_robot_sdk/json_rpc.hpp"

#include <dobot/action/execute_motion.hpp>
#include <dobot/srv/get_fsm_id.hpp>
#include <dobot/srv/set_robot_mode.hpp>
#include <dobot/srv/set_velocity.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>

#include <cmath>
#include <sstream>
#include <thread>

namespace {

int ModeToFsm(const std::string& mode) {
  if (mode == "zero_torque") return 0;
  if (mode == "damping") return 1;
  if (mode == "custom_debug") return 2;
  if (mode == "ready") return 100;
  if (mode == "standing") return 300;
  if (mode == "walking") return 304;
  return -1;
}

class MotionService : public rclcpp::Node {
 public:
  MotionService() : Node("dobot_motion_service") {
    ip_ = declare_parameter<std::string>("robot_ip", "192.168.5.2");
    port_ = declare_parameter<int>("rpc_port", 51234);
    using Get = dobot::srv::GetFsmId;
    using Mode = dobot::srv::SetRobotMode;
    using Vel = dobot::srv::SetVelocity;
    create_service<Get>("/dobot/get_fsm_id", [this](const Get::Request::SharedPtr request, Get::Response::SharedPtr response) {
      const auto reply = dobot_robot_sdk::JsonRpcClient(ip_, port_).Call("GetFsmId", "{}", request->timeout_ms);
      FillNumber(reply, 1.0, &response->code, &response->fsm_id, &response->message);
    });
    create_service<Mode>("/dobot/set_robot_mode", [this](const Mode::Request::SharedPtr request, Mode::Response::SharedPtr response) {
      const int fsm = ModeToFsm(request->mode);
      if (fsm < 0) {
        response->code = static_cast<int>(dobot_robot_sdk::ErrorCode::kInvalidArgument);
        response->fsm_id = -1;
        response->message = "mode 只能是 zero_torque、damping、custom_debug、ready、standing、walking。";
        return;
      }
      const auto reply = dobot_robot_sdk::JsonRpcClient(ip_, port_).Call(
          "SetFsmId", "{\"fsm_id\":" + std::to_string(fsm) + "}", request->timeout_ms);
      FillNumber(reply, 1.0, &response->code, &response->fsm_id, &response->message);
      if (response->code == 0) {
        response->fsm_id = fsm;
      }
    });
    create_service<Vel>("/dobot/set_velocity", [this](const Vel::Request::SharedPtr request, Vel::Response::SharedPtr response) {
      if (!std::isfinite(request->vx) || !std::isfinite(request->vy) || !std::isfinite(request->vyaw) || request->duration < 0.0f) {
        response->code = static_cast<int>(dobot_robot_sdk::ErrorCode::kInvalidArgument);
        response->message = "速度或 duration 不合法。";
        return;
      }
      std::ostringstream params;
      params << "{\"vx\":" << request->vx << ",\"vy\":" << request->vy << ",\"vyaw\":" << request->vyaw
             << ",\"duration\":" << request->duration << "}";
      const auto reply = dobot_robot_sdk::JsonRpcClient(ip_, port_).Call("SetVel", params.str(), request->timeout_ms);
      int fsm = 0;
      FillNumber(reply, 1.0, &response->code, &fsm, &response->message);
    });
    action_ = rclcpp_action::create_server<dobot::action::ExecuteMotion>(
        this,
        "/dobot/execute_motion",
        [](const rclcpp_action::GoalUUID&, std::shared_ptr<const dobot::action::ExecuteMotion::Goal>) {
          return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
        },
        [](std::shared_ptr<rclcpp_action::ServerGoalHandle<dobot::action::ExecuteMotion>>) {
          return rclcpp_action::CancelResponse::ACCEPT;
        },
        [this](std::shared_ptr<rclcpp_action::ServerGoalHandle<dobot::action::ExecuteMotion>> handle) {
          std::thread([this, handle]() { Run(handle); }).detach();
        });
  }

 private:
  static void FillNumber(const dobot_robot_sdk::RpcReply& reply, double expect, int32_t* code, int32_t* number, std::string* message) {
    if (!reply.transport_ok || !reply.has_number) {
      *code = static_cast<int>(dobot_robot_sdk::ErrorCode::kRpc);
      *number = -1;
      *message = reply.message.empty() ? "RPC 没有数字结果。" : reply.message;
      return;
    }
    if (reply.number != expect) {
      *code = static_cast<int>(dobot_robot_sdk::ErrorCode::kRpc);
      *number = static_cast<int32_t>(reply.number);
      *message = "运控拒绝了这次切换。";
      return;
    }
    *code = 0;
    *number = static_cast<int32_t>(reply.number);
    *message = "ok";
  }

  void Run(const std::shared_ptr<rclcpp_action::ServerGoalHandle<dobot::action::ExecuteMotion>>& handle) {
    const auto goal = handle->get_goal();
    auto feedback = std::make_shared<dobot::action::ExecuteMotion::Feedback>();
    feedback->stage = "running";
    handle->publish_feedback(feedback);
    auto result = std::make_shared<dobot::action::ExecuteMotion::Result>();
    int fsm = goal->fsm_id;
    if (goal->command == "play_dance") {
      if (fsm < 350 || fsm > 400) {
        result->code = static_cast<int>(dobot_robot_sdk::ErrorCode::kInvalidArgument);
        result->message = "舞蹈编号要在 350 到 400。";
        result->fsm_id = -1;
        handle->abort(result);
        return;
      }
    } else if (goal->command == "set_mode") {
      fsm = ModeToFsm(goal->mode);
      if (fsm < 0) {
        result->code = static_cast<int>(dobot_robot_sdk::ErrorCode::kInvalidArgument);
        result->message = "mode 不合法。";
        result->fsm_id = -1;
        handle->abort(result);
        return;
      }
    } else if (goal->command == "set_velocity") {
      std::ostringstream params;
      params << "{\"vx\":" << goal->vx << ",\"vy\":" << goal->vy << ",\"vyaw\":" << goal->vyaw
             << ",\"duration\":" << goal->duration << "}";
      const auto reply = dobot_robot_sdk::JsonRpcClient(ip_, port_).Call("SetVel", params.str(), goal->timeout_ms);
      int number = 0;
      FillNumber(reply, 1.0, &result->code, &number, &result->message);
      result->fsm_id = number;
      if (result->code == 0) {
        handle->succeed(result);
      } else {
        handle->abort(result);
      }
      return;
    } else {
      result->code = static_cast<int>(dobot_robot_sdk::ErrorCode::kInvalidArgument);
      result->message = "command 只能是 set_mode、set_velocity、play_dance。";
      result->fsm_id = -1;
      handle->abort(result);
      return;
    }
    const auto reply = dobot_robot_sdk::JsonRpcClient(ip_, port_).Call(
        "SetFsmId", "{\"fsm_id\":" + std::to_string(fsm) + "}", goal->timeout_ms);
    int number = 0;
    FillNumber(reply, 1.0, &result->code, &number, &result->message);
    result->fsm_id = result->code == 0 ? fsm : number;
    feedback->stage = "finished";
    feedback->fsm_id = result->fsm_id;
    handle->publish_feedback(feedback);
    if (result->code == 0) {
      handle->succeed(result);
    } else {
      handle->abort(result);
    }
  }

  std::string ip_;
  int port_ = 51234;
  rclcpp_action::Server<dobot::action::ExecuteMotion>::SharedPtr action_;
};

}  // namespace

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MotionService>());
  rclcpp::shutdown();
  return 0;
}
