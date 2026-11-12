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
  "# Servo command of a single joint. Field order matches dobot::msg::dds_::MotorCmd_.\n"
  "# Motor mode, raw protocol value, range 0-255.\n"
  "uint8 mode\n"
  "# Target position, in rad.\n"
  "float32 q\n"
  "# Target velocity, in rad/s.\n"
  "float32 dq\n"
  "# Feedforward torque, in N\\xc2\\xb7m.\n"
  "float32 tau\n"
  "# Position proportional gain. Negative values are physically meaningless and rejected by the SDK.\n"
  "float32 kp\n"
  "# Velocity derivative gain. Negative values are physically meaningless and rejected by the SDK.\n"
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
    {toplevel_type_raw_source, 477, 477},
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
