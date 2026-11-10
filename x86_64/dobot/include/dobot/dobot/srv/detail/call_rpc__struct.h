// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:srv/CallRpc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/srv/call_rpc.h"


#ifndef DOBOT__SRV__DETAIL__CALL_RPC__STRUCT_H_
#define DOBOT__SRV__DETAIL__CALL_RPC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'method'
// Member 'params_json'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CallRpc in the package dobot.
typedef struct dobot__srv__CallRpc_Request
{
  rosidl_runtime_c__String method;
  /// JSON 对象文本，例如 "{}" 或 "{"fsm_id":300}"。
  rosidl_runtime_c__String params_json;
  int32_t timeout_ms;
} dobot__srv__CallRpc_Request;

// Struct for a sequence of dobot__srv__CallRpc_Request.
typedef struct dobot__srv__CallRpc_Request__Sequence
{
  dobot__srv__CallRpc_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__srv__CallRpc_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'response_json'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CallRpc in the package dobot.
typedef struct dobot__srv__CallRpc_Response
{
  int32_t code;
  rosidl_runtime_c__String message;
  /// 机器人返回的原始 JSON 文本。
  rosidl_runtime_c__String response_json;
} dobot__srv__CallRpc_Response;

// Struct for a sequence of dobot__srv__CallRpc_Response.
typedef struct dobot__srv__CallRpc_Response__Sequence
{
  dobot__srv__CallRpc_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__srv__CallRpc_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dobot__srv__CallRpc_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dobot__srv__CallRpc_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CallRpc in the package dobot.
typedef struct dobot__srv__CallRpc_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dobot__srv__CallRpc_Request__Sequence request;
  dobot__srv__CallRpc_Response__Sequence response;
} dobot__srv__CallRpc_Event;

// Struct for a sequence of dobot__srv__CallRpc_Event.
typedef struct dobot__srv__CallRpc_Event__Sequence
{
  dobot__srv__CallRpc_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__srv__CallRpc_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__SRV__DETAIL__CALL_RPC__STRUCT_H_
