// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/FsmInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/fsm_info.h"


#ifndef DOBOT__MSG__DETAIL__FSM_INFO__STRUCT_H_
#define DOBOT__MSG__DETAIL__FSM_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'dance_name'
// Member 'model_file'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FsmInfo in the package dobot.
/**
  * One motion control FSM. Corresponds to C++ dobot::motion::FsmInfo.
 */
typedef struct dobot__msg__FsmInfo
{
  int32_t fsm_id;
  bool is_dance;
  rosidl_runtime_c__String name;
  /// The following four fields are populated only when is_dance is true; otherwise they are an empty string or 0.
  rosidl_runtime_c__String dance_name;
  rosidl_runtime_c__String model_file;
  int32_t motion_loop_length;
  int32_t motion_hold_back_steps;
  int32_t motion_start_step;
} dobot__msg__FsmInfo;

// Struct for a sequence of dobot__msg__FsmInfo.
typedef struct dobot__msg__FsmInfo__Sequence
{
  dobot__msg__FsmInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__FsmInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__FSM_INFO__STRUCT_H_
