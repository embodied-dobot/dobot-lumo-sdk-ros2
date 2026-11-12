#pragma once

#include <string>

namespace dobot_robot_sdk {

// Robot motion-control JSON-RPC. Each call opens its own TCP connection, sends one line of JSON and reads one complete object.
// Default port is 51234. This class does not throw; failures are reported in message.
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

  // params_json is JSON object text, e.g. "{}" or "{\"fsm_id\":300}".
  // timeout_ms bounds connect, send and receive.
  RpcReply Call(const std::string& method, const std::string& params_json, int timeout_ms = 3000) const;

 private:
  std::string ip_;
  int port_;
};

}  // namespace dobot_robot_sdk
