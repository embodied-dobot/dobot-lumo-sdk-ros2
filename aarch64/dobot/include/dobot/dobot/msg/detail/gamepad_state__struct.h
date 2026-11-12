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
  * Gamepad state. Topic rt/gamepad/state.
  * Protocol header.
 */
typedef struct dobot__msg__GamepadState
{
  uint16_t head;
  /// Key bits. bit0 R1, bit1 L1, bit2 start, bit3 select, bit4 R2, bit5 L2, bit6 F1, bit7 F2,
  /// bit8 A, bit9 B, bit10 X, bit11 Y, bit12 up, bit13 right, bit14 down, bit15 left.
  uint16_t btn_state;
  /// Left stick x, typically -1.0 to 1.0.
  float lx;
  /// Left stick y, typically -1.0 to 1.0.
  float ly;
  /// Right stick x, typically -1.0 to 1.0.
  float rx;
  /// Right stick y, typically -1.0 to 1.0.
  float ry;
  /// Sampling timestamp, in us.
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
