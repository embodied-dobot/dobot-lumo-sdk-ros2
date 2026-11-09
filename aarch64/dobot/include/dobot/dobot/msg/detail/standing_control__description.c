// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/StandingControl.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/standing_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__StandingControl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1a, 0xad, 0x83, 0x25, 0xaa, 0xee, 0xa0, 0xd7,
      0x92, 0x66, 0x4d, 0x40, 0x1c, 0xf7, 0xdd, 0x90,
      0x87, 0x20, 0x95, 0x3a, 0x86, 0x8b, 0xd0, 0xb6,
      0xe9, 0xb6, 0x19, 0x3b, 0xc6, 0xbc, 0xba, 0x71,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dobot__msg__StandingControl__TYPE_NAME[] = "dobot/msg/StandingControl";

// Define type names, field names, and default values
static char dobot__msg__StandingControl__FIELD_NAME__head_yaw[] = "head_yaw";
static char dobot__msg__StandingControl__FIELD_NAME__waist_yaw[] = "waist_yaw";
static char dobot__msg__StandingControl__FIELD_NAME__body_height[] = "body_height";

static rosidl_runtime_c__type_description__Field dobot__msg__StandingControl__FIELDS[] = {
  {
    {dobot__msg__StandingControl__FIELD_NAME__head_yaw, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__StandingControl__FIELD_NAME__waist_yaw, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__StandingControl__FIELD_NAME__body_height, 11, 11},
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
dobot__msg__StandingControl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__StandingControl__TYPE_NAME, 25, 25},
      {dobot__msg__StandingControl__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe7\\xab\\x99\\xe7\\xab\\x8b\\xe5\\xbe\\xae\\xe8\\xb0\\x83\\xe3\\x80\\x82\\xe8\\xaf\\x9d\\xe9\\xa2\\x98 rt/stand/cmd\\xe3\\x80\\x82\\xe4\\xbb\\x85 Mini \\xe7\\xab\\x99\\xe7\\xab\\x8b\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xef\\xbc\\x88\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\x9c\\xba 300\\xef\\xbc\\x89\\xe6\\x8e\\xa5\\xe5\\x8f\\x97\\xe3\\x80\\x82\n"
  "# \\xe4\\xb8\\x89\\xe4\\xb8\\xaa\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xe6\\xaf\\x8f\\xe6\\xac\\xa1\\xe4\\xb8\\x80\\xe8\\xb5\\xb7\\xe7\\x94\\x9f\\xe6\\x95\\x88\\xef\\xbc\\x8c\\xe8\\x85\\xb0\\xe9\\x83\\xa8\\xe4\\xbf\\xaf\\xe4\\xbb\\xb0\\xe5\\x92\\x8c\\xe6\\xa8\\xaa\\xe6\\xbb\\x9a\\xe4\\xb8\\x8d\\xe5\\x9c\\xa8\\xe6\\x9c\\xac\\xe6\\xb6\\x88\\xe6\\x81\\xaf\\xe9\\x87\\x8c\\xe3\\x80\\x82\n"
  "# \\xe5\\xa4\\xb4\\xe9\\x83\\xa8\\xe5\\x81\\x8f\\xe8\\x88\\xaa\\xe7\\xbb\\x9d\\xe5\\xaf\\xb9\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d rad\\xe3\\x80\\x82\n"
  "float32 head_yaw\n"
  "# \\xe8\\x85\\xb0\\xe9\\x83\\xa8\\xe5\\x81\\x8f\\xe8\\x88\\xaa\\xe7\\x9b\\xb8\\xe5\\xaf\\xb9\\xe9\\xbb\\x98\\xe8\\xae\\xa4\\xe5\\xa7\\xbf\\xe6\\x80\\x81\\xe7\\x9a\\x84\\xe5\\x81\\x8f\\xe7\\xa7\\xbb\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d rad\\xe3\\x80\\x82\n"
  "float32 waist_yaw\n"
  "# \\xe8\\xba\\xab\\xe4\\xbd\\x93\\xe9\\xab\\x98\\xe5\\xba\\xa6\\xe7\\x9b\\xae\\xe6\\xa0\\x87\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d m\\xe3\\x80\\x820 \\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe6\\x81\\xa2\\xe5\\xa4\\x8d\\xe9\\xbb\\x98\\xe8\\xae\\xa4\\xe7\\xab\\x99\\xe7\\xab\\x8b\\xe9\\xab\\x98\\xe5\\xba\\xa6\\xe3\\x80\\x82\n"
  "float32 body_height";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__StandingControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__StandingControl__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 201, 201},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__StandingControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__StandingControl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
