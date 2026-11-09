// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot:msg/ClearErrors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot/msg/clear_errors.h"


#ifndef DOBOT__MSG__DETAIL__CLEAR_ERRORS__STRUCT_H_
#define DOBOT__MSG__DETAIL__CLEAR_ERRORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ClearErrors in the package dobot.
/**
  * 清错。话题 rt/clear/errors。
  * 调用方自增的消息编号，用于区分重复请求。
 */
typedef struct dobot__msg__ClearErrors
{
  int32_t msg_id;
} dobot__msg__ClearErrors;

// Struct for a sequence of dobot__msg__ClearErrors.
typedef struct dobot__msg__ClearErrors__Sequence
{
  dobot__msg__ClearErrors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot__msg__ClearErrors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT__MSG__DETAIL__CLEAR_ERRORS__STRUCT_H_
