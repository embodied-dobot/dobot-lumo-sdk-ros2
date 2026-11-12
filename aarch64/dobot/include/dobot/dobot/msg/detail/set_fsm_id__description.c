// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/SetFsmId.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/set_fsm_id__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__SetFsmId__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5d, 0x1f, 0xce, 0x1d, 0xc1, 0x50, 0x69, 0x39,
      0x10, 0x44, 0x0f, 0xaf, 0x46, 0x44, 0x87, 0x55,
      0x04, 0x20, 0xc0, 0x8a, 0x20, 0x97, 0x7a, 0xae,
      0xa8, 0x29, 0x1c, 0x17, 0x7f, 0xff, 0x19, 0xae,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dobot__msg__SetFsmId__TYPE_NAME[] = "dobot/msg/SetFsmId";

// Define type names, field names, and default values
static char dobot__msg__SetFsmId__FIELD_NAME__id[] = "id";
static char dobot__msg__SetFsmId__FIELD_NAME__current_action[] = "current_action";

static rosidl_runtime_c__type_description__Field dobot__msg__SetFsmId__FIELDS[] = {
  {
    {dobot__msg__SetFsmId__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__SetFsmId__FIELD_NAME__current_action, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__msg__SetFsmId__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__SetFsmId__TYPE_NAME, 18, 18},
      {dobot__msg__SetFsmId__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Motion control FSM topic. Topic rt/set/fsm/id. Published by the lower layer when a skill starts and ends.\n"
  "# FSM id. 0 is also a valid id. Range 0-65535.\n"
  "uint16 id\n"
  "# Name of the action currently running. Empty string means no action.\n"
  "string current_action";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__SetFsmId__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__SetFsmId__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 257, 257},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__SetFsmId__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__SetFsmId__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
