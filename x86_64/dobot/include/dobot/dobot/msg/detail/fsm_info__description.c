// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/FsmInfo.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/fsm_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__FsmInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x35, 0x71, 0xe4, 0xf4, 0x2d, 0x8d, 0xbd, 0x47,
      0x7a, 0x16, 0xd2, 0x44, 0xe0, 0x6e, 0x3e, 0x3d,
      0x11, 0xee, 0xe9, 0x2d, 0x5f, 0xfc, 0x72, 0x52,
      0xcf, 0x60, 0xda, 0xbe, 0x08, 0xfd, 0xc8, 0x36,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dobot__msg__FsmInfo__TYPE_NAME[] = "dobot/msg/FsmInfo";

// Define type names, field names, and default values
static char dobot__msg__FsmInfo__FIELD_NAME__fsm_id[] = "fsm_id";
static char dobot__msg__FsmInfo__FIELD_NAME__is_dance[] = "is_dance";
static char dobot__msg__FsmInfo__FIELD_NAME__name[] = "name";
static char dobot__msg__FsmInfo__FIELD_NAME__dance_name[] = "dance_name";
static char dobot__msg__FsmInfo__FIELD_NAME__model_file[] = "model_file";
static char dobot__msg__FsmInfo__FIELD_NAME__motion_loop_length[] = "motion_loop_length";
static char dobot__msg__FsmInfo__FIELD_NAME__motion_hold_back_steps[] = "motion_hold_back_steps";
static char dobot__msg__FsmInfo__FIELD_NAME__motion_start_step[] = "motion_start_step";

static rosidl_runtime_c__type_description__Field dobot__msg__FsmInfo__FIELDS[] = {
  {
    {dobot__msg__FsmInfo__FIELD_NAME__fsm_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__FsmInfo__FIELD_NAME__is_dance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__FsmInfo__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__FsmInfo__FIELD_NAME__dance_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__FsmInfo__FIELD_NAME__model_file, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__FsmInfo__FIELD_NAME__motion_loop_length, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__FsmInfo__FIELD_NAME__motion_hold_back_steps, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__FsmInfo__FIELD_NAME__motion_start_step, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__msg__FsmInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__FsmInfo__TYPE_NAME, 17, 17},
      {dobot__msg__FsmInfo__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# One motion control FSM. Corresponds to C++ dobot::motion::FsmInfo.\n"
  "int32 fsm_id\n"
  "bool is_dance\n"
  "string name\n"
  "# The following four fields are populated only when is_dance is true; otherwise they are an empty string or 0.\n"
  "string dance_name\n"
  "string model_file\n"
  "int32 motion_loop_length\n"
  "int32 motion_hold_back_steps\n"
  "int32 motion_start_step";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__FsmInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__FsmInfo__TYPE_NAME, 17, 17},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 333, 333},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__FsmInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__FsmInfo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
