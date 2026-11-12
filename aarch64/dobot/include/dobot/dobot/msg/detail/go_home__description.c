// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/GoHome.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/go_home__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__GoHome__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3e, 0x13, 0xc9, 0xbb, 0x50, 0x30, 0xe6, 0x36,
      0xd9, 0xbf, 0x3a, 0x0b, 0x75, 0x72, 0x8b, 0xcb,
      0x6e, 0x3c, 0x90, 0x01, 0x77, 0x43, 0xe2, 0xcf,
      0x70, 0xaa, 0xf7, 0x35, 0x50, 0xcf, 0xa2, 0xc6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dobot__msg__GoHome__TYPE_NAME[] = "dobot/msg/GoHome";

// Define type names, field names, and default values
static char dobot__msg__GoHome__FIELD_NAME__flag[] = "flag";

static rosidl_runtime_c__type_description__Field dobot__msg__GoHome__FIELDS[] = {
  {
    {dobot__msg__GoHome__FIELD_NAME__flag, 4, 4},
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
dobot__msg__GoHome__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__GoHome__TYPE_NAME, 16, 16},
      {dobot__msg__GoHome__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Go home. Topic rt/go/home. Each bit maps to one motor; true means that motor takes part in homing.\n"
  "# Length 30, matching the underlying IDL.\n"
  "bool[30] flag";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__GoHome__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__GoHome__TYPE_NAME, 16, 16},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 157, 157},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__GoHome__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__GoHome__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
