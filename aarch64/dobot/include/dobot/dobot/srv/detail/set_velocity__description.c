// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:srv/SetVelocity.idl
// generated code does not contain a copyright notice

#include "dobot/srv/detail/set_velocity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__SetVelocity__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0xb0, 0x4e, 0x8c, 0xe5, 0x2b, 0x49, 0x57,
      0x7f, 0x8f, 0x28, 0xfc, 0x1e, 0xf1, 0x09, 0x0a,
      0x32, 0x0b, 0xe8, 0xe3, 0x0b, 0xc8, 0xa3, 0x1d,
      0xae, 0x61, 0x77, 0xb0, 0x7a, 0x2d, 0x15, 0x75,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__SetVelocity_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfc, 0xc8, 0x24, 0x89, 0x6f, 0x31, 0x4b, 0x5b,
      0xb1, 0xab, 0x62, 0x81, 0xcb, 0x49, 0xaf, 0x03,
      0xad, 0x0b, 0xaf, 0xa0, 0xa6, 0xf2, 0xa4, 0x50,
      0xbe, 0x31, 0xc7, 0xda, 0x1d, 0x2f, 0x1c, 0x32,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__SetVelocity_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4d, 0xca, 0x8d, 0x20, 0xa5, 0xc5, 0x62, 0x62,
      0x24, 0x89, 0xb0, 0xe4, 0xac, 0xd0, 0x77, 0x3c,
      0x10, 0x9e, 0x21, 0x36, 0x00, 0xea, 0x92, 0x64,
      0xfd, 0xd4, 0x61, 0xcd, 0x48, 0x48, 0x17, 0x89,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__SetVelocity_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0x5a, 0x1a, 0x02, 0x32, 0x2c, 0x53, 0x5f,
      0xae, 0xea, 0xb0, 0x7b, 0x06, 0xfb, 0xe1, 0xa2,
      0x8e, 0xe3, 0x0e, 0x74, 0x23, 0x19, 0x56, 0xee,
      0x35, 0x3d, 0x22, 0x0f, 0xf8, 0xf5, 0x62, 0xe3,
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

static char dobot__srv__SetVelocity__TYPE_NAME[] = "dobot/srv/SetVelocity";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dobot__srv__SetVelocity_Event__TYPE_NAME[] = "dobot/srv/SetVelocity_Event";
static char dobot__srv__SetVelocity_Request__TYPE_NAME[] = "dobot/srv/SetVelocity_Request";
static char dobot__srv__SetVelocity_Response__TYPE_NAME[] = "dobot/srv/SetVelocity_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char dobot__srv__SetVelocity__FIELD_NAME__request_message[] = "request_message";
static char dobot__srv__SetVelocity__FIELD_NAME__response_message[] = "response_message";
static char dobot__srv__SetVelocity__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dobot__srv__SetVelocity__FIELDS[] = {
  {
    {dobot__srv__SetVelocity__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__SetVelocity_Request__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetVelocity__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__SetVelocity_Response__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetVelocity__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__SetVelocity_Event__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__SetVelocity__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetVelocity_Event__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetVelocity_Request__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetVelocity_Response__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__SetVelocity__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__SetVelocity__TYPE_NAME, 21, 21},
      {dobot__srv__SetVelocity__FIELDS, 3, 3},
    },
    {dobot__srv__SetVelocity__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dobot__srv__SetVelocity_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dobot__srv__SetVelocity_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dobot__srv__SetVelocity_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__SetVelocity_Request__FIELD_NAME__vx[] = "vx";
static char dobot__srv__SetVelocity_Request__FIELD_NAME__vy[] = "vy";
static char dobot__srv__SetVelocity_Request__FIELD_NAME__vyaw[] = "vyaw";
static char dobot__srv__SetVelocity_Request__FIELD_NAME__duration[] = "duration";
static char dobot__srv__SetVelocity_Request__FIELD_NAME__timeout_ms[] = "timeout_ms";

static rosidl_runtime_c__type_description__Field dobot__srv__SetVelocity_Request__FIELDS[] = {
  {
    {dobot__srv__SetVelocity_Request__FIELD_NAME__vx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetVelocity_Request__FIELD_NAME__vy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetVelocity_Request__FIELD_NAME__vyaw, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetVelocity_Request__FIELD_NAME__duration, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetVelocity_Request__FIELD_NAME__timeout_ms, 10, 10},
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
dobot__srv__SetVelocity_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__SetVelocity_Request__TYPE_NAME, 29, 29},
      {dobot__srv__SetVelocity_Request__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__SetVelocity_Response__FIELD_NAME__code[] = "code";
static char dobot__srv__SetVelocity_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field dobot__srv__SetVelocity_Response__FIELDS[] = {
  {
    {dobot__srv__SetVelocity_Response__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetVelocity_Response__FIELD_NAME__message, 7, 7},
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
dobot__srv__SetVelocity_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__SetVelocity_Response__TYPE_NAME, 30, 30},
      {dobot__srv__SetVelocity_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__SetVelocity_Event__FIELD_NAME__info[] = "info";
static char dobot__srv__SetVelocity_Event__FIELD_NAME__request[] = "request";
static char dobot__srv__SetVelocity_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dobot__srv__SetVelocity_Event__FIELDS[] = {
  {
    {dobot__srv__SetVelocity_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetVelocity_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dobot__srv__SetVelocity_Request__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetVelocity_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dobot__srv__SetVelocity_Response__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__SetVelocity_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetVelocity_Request__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__SetVelocity_Response__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__SetVelocity_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__SetVelocity_Event__TYPE_NAME, 27, 27},
      {dobot__srv__SetVelocity_Event__FIELDS, 3, 3},
    },
    {dobot__srv__SetVelocity_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dobot__srv__SetVelocity_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dobot__srv__SetVelocity_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe4\\xb8\\x8b\\xe5\\x8f\\x91\\xe5\\xba\\x95\\xe7\\x9b\\x98\\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xe3\\x80\\x82\\xe8\\xb6\\x85\\xe6\\x97\\xb6\\xe5\\x90\\x8e\\xe8\\xbf\\x90\\xe6\\x8e\\xa7\\xe8\\x87\\xaa\\xe5\\xb7\\xb1\\xe5\\x81\\x9c\\xe3\\x80\\x82\\xe5\\x81\\x9c\\xe6\\x9c\\xba\\xe7\\x94\\xa8 vx=vy=vyaw=0\\xe3\\x80\\x82\n"
  "# \\xe5\\x90\\x91\\xe5\\x89\\x8d\\xe4\\xb8\\xba\\xe6\\xad\\xa3\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d m/s\\xe3\\x80\\x82\n"
  "float32 vx\n"
  "# \\xe5\\x90\\x91\\xe5\\xb7\\xa6\\xe4\\xb8\\xba\\xe6\\xad\\xa3\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d m/s\\xe3\\x80\\x82\n"
  "float32 vy\n"
  "# \\xe9\\x80\\x86\\xe6\\x97\\xb6\\xe9\\x92\\x88\\xe4\\xb8\\xba\\xe6\\xad\\xa3\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d rad/s\\xe3\\x80\\x82\n"
  "float32 vyaw\n"
  "# \\xe4\\xbf\\x9d\\xe6\\x8c\\x81\\xe6\\x97\\xb6\\xe9\\x97\\xb4\\xef\\xbc\\x8c\\xe5\\x8d\\x95\\xe4\\xbd\\x8d s\\xe3\\x80\\x82\\xe5\\xb0\\x8f\\xe4\\xba\\x8e 0 \\xe4\\xbc\\x9a\\xe8\\xa2\\xab SDK \\xe6\\x8b\\x92\\xe7\\xbb\\x9d\\xe3\\x80\\x82\n"
  "float32 duration\n"
  "int32 timeout_ms\n"
  "---\n"
  "int32 code\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__SetVelocity__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__SetVelocity__TYPE_NAME, 21, 21},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 211, 211},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__SetVelocity_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__SetVelocity_Request__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__SetVelocity_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__SetVelocity_Response__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__SetVelocity_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__SetVelocity_Event__TYPE_NAME, 27, 27},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__SetVelocity__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__SetVelocity__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dobot__srv__SetVelocity_Event__get_individual_type_description_source(NULL);
    sources[3] = *dobot__srv__SetVelocity_Request__get_individual_type_description_source(NULL);
    sources[4] = *dobot__srv__SetVelocity_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__SetVelocity_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__SetVelocity_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__SetVelocity_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__SetVelocity_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__SetVelocity_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__SetVelocity_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dobot__srv__SetVelocity_Request__get_individual_type_description_source(NULL);
    sources[3] = *dobot__srv__SetVelocity_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
