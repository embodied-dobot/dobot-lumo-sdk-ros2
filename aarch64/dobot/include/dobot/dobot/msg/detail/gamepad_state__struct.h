// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/GamepadState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/gamepad_state.h"


#ifndef DOBOT__MSG__DETAIL__GAMEPAD_STATE__STRUCT_H_
#define DOBOT__MSG__DETAIL__GAMEPAD_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/GamepadState in the package dobot.
/**
  * 手柄状态。话题 rt/gamepad/state。
  * 协议头。
 */
typedef struct dobot__msg__GamepadState
{
  uint16_t head;
  /// 按键位。bit0 R1，bit1 L1，bit2 start，bit3 select，bit4 R2，bit5 L2，bit6 F1，bit7 F2，
  /// bit8 A，bit9 B，bit10 X，bit11 Y，bit12 up，bit13 right，bit14 down，bit15 left。
  uint16_t btn_state;
  /// 左摇杆 x，常见范围 -1.0–1.0。
  float lx;
  /// 左摇杆 y，常见范围 -1.0–1.0。
  float ly;
  /// 右摇杆 x，常见范围 -1.0–1.0。
  float rx;
  /// 右摇杆 y，常见范围 -1.0–1.0。
  float ry;
  /// 采样时间戳，单位 us。
  uint64_t timestamp_us;
} dobot__msg__GamepadState;

// Struct for a sequence of dobot__msg__GamepadState.
typedef struct dobot__msg__GamepadState__Sequence
{
  dobot__msg__GamepadState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__GamepadState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__GAMEPAD_STATE__STRUCT_H_
