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
  "# Servo state of a single joint. Field order matches dobot::msg::dds_::MotorState_.\n"
  "# Motor mode, raw protocol value, range 0-255.\n"
  "uint8 mode\n"
  "# Joint position, in rad.\n"
  "float32 q\n"
  "# Joint velocity, in rad/s.\n"
  "float32 dq\n"
  "# Joint acceleration, in rad/s^2.\n"
  "float32 ddq\n"
  "# Estimated torque, in N\\xc2\\xb7m.\n"
  "float32 tau_est\n"
  "# Torque command readback, in N\\xc2\\xb7m.\n"
  "float32 tau_cmd\n"
  "# Current feedback, raw protocol value.\n"
  "float32 current_feedback\n"
  "# Current command, raw protocol value.\n"
  "float32 current_cmd\n"
  "# Raw position, in rad.\n"
  "float32 q_raw\n"
  "# Raw velocity, in rad/s.\n"
  "float32 dq_raw\n"
  "# Raw acceleration, in rad/s^2.\n"
  "float32 ddq_raw\n"
  "# Raw torque, in N\\xc2\\xb7m.\n"
  "float32 tau_raw\n"
  "# Raw servo driver board temperature, range 0-255.\n"
  "uint8 mcu_temp\n"
  "# Raw MOS temperature, range 0-255.\n"
  "uint8 mos_temp\n"
  "# Raw motor temperature, range 0-255.\n"
  "uint8 motor_temp\n"
  "# Raw bus voltage, range 0-255; scaling is defined by the servo protocol.\n"
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
    {toplevel_type_raw_source, 911, 911},
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
