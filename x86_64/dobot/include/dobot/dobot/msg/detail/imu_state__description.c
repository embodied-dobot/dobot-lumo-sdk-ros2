// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:msg/IMUState.idl
// generated code does not contain a copyright notice

#include "dobot/msg/detail/imu_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__msg__IMUState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9f, 0x96, 0xda, 0xce, 0x8c, 0x1c, 0x39, 0xde,
      0xca, 0x53, 0x4d, 0x3d, 0x20, 0xe2, 0x57, 0x7c,
      0x78, 0xa5, 0xb1, 0x33, 0x56, 0x73, 0x28, 0xa8,
      0xe1, 0x7f, 0x68, 0x3f, 0xa6, 0x01, 0x10, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char dobot__msg__IMUState__TYPE_NAME[] = "dobot/msg/IMUState";

// Define type names, field names, and default values
static char dobot__msg__IMUState__FIELD_NAME__imu_id[] = "imu_id";
static char dobot__msg__IMUState__FIELD_NAME__quaternion[] = "quaternion";
static char dobot__msg__IMUState__FIELD_NAME__gyroscope[] = "gyroscope";
static char dobot__msg__IMUState__FIELD_NAME__accelerometer[] = "accelerometer";
static char dobot__msg__IMUState__FIELD_NAME__rpy[] = "rpy";
static char dobot__msg__IMUState__FIELD_NAME__temperature[] = "temperature";
static char dobot__msg__IMUState__FIELD_NAME__timestamp_us[] = "timestamp_us";

static rosidl_runtime_c__type_description__Field dobot__msg__IMUState__FIELDS[] = {
  {
    {dobot__msg__IMUState__FIELD_NAME__imu_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__IMUState__FIELD_NAME__quaternion, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__IMUState__FIELD_NAME__gyroscope, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__IMUState__FIELD_NAME__accelerometer, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__IMUState__FIELD_NAME__rpy, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__IMUState__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__msg__IMUState__FIELD_NAME__timestamp_us, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__msg__IMUState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__msg__IMUState__TYPE_NAME, 18, 18},
      {dobot__msg__IMUState__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# IMU \\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe3\\x80\\x82\\xe8\\xaf\\x9d\\xe9\\xa2\\x98 rt/pelvis/imu/data \\xe4\\xb8\\x8e rt/torso/imu/data \\xe5\\x85\\xb1\\xe7\\x94\\xa8\\xe6\\x9c\\xac\\xe7\\xb1\\xbb\\xe5\\x9e\\x8b\\xe3\\x80\\x82\n"
  "# \\xe5\\x90\\x8c\\xe4\\xb8\\x80\\xe6\\xac\\xa1\\xe4\\xbc\\x9a\\xe8\\xaf\\x9d\\xe5\\x8f\\xaa\\xe5\\xba\\x94\\xe8\\xae\\xa2\\xe9\\x98\\x85\\xe5\\x85\\xb6\\xe4\\xb8\\xad\\xe4\\xb8\\x80\\xe8\\xb7\\xaf\\xef\\xbc\\x8c\\xe4\\xb8\\x8e C++ SDK \\xe7\\x9a\\x84\\xe7\\xba\\xa6\\xe6\\x9d\\x9f\\xe4\\xb8\\x80\\xe8\\x87\\xb4\\xe3\\x80\\x82\n"
  "# IMU \\xe7\\xbc\\x96\\xe5\\x8f\\xb7\\xef\\xbc\\x8c\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 0\\xe2\\x80\\x934294967295\\xe3\\x80\\x82\n"
  "uint32 imu_id\n"
  "# \\xe5\\x9b\\x9b\\xe5\\x85\\x83\\xe6\\x95\\xb0\\xef\\xbc\\x8c4 \\xe4\\xb8\\xaa\\xe6\\x95\\xb0\\xef\\xbc\\x8c\\xe9\\xa1\\xba\\xe5\\xba\\x8f\\xe4\\xb8\\x8e\\xe5\\xba\\x95\\xe5\\xb1\\x82 IDL \\xe4\\xb8\\x80\\xe8\\x87\\xb4\\xe3\\x80\\x82\n"
  "float32[4] quaternion\n"
  "# \\xe4\\xb8\\x89\\xe8\\xbd\\xb4\\xe9\\x99\\x80\\xe8\\x9e\\xba\\xe4\\xbb\\xaa\\xef\\xbc\\x8c\\xe9\\xa1\\xba\\xe5\\xba\\x8f\\xe4\\xb8\\x8e\\xe5\\xba\\x95\\xe5\\xb1\\x82 IDL \\xe4\\xb8\\x80\\xe8\\x87\\xb4\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xe9\\x80\\x9a\\xe5\\xb8\\xb8\\xe4\\xb8\\xba rad/s\\xe3\\x80\\x82\n"
  "float32[3] gyroscope\n"
  "# \\xe4\\xb8\\x89\\xe8\\xbd\\xb4\\xe5\\x8a\\xa0\\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xef\\xbc\\x8c\\xe9\\xa1\\xba\\xe5\\xba\\x8f\\xe4\\xb8\\x8e\\xe5\\xba\\x95\\xe5\\xb1\\x82 IDL \\xe4\\xb8\\x80\\xe8\\x87\\xb4\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d\\xe9\\x80\\x9a\\xe5\\xb8\\xb8\\xe4\\xb8\\xba m/s^2\\xe3\\x80\\x82\n"
  "float32[3] accelerometer\n"
  "# \\xe6\\xac\\xa7\\xe6\\x8b\\x89\\xe8\\xa7\\x92\\xef\\xbc\\x8c\\xe9\\xa1\\xba\\xe5\\xba\\x8f\\xe6\\xbb\\x9a\\xe8\\xbd\\xac\\xe3\\x80\\x81\\xe4\\xbf\\xaf\\xe4\\xbb\\xb0\\xe3\\x80\\x81\\xe5\\x81\\x8f\\xe8\\x88\\xaa\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d rad\\xe3\\x80\\x82\n"
  "float32[3] rpy\n"
  "# \\xe6\\xb8\\xa9\\xe5\\xba\\xa6\\xe5\\x8e\\x9f\\xe5\\xa7\\x8b\\xe5\\x80\\xbc\\xef\\xbc\\x8c\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 0\\xe2\\x80\\x93255\\xe3\\x80\\x82\n"
  "uint8 temperature\n"
  "# \\xe9\\x87\\x87\\xe6\\xa0\\xb7\\xe6\\x97\\xb6\\xe9\\x97\\xb4\\xe6\\x88\\xb3\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d us\\xe3\\x80\\x82\n"
  "uint64 timestamp_us";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__msg__IMUState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__msg__IMUState__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 403, 403},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__msg__IMUState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__msg__IMUState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
