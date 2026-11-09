// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:srv/SetVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/srv/set_velocity.h"


#ifndef DOBOT__SRV__DETAIL__SET_VELOCITY__STRUCT_H_
#define DOBOT__SRV__DETAIL__SET_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetVelocity in the package dobot.
typedef struct dobot__srv__SetVelocity_Request
{
  float vx;
  /// 向左为正，单位 m/s。
  float vy;
  /// 逆时针为正，单位 rad/s。
  float vyaw;
  /// 保持时间，单位 s。小于 0 会被 SDK 拒绝。
  float duration;
  int32_t timeout_ms;
} dobot__srv__SetVelocity_Request;

// Struct for a sequence of dobot__srv__SetVelocity_Request.
typedef struct dobot__srv__SetVelocity_Request__Sequence
{
  dobot__srv__SetVelocity_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__srv__SetVelocity_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetVelocity in the package dobot.
typedef struct dobot__srv__SetVelocity_Response
{
  int32_t code;
  rosidl_runtime_c__String message;
} dobot__srv__SetVelocity_Response;

// Struct for a sequence of dobot__srv__SetVelocity_Response.
typedef struct dobot__srv__SetVelocity_Response__Sequence
{
  dobot__srv__SetVelocity_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__srv__SetVelocity_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dobot__srv__SetVelocity_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dobot__srv__SetVelocity_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetVelocity in the package dobot.
typedef struct dobot__srv__SetVelocity_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dobot__srv__SetVelocity_Request__Sequence request;
  dobot__srv__SetVelocity_Response__Sequence response;
} dobot__srv__SetVelocity_Event;

// Struct for a sequence of dobot__srv__SetVelocity_Event.
typedef struct dobot__srv__SetVelocity_Event__Sequence
{
  dobot__srv__SetVelocity_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__srv__SetVelocity_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__SRV__DETAIL__SET_VELOCITY__STRUCT_H_
