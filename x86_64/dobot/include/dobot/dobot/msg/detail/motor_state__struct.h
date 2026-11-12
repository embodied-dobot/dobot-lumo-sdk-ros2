// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/MotorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/motor_state.h"


#ifndef DOBOT__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
#define DOBOT__MSG__DETAIL__MOTOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorState in the package dobot.
/**
  * Servo state of a single joint. Field order matches dobot::msg::dds_::MotorState_.
  * Motor mode, raw protocol value, range 0-255.
 */
typedef struct dobot__msg__MotorState
{
  uint8_t mode;
  /// Joint position, in rad.
  float q;
  /// Joint velocity, in rad/s.
  float dq;
  /// Joint acceleration, in rad/s^2.
  float ddq;
  /// Estimated torque, in N·m.
  float tau_est;
  /// Torque command readback, in N·m.
  float tau_cmd;
  /// Current feedback, raw protocol value.
  float current_feedback;
  /// Current command, raw protocol value.
  float current_cmd;
  /// Raw position, in rad.
  float q_raw;
  /// Raw velocity, in rad/s.
  float dq_raw;
  /// Raw acceleration, in rad/s^2.
  float ddq_raw;
  /// Raw torque, in N·m.
  float tau_raw;
  /// Raw servo driver board temperature, range 0-255.
  uint8_t mcu_temp;
  /// Raw MOS temperature, range 0-255.
  uint8_t mos_temp;
  /// Raw motor temperature, range 0-255.
  uint8_t motor_temp;
  /// Raw bus voltage, range 0-255; scaling is defined by the servo protocol.
  uint8_t bus_voltage;
} dobot__msg__MotorState;

// Struct for a sequence of dobot__msg__MotorState.
typedef struct dobot__msg__MotorState__Sequence
{
  dobot__msg__MotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__MotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
