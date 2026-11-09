// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/ClearErrors.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/clear_errors__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__ClearErrors__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdb, 0xc1, 0xf7, 0x90, 0x3d, 0x87, 0x69, 0x7a,
      0xb6, 0x76, 0xd8, 0x9c, 0xec, 0xcd, 0x07, 0x9b,
      0x91, 0x5f, 0xb3, 0xaf, 0xa1, 0xe3, 0xa3, 0x5e,
      0x6a, 0x5b, 0xa1, 0x1f, 0x1e, 0x03, 0x66, 0x4d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dobot__msg__ClearErrors__TYPE_NAME[] = "dobot/msg/ClearErrors";

// Define type names, field names, and default values
static char dobot__msg__ClearErrors__FIELD_NAME__msg_id[] = "msg_id";

static rosidl_runtime_c__type_description__Field dobot__msg__ClearErrors__FIELDS[] = {
  {
    {dobot__msg__ClearErrors__FIELD_NAME__msg_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__msg__ClearErrors__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__ClearErrors__TYPE_NAME, 21, 21},
      {dobot__msg__ClearErrors__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe6\\xb8\\x85\\xe9\\x94\\x99\\xe3\\x80\\x82\\xe8\\xaf\\x9d\\xe9\\xa2\\x98 rt/clear/errors\\xe3\\x80\\x82\n"
  "# \\xe8\\xb0\\x83\\xe7\\x94\\xa8\\xe6\\x96\\xb9\\xe8\\x87\\xaa\\xe5\\xa2\\x9e\\xe7\\x9a\\x84\\xe6\\xb6\\x88\\xe6\\x81\\xaf\\xe7\\xbc\\x96\\xe5\\x8f\\xb7\\xef\\xbc\\x8c\\xe7\\x94\\xa8\\xe4\\xba\\x8e\\xe5\\x8c\\xba\\xe5\\x88\\x86\\xe9\\x87\\x8d\\xe5\\xa4\\x8d\\xe8\\xaf\\xb7\\xe6\\xb1\\x82\\xe3\\x80\\x82\n"
  "int32 msg_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__ClearErrors__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__ClearErrors__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 61, 61},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__ClearErrors__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__ClearErrors__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
