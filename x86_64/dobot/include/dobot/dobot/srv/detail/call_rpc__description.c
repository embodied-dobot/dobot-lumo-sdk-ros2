// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:srv/CallRpc.idl
// generated code does not contain a copyright notice

#include "dobot/srv/detail/call_rpc__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__CallRpc__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0x33, 0x8f, 0x2b, 0x78, 0xe7, 0x7a, 0xca,
      0xb2, 0x6d, 0x76, 0xbc, 0xee, 0x14, 0x76, 0x2f,
      0xd7, 0xea, 0x94, 0x48, 0x5f, 0x30, 0xa5, 0x7a,
      0x1b, 0xfa, 0x7f, 0x35, 0x19, 0x84, 0x71, 0xdd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__CallRpc_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd1, 0xb2, 0x56, 0xdd, 0xc3, 0x86, 0xd4, 0x7f,
      0x67, 0xfb, 0xd7, 0x27, 0x6a, 0xdd, 0x0e, 0xe9,
      0x4d, 0x3d, 0xd6, 0x7f, 0xf1, 0xe4, 0xb4, 0xc1,
      0xd3, 0xcb, 0x73, 0xa0, 0xe5, 0x99, 0x18, 0x13,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__CallRpc_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0x96, 0x28, 0xc8, 0x48, 0x9b, 0xba, 0x6c,
      0xcc, 0x2e, 0x58, 0x1d, 0x19, 0x33, 0x1e, 0xb5,
      0xf9, 0xc3, 0x73, 0x65, 0x58, 0x3d, 0xa0, 0x78,
      0x36, 0x5f, 0x50, 0x8b, 0xaa, 0x0b, 0x80, 0x90,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__CallRpc_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8a, 0x8d, 0x95, 0x8e, 0x35, 0xc8, 0x1e, 0xd4,
      0x0f, 0xaf, 0x90, 0x0e, 0x2f, 0xfc, 0x7e, 0xc3,
      0xcf, 0xc9, 0xc0, 0x16, 0xe6, 0x9c, 0xf0, 0x60,
      0x52, 0x2d, 0x83, 0xe7, 0x2f, 0x3c, 0x8e, 0x26,
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

static char dobot__srv__CallRpc__TYPE_NAME[] = "dobot/srv/CallRpc";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dobot__srv__CallRpc_Event__TYPE_NAME[] = "dobot/srv/CallRpc_Event";
static char dobot__srv__CallRpc_Request__TYPE_NAME[] = "dobot/srv/CallRpc_Request";
static char dobot__srv__CallRpc_Response__TYPE_NAME[] = "dobot/srv/CallRpc_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char dobot__srv__CallRpc__FIELD_NAME__request_message[] = "request_message";
static char dobot__srv__CallRpc__FIELD_NAME__response_message[] = "response_message";
static char dobot__srv__CallRpc__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dobot__srv__CallRpc__FIELDS[] = {
  {
    {dobot__srv__CallRpc__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__CallRpc_Request__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__CallRpc__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__CallRpc_Response__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__CallRpc__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__CallRpc_Event__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__CallRpc__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__CallRpc_Event__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__CallRpc_Request__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__CallRpc_Response__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__CallRpc__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__CallRpc__TYPE_NAME, 17, 17},
      {dobot__srv__CallRpc__FIELDS, 3, 3},
    },
    {dobot__srv__CallRpc__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dobot__srv__CallRpc_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dobot__srv__CallRpc_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dobot__srv__CallRpc_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__CallRpc_Request__FIELD_NAME__method[] = "method";
static char dobot__srv__CallRpc_Request__FIELD_NAME__params_json[] = "params_json";
static char dobot__srv__CallRpc_Request__FIELD_NAME__timeout_ms[] = "timeout_ms";

static rosidl_runtime_c__type_description__Field dobot__srv__CallRpc_Request__FIELDS[] = {
  {
    {dobot__srv__CallRpc_Request__FIELD_NAME__method, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__CallRpc_Request__FIELD_NAME__params_json, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__CallRpc_Request__FIELD_NAME__timeout_ms, 10, 10},
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
dobot__srv__CallRpc_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__CallRpc_Request__TYPE_NAME, 25, 25},
      {dobot__srv__CallRpc_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__CallRpc_Response__FIELD_NAME__code[] = "code";
static char dobot__srv__CallRpc_Response__FIELD_NAME__message[] = "message";
static char dobot__srv__CallRpc_Response__FIELD_NAME__response_json[] = "response_json";

static rosidl_runtime_c__type_description__Field dobot__srv__CallRpc_Response__FIELDS[] = {
  {
    {dobot__srv__CallRpc_Response__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__CallRpc_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__CallRpc_Response__FIELD_NAME__response_json, 13, 13},
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
dobot__srv__CallRpc_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__CallRpc_Response__TYPE_NAME, 26, 26},
      {dobot__srv__CallRpc_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__CallRpc_Event__FIELD_NAME__info[] = "info";
static char dobot__srv__CallRpc_Event__FIELD_NAME__request[] = "request";
static char dobot__srv__CallRpc_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dobot__srv__CallRpc_Event__FIELDS[] = {
  {
    {dobot__srv__CallRpc_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__CallRpc_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dobot__srv__CallRpc_Request__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__CallRpc_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dobot__srv__CallRpc_Response__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__CallRpc_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__CallRpc_Request__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__CallRpc_Response__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__CallRpc_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__CallRpc_Event__TYPE_NAME, 23, 23},
      {dobot__srv__CallRpc_Event__FIELDS, 3, 3},
    },
    {dobot__srv__CallRpc_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dobot__srv__CallRpc_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dobot__srv__CallRpc_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe7\\x9b\\xb4\\xe6\\x8e\\xa5\\xe8\\xb0\\x83\\xe7\\x94\\xa8\\xe6\\x9c\\xba\\xe5\\x99\\xa8\\xe4\\xba\\xba\\xe4\\xb8\\x8a\\xe7\\x9a\\x84\\xe4\\xb8\\x80\\xe4\\xb8\\xaa JSON-RPC \\xe6\\x96\\xb9\\xe6\\xb3\\x95\\xe3\\x80\\x82\\xe5\\xaf\\xb9\\xe5\\xba\\x94 C++ \\xe7\\x9a\\x84 MotionRpc::Call\\xe3\\x80\\x82\n"
  "# \\xe7\\xbb\\x99\\xe8\\xbf\\x98\\xe6\\xb2\\xa1\\xe6\\x9c\\x89\\xe5\\x8d\\x95\\xe7\\x8b\\xac\\xe6\\x9c\\x8d\\xe5\\x8a\\xa1\\xe7\\x9a\\x84\\xe6\\x96\\xb9\\xe6\\xb3\\x95\\xe7\\x94\\xa8\\xe3\\x80\\x82\\xe4\\xbc\\x9a\\xe6\\x94\\xb9\\xe5\\x8f\\x98\\xe6\\x9c\\xba\\xe5\\x99\\xa8\\xe4\\xba\\xba\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe7\\x9a\\x84\\xe6\\x96\\xb9\\xe6\\xb3\\x95\\xe8\\xa6\\x81\\xe8\\x87\\xaa\\xe5\\xb7\\xb1\\xe8\\xb4\\x9f\\xe8\\xb4\\xa3\\xe5\\xae\\x89\\xe5\\x85\\xa8\\xe3\\x80\\x82\n"
  "string method\n"
  "# JSON \\xe5\\xaf\\xb9\\xe8\\xb1\\xa1\\xe6\\x96\\x87\\xe6\\x9c\\xac\\xef\\xbc\\x8c\\xe4\\xbe\\x8b\\xe5\\xa6\\x82 \"{}\" \\xe6\\x88\\x96 \"{\\\\\"fsm_id\\\\\":300}\"\\xe3\\x80\\x82\n"
  "string params_json\n"
  "int32 timeout_ms\n"
  "---\n"
  "# 0 \\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe4\\xbc\\xa0\\xe8\\xbe\\x93\\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xe4\\xb8\\x94\\xe5\\x93\\x8d\\xe5\\xba\\x94\\xe9\\x87\\x8c\\xe6\\x9c\\x89 result\\xe3\\x80\\x82result \\xe7\\x9a\\x84\\xe4\\xb8\\x9a\\xe5\\x8a\\xa1\\xe5\\x90\\xab\\xe4\\xb9\\x89\\xe7\\x94\\xb1\\xe8\\xb0\\x83\\xe7\\x94\\xa8\\xe6\\x96\\xb9\\xe6\\x8c\\x89\\xe6\\x96\\xb9\\xe6\\xb3\\x95\\xe5\\x88\\xa4\\xe6\\x96\\xad\\xe3\\x80\\x82\n"
  "int32 code\n"
  "string message\n"
  "# \\xe6\\x9c\\xba\\xe5\\x99\\xa8\\xe4\\xba\\xba\\xe8\\xbf\\x94\\xe5\\x9b\\x9e\\xe7\\x9a\\x84\\xe5\\x8e\\x9f\\xe5\\xa7\\x8b JSON \\xe6\\x96\\x87\\xe6\\x9c\\xac\\xe3\\x80\\x82\n"
  "string response_json";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__CallRpc__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__CallRpc__TYPE_NAME, 17, 17},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 296, 296},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__CallRpc_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__CallRpc_Request__TYPE_NAME, 25, 25},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__CallRpc_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__CallRpc_Response__TYPE_NAME, 26, 26},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__CallRpc_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__CallRpc_Event__TYPE_NAME, 23, 23},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__CallRpc__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__CallRpc__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dobot__srv__CallRpc_Event__get_individual_type_description_source(NULL);
    sources[3] = *dobot__srv__CallRpc_Request__get_individual_type_description_source(NULL);
    sources[4] = *dobot__srv__CallRpc_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__CallRpc_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__CallRpc_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__CallRpc_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__CallRpc_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__CallRpc_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__CallRpc_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dobot__srv__CallRpc_Request__get_individual_type_description_source(NULL);
    sources[3] = *dobot__srv__CallRpc_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
