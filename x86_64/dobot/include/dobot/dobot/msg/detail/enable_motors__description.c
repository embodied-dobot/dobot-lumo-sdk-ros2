// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/EnableMotors.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/enable_motors__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__EnableMotors__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x25, 0x0d, 0xcb, 0x45, 0x88, 0xf1, 0xf8, 0xb9,
      0x98, 0xfc, 0x06, 0x5b, 0x49, 0xc4, 0xfc, 0x4d,
      0x79, 0x15, 0xc4, 0x8a, 0xa8, 0xb2, 0xd1, 0xd8,
      0x68, 0x33, 0x53, 0xf2, 0x2c, 0x14, 0xcf, 0xe7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dobot__msg__EnableMotors__TYPE_NAME[] = "dobot/msg/EnableMotors";

// Define type names, field names, and default values
static char dobot__msg__EnableMotors__FIELD_NAME__flag[] = "flag";

static rosidl_runtime_c__type_description__Field dobot__msg__EnableMotors__FIELDS[] = {
  {
    {dobot__msg__EnableMotors__FIELD_NAME__flag, 4, 4},
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
dobot__msg__EnableMotors__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__EnableMotors__TYPE_NAME, 22, 22},
      {dobot__msg__EnableMotors__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xe4\\xbd\\xbf\\xe8\\x83\\xbd\\xe3\\x80\\x82\\xe8\\xaf\\x9d\\xe9\\xa2\\x98 rt/enable/motors\\xe3\\x80\\x82\\xe6\\xaf\\x8f\\xe4\\xb8\\x80\\xe4\\xbd\\x8d\\xe5\\xaf\\xb9\\xe5\\xba\\x94\\xe4\\xb8\\x80\\xe8\\xb7\\xaf\\xe7\\x94\\xb5\\xe6\\x9c\\xba\\xef\\xbc\\x8ctrue \\xe4\\xb8\\xba\\xe4\\xbd\\xbf\\xe8\\x83\\xbd\\xe3\\x80\\x82\n"
  "# \\xe9\\x95\\xbf\\xe5\\xba\\xa6 30\\xef\\xbc\\x8c\\xe4\\xb8\\x8e\\xe5\\xba\\x95\\xe5\\xb1\\x82 IDL \\xe4\\xb8\\x80\\xe8\\x87\\xb4\\xe3\\x80\\x82\n"
  "bool[30] flag";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__EnableMotors__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__EnableMotors__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 81, 81},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__EnableMotors__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__EnableMotors__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
