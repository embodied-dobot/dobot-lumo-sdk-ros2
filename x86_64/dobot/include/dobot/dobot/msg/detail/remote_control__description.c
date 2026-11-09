// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/RemoteControl.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/remote_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__RemoteControl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x51, 0x6d, 0xfe, 0xed, 0xed, 0x35, 0x07, 0x28,
      0x7d, 0x0b, 0x87, 0x76, 0x99, 0x9e, 0x9d, 0x29,
      0x26, 0x8a, 0xaf, 0xe4, 0x56, 0x37, 0x84, 0x22,
      0x89, 0x01, 0xc6, 0x38, 0x05, 0xbc, 0x39, 0xa2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "dobot/msg/detail/joystick_value__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t dobot__msg__JoystickValue__EXPECTED_HASH = {1, {
    0x79, 0x8c, 0x54, 0xbd, 0xe9, 0xec, 0x8d, 0x7e,
    0x99, 0x16, 0x69, 0x44, 0x5d, 0xcb, 0x83, 0x68,
    0x77, 0x60, 0x9c, 0x81, 0xe0, 0x70, 0x92, 0x9e,
    0x5a, 0x3f, 0xc1, 0x0d, 0x20, 0xa9, 0xb2, 0x19,
  }};
#endif

static char dobot__msg__RemoteControl__TYPE_NAME[] = "dobot/msg/RemoteControl";
static char dobot__msg__JoystickValue__TYPE_NAME[] = "dobot/msg/JoystickValue";

// Define type names, field names, and default values
static char dobot__msg__RemoteControl__FIELD_NAME__btn_move[] = "btn_move";
static char dobot__msg__RemoteControl__FIELD_NAME__btn_turn[] = "btn_turn";

static rosidl_runtime_c__type_description__Field dobot__msg__RemoteControl__FIELDS[] = {
  {
    {dobot__msg__RemoteControl__FIELD_NAME__btn_move, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__msg__JoystickValue__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__RemoteControl__FIELD_NAME__btn_turn, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__msg__JoystickValue__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__msg__RemoteControl__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {dobot__msg__JoystickValue__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__msg__RemoteControl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__RemoteControl__TYPE_NAME, 23, 23},
      {dobot__msg__RemoteControl__FIELDS, 2, 2},
    },
    {dobot__msg__RemoteControl__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&dobot__msg__JoystickValue__EXPECTED_HASH, dobot__msg__JoystickValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = dobot__msg__JoystickValue__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe9\\x81\\xa5\\xe6\\x8e\\xa7\\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xe6\\x84\\x8f\\xe5\\x9b\\xbe\\xe3\\x80\\x82\\xe8\\xaf\\x9d\\xe9\\xa2\\x98 rt/remote/control\\xe3\\x80\\x82\n"
  "# \\xe5\\xb7\\xa6\\xe6\\x91\\x87\\xe6\\x9d\\x86\\xef\\xbc\\x8c\\xe5\\x89\\x8d\\xe5\\x90\\x8e/\\xe5\\xb7\\xa6\\xe5\\x8f\\xb3\\xe3\\x80\\x82\n"
  "JoystickValue btn_move\n"
  "# \\xe5\\x8f\\xb3\\xe6\\x91\\x87\\xe6\\x9d\\x86\\xef\\xbc\\x8c\\xe8\\xbd\\xac\\xe5\\x90\\x91\\xe3\\x80\\x82\n"
  "JoystickValue btn_turn";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__RemoteControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__RemoteControl__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 100, 100},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__RemoteControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__RemoteControl__get_individual_type_description_source(NULL),
    sources[1] = *dobot__msg__JoystickValue__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
