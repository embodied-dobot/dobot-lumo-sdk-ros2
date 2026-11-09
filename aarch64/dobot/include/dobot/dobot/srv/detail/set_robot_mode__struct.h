// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:srv/SetRobotMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/srv/set_robot_mode.h"


#ifndef DOBOT__SRV__DETAIL__SET_ROBOT_MODE__STRUCT_H_
#define DOBOT__SRV__DETAIL__SET_ROBOT_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetRobotMode in the package dobot.
typedef struct dobot__srv__SetRobotMode_Request
{
  rosidl_runtime_c__String mode;
  /// 本次调用的超时，单位 ms，范围 1–60000。
  int32_t timeout_ms;
} dobot__srv__SetRobotMode_Request;

// Struct for a sequence of dobot__srv__SetRobotMode_Request.
typedef struct dobot__srv__SetRobotMode_Request__Sequence
{
  dobot__srv__SetRobotMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__srv__SetRobotMode_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetRobotMode in the package dobot.
typedef struct dobot__srv__SetRobotMode_Response
{
  int32_t code;
  rosidl_runtime_c__String message;
  /// 已下发的状态机编号。失败时为 -1。
  int32_t fsm_id;
} dobot__srv__SetRobotMode_Response;

// Struct for a sequence of dobot__srv__SetRobotMode_Response.
typedef struct dobot__srv__SetRobotMode_Response__Sequence
{
  dobot__srv__SetRobotMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__srv__SetRobotMode_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dobot__srv__SetRobotMode_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dobot__srv__SetRobotMode_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetRobotMode in the package dobot.
typedef struct dobot__srv__SetRobotMode_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dobot__srv__SetRobotMode_Request__Sequence request;
  dobot__srv__SetRobotMode_Response__Sequence response;
} dobot__srv__SetRobotMode_Event;

// Struct for a sequence of dobot__srv__SetRobotMode_Event.
typedef struct dobot__srv__SetRobotMode_Event__Sequence
{
  dobot__srv__SetRobotMode_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__srv__SetRobotMode_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__SRV__DETAIL__SET_ROBOT_MODE__STRUCT_H_
