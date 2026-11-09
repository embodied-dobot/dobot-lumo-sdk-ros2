// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/UpperState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/upper_state.h"


#ifndef DOBOT__MSG__DETAIL__UPPER_STATE__STRUCT_H_
#define DOBOT__MSG__DETAIL__UPPER_STATE__STRUCT_H_

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

/// Struct defined in msg/UpperState in the package dobot.
/**
  * 上肢状态。话题 rt/upper/state。
  * 产品型号，定长 16 字节，不足补 0。与 IDL char 对应。
 */
typedef struct dobot__msg__UpperState
{
  uint8_t robot_type[16];
  /// true 表示上肢当前由外部控制。
  bool is_upper_control;
  /// 上肢电机状态，长度 18。
  dobot__msg__MotorState motor_state[18];
  /// 采样时间戳，单位 us。
  uint64_t timestamp_us;
} dobot__msg__UpperState;

// Struct for a sequence of dobot__msg__UpperState.
typedef struct dobot__msg__UpperState__Sequence
{
  dobot__msg__UpperState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__UpperState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__UPPER_STATE__STRUCT_H_
