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
  "# \\xe8\\xbf\\x90\\xe6\\x8e\\xa7\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\x9c\\xba\\xe8\\xaf\\x9d\\xe9\\xa2\\x98\\xe3\\x80\\x82\\xe8\\xaf\\x9d\\xe9\\xa2\\x98 rt/set/fsm/id\\xe3\\x80\\x82\\xe6\\x8a\\x80\\xe8\\x83\\xbd\\xe5\\xbc\\x80\\xe5\\xa7\\x8b\\xe5\\x92\\x8c\\xe7\\xbb\\x93\\xe6\\x9d\\x9f\\xe6\\x97\\xb6\\xe5\\xba\\x95\\xe5\\xb1\\x82\\xe4\\xbc\\x9a\\xe5\\x8f\\x91\\xe5\\xb8\\x83\\xe3\\x80\\x82\n"
  "# \\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\x9c\\xba\\xe7\\xbc\\x96\\xe5\\x8f\\xb7\\xe3\\x80\\x820 \\xe4\\xb9\\x9f\\xe6\\x98\\xaf\\xe5\\x90\\x88\\xe6\\xb3\\x95\\xe7\\xbc\\x96\\xe5\\x8f\\xb7\\xe3\\x80\\x82\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 0\\xe2\\x80\\x9365535\\xe3\\x80\\x82\n"
  "uint16 id\n"
  "# \\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe6\\xad\\xa3\\xe5\\x9c\\xa8\\xe6\\x89\\xa7\\xe8\\xa1\\x8c\\xe7\\x9a\\x84\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe5\\x90\\x8d\\xe3\\x80\\x82\\xe7\\xa9\\xba\\xe5\\xad\\x97\\xe7\\xac\\xa6\\xe4\\xb8\\xb2\\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe6\\xb2\\xa1\\xe6\\x9c\\x89\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe3\\x80\\x82\n"
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
    {toplevel_type_raw_source, 128, 128},
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
