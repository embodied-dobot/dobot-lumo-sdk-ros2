// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/LowerState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/lower_state.h"


#ifndef DOBOT__MSG__DETAIL__LOWER_STATE__STRUCT_H_
#define DOBOT__MSG__DETAIL__LOWER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'motor_state'
#include "dobot/msg/detail/motor_state__struct.h"

/// Struct defined in msg/LowerState in the package dobot.
/**
  * 下肢状态。话题 rt/lower/state。motor_state 长度 15，与底层 IDL 一致。
 */
typedef struct dobot__msg__LowerState
{
  dobot__msg__MotorState motor_state[15];
  /// 采样时间戳，单位 us，从机器人单调时钟起算。
  uint64_t timestamp_us;
} dobot__msg__LowerState;

// Struct for a sequence of dobot__msg__LowerState.
typedef struct dobot__msg__LowerState__Sequence
{
  dobot__msg__LowerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__LowerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__LOWER_STATE__STRUCT_H_
