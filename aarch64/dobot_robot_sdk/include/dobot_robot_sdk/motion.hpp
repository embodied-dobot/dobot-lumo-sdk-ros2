#pragma once

#include <cstdint>
#include <string>
#include <vector>

#include "dobot/msg/fsm_info.hpp"
#include "dobot_robot_sdk/json_rpc.hpp"

namespace dobot_robot_sdk {

// Motion-control FSM ids, mode names and preset action names. Matches dobot::motion in the C++ SDK.

// Maps a known FSM id to a short name; an unknown id returns "unknown(<id>)". 350-400 is "dance".
std::string FsmIdToString(std::int32_t fsm_id);

// mode: zero_torque damping custom_debug ready standing walking. Returns -1 if unrecognized.
int ModeToFsmId(const std::string& mode);

// action: auto_enter_box auto_exit_box lie_down go_prone stand_up_supine stand_up_prone. Returns -1 if unrecognized.
int PresetActionToFsmId(const std::string& action);

// Two ways to interpret the integer result of an RPC.
enum class ResultKind {
  // Query. result is the value; 0 is valid, only -1 is a failure.
  kQuery,
  // Call that changes robot state. 0 means rejected, -1 means failure, anything else means accepted.
  kCommand,
};

// Converts a JSON-RPC reply into an error code. Returns 0 on success and writes result if number is non-null.
// On failure returns the integer value of ErrorCode::kRpc, with the reason in message. command_failure is the description used when the mode is kCommand and result is 0.
std::int32_t InterpretNumber(const RpcReply& reply, ResultKind kind, const char* command_failure,
                             std::int32_t* number, std::string* message);

// JSON string literal: quoted, with quotes, backslashes and control characters escaped. Use it when building JSON-RPC params; never concatenate raw user strings.
std::string JsonQuote(const std::string& text);

// Whether text is valid JSON object text, e.g. "{}".
bool IsJsonObject(const std::string& text);

// Method names may contain only letters, digits, underscores and dots, and must not start with a digit. The method name is not escaped in the JSON-RPC request, so validate it first.
bool IsValidMethodName(const std::string& method);

// Parses the raw GetFsmList response. Returns 0 on success. Returns kRpc with message set if result is not an array or a field is missing or has the wrong type.
std::int32_t ParseFsmList(const RpcReply& reply, std::vector<dobot::msg::FsmInfo>* fsm_list, std::string* message);

}  // namespace dobot_robot_sdk
