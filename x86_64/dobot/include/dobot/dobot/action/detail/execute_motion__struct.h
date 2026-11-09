// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:action/ExecuteMotion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/action/execute_motion.h"


#ifndef DOBOT__ACTION__DETAIL__EXECUTE_MOTION__STRUCT_H_
#define DOBOT__ACTION__DETAIL__EXECUTE_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteMotion in the package dobot.
typedef struct dobot__action__ExecuteMotion_Goal
{
  rosidl_runtime_c__String command;
  /// set_mode 时使用，取值同 SetRobotMode.mode。
  rosidl_runtime_c__String mode;
  float vx;
  float vy;
  float vyaw;
  float duration;
  /// play_dance 时使用，合法范围 350–400。
  int32_t fsm_id;
  int32_t timeout_ms;
} dobot__action__ExecuteMotion_Goal;

// Struct for a sequence of dobot__action__ExecuteMotion_Goal.
typedef struct dobot__action__ExecuteMotion_Goal__Sequence
{
  dobot__action__ExecuteMotion_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__action__ExecuteMotion_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteMotion in the package dobot.
typedef struct dobot__action__ExecuteMotion_Result
{
  int32_t code;
  rosidl_runtime_c__String message;
  int32_t fsm_id;
} dobot__action__ExecuteMotion_Result;

// Struct for a sequence of dobot__action__ExecuteMotion_Result.
typedef struct dobot__action__ExecuteMotion_Result__Sequence
{
  dobot__action__ExecuteMotion_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__action__ExecuteMotion_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stage'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteMotion in the package dobot.
typedef struct dobot__action__ExecuteMotion_Feedback
{
  rosidl_runtime_c__String stage;
  int32_t fsm_id;
} dobot__action__ExecuteMotion_Feedback;

// Struct for a sequence of dobot__action__ExecuteMotion_Feedback.
typedef struct dobot__action__ExecuteMotion_Feedback__Sequence
{
  dobot__action__ExecuteMotion_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__action__ExecuteMotion_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "dobot/action/detail/execute_motion__struct.h"

/// Struct defined in action/ExecuteMotion in the package dobot.
typedef struct dobot__action__ExecuteMotion_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  dobot__action__ExecuteMotion_Goal goal;
} dobot__action__ExecuteMotion_SendGoal_Request;

// Struct for a sequence of dobot__action__ExecuteMotion_SendGoal_Request.
typedef struct dobot__action__ExecuteMotion_SendGoal_Request__Sequence
{
  dobot__action__ExecuteMotion_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__action__ExecuteMotion_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecuteMotion in the package dobot.
typedef struct dobot__action__ExecuteMotion_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} dobot__action__ExecuteMotion_SendGoal_Response;

// Struct for a sequence of dobot__action__ExecuteMotion_SendGoal_Response.
typedef struct dobot__action__ExecuteMotion_SendGoal_Response__Sequence
{
  dobot__action__ExecuteMotion_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__action__ExecuteMotion_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dobot__action__ExecuteMotion_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dobot__action__ExecuteMotion_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ExecuteMotion in the package dobot.
typedef struct dobot__action__ExecuteMotion_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dobot__action__ExecuteMotion_SendGoal_Request__Sequence request;
  dobot__action__ExecuteMotion_SendGoal_Response__Sequence response;
} dobot__action__ExecuteMotion_SendGoal_Event;

// Struct for a sequence of dobot__action__ExecuteMotion_SendGoal_Event.
typedef struct dobot__action__ExecuteMotion_SendGoal_Event__Sequence
{
  dobot__action__ExecuteMotion_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__action__ExecuteMotion_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecuteMotion in the package dobot.
typedef struct dobot__action__ExecuteMotion_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} dobot__action__ExecuteMotion_GetResult_Request;

// Struct for a sequence of dobot__action__ExecuteMotion_GetResult_Request.
typedef struct dobot__action__ExecuteMotion_GetResult_Request__Sequence
{
  dobot__action__ExecuteMotion_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__action__ExecuteMotion_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "dobot/action/detail/execute_motion__struct.h"

/// Struct defined in action/ExecuteMotion in the package dobot.
typedef struct dobot__action__ExecuteMotion_GetResult_Response
{
  int8_t status;
  dobot__action__ExecuteMotion_Result result;
} dobot__action__ExecuteMotion_GetResult_Response;

// Struct for a sequence of dobot__action__ExecuteMotion_GetResult_Response.
typedef struct dobot__action__ExecuteMotion_GetResult_Response__Sequence
{
  dobot__action__ExecuteMotion_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__action__ExecuteMotion_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dobot__action__ExecuteMotion_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dobot__action__ExecuteMotion_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ExecuteMotion in the package dobot.
typedef struct dobot__action__ExecuteMotion_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dobot__action__ExecuteMotion_GetResult_Request__Sequence request;
  dobot__action__ExecuteMotion_GetResult_Response__Sequence response;
} dobot__action__ExecuteMotion_GetResult_Event;

// Struct for a sequence of dobot__action__ExecuteMotion_GetResult_Event.
typedef struct dobot__action__ExecuteMotion_GetResult_Event__Sequence
{
  dobot__action__ExecuteMotion_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__action__ExecuteMotion_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "dobot/action/detail/execute_motion__struct.h"

/// Struct defined in action/ExecuteMotion in the package dobot.
typedef struct dobot__action__ExecuteMotion_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  dobot__action__ExecuteMotion_Feedback feedback;
} dobot__action__ExecuteMotion_FeedbackMessage;

// Struct for a sequence of dobot__action__ExecuteMotion_FeedbackMessage.
typedef struct dobot__action__ExecuteMotion_FeedbackMessage__Sequence
{
  dobot__action__ExecuteMotion_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__action__ExecuteMotion_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__ACTION__DETAIL__EXECUTE_MOTION__STRUCT_H_
