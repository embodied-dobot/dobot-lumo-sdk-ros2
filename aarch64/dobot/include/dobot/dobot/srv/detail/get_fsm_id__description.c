// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:srv/GetFsmId.idl
// generated code does not contain a copyright notice

#include "dobot/srv/detail/get_fsm_id__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__GetFsmId__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x41, 0x18, 0x8e, 0x23, 0x3a, 0xfd, 0xaf, 0x0a,
      0x0d, 0x16, 0xe3, 0x97, 0xcc, 0x8b, 0x12, 0xe4,
      0xdb, 0xc5, 0x19, 0x2d, 0xb8, 0x73, 0xa6, 0xb9,
      0x0c, 0xdc, 0x45, 0xb6, 0x97, 0x76, 0xe3, 0x1e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__GetFsmId_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0x29, 0x3f, 0x03, 0x5d, 0xee, 0x89, 0xf8,
      0xdd, 0x0d, 0xe9, 0x64, 0xf6, 0x12, 0xc6, 0x14,
      0x38, 0xdf, 0x0c, 0x79, 0x8a, 0x67, 0xe7, 0x09,
      0xaa, 0x47, 0xab, 0x0d, 0xb8, 0x23, 0x43, 0xf2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__GetFsmId_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0x96, 0xe6, 0x51, 0x42, 0xfa, 0x02, 0xbb,
      0xd0, 0x0d, 0xfc, 0x66, 0x35, 0x51, 0x90, 0xce,
      0x47, 0x5d, 0x65, 0xa6, 0x10, 0x05, 0xdd, 0xdb,
      0x9d, 0x6a, 0x04, 0x39, 0x82, 0xbd, 0x63, 0x61,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__GetFsmId_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf6, 0xed, 0xc7, 0xdf, 0x01, 0x2a, 0x7e, 0x77,
      0xef, 0x0b, 0xe6, 0x1e, 0x78, 0xcf, 0x8c, 0x38,
      0x40, 0xcd, 0xfe, 0xa4, 0x72, 0x69, 0x9c, 0x6a,
      0x97, 0x5e, 0xe2, 0xe9, 0x0b, 0xab, 0x82, 0xcf,
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

static char dobot__srv__GetFsmId__TYPE_NAME[] = "dobot/srv/GetFsmId";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dobot__srv__GetFsmId_Event__TYPE_NAME[] = "dobot/srv/GetFsmId_Event";
static char dobot__srv__GetFsmId_Request__TYPE_NAME[] = "dobot/srv/GetFsmId_Request";
static char dobot__srv__GetFsmId_Response__TYPE_NAME[] = "dobot/srv/GetFsmId_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char dobot__srv__GetFsmId__FIELD_NAME__request_message[] = "request_message";
static char dobot__srv__GetFsmId__FIELD_NAME__response_message[] = "response_message";
static char dobot__srv__GetFsmId__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dobot__srv__GetFsmId__FIELDS[] = {
  {
    {dobot__srv__GetFsmId__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__GetFsmId_Request__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmId__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__GetFsmId_Response__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmId__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__GetFsmId_Event__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__GetFsmId__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmId_Event__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmId_Request__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmId_Response__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__GetFsmId__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__GetFsmId__TYPE_NAME, 18, 18},
      {dobot__srv__GetFsmId__FIELDS, 3, 3},
    },
    {dobot__srv__GetFsmId__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dobot__srv__GetFsmId_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dobot__srv__GetFsmId_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dobot__srv__GetFsmId_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__GetFsmId_Request__FIELD_NAME__timeout_ms[] = "timeout_ms";

static rosidl_runtime_c__type_description__Field dobot__srv__GetFsmId_Request__FIELDS[] = {
  {
    {dobot__srv__GetFsmId_Request__FIELD_NAME__timeout_ms, 10, 10},
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
dobot__srv__GetFsmId_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__GetFsmId_Request__TYPE_NAME, 26, 26},
      {dobot__srv__GetFsmId_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__GetFsmId_Response__FIELD_NAME__code[] = "code";
static char dobot__srv__GetFsmId_Response__FIELD_NAME__message[] = "message";
static char dobot__srv__GetFsmId_Response__FIELD_NAME__fsm_id[] = "fsm_id";

static rosidl_runtime_c__type_description__Field dobot__srv__GetFsmId_Response__FIELDS[] = {
  {
    {dobot__srv__GetFsmId_Response__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmId_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmId_Response__FIELD_NAME__fsm_id, 6, 6},
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
dobot__srv__GetFsmId_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__GetFsmId_Response__TYPE_NAME, 27, 27},
      {dobot__srv__GetFsmId_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__GetFsmId_Event__FIELD_NAME__info[] = "info";
static char dobot__srv__GetFsmId_Event__FIELD_NAME__request[] = "request";
static char dobot__srv__GetFsmId_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dobot__srv__GetFsmId_Event__FIELDS[] = {
  {
    {dobot__srv__GetFsmId_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmId_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dobot__srv__GetFsmId_Request__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmId_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dobot__srv__GetFsmId_Response__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__GetFsmId_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmId_Request__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__GetFsmId_Response__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__GetFsmId_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__GetFsmId_Event__TYPE_NAME, 24, 24},
      {dobot__srv__GetFsmId_Event__FIELDS, 3, 3},
    },
    {dobot__srv__GetFsmId_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dobot__srv__GetFsmId_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dobot__srv__GetFsmId_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe6\\x9f\\xa5\\xe8\\xaf\\xa2\\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe8\\xbf\\x90\\xe6\\x8e\\xa7\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\x9c\\xba\\xe7\\xbc\\x96\\xe5\\x8f\\xb7\\xe3\\x80\\x820 \\xe4\\xb9\\x9f\\xe6\\x98\\xaf\\xe5\\x90\\x88\\xe6\\xb3\\x95\\xe7\\xbc\\x96\\xe5\\x8f\\xb7\\xe3\\x80\\x82\n"
  "int32 timeout_ms\n"
  "---\n"
  "int32 code\n"
  "string message\n"
  "int32 fsm_id";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__GetFsmId__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__GetFsmId__TYPE_NAME, 18, 18},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 84, 84},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__GetFsmId_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__GetFsmId_Request__TYPE_NAME, 26, 26},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__GetFsmId_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__GetFsmId_Response__TYPE_NAME, 27, 27},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__GetFsmId_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__GetFsmId_Event__TYPE_NAME, 24, 24},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__GetFsmId__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__GetFsmId__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dobot__srv__GetFsmId_Event__get_individual_type_description_source(NULL);
    sources[3] = *dobot__srv__GetFsmId_Request__get_individual_type_description_source(NULL);
    sources[4] = *dobot__srv__GetFsmId_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__GetFsmId_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__GetFsmId_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__GetFsmId_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__GetFsmId_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__GetFsmId_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__GetFsmId_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dobot__srv__GetFsmId_Request__get_individual_type_description_source(NULL);
    sources[3] = *dobot__srv__GetFsmId_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
