#pragma once

#include <cstdint>
#include <string>
#include <vector>

#include "dobot/msg/fsm_info.hpp"
#include "dobot_robot_sdk/json_rpc.hpp"

namespace dobot_robot_sdk {

// 运控状态机编号、模式名和预设动作名。与 C++ SDK 的 dobot::motion 一致。

// 把已知状态机编号翻成短字符串；未知编号返回 "unknown(<id>)"。350–400 是 "舞蹈"。
std::string FsmIdToString(std::int32_t fsm_id);

// mode: zero_torque damping custom_debug ready standing walking。不认识返回 -1。
int ModeToFsmId(const std::string& mode);

// action: auto_enter_box auto_exit_box lie_down go_prone stand_up_supine stand_up_prone。不认识返回 -1。
int PresetActionToFsmId(const std::string& action);

// RPC 返回的整数 result 的两种读法。
enum class ResultKind {
  // 查询。result 就是值，0 也合法，只有 -1 是失败。
  kQuery,
  // 会改变机器人状态的调用。0 是被拒绝，-1 是失败，其余算被接受。
  kCommand,
};

// 把一次 JSON-RPC 回复收成错误码。成功返回 0，并在 number 非空时写入 result。
// 失败返回 ErrorCode::kRpc 的整型值，message 说明原因。command_failure 是 kCommand 时 result 为 0 的说明。
std::int32_t InterpretNumber(const RpcReply& reply, ResultKind kind, const char* command_failure,
                             std::int32_t* number, std::string* message);

// JSON 字符串字面量：带引号，并转义引号、反斜杠和控制字符。拼 JSON-RPC 参数时用，不要直接拼用户给的字符串。
std::string JsonQuote(const std::string& text);

// text 是否是合法的 JSON 对象文本，例如 "{}"。
bool IsJsonObject(const std::string& text);

// 方法名只允许字母、数字、下划线和点，且不以数字开头。JSON-RPC 请求里方法名不转义，所以要先检查。
bool IsValidMethodName(const std::string& method);

// 解析 GetFsmList 的原始响应。成功返回 0。result 不是数组、字段缺失或类型不对时返回 kRpc，并写 message。
std::int32_t ParseFsmList(const RpcReply& reply, std::vector<dobot::msg::FsmInfo>* fsm_list, std::string* message);

}  // namespace dobot_robot_sdk
