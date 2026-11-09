// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/JoystickValue.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/joystick_value__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__JoystickValue__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0x8c, 0x54, 0xbd, 0xe9, 0xec, 0x8d, 0x7e,
      0x99, 0x16, 0x69, 0x44, 0x5d, 0xcb, 0x83, 0x68,
      0x77, 0x60, 0x9c, 0x81, 0xe0, 0x70, 0x92, 0x9e,
      0x5a, 0x3f, 0xc1, 0x0d, 0x20, 0xa9, 0xb2, 0x19,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dobot__msg__JoystickValue__TYPE_NAME[] = "dobot/msg/JoystickValue";

// Define type names, field names, and default values
static char dobot__msg__JoystickValue__FIELD_NAME__x[] = "x";
static char dobot__msg__JoystickValue__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field dobot__msg__JoystickValue__FIELDS[] = {
  {
    {dobot__msg__JoystickValue__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__JoystickValue__FIELD_NAME__y, 1, 1},
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
dobot__msg__JoystickValue__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__JoystickValue__TYPE_NAME, 23, 23},
      {dobot__msg__JoystickValue__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe6\\x91\\x87\\xe6\\x9d\\x86\\xe5\\x88\\x86\\xe9\\x87\\x8f\\xe3\\x80\\x82x\\xe3\\x80\\x81y \\xe4\\xb8\\xba\\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe9\\x94\\xae\\xe5\\x80\\xbc\\xef\\xbc\\x8c\\xe5\\xb8\\xb8\\xe8\\xa7\\x81\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 -1.0\\xe2\\x80\\x931.0\\xe3\\x80\\x82\n"
  "float32 x\n"
  "float32 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__JoystickValue__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__JoystickValue__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 52, 52},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__JoystickValue__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__JoystickValue__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
