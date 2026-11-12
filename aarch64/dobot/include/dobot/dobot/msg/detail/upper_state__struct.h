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
  * Upper body state. Topic rt/upper/state.
  * Product model, fixed 16 bytes, zero-padded. Corresponds to IDL char.
 */
typedef struct dobot__msg__UpperState
{
  uint8_t robot_type[16];
  /// true means the upper body is currently under external control.
  bool is_upper_control;
  /// Upper body motor states, length 18.
  dobot__msg__MotorState motor_state[18];
  /// Sampling timestamp, in us.
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
