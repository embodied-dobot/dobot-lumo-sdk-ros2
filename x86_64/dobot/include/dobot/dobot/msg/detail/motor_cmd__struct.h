// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/MotorCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/motor_cmd.h"


#ifndef DOBOT__MSG__DETAIL__MOTOR_CMD__STRUCT_H_
#define DOBOT__MSG__DETAIL__MOTOR_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MotorCmd in the package dobot.
/**
  * 单个关节的伺服命令。字段顺序与 dobot::msg::dds_::MotorCmd_ 一致。
  * 电机模式，原始协议值，范围 0–255。
 */
typedef struct dobot__msg__MotorCmd
{
  uint8_t mode;
  /// 目标角位置，单位 rad。
  float q;
  /// 目标角速度，单位 rad/s。
  float dq;
  /// 前馈力矩，单位 N·m。
  float tau;
  /// 位置比例增益。负值无物理意义，SDK 会拒绝。
  float kp;
  /// 速度微分增益。负值无物理意义，SDK 会拒绝。
  float kd;
} dobot__msg__MotorCmd;

// Struct for a sequence of dobot__msg__MotorCmd.
typedef struct dobot__msg__MotorCmd__Sequence
{
  dobot__msg__MotorCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__MotorCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__MOTOR_CMD__STRUCT_H_
