// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:srv/PlayPresetAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/srv/play_preset_action.h"


#ifndef DOBOT__SRV__DETAIL__PLAY_PRESET_ACTION__STRUCT_H_
#define DOBOT__SRV__DETAIL__PLAY_PRESET_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlayPresetAction in the package dobot.
typedef struct dobot__srv__PlayPresetAction_Request
{
  rosidl_runtime_c__String action;
  int32_t timeout_ms;
} dobot__srv__PlayPresetAction_Request;

// Struct for a sequence of dobot__srv__PlayPresetAction_Request.
typedef struct dobot__srv__PlayPresetAction_Request__Sequence
{
  dobot__srv__PlayPresetAction_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__srv__PlayPresetAction_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlayPresetAction in the package dobot.
typedef struct dobot__srv__PlayPresetAction_Response
{
  int32_t code;
  rosidl_runtime_c__String message;
  /// 已下发的状态机编号。失败时为 -1。
  int32_t fsm_id;
} dobot__srv__PlayPresetAction_Response;

// Struct for a sequence of dobot__srv__PlayPresetAction_Response.
typedef struct dobot__srv__PlayPresetAction_Response__Sequence
{
  dobot__srv__PlayPresetAction_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__srv__PlayPresetAction_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dobot__srv__PlayPresetAction_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dobot__srv__PlayPresetAction_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/PlayPresetAction in the package dobot.
typedef struct dobot__srv__PlayPresetAction_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dobot__srv__PlayPresetAction_Request__Sequence request;
  dobot__srv__PlayPresetAction_Response__Sequence response;
} dobot__srv__PlayPresetAction_Event;

// Struct for a sequence of dobot__srv__PlayPresetAction_Event.
typedef struct dobot__srv__PlayPresetAction_Event__Sequence
{
  dobot__srv__PlayPresetAction_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__srv__PlayPresetAction_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__SRV__DETAIL__PLAY_PRESET_ACTION__STRUCT_H_
