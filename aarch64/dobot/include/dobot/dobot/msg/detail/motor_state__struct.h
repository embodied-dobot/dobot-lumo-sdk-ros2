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
  * 单个关节的伺服状态。字段顺序与 dobot::msg::dds_::MotorState_ 一致。
  * 电机模式，原始协议值，范围 0–255。
 */
typedef struct dobot__msg__MotorState
{
  uint8_t mode;
  /// 关节角位置，单位 rad。
  float q;
  /// 关节角速度，单位 rad/s。
  float dq;
  /// 关节角加速度，单位 rad/s^2。
  float ddq;
  /// 估计力矩，单位 N·m。
  float tau_est;
  /// 力矩指令回读，单位 N·m。
  float tau_cmd;
  /// 电流反馈，原始协议值。
  float current_feedback;
  /// 电流指令，原始协议值。
  float current_cmd;
  /// 原始角位置，单位 rad。
  float q_raw;
  /// 原始角速度，单位 rad/s。
  float dq_raw;
  /// 原始角加速度，单位 rad/s^2。
  float ddq_raw;
  /// 原始力矩，单位 N·m。
  float tau_raw;
  /// 伺服控制板温度原始值，范围 0–255。
  uint8_t mcu_temp;
  /// MOS 温度原始值，范围 0–255。
  uint8_t mos_temp;
  /// 电机温度原始值，范围 0–255。
  uint8_t motor_temp;
  /// 母线电压原始值，范围 0–255，缩放由伺服协议定义。
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
