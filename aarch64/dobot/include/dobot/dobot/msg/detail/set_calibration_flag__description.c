// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/SetCalibrationFlag.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/set_calibration_flag__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__SetCalibrationFlag__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x51, 0x05, 0x95, 0x6e, 0x84, 0xb2, 0xb4, 0x11,
      0xd7, 0x7e, 0x96, 0x69, 0xf9, 0x61, 0xe3, 0xc7,
      0x22, 0x79, 0x48, 0xba, 0xd7, 0x77, 0x8b, 0xa2,
      0xd8, 0xef, 0x0e, 0xe6, 0xcb, 0x24, 0x64, 0x0f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dobot__msg__SetCalibrationFlag__TYPE_NAME[] = "dobot/msg/SetCalibrationFlag";

// Define type names, field names, and default values
static char dobot__msg__SetCalibrationFlag__FIELD_NAME__flag[] = "flag";

static rosidl_runtime_c__type_description__Field dobot__msg__SetCalibrationFlag__FIELDS[] = {
  {
    {dobot__msg__SetCalibrationFlag__FIELD_NAME__flag, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      30,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__msg__SetCalibrationFlag__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__SetCalibrationFlag__TYPE_NAME, 28, 28},
      {dobot__msg__SetCalibrationFlag__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe6\\xa0\\x87\\xe5\\xae\\x9a\\xe6\\xa0\\x87\\xe5\\xbf\\x97\\xe3\\x80\\x82\\xe8\\xaf\\x9d\\xe9\\xa2\\x98 rt/set/calibration/flag\\xe3\\x80\\x82\\xe6\\xaf\\x8f\\xe4\\xb8\\x80\\xe4\\xbd\\x8d\\xe5\\xaf\\xb9\\xe5\\xba\\x94\\xe4\\xb8\\x80\\xe8\\xb7\\xaf\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe3\\x80\\x82\n"
  "# \\xe9\\x95\\xbf\\xe5\\xba\\xa6 30\\xef\\xbc\\x8c\\xe4\\xb8\\x8e\\xe5\\xba\\x95\\xe5\\xb1\\x82 IDL \\xe4\\xb8\\x80\\xe8\\x87\\xb4\\xe3\\x80\\x82\n"
  "bool[30] flag";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__SetCalibrationFlag__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__SetCalibrationFlag__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 79, 79},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__SetCalibrationFlag__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__SetCalibrationFlag__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
