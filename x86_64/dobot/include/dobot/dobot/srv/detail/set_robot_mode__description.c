// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:srv/SetRobotMode.idl
// generated code does not contain a copyright notice

#include "dobot/srv/detail/set_robot_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__SetRobotMode__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x10, 0x35, 0x7f, 0xe9, 0xe9, 0x03, 0xdc, 0x50,
      0xdd, 0xe5, 0xfd, 0xaf, 0xa0, 0x5a, 0xd3, 0x65,
      0x4a, 0xb0, 0xc8, 0xf5, 0x7c, 0x39, 0xcd, 0xb9,
      0x42, 0xe6, 0x00, 0x75, 0x45, 0x76, 0x44, 0xaa,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__SetRobotMode_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0x5b, 0xd3, 0x52, 0x08, 0xd2, 0x85, 0xbd,
      0x15, 0x86, 0x68, 0x47, 0x1e, 0x4d, 0x49, 0xda,
      0x79, 0xf7, 0x57, 0x62, 0xe9, 0x3a, 0xf7, 0x17,
      0xcc, 0x84, 0x8b, 0x72, 0xb8, 0xcb, 0x39, 0x8c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__SetRobotMode_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe2, 0xe4, 0x30, 0xf8, 0x30, 0x09, 0x03, 0x55,
      0xd5, 0xb0, 0x38, 0xe5, 0xa6, 0x17, 0x32, 0x1d,
      0xe0, 0xa3, 0x62, 0x81, 0xc4, 0xda, 0x4d, 0x42,
      0xbd, 0xb7, 0xee, 0xe9, 0x43, 0x0d, 0xbd, 0x99,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__SetRobotMode_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x65, 0x19, 0x72, 0xec, 0xdb, 0x05, 0xa7, 0x20,
      0xee, 0xda, 0x83, 0x6b, 0x02, 0x18, 0x37, 0xf8,
      0x28, 0x5c, 0xb9, 0x7c, 0x3d, 0x46, 0xb0, 0x2a,
      0xbb, 0xbb, 0xa5, 0xc1, 0x85, 0x0e, 0x8a, 0xf8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char dobot__srv__SetRobotMode__TYPE_NAME[] = "dobot/srv/SetRobotMode";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dobot__srv__SetRobotMode_Event__TYPE_NAME[] = "dobot/srv/SetRobotMode_Event";
static char dobot__srv__SetRobotMode_Request__TYPE_NAME[] = "dobot/srv/SetRobotMode_Request";
static char dobot__srv__SetRobotMode_Response__TYPE_NAME[] = "dobot/srv/SetRobotMode_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char dobot__srv__SetRobotMode__FIELD_NAME__request_message[] = "request_message";
static char dobot__srv__SetRobotMode__FIELD_NAME__response_message[] = "response_message";
static char dobot__srv__SetRobotMode__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dobot__srv__SetRobotMode__FIELDS[] = {
  {
    {dobot__srv__SetRobotMode__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__SetRobotMode_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetRobotMode__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__SetRobotMode_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetRobotMode__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__SetRobotMode_Event__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__SetRobotMode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetRobotMode_Event__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetRobotMode_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetRobotMode_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__SetRobotMode__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__SetRobotMode__TYPE_NAME, 22, 22},
      {dobot__srv__SetRobotMode__FIELDS, 3, 3},
    },
    {dobot__srv__SetRobotMode__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dobot__srv__SetRobotMode_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dobot__srv__SetRobotMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dobot__srv__SetRobotMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__SetRobotMode_Request__FIELD_NAME__mode[] = "mode";
static char dobot__srv__SetRobotMode_Request__FIELD_NAME__timeout_ms[] = "timeout_ms";

static rosidl_runtime_c__type_description__Field dobot__srv__SetRobotMode_Request__FIELDS[] = {
  {
    {dobot__srv__SetRobotMode_Request__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetRobotMode_Request__FIELD_NAME__timeout_ms, 10, 10},
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
dobot__srv__SetRobotMode_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__SetRobotMode_Request__TYPE_NAME, 30, 30},
      {dobot__srv__SetRobotMode_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__SetRobotMode_Response__FIELD_NAME__code[] = "code";
static char dobot__srv__SetRobotMode_Response__FIELD_NAME__message[] = "message";
static char dobot__srv__SetRobotMode_Response__FIELD_NAME__fsm_id[] = "fsm_id";

static rosidl_runtime_c__type_description__Field dobot__srv__SetRobotMode_Response__FIELDS[] = {
  {
    {dobot__srv__SetRobotMode_Response__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetRobotMode_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetRobotMode_Response__FIELD_NAME__fsm_id, 6, 6},
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
dobot__srv__SetRobotMode_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__SetRobotMode_Response__TYPE_NAME, 31, 31},
      {dobot__srv__SetRobotMode_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__SetRobotMode_Event__FIELD_NAME__info[] = "info";
static char dobot__srv__SetRobotMode_Event__FIELD_NAME__request[] = "request";
static char dobot__srv__SetRobotMode_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dobot__srv__SetRobotMode_Event__FIELDS[] = {
  {
    {dobot__srv__SetRobotMode_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetRobotMode_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dobot__srv__SetRobotMode_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetRobotMode_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dobot__srv__SetRobotMode_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__SetRobotMode_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetRobotMode_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetRobotMode_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__SetRobotMode_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__SetRobotMode_Event__TYPE_NAME, 28, 28},
      {dobot__srv__SetRobotMode_Event__FIELDS, 3, 3},
    },
    {dobot__srv__SetRobotMode_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dobot__srv__SetRobotMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dobot__srv__SetRobotMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe5\\x88\\x87\\xe6\\x8d\\xa2\\xe8\\xbf\\x90\\xe6\\x8e\\xa7\\xe6\\xa8\\xa1\\xe5\\xbc\\x8f\\xe3\\x80\\x82mode \\xe5\\x8f\\x96\\xe5\\x80\\xbc\\xef\\xbc\\x9azero_torque damping custom_debug ready standing walking\\xe3\\x80\\x82\n"
  "# \\xe5\\xaf\\xb9\\xe5\\xba\\x94\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\x9c\\xba\\xe7\\xbc\\x96\\xe5\\x8f\\xb7 0 / 1 / 2 / 100 / 300 / 304\\xe3\\x80\\x82\n"
  "string mode\n"
  "# \\xe6\\x9c\\xac\\xe6\\xac\\xa1\\xe8\\xb0\\x83\\xe7\\x94\\xa8\\xe7\\x9a\\x84\\xe8\\xb6\\x85\\xe6\\x97\\xb6\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d ms\\xef\\xbc\\x8c\\xe8\\x8c\\x83\\xe5\\x9b\\xb4 1\\xe2\\x80\\x9360000\\xe3\\x80\\x82\n"
  "int32 timeout_ms\n"
  "---\n"
  "# 0 \\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xe3\\x80\\x82\\xe9\\x9d\\x9e 0 \\xe8\\xa7\\x81 dobot_robot_sdk \\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xe7\\xa0\\x81\\xe3\\x80\\x82\n"
  "int32 code\n"
  "string message\n"
  "# \\xe5\\xb7\\xb2\\xe4\\xb8\\x8b\\xe5\\x8f\\x91\\xe7\\x9a\\x84\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\x9c\\xba\\xe7\\xbc\\x96\\xe5\\x8f\\xb7\\xe3\\x80\\x82\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\\xe6\\x97\\xb6\\xe4\\xb8\\xba -1\\xe3\\x80\\x82\n"
  "int32 fsm_id";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__SetRobotMode__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__SetRobotMode__TYPE_NAME, 22, 22},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 268, 268},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__SetRobotMode_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__SetRobotMode_Request__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__SetRobotMode_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__SetRobotMode_Response__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__SetRobotMode_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__SetRobotMode_Event__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__SetRobotMode__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__SetRobotMode__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dobot__srv__SetRobotMode_Event__get_individual_type_description_source(NULL);
    sources[3] = *dobot__srv__SetRobotMode_Request__get_individual_type_description_source(NULL);
    sources[4] = *dobot__srv__SetRobotMode_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__SetRobotMode_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__SetRobotMode_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__SetRobotMode_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__SetRobotMode_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__SetRobotMode_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__SetRobotMode_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dobot__srv__SetRobotMode_Request__get_individual_type_description_source(NULL);
    sources[3] = *dobot__srv__SetRobotMode_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
