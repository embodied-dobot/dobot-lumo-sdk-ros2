// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/LowerCmd.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/lower_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__LowerCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc0, 0x34, 0xd0, 0xcd, 0xac, 0xf7, 0x0c, 0xf3,
      0xcc, 0xf2, 0xa9, 0x2c, 0x53, 0x89, 0x32, 0x0c,
      0x00, 0xe8, 0x44, 0x41, 0xa2, 0xfe, 0x88, 0x10,
      0x94, 0xa6, 0xde, 0x6b, 0x2d, 0x47, 0x6c, 0xed,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "dobot/msg/detail/motor_cmd__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t dobot__msg__MotorCmd__EXPECTED_HASH = {1, {
    0x08, 0x54, 0x13, 0xa0, 0x35, 0xb1, 0xc4, 0x5b,
    0x7b, 0x5d, 0xcc, 0xbf, 0x35, 0xee, 0x8b, 0x2f,
    0x79, 0x16, 0x75, 0xf3, 0x5c, 0xaa, 0x98, 0x53,
    0x3c, 0x06, 0x51, 0x49, 0x7b, 0x9b, 0xb6, 0x76,
  }};
#endif

static char dobot__msg__LowerCmd__TYPE_NAME[] = "dobot/msg/LowerCmd";
static char dobot__msg__MotorCmd__TYPE_NAME[] = "dobot/msg/MotorCmd";

// Define type names, field names, and default values
static char dobot__msg__LowerCmd__FIELD_NAME__motor_cmd[] = "motor_cmd";

static rosidl_runtime_c__type_description__Field dobot__msg__LowerCmd__FIELDS[] = {
  {
    {dobot__msg__LowerCmd__FIELD_NAME__motor_cmd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      12,
      0,
      {dobot__msg__MotorCmd__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__msg__LowerCmd__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {dobot__msg__MotorCmd__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__msg__LowerCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__LowerCmd__TYPE_NAME, 18, 18},
      {dobot__msg__LowerCmd__FIELDS, 1, 1},
    },
    {dobot__msg__LowerCmd__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&dobot__msg__MotorCmd__EXPECTED_HASH, dobot__msg__MotorCmd__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = dobot__msg__MotorCmd__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe4\\xb8\\x8b\\xe8\\x82\\xa2\\xe5\\x91\\xbd\\xe4\\xbb\\xa4\\xe3\\x80\\x82\\xe8\\xaf\\x9d\\xe9\\xa2\\x98 rt/lower/cmd\\xe3\\x80\\x82motor_cmd \\xe9\\x95\\xbf\\xe5\\xba\\xa6 12\\xef\\xbc\\x8c\\xe4\\xb8\\x8e\\xe5\\xba\\x95\\xe5\\xb1\\x82 IDL \\xe4\\xb8\\x80\\xe8\\x87\\xb4\\xe3\\x80\\x82\n"
  "MotorCmd[12] motor_cmd";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__LowerCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__LowerCmd__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 74, 74},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__LowerCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__LowerCmd__get_individual_type_description_source(NULL),
    sources[1] = *dobot__msg__MotorCmd__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
