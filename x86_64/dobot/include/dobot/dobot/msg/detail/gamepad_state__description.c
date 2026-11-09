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
  "# \\xe6\\x89\\x8b\\xe6\\x9f\\x84\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe3\\x80\\x82\\xe8\\xaf\\x9d\\xe9\\xa2\\x98 rt/gamepad/state\\xe3\\x80\\x82\n"
  "# \\xe5\\x8d\\x8f\\xe8\\xae\\xae\\xe5\\xa4\\xb4\\xe3\\x80\\x82\n"
  "uint16 head\n"
  "# \\xe6\\x8c\\x89\\xe9\\x94\\xae\\xe4\\xbd\\x8d\\xe3\\x80\\x82bit0 R1\\xef\\xbc\\x8cbit1 L1\\xef\\xbc\\x8cbit2 start\\xef\\xbc\\x8cbit3 select\\xef\\xbc\\x8cbit4 R2\\xef\\xbc\\x8cbit5 L2\\xef\\xbc\\x8cbit6 F1\\xef\\xbc\\x8cbit7 F2\\xef\\xbc\\x8c\n"
  "# bit8 A\\xef\\xbc\\x8cbit9 B\\xef\\xbc\\x8cbit10 X\\xef\\xbc\\x8cbit11 Y\\xef\\xbc\\x8cbit12 up\\xef\\xbc\\x8cbit13 right\\xef\\xbc\\x8cbit14 down\\xef\\xbc\\x8cbit15 left\\xe3\\x80\\x82\n"
  "uint16 btn_state\n"
  "# \\xe5\\xb7\\xa6\\xe6\\x91\\x87\\xe6\\x9d\\x86 x\\xef\\xbc\\x8c\\xe5\\xb8\\xb8\\xe8\\xa7\\x81\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 -1.0\\xe2\\x80\\x931.0\\xe3\\x80\\x82\n"
  "float32 lx\n"
  "# \\xe5\\xb7\\xa6\\xe6\\x91\\x87\\xe6\\x9d\\x86 y\\xef\\xbc\\x8c\\xe5\\xb8\\xb8\\xe8\\xa7\\x81\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 -1.0\\xe2\\x80\\x931.0\\xe3\\x80\\x82\n"
  "float32 ly\n"
  "# \\xe5\\x8f\\xb3\\xe6\\x91\\x87\\xe6\\x9d\\x86 x\\xef\\xbc\\x8c\\xe5\\xb8\\xb8\\xe8\\xa7\\x81\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 -1.0\\xe2\\x80\\x931.0\\xe3\\x80\\x82\n"
  "float32 rx\n"
  "# \\xe5\\x8f\\xb3\\xe6\\x91\\x87\\xe6\\x9d\\x86 y\\xef\\xbc\\x8c\\xe5\\xb8\\xb8\\xe8\\xa7\\x81\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 -1.0\\xe2\\x80\\x931.0\\xe3\\x80\\x82\n"
  "float32 ry\n"
  "# \\xe9\\x87\\x87\\xe6\\xa0\\xb7\\xe6\\x97\\xb6\\xe9\\x97\\xb4\\xe6\\x88\\xb3\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d us\\xe3\\x80\\x82\n"
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
    {toplevel_type_raw_source, 389, 389},
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
