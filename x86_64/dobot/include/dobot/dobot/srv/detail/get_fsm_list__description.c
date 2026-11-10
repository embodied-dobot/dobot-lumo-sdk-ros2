// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:srv/GetFsmList.idl
// generated code does not contain a copyright notice

#include "dobot/srv/detail/get_fsm_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__GetFsmList__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0x8a, 0x90, 0xfb, 0xc5, 0x43, 0x69, 0x4f,
      0x53, 0x6c, 0xaa, 0x94, 0xca, 0x2f, 0x28, 0x07,
      0x26, 0xdb, 0xcb, 0xd7, 0x54, 0x74, 0x6a, 0x24,
      0x6c, 0xa0, 0xa3, 0xf8, 0xee, 0x12, 0xc0, 0x26,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__GetFsmList_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xed, 0x74, 0xc5, 0x4b, 0xf1, 0xbb, 0x5e, 0xf0,
      0xae, 0xf1, 0x0f, 0x50, 0x28, 0x0e, 0xe4, 0x9d,
      0x5f, 0xf3, 0x3d, 0x73, 0x72, 0x9b, 0xcb, 0x7e,
      0xf0, 0x6f, 0xde, 0x1f, 0x8c, 0xcc, 0x6b, 0xc4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__GetFsmList_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf4, 0x50, 0x17, 0x54, 0x79, 0x12, 0x4c, 0xe0,
      0x79, 0xd8, 0xc8, 0x6e, 0x76, 0xb9, 0x6c, 0x92,
      0x50, 0x5e, 0x27, 0x07, 0x06, 0x6e, 0xb5, 0xc3,
      0x96, 0x66, 0x73, 0xc4, 0xe2, 0xfc, 0x05, 0xc8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__GetFsmList_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0x41, 0x4d, 0xc6, 0xe5, 0x0c, 0xd8, 0x05,
      0x34, 0x48, 0x09, 0xf1, 0x7f, 0x6d, 0x50, 0xaa,
      0xc0, 0xce, 0x7a, 0xaf, 0xf4, 0x16, 0x2e, 0x43,
      0x17, 0x31, 0x9f, 0x8d, 0xe6, 0x8a, 0xe9, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "dobot/msg/detail/fsm_info__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t dobot__msg__FsmInfo__EXPECTED_HASH = {1, {
    0x35, 0x71, 0xe4, 0xf4, 0x2d, 0x8d, 0xbd, 0x47,
    0x7a, 0x16, 0xd2, 0x44, 0xe0, 0x6e, 0x3e, 0x3d,
    0x11, 0xee, 0xe9, 0x2d, 0x5f, 0xfc, 0x72, 0x52,
    0xcf, 0x60, 0xda, 0xbe, 0x08, 0xfd, 0xc8, 0x36,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char dobot__srv__GetFsmList__TYPE_NAME[] = "dobot/srv/GetFsmList";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dobot__msg__FsmInfo__TYPE_NAME[] = "dobot/msg/FsmInfo";
static char dobot__srv__GetFsmList_Event__TYPE_NAME[] = "dobot/srv/GetFsmList_Event";
static char dobot__srv__GetFsmList_Request__TYPE_NAME[] = "dobot/srv/GetFsmList_Request";
static char dobot__srv__GetFsmList_Response__TYPE_NAME[] = "dobot/srv/GetFsmList_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char dobot__srv__GetFsmList__FIELD_NAME__request_message[] = "request_message";
static char dobot__srv__GetFsmList__FIELD_NAME__response_message[] = "response_message";
static char dobot__srv__GetFsmList__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dobot__srv__GetFsmList__FIELDS[] = {
  {
    {dobot__srv__GetFsmList__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__GetFsmList_Request__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmList__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__GetFsmList_Response__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmList__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__GetFsmList_Event__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__GetFsmList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__msg__FsmInfo__TYPE_NAME, 17, 17},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmList_Event__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmList_Request__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmList_Response__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__GetFsmList__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__GetFsmList__TYPE_NAME, 20, 20},
      {dobot__srv__GetFsmList__FIELDS, 3, 3},
    },
    {dobot__srv__GetFsmList__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dobot__msg__FsmInfo__EXPECTED_HASH, dobot__msg__FsmInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = dobot__msg__FsmInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dobot__srv__GetFsmList_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dobot__srv__GetFsmList_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = dobot__srv__GetFsmList_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__GetFsmList_Request__FIELD_NAME__timeout_ms[] = "timeout_ms";

static rosidl_runtime_c__type_description__Field dobot__srv__GetFsmList_Request__FIELDS[] = {
  {
    {dobot__srv__GetFsmList_Request__FIELD_NAME__timeout_ms, 10, 10},
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
dobot__srv__GetFsmList_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__GetFsmList_Request__TYPE_NAME, 28, 28},
      {dobot__srv__GetFsmList_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__GetFsmList_Response__FIELD_NAME__code[] = "code";
static char dobot__srv__GetFsmList_Response__FIELD_NAME__message[] = "message";
static char dobot__srv__GetFsmList_Response__FIELD_NAME__fsm_list[] = "fsm_list";

static rosidl_runtime_c__type_description__Field dobot__srv__GetFsmList_Response__FIELDS[] = {
  {
    {dobot__srv__GetFsmList_Response__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmList_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmList_Response__FIELD_NAME__fsm_list, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {dobot__msg__FsmInfo__TYPE_NAME, 17, 17},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__GetFsmList_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {dobot__msg__FsmInfo__TYPE_NAME, 17, 17},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__GetFsmList_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__GetFsmList_Response__TYPE_NAME, 29, 29},
      {dobot__srv__GetFsmList_Response__FIELDS, 3, 3},
    },
    {dobot__srv__GetFsmList_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&dobot__msg__FsmInfo__EXPECTED_HASH, dobot__msg__FsmInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = dobot__msg__FsmInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__GetFsmList_Event__FIELD_NAME__info[] = "info";
static char dobot__srv__GetFsmList_Event__FIELD_NAME__request[] = "request";
static char dobot__srv__GetFsmList_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dobot__srv__GetFsmList_Event__FIELDS[] = {
  {
    {dobot__srv__GetFsmList_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmList_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dobot__srv__GetFsmList_Request__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmList_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dobot__srv__GetFsmList_Response__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__GetFsmList_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__msg__FsmInfo__TYPE_NAME, 17, 17},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmList_Request__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmList_Response__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__GetFsmList_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__GetFsmList_Event__TYPE_NAME, 26, 26},
      {dobot__srv__GetFsmList_Event__FIELDS, 3, 3},
    },
    {dobot__srv__GetFsmList_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&dobot__msg__FsmInfo__EXPECTED_HASH, dobot__msg__FsmInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = dobot__msg__FsmInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dobot__srv__GetFsmList_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dobot__srv__GetFsmList_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe6\\x9f\\xa5\\xe8\\xaf\\xa2\\xe6\\x9c\\xba\\xe5\\x99\\xa8\\xe4\\xba\\xba\\xe4\\xb8\\x8a\\xe5\\x85\\xa8\\xe9\\x83\\xa8\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\x9c\\xba\\xef\\xbc\\x8c\\xe5\\x8c\\x85\\xe6\\x8b\\xac\\xe8\\x88\\x9e\\xe8\\xb9\\x88\\xe3\\x80\\x82\\xe5\\xaf\\xb9\\xe5\\xba\\x94 C++ \\xe7\\x9a\\x84 Motion::GetFsmList\\xe3\\x80\\x82\n"
  "int32 timeout_ms\n"
  "---\n"
  "# 0 \\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xe3\\x80\\x82\\xe9\\x9d\\x9e 0 \\xe8\\xa7\\x81 dobot_robot_sdk \\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xe7\\xa0\\x81\\xe3\\x80\\x82\n"
  "int32 code\n"
  "string message\n"
  "FsmInfo[] fsm_list";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__GetFsmList__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__GetFsmList__TYPE_NAME, 20, 20},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 148, 148},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__GetFsmList_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__GetFsmList_Request__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__GetFsmList_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__GetFsmList_Response__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__GetFsmList_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__GetFsmList_Event__TYPE_NAME, 26, 26},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__GetFsmList__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__GetFsmList__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dobot__msg__FsmInfo__get_individual_type_description_source(NULL);
    sources[3] = *dobot__srv__GetFsmList_Event__get_individual_type_description_source(NULL);
    sources[4] = *dobot__srv__GetFsmList_Request__get_individual_type_description_source(NULL);
    sources[5] = *dobot__srv__GetFsmList_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__GetFsmList_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__GetFsmList_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__GetFsmList_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__GetFsmList_Response__get_individual_type_description_source(NULL),
    sources[1] = *dobot__msg__FsmInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__GetFsmList_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__GetFsmList_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dobot__msg__FsmInfo__get_individual_type_description_source(NULL);
    sources[3] = *dobot__srv__GetFsmList_Request__get_individual_type_description_source(NULL);
    sources[4] = *dobot__srv__GetFsmList_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
