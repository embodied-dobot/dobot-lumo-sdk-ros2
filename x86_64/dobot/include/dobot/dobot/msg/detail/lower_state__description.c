// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/LowerState.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/lower_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__LowerState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdc, 0x6b, 0x97, 0xe9, 0x1a, 0x9a, 0x07, 0x56,
      0x79, 0xcb, 0x04, 0x10, 0x36, 0xf8, 0xe5, 0x31,
      0x56, 0x6f, 0xf4, 0x5c, 0x9a, 0x10, 0xbd, 0x70,
      0x8b, 0xf6, 0xde, 0x05, 0x95, 0x19, 0x70, 0x39,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "dobot/msg/detail/motor_state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t dobot__msg__MotorState__EXPECTED_HASH = {1, {
    0x95, 0x30, 0xd2, 0x3c, 0xf1, 0xf2, 0x65, 0x29,
    0x5c, 0x9f, 0xe9, 0x67, 0x37, 0x20, 0x72, 0xd6,
    0xaf, 0x24, 0x53, 0xcf, 0x76, 0x0a, 0x84, 0x9c,
    0x51, 0xfc, 0x67, 0xdf, 0x25, 0x68, 0x8c, 0xb2,
  }};
#endif

static char dobot__msg__LowerState__TYPE_NAME[] = "dobot/msg/LowerState";
static char dobot__msg__MotorState__TYPE_NAME[] = "dobot/msg/MotorState";

// Define type names, field names, and default values
static char dobot__msg__LowerState__FIELD_NAME__motor_state[] = "motor_state";
static char dobot__msg__LowerState__FIELD_NAME__timestamp_us[] = "timestamp_us";

static rosidl_runtime_c__type_description__Field dobot__msg__LowerState__FIELDS[] = {
  {
    {dobot__msg__LowerState__FIELD_NAME__motor_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      15,
      0,
      {dobot__msg__MotorState__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__LowerState__FIELD_NAME__timestamp_us, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__msg__LowerState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {dobot__msg__MotorState__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__msg__LowerState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__LowerState__TYPE_NAME, 20, 20},
      {dobot__msg__LowerState__FIELDS, 2, 2},
    },
    {dobot__msg__LowerState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&dobot__msg__MotorState__EXPECTED_HASH, dobot__msg__MotorState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = dobot__msg__MotorState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Lower body state. Topic rt/lower/state. motor_state has length 15, matching the underlying IDL.\n"
  "MotorState[15] motor_state\n"
  "# Sampling timestamp, in us, counted from the robot monotonic clock.\n"
  "uint64 timestamp_us";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__LowerState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__LowerState__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 214, 214},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__LowerState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__LowerState__get_individual_type_description_source(NULL),
    sources[1] = *dobot__msg__MotorState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
