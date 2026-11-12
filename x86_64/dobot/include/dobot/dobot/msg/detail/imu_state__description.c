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
  "# IMU state. Topics rt/pelvis/imu/data and rt/torso/imu/data share this type.\n"
  "# Subscribe to only one of them per session, consistent with the C++ SDK constraint.\n"
  "# IMU id, range 0-4294967295.\n"
  "uint32 imu_id\n"
  "# Quaternion, 4 values, order matches the underlying IDL.\n"
  "float32[4] quaternion\n"
  "# 3-axis gyroscope, order matches the underlying IDL, usually in rad/s.\n"
  "float32[3] gyroscope\n"
  "# 3-axis acceleration, order matches the underlying IDL, usually in m/s^2.\n"
  "float32[3] accelerometer\n"
  "# Euler angles in the order roll, pitch, yaw, in rad.\n"
  "float32[3] rpy\n"
  "# Raw temperature, range 0-255.\n"
  "uint8 temperature\n"
  "# Sampling timestamp, in us.\n"
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
    {toplevel_type_raw_source, 648, 648},
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
