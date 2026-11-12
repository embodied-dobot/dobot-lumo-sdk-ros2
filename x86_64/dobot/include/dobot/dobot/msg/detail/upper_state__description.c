// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/UpperState.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/upper_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__UpperState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0x82, 0xc4, 0x27, 0xbd, 0xf5, 0x02, 0x1f,
      0x8c, 0x63, 0xc7, 0x16, 0x2d, 0xe9, 0x08, 0xcf,
      0x89, 0x42, 0xe3, 0x6c, 0x10, 0x4c, 0xdd, 0xd6,
      0x06, 0x84, 0x47, 0xd2, 0x7c, 0x67, 0x41, 0xdb,
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

static char dobot__msg__UpperState__TYPE_NAME[] = "dobot/msg/UpperState";
static char dobot__msg__MotorState__TYPE_NAME[] = "dobot/msg/MotorState";

// Define type names, field names, and default values
static char dobot__msg__UpperState__FIELD_NAME__robot_type[] = "robot_type";
static char dobot__msg__UpperState__FIELD_NAME__is_upper_control[] = "is_upper_control";
static char dobot__msg__UpperState__FIELD_NAME__motor_state[] = "motor_state";
static char dobot__msg__UpperState__FIELD_NAME__timestamp_us[] = "timestamp_us";

static rosidl_runtime_c__type_description__Field dobot__msg__UpperState__FIELDS[] = {
  {
    {dobot__msg__UpperState__FIELD_NAME__robot_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      16,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__UpperState__FIELD_NAME__is_upper_control, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__UpperState__FIELD_NAME__motor_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      18,
      0,
      {dobot__msg__MotorState__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__UpperState__FIELD_NAME__timestamp_us, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__msg__UpperState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {dobot__msg__MotorState__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__msg__UpperState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__UpperState__TYPE_NAME, 20, 20},
      {dobot__msg__UpperState__FIELDS, 4, 4},
    },
    {dobot__msg__UpperState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&dobot__msg__MotorState__EXPECTED_HASH, dobot__msg__MotorState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = dobot__msg__MotorState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Upper body state. Topic rt/upper/state.\n"
  "# Product model, fixed 16 bytes, zero-padded. Corresponds to IDL char[16].\n"
  "char[16] robot_type\n"
  "# true means the upper body is currently under external control.\n"
  "bool is_upper_control\n"
  "# Upper body motor states, length 18.\n"
  "MotorState[18] motor_state\n"
  "# Sampling timestamp, in us.\n"
  "uint64 timestamp_us";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__UpperState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__UpperState__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 338, 338},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__UpperState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__UpperState__get_individual_type_description_source(NULL),
    sources[1] = *dobot__msg__MotorState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
