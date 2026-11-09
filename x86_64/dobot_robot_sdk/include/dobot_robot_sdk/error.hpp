#pragma once

#include <cstdint>
#include <string>

namespace dobot_robot_sdk {

// 稳定错误码。增加新码用新的数字，已有数字的含义不改。
enum class ErrorCode : std::int32_t {
  kOk = 0,
  kNotInitialized = 1,
  kInvalidArgument = 2,
  kTimeout = 3,
  kDisconnected = 4,
  kTypeMismatch = 5,
  kTransport = 6,
  kRpc = 7,
  kServiceUnavailable = 8,
};

const char* ErrorName(ErrorCode code);

inline std::string ErrorText(ErrorCode code, const std::string& detail) {
  std::string text = ErrorName(code);
  if (!detail.empty()) {
    text += ": ";
    text += detail;
  }
  return text;
}

}  // namespace dobot_robot_sdk
