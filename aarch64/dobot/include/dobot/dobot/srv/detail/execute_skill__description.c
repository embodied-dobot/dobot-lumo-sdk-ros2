// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:srv/ExecuteSkill.idl
// generated code does not contain a copyright notice

#include "dobot/srv/detail/execute_skill__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__ExecuteSkill__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0x17, 0x71, 0x0d, 0xf2, 0x5f, 0x0f, 0x29,
      0x1c, 0x36, 0x00, 0x1e, 0xf6, 0xf5, 0x72, 0x43,
      0xc9, 0x91, 0x74, 0x5c, 0x0c, 0xfd, 0x86, 0xb8,
      0xf6, 0x72, 0xa0, 0x48, 0xf4, 0x28, 0xa3, 0x02,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__ExecuteSkill_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0xac, 0x40, 0x6e, 0xc5, 0x4f, 0xd3, 0xae,
      0xb0, 0xc3, 0x82, 0x9d, 0x84, 0x5f, 0x9d, 0xcd,
      0x0e, 0xa0, 0x78, 0xc7, 0x64, 0xc7, 0x57, 0x1f,
      0x7b, 0x6b, 0x64, 0x4d, 0x19, 0xed, 0xc3, 0x66,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__ExecuteSkill_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0x61, 0x07, 0xc1, 0xe5, 0xb5, 0xeb, 0x19,
      0x22, 0xb6, 0x9d, 0x78, 0xac, 0x74, 0x7a, 0x7b,
      0x28, 0xf0, 0x83, 0xcd, 0x34, 0xdf, 0xce, 0xb7,
      0xb4, 0x5f, 0xe7, 0x91, 0x89, 0xc4, 0xd8, 0xa2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__ExecuteSkill_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0xe2, 0x63, 0xbc, 0x88, 0x8e, 0xfa, 0x85,
      0xa8, 0x9d, 0xde, 0xc0, 0x73, 0x78, 0xb2, 0x78,
      0xf4, 0xaf, 0x0e, 0x60, 0xc8, 0x32, 0xb6, 0x1d,
      0x08, 0xa9, 0xdc, 0x3c, 0x19, 0xdb, 0x08, 0x39,
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

static char dobot__srv__ExecuteSkill__TYPE_NAME[] = "dobot/srv/ExecuteSkill";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dobot__srv__ExecuteSkill_Event__TYPE_NAME[] = "dobot/srv/ExecuteSkill_Event";
static char dobot__srv__ExecuteSkill_Request__TYPE_NAME[] = "dobot/srv/ExecuteSkill_Request";
static char dobot__srv__ExecuteSkill_Response__TYPE_NAME[] = "dobot/srv/ExecuteSkill_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char dobot__srv__ExecuteSkill__FIELD_NAME__request_message[] = "request_message";
static char dobot__srv__ExecuteSkill__FIELD_NAME__response_message[] = "response_message";
static char dobot__srv__ExecuteSkill__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dobot__srv__ExecuteSkill__FIELDS[] = {
  {
    {dobot__srv__ExecuteSkill__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__ExecuteSkill_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__ExecuteSkill__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__ExecuteSkill_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__ExecuteSkill__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__ExecuteSkill_Event__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__ExecuteSkill__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__ExecuteSkill_Event__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__ExecuteSkill_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__ExecuteSkill_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__ExecuteSkill__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__ExecuteSkill__TYPE_NAME, 22, 22},
      {dobot__srv__ExecuteSkill__FIELDS, 3, 3},
    },
    {dobot__srv__ExecuteSkill__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dobot__srv__ExecuteSkill_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dobot__srv__ExecuteSkill_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dobot__srv__ExecuteSkill_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__ExecuteSkill_Request__FIELD_NAME__file_path[] = "file_path";
static char dobot__srv__ExecuteSkill_Request__FIELD_NAME__timeout_ms[] = "timeout_ms";

static rosidl_runtime_c__type_description__Field dobot__srv__ExecuteSkill_Request__FIELDS[] = {
  {
    {dobot__srv__ExecuteSkill_Request__FIELD_NAME__file_path, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__ExecuteSkill_Request__FIELD_NAME__timeout_ms, 10, 10},
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
dobot__srv__ExecuteSkill_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__ExecuteSkill_Request__TYPE_NAME, 30, 30},
      {dobot__srv__ExecuteSkill_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__ExecuteSkill_Response__FIELD_NAME__code[] = "code";
static char dobot__srv__ExecuteSkill_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field dobot__srv__ExecuteSkill_Response__FIELDS[] = {
  {
    {dobot__srv__ExecuteSkill_Response__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__ExecuteSkill_Response__FIELD_NAME__message, 7, 7},
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
dobot__srv__ExecuteSkill_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__ExecuteSkill_Response__TYPE_NAME, 31, 31},
      {dobot__srv__ExecuteSkill_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__ExecuteSkill_Event__FIELD_NAME__info[] = "info";
static char dobot__srv__ExecuteSkill_Event__FIELD_NAME__request[] = "request";
static char dobot__srv__ExecuteSkill_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dobot__srv__ExecuteSkill_Event__FIELDS[] = {
  {
    {dobot__srv__ExecuteSkill_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__ExecuteSkill_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dobot__srv__ExecuteSkill_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__ExecuteSkill_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dobot__srv__ExecuteSkill_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__ExecuteSkill_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__ExecuteSkill_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__ExecuteSkill_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__ExecuteSkill_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__ExecuteSkill_Event__TYPE_NAME, 28, 28},
      {dobot__srv__ExecuteSkill_Event__FIELDS, 3, 3},
    },
    {dobot__srv__ExecuteSkill_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dobot__srv__ExecuteSkill_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dobot__srv__ExecuteSkill_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe6\\x92\\xad\\xe6\\x94\\xbe\\xe6\\x9c\\xba\\xe5\\x99\\xa8\\xe4\\xba\\xba\\xe6\\x8a\\x80\\xe8\\x83\\xbd\\xe7\\x9b\\xae\\xe5\\xbd\\x95\\xe9\\x87\\x8c\\xe7\\x9a\\x84\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe3\\x80\\x82\\xe5\\xaf\\xb9\\xe5\\xba\\x94 C++ \\xe7\\x9a\\x84 MotionRpc::ExecuteAction\\xe3\\x80\\x82\n"
  "# file_path \\xe6\\x98\\xaf\\xe6\\x9c\\xba\\xe5\\x99\\xa8\\xe4\\xba\\xba\\xe4\\xb8\\x8a\\xe6\\x8a\\x80\\xe8\\x83\\xbd\\xe7\\x9b\\xae\\xe5\\xbd\\x95\\xe9\\x87\\x8c\\xe7\\x9a\\x84\\xe6\\x96\\x87\\xe4\\xbb\\xb6\\xe5\\x90\\x8d\\xef\\xbc\\x8c\\xe4\\xb8\\x8d\\xe6\\x98\\xaf\\xe8\\xb0\\x83\\xe7\\x94\\xa8\\xe6\\x96\\xb9\\xe6\\x9c\\xac\\xe6\\x9c\\xba\\xe8\\xb7\\xaf\\xe5\\xbe\\x84\\xe3\\x80\\x82\n"
  "string file_path\n"
  "# \\xe5\\x8f\\xaa\\xe8\\xa6\\x86\\xe7\\x9b\\x96\\xe8\\xbf\\x99\\xe6\\xac\\xa1 RPC \\xe5\\xbe\\x80\\xe8\\xbf\\x94\\xef\\xbc\\x8c\\xe4\\xb8\\x8d\\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe5\\xb7\\xb2\\xe7\\xbb\\x8f\\xe6\\x92\\xad\\xe5\\xae\\x8c\\xe3\\x80\\x82\n"
  "int32 timeout_ms\n"
  "---\n"
  "int32 code\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__ExecuteSkill__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__ExecuteSkill__TYPE_NAME, 22, 22},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 179, 179},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__ExecuteSkill_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__ExecuteSkill_Request__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__ExecuteSkill_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__ExecuteSkill_Response__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__ExecuteSkill_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__ExecuteSkill_Event__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__ExecuteSkill__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__ExecuteSkill__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dobot__srv__ExecuteSkill_Event__get_individual_type_description_source(NULL);
    sources[3] = *dobot__srv__ExecuteSkill_Request__get_individual_type_description_source(NULL);
    sources[4] = *dobot__srv__ExecuteSkill_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__ExecuteSkill_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__ExecuteSkill_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__ExecuteSkill_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__ExecuteSkill_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__ExecuteSkill_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__ExecuteSkill_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dobot__srv__ExecuteSkill_Request__get_individual_type_description_source(NULL);
    sources[3] = *dobot__srv__ExecuteSkill_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
