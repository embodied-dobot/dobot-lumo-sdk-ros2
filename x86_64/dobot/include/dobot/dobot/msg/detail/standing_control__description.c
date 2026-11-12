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
  "# Standing fine adjustment. Topic rt/stand/cmd. Accepted only in Mini standing mode (FSM 300).\n"
  "# All three targets take effect together; waist pitch and roll are not part of this message.\n"
  "# Absolute head yaw target, in rad.\n"
  "float32 head_yaw\n"
  "# Waist yaw offset relative to the default posture, in rad.\n"
  "float32 waist_yaw\n"
  "# Body height target, in m. 0 restores the default standing height.\n"
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
    {toplevel_type_raw_source, 407, 407},
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
