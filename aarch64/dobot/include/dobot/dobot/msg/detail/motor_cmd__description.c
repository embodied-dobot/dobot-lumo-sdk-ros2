// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/motor_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__MotorCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0x54, 0x13, 0xa0, 0x35, 0xb1, 0xc4, 0x5b,
      0x7b, 0x5d, 0xcc, 0xbf, 0x35, 0xee, 0x8b, 0x2f,
      0x79, 0x16, 0x75, 0xf3, 0x5c, 0xaa, 0x98, 0x53,
      0x3c, 0x06, 0x51, 0x49, 0x7b, 0x9b, 0xb6, 0x76,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dobot__msg__MotorCmd__TYPE_NAME[] = "dobot/msg/MotorCmd";

// Define type names, field names, and default values
static char dobot__msg__MotorCmd__FIELD_NAME__mode[] = "mode";
static char dobot__msg__MotorCmd__FIELD_NAME__q[] = "q";
static char dobot__msg__MotorCmd__FIELD_NAME__dq[] = "dq";
static char dobot__msg__MotorCmd__FIELD_NAME__tau[] = "tau";
static char dobot__msg__MotorCmd__FIELD_NAME__kp[] = "kp";
static char dobot__msg__MotorCmd__FIELD_NAME__kd[] = "kd";

static rosidl_runtime_c__type_description__Field dobot__msg__MotorCmd__FIELDS[] = {
  {
    {dobot__msg__MotorCmd__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorCmd__FIELD_NAME__q, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorCmd__FIELD_NAME__dq, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorCmd__FIELD_NAME__tau, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorCmd__FIELD_NAME__kp, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorCmd__FIELD_NAME__kd, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__msg__MotorCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__MotorCmd__TYPE_NAME, 18, 18},
      {dobot__msg__MotorCmd__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe5\\x8d\\x95\\xe4\\xb8\\xaa\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe7\\x9a\\x84\\xe4\\xbc\\xba\\xe6\\x9c\\x8d\\xe5\\x91\\xbd\\xe4\\xbb\\xa4\\xe3\\x80\\x82\\xe5\\xad\\x97\\xe6\\xae\\xb5\\xe9\\xa1\\xba\\xe5\\xba\\x8f\\xe4\\xb8\\x8e dobot::msg::dds_::MotorCmd_ \\xe4\\xb8\\x80\\xe8\\x87\\xb4\\xe3\\x80\\x82\n"
  "# \\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xef\\xbc\\x8c\\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe5\\x8d\\x8f\\xe8\\xae\\xae\\xe5\\x80\\xbc\\xef\\xbc\\x8c\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 0\\xe2\\x80\\x93255\\xe3\\x80\\x82\n"
  "uint8 mode\n"
  "# \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe8\\xa7\\x92\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d rad\\xe3\\x80\\x82\n"
  "float32 q\n"
  "# \\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe8\\xa7\\x92\\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d rad/s\\xe3\\x80\\x82\n"
  "float32 dq\n"
  "# \\xe5\\x89\\x8d\\xe9\\xa6\\x88\\xe5\\x8a\\x9b\\xe7\\x9f\\xa9\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d N\\xc2\\xb7m\\xe3\\x80\\x82\n"
  "float32 tau\n"
  "# \\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xe6\\xaf\\x94\\xe4\\xbe\\x8b\\xe5\\xa2\\x9e\\xe7\\x9b\\x8a\\xe3\\x80\\x82\\xe8\\xb4\\x9f\\xe5\\x80\\xbc\\xe6\\x97\\xa0\\xe7\\x89\\xa9\\xe7\\x90\\x86\\xe6\\x84\\x8f\\xe4\\xb9\\x89\\xef\\xbc\\x8cSDK \\xe4\\xbc\\x9a\\xe6\\x8b\\x92\\xe7\\xbb\\x9d\\xe3\\x80\\x82\n"
  "float32 kp\n"
  "# \\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xe5\\xbe\\xae\\xe5\\x88\\x86\\xe5\\xa2\\x9e\\xe7\\x9b\\x8a\\xe3\\x80\\x82\\xe8\\xb4\\x9f\\xe5\\x80\\xbc\\xe6\\x97\\xa0\\xe7\\x89\\xa9\\xe7\\x90\\x86\\xe6\\x84\\x8f\\xe4\\xb9\\x89\\xef\\xbc\\x8cSDK \\xe4\\xbc\\x9a\\xe6\\x8b\\x92\\xe7\\xbb\\x9d\\xe3\\x80\\x82\n"
  "float32 kd";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__MotorCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__MotorCmd__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 240, 240},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__MotorCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__MotorCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
