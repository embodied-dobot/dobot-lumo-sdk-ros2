// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/MotorState.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/motor_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__MotorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x95, 0x30, 0xd2, 0x3c, 0xf1, 0xf2, 0x65, 0x29,
      0x5c, 0x9f, 0xe9, 0x67, 0x37, 0x20, 0x72, 0xd6,
      0xaf, 0x24, 0x53, 0xcf, 0x76, 0x0a, 0x84, 0x9c,
      0x51, 0xfc, 0x67, 0xdf, 0x25, 0x68, 0x8c, 0xb2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dobot__msg__MotorState__TYPE_NAME[] = "dobot/msg/MotorState";

// Define type names, field names, and default values
static char dobot__msg__MotorState__FIELD_NAME__mode[] = "mode";
static char dobot__msg__MotorState__FIELD_NAME__q[] = "q";
static char dobot__msg__MotorState__FIELD_NAME__dq[] = "dq";
static char dobot__msg__MotorState__FIELD_NAME__ddq[] = "ddq";
static char dobot__msg__MotorState__FIELD_NAME__tau_est[] = "tau_est";
static char dobot__msg__MotorState__FIELD_NAME__tau_cmd[] = "tau_cmd";
static char dobot__msg__MotorState__FIELD_NAME__current_feedback[] = "current_feedback";
static char dobot__msg__MotorState__FIELD_NAME__current_cmd[] = "current_cmd";
static char dobot__msg__MotorState__FIELD_NAME__q_raw[] = "q_raw";
static char dobot__msg__MotorState__FIELD_NAME__dq_raw[] = "dq_raw";
static char dobot__msg__MotorState__FIELD_NAME__ddq_raw[] = "ddq_raw";
static char dobot__msg__MotorState__FIELD_NAME__tau_raw[] = "tau_raw";
static char dobot__msg__MotorState__FIELD_NAME__mcu_temp[] = "mcu_temp";
static char dobot__msg__MotorState__FIELD_NAME__mos_temp[] = "mos_temp";
static char dobot__msg__MotorState__FIELD_NAME__motor_temp[] = "motor_temp";
static char dobot__msg__MotorState__FIELD_NAME__bus_voltage[] = "bus_voltage";

static rosidl_runtime_c__type_description__Field dobot__msg__MotorState__FIELDS[] = {
  {
    {dobot__msg__MotorState__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__q, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__dq, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__ddq, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__tau_est, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__tau_cmd, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__current_feedback, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__current_cmd, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__q_raw, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__dq_raw, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__ddq_raw, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__tau_raw, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__mcu_temp, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__mos_temp, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__motor_temp, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__MotorState__FIELD_NAME__bus_voltage, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__msg__MotorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__MotorState__TYPE_NAME, 20, 20},
      {dobot__msg__MotorState__FIELDS, 16, 16},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe5\\x8d\\x95\\xe4\\xb8\\xaa\\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe7\\x9a\\x84\\xe4\\xbc\\xba\\xe6\\x9c\\x8d\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe3\\x80\\x82\\xe5\\xad\\x97\\xe6\\xae\\xb5\\xe9\\xa1\\xba\\xe5\\xba\\x8f\\xe4\\xb8\\x8e dobot::msg::dds_::MotorState_ \\xe4\\xb8\\x80\\xe8\\x87\\xb4\\xe3\\x80\\x82\n"
  "# \\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xef\\xbc\\x8c\\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe5\\x8d\\x8f\\xe8\\xae\\xae\\xe5\\x80\\xbc\\xef\\xbc\\x8c\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 0\\xe2\\x80\\x93255\\xe3\\x80\\x82\n"
  "uint8 mode\n"
  "# \\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe8\\xa7\\x92\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d rad\\xe3\\x80\\x82\n"
  "float32 q\n"
  "# \\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe8\\xa7\\x92\\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d rad/s\\xe3\\x80\\x82\n"
  "float32 dq\n"
  "# \\xe5\\x85\\xb3\\xe8\\x8a\\x82\\xe8\\xa7\\x92\\xe5\\x8a\\xa0\\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d rad/s^2\\xe3\\x80\\x82\n"
  "float32 ddq\n"
  "# \\xe4\\xbc\\xb0\\xe8\\xae\\xa1\\xe5\\x8a\\x9b\\xe7\\x9f\\xa9\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d N\\xc2\\xb7m\\xe3\\x80\\x82\n"
  "float32 tau_est\n"
  "# \\xe5\\x8a\\x9b\\xe7\\x9f\\xa9\\xe6\\x8c\\x87\\xe4\\xbb\\xa4\\xe5\\x9b\\x9e\\xe8\\xaf\\xbb\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d N\\xc2\\xb7m\\xe3\\x80\\x82\n"
  "float32 tau_cmd\n"
  "# \\xe7\\x94\\xb5\\xe6\\xb5\\x81\\xe5\\x8f\\x8d\\xe9\\xa6\\x88\\xef\\xbc\\x8c\\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe5\\x8d\\x8f\\xe8\\xae\\xae\\xe5\\x80\\xbc\\xe3\\x80\\x82\n"
  "float32 current_feedback\n"
  "# \\xe7\\x94\\xb5\\xe6\\xb5\\x81\\xe6\\x8c\\x87\\xe4\\xbb\\xa4\\xef\\xbc\\x8c\\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe5\\x8d\\x8f\\xe8\\xae\\xae\\xe5\\x80\\xbc\\xe3\\x80\\x82\n"
  "float32 current_cmd\n"
  "# \\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe8\\xa7\\x92\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d rad\\xe3\\x80\\x82\n"
  "float32 q_raw\n"
  "# \\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe8\\xa7\\x92\\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d rad/s\\xe3\\x80\\x82\n"
  "float32 dq_raw\n"
  "# \\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe8\\xa7\\x92\\xe5\\x8a\\xa0\\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d rad/s^2\\xe3\\x80\\x82\n"
  "float32 ddq_raw\n"
  "# \\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe5\\x8a\\x9b\\xe7\\x9f\\xa9\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d N\\xc2\\xb7m\\xe3\\x80\\x82\n"
  "float32 tau_raw\n"
  "# \\xe4\\xbc\\xba\\xe6\\x9c\\x8d\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xe6\\x9d\\xbf\\xe6\\xb8\\xa9\\xe5\\xba\\xa6\\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe5\\x80\\xbc\\xef\\xbc\\x8c\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 0\\xe2\\x80\\x93255\\xe3\\x80\\x82\n"
  "uint8 mcu_temp\n"
  "# MOS \\xe6\\xb8\\xa9\\xe5\\xba\\xa6\\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe5\\x80\\xbc\\xef\\xbc\\x8c\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 0\\xe2\\x80\\x93255\\xe3\\x80\\x82\n"
  "uint8 mos_temp\n"
  "# \\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe6\\xb8\\xa9\\xe5\\xba\\xa6\\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe5\\x80\\xbc\\xef\\xbc\\x8c\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 0\\xe2\\x80\\x93255\\xe3\\x80\\x82\n"
  "uint8 motor_temp\n"
  "# \\xe6\\xaf\\x8d\\xe7\\xba\\xbf\\xe7\\x94\\xb5\\xe5\\x8e\\x8b\\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe5\\x80\\xbc\\xef\\xbc\\x8c\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 0\\xe2\\x80\\x93255\\xef\\xbc\\x8c\\xe7\\xbc\\xa9\\xe6\\x94\\xbe\\xe7\\x94\\xb1\\xe4\\xbc\\xba\\xe6\\x9c\\x8d\\xe5\\x8d\\x8f\\xe8\\xae\\xae\\xe5\\xae\\x9a\\xe4\\xb9\\x89\\xe3\\x80\\x82\n"
  "uint8 bus_voltage";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__MotorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__MotorState__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 602, 602},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__MotorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__MotorState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
