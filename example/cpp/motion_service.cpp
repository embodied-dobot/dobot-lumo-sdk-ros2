#include "dobot_robot_sdk/error.hpp"
#include "dobot_robot_sdk/json_rpc.hpp"
#include "dobot_robot_sdk/motion.hpp"

#include <dobot/action/execute_motion.hpp>
#include <dobot/srv/call_rpc.hpp>
#include <dobot/srv/execute_skill.hpp>
#include <dobot/srv/get_fsm_id.hpp>
#include <dobot/srv/get_fsm_list.hpp>
#include <dobot/srv/play_preset_action.hpp>
#include <dobot/srv/set_robot_mode.hpp>
#include <dobot/srv/set_velocity.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>

#include <cmath>
#include <sstream>
#include <thread>
#include <utility>
#include <vector>

namespace {

using dobot_robot_sdk::ErrorCode;
using dobot_robot_sdk::InterpretNumber;
using dobot_robot_sdk::ResultKind;

constexpr int kInvalidArgument = static_cast<int>(ErrorCode::kInvalidArgument);

// Motion services. Each service turns a request into one JSON-RPC call on the robot, matching dobot::motion::Motion and MotionRpc in the C++ SDK.
// result is interpreted as in the C++ SDK: for queries only -1 is a failure; for state-changing calls 0 means rejected, -1 means failed, and anything else means accepted.
class MotionService : public rclcpp::Node {
 public:
  MotionService() : Node("dobot_motion_service") {
    ip_ = declare_parameter<std::string>("robot_ip", "192.168.5.2");
    port_ = declare_parameter<int>("rpc_port", 51234);

    using Get = dobot::srv::GetFsmId;
    using Mode = dobot::srv::SetRobotMode;
    using Vel = dobot::srv::SetVelocity;
    using List = dobot::srv::GetFsmList;
    using Preset = dobot::srv::PlayPresetAction;
    using Skill = dobot::srv::ExecuteSkill;
    using Raw = dobot::srv::CallRpc;

    Serve<Get>("/dobot/get_fsm_id", [this](const Get::Request::SharedPtr request, Get::Response::SharedPtr response) {
      const auto reply = Rpc().Call("GetFsmId", "{}", request->timeout_ms);
      response->code = InterpretNumber(reply, ResultKind::kQuery, "", &response->fsm_id, &response->message);
    });

    Serve<Mode>("/dobot/set_robot_mode", [this](const Mode::Request::SharedPtr request, Mode::Response::SharedPtr response) {
      const int fsm = dobot_robot_sdk::ModeToFsmId(request->mode);
      if (fsm < 0) {
        response->code = kInvalidArgument;
        response->fsm_id = -1;
        response->message = "mode must be one of zero_torque, damping, custom_debug, ready, standing, walking.";
        return;
      }
      response->code = SetFsm(fsm, request->timeout_ms, &response->message);
      response->fsm_id = response->code == 0 ? fsm : -1;
    });

    Serve<Vel>("/dobot/set_velocity", [this](const Vel::Request::SharedPtr request, Vel::Response::SharedPtr response) {
      if (!std::isfinite(request->vx) || !std::isfinite(request->vy) || !std::isfinite(request->vyaw) || request->duration < 0.0f) {
        response->code = kInvalidArgument;
        response->message = "Invalid velocity or duration.";
        return;
      }
      response->code = SetVel(request->vx, request->vy, request->vyaw, request->duration, request->timeout_ms, nullptr,
                              &response->message);
    });

    Serve<List>("/dobot/get_fsm_list", [this](const List::Request::SharedPtr request, List::Response::SharedPtr response) {
      const auto reply = Rpc().Call("GetFsmList", "{}", request->timeout_ms);
      response->code = dobot_robot_sdk::ParseFsmList(reply, &response->fsm_list, &response->message);
    });

    Serve<Preset>("/dobot/play_preset_action", [this](const Preset::Request::SharedPtr request, Preset::Response::SharedPtr response) {
      const int fsm = dobot_robot_sdk::PresetActionToFsmId(request->action);
      if (fsm < 0) {
        response->code = kInvalidArgument;
        response->fsm_id = -1;
        response->message =
            "action must be one of auto_enter_box, auto_exit_box, lie_down, go_prone, stand_up_supine, stand_up_prone.";
        return;
      }
      response->code = SetFsm(fsm, request->timeout_ms, &response->message);
      response->fsm_id = response->code == 0 ? fsm : -1;
    });

    Serve<Skill>("/dobot/execute_skill", [this](const Skill::Request::SharedPtr request, Skill::Response::SharedPtr response) {
      if (request->file_path.empty()) {
        response->code = kInvalidArgument;
        response->message = "file_path must not be empty. It is a file name in the skill directory on the robot.";
        return;
      }
      const auto reply = Rpc().Call(
          "ExecuteAction", "{\"file_path\":" + dobot_robot_sdk::JsonQuote(request->file_path) + "}", request->timeout_ms);
      std::int32_t number = 0;
      response->code = InterpretNumber(reply, ResultKind::kCommand, "Failed to run the action file.", &number, &response->message);
    });

    Serve<Raw>("/dobot/call_rpc", [this](const Raw::Request::SharedPtr request, Raw::Response::SharedPtr response) {
      if (!dobot_robot_sdk::IsValidMethodName(request->method)) {
        response->code = kInvalidArgument;
        response->message = "method may only contain letters, digits, underscores and dots, and must not start with a digit.";
        return;
      }
      const std::string params = request->params_json.empty() ? "{}" : request->params_json;
      if (!dobot_robot_sdk::IsJsonObject(params)) {
        response->code = kInvalidArgument;
        response->message = "params_json is not a valid JSON object.";
        return;
      }
      const auto reply = Rpc().Call(request->method, params, request->timeout_ms);
      response->response_json = reply.raw;
      if (!reply.transport_ok) {
        response->code = static_cast<int>(ErrorCode::kRpc);
        response->message = reply.message.empty() ? "No response to the RPC." : reply.message;
        return;
      }
      response->code = 0;
      response->message = "ok";
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
  // create_service returns the sole owner of the service; dropping it destroys the service immediately. Keep it stored until the node shuts down.
  template <typename Srv, typename Callback>
  void Serve(const std::string& name, Callback&& callback) {
    services_.push_back(create_service<Srv>(name, std::forward<Callback>(callback)));
  }

  dobot_robot_sdk::JsonRpcClient Rpc() const { return dobot_robot_sdk::JsonRpcClient(ip_, port_); }

  // Switch the state machine (FSM). Success only means the switch was accepted, not that the motion has finished.
  int SetFsm(int fsm, int timeout_ms, std::string* message) const {
    const auto reply = Rpc().Call("SetFsmId", "{\"fsm_id\":" + std::to_string(fsm) + "}", timeout_ms);
    std::int32_t number = 0;
    return InterpretNumber(reply, ResultKind::kCommand, "FSM switch failed.", &number, message);
  }

  int SetVel(float vx, float vy, float vyaw, float duration, int timeout_ms, std::int32_t* number,
             std::string* message) const {
    std::ostringstream params;
    params << "{\"vx\":" << vx << ",\"vy\":" << vy << ",\"vyaw\":" << vyaw << ",\"duration\":" << duration << "}";
    const auto reply = Rpc().Call("SetVel", params.str(), timeout_ms);
    std::int32_t ignored = 0;
    return InterpretNumber(reply, ResultKind::kCommand, "Failed to set the velocity command.", number != nullptr ? number : &ignored,
                           message);
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
        result->code = kInvalidArgument;
        result->message = "Dance number must be between 350 and 400.";
        result->fsm_id = -1;
        handle->abort(result);
        return;
      }
    } else if (goal->command == "set_mode") {
      fsm = dobot_robot_sdk::ModeToFsmId(goal->mode);
      if (fsm < 0) {
        result->code = kInvalidArgument;
        result->message = "Invalid mode.";
        result->fsm_id = -1;
        handle->abort(result);
        return;
      }
    } else if (goal->command == "set_velocity") {
      std::int32_t number = 0;
      result->code = SetVel(goal->vx, goal->vy, goal->vyaw, goal->duration, goal->timeout_ms, &number, &result->message);
      result->fsm_id = number;
      if (result->code == 0) {
        handle->succeed(result);
      } else {
        handle->abort(result);
      }
      return;
    } else {
      result->code = kInvalidArgument;
      result->message = "command must be one of set_mode, set_velocity, play_dance.";
      result->fsm_id = -1;
      handle->abort(result);
      return;
    }
    result->code = SetFsm(fsm, goal->timeout_ms, &result->message);
    result->fsm_id = result->code == 0 ? fsm : -1;
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
  std::vector<rclcpp::ServiceBase::SharedPtr> services_;
  rclcpp_action::Server<dobot::action::ExecuteMotion>::SharedPtr action_;
};

}  // namespace

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MotionService>());
  rclcpp::shutdown();
  return 0;
}
