// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/StandingControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/standing_control.h"


#ifndef DOBOT__MSG__DETAIL__STANDING_CONTROL__STRUCT_H_
#define DOBOT__MSG__DETAIL__STANDING_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/StandingControl in the package dobot.
/**
  * 站立微调。话题 rt/stand/cmd。仅 Mini 站立模式（状态机 300）接受。
  * 三个目标每次一起生效，腰部俯仰和横滚不在本消息里。
  * 头部偏航绝对目标，单位 rad。
 */
typedef struct dobot__msg__StandingControl
{
  float head_yaw;
  /// 腰部偏航相对默认姿态的偏移，单位 rad。
  float waist_yaw;
  /// 身体高度目标，单位 m。0 表示恢复默认站立高度。
  float body_height;
} dobot__msg__StandingControl;

// Struct for a sequence of dobot__msg__StandingControl.
typedef struct dobot__msg__StandingControl__Sequence
{
  dobot__msg__StandingControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__StandingControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__STANDING_CONTROL__STRUCT_H_
