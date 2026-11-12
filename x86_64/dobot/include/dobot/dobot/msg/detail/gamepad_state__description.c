// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/GamepadState.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/gamepad_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__GamepadState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x39, 0xdc, 0x3c, 0x69, 0xd6, 0x12, 0x1a, 0x52,
      0xde, 0x76, 0xc9, 0x39, 0x74, 0xdc, 0x9b, 0xfe,
      0xac, 0xb3, 0x94, 0xc7, 0x4a, 0x74, 0x9e, 0x96,
      0xc7, 0x5b, 0x5c, 0xce, 0xd5, 0x22, 0x2a, 0x12,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dobot__msg__GamepadState__TYPE_NAME[] = "dobot/msg/GamepadState";

// Define type names, field names, and default values
static char dobot__msg__GamepadState__FIELD_NAME__head[] = "head";
static char dobot__msg__GamepadState__FIELD_NAME__btn_state[] = "btn_state";
static char dobot__msg__GamepadState__FIELD_NAME__lx[] = "lx";
static char dobot__msg__GamepadState__FIELD_NAME__ly[] = "ly";
static char dobot__msg__GamepadState__FIELD_NAME__rx[] = "rx";
static char dobot__msg__GamepadState__FIELD_NAME__ry[] = "ry";
static char dobot__msg__GamepadState__FIELD_NAME__timestamp_us[] = "timestamp_us";

static rosidl_runtime_c__type_description__Field dobot__msg__GamepadState__FIELDS[] = {
  {
    {dobot__msg__GamepadState__FIELD_NAME__head, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__GamepadState__FIELD_NAME__btn_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__GamepadState__FIELD_NAME__lx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__GamepadState__FIELD_NAME__ly, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__GamepadState__FIELD_NAME__rx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__GamepadState__FIELD_NAME__ry, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__GamepadState__FIELD_NAME__timestamp_us, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__msg__GamepadState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__GamepadState__TYPE_NAME, 22, 22},
      {dobot__msg__GamepadState__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Gamepad state. Topic rt/gamepad/state.\n"
  "# Protocol header.\n"
  "uint16 head\n"
  "# Key bits. bit0 R1, bit1 L1, bit2 start, bit3 select, bit4 R2, bit5 L2, bit6 F1, bit7 F2,\n"
  "# bit8 A, bit9 B, bit10 X, bit11 Y, bit12 up, bit13 right, bit14 down, bit15 left.\n"
  "uint16 btn_state\n"
  "# Left stick x, typically -1.0 to 1.0.\n"
  "float32 lx\n"
  "# Left stick y, typically -1.0 to 1.0.\n"
  "float32 ly\n"
  "# Right stick x, typically -1.0 to 1.0.\n"
  "float32 rx\n"
  "# Right stick y, typically -1.0 to 1.0.\n"
  "float32 ry\n"
  "# Sampling timestamp, in us.\n"
  "uint64 timestamp_us";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__GamepadState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__GamepadState__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 514, 514},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__GamepadState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__GamepadState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
