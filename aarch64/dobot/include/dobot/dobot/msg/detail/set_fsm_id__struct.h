// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/SetFsmId.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/set_fsm_id.h"


#ifndef DOBOT__MSG__DETAIL__SET_FSM_ID__STRUCT_H_
#define DOBOT__MSG__DETAIL__SET_FSM_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'current_action'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SetFsmId in the package dobot.
/**
  * 运控状态机话题。话题 rt/set/fsm/id。技能开始和结束时底层会发布。
  * 状态机编号。0 也是合法编号。范围 0–65535。
 */
typedef struct dobot__msg__SetFsmId
{
  uint16_t id;
  /// 当前正在执行的动作名。空字符串表示没有动作。
  rosidl_runtime_c__String current_action;
} dobot__msg__SetFsmId;

// Struct for a sequence of dobot__msg__SetFsmId.
typedef struct dobot__msg__SetFsmId__Sequence
{
  dobot__msg__SetFsmId * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__SetFsmId__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__SET_FSM_ID__STRUCT_H_
