#pragma once

#include <string>

namespace dobot_robot_sdk {

// 机器人运控 JSON-RPC。每次调用单独建一条 TCP，发一行 JSON，读到一个完整对象。
// 端口默认 51234。本类不抛异常，失败写在 message 里。
struct RpcReply {
  bool transport_ok = false;
  bool has_number = false;
  double number = 0.0;
  std::string raw;
  std::string message;
};

class JsonRpcClient {
 public:
  JsonRpcClient(std::string ip, int port);

  // params_json 是 JSON 对象文本，例如 "{}" 或 "{\"fsm_id\":300}"。
  // timeout_ms 同时限制连接、发送和接收。
  RpcReply Call(const std::string& method, const std::string& params_json, int timeout_ms = 3000) const;

 private:
  std::string ip_;
  int port_;
};

}  // namespace dobot_robot_sdk
