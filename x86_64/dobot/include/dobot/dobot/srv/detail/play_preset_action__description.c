// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dobot:srv/PlayPresetAction.idl
// generated code does not contain a copyright notice

#include "dobot/srv/detail/play_preset_action__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__PlayPresetAction__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0x7b, 0x9a, 0x48, 0x0c, 0x80, 0xb5, 0x37,
      0x2d, 0x74, 0x54, 0xea, 0x0f, 0xd4, 0xae, 0xac,
      0xdf, 0x93, 0xf8, 0x88, 0xb1, 0x71, 0x69, 0x22,
      0xae, 0xc9, 0x78, 0x02, 0x21, 0x70, 0x19, 0xd1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__PlayPresetAction_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa4, 0x76, 0xb4, 0x1f, 0xfe, 0xc9, 0x45, 0x6c,
      0xeb, 0xce, 0x04, 0xec, 0x02, 0x8d, 0x87, 0x55,
      0x84, 0x2b, 0x90, 0xb8, 0x7d, 0xfc, 0x77, 0x3f,
      0x4d, 0x8f, 0x92, 0xe6, 0x4e, 0x8d, 0x12, 0x05,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__PlayPresetAction_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0x90, 0x73, 0x4a, 0x04, 0xd5, 0x75, 0x94,
      0x2d, 0x6a, 0x84, 0xcf, 0xc2, 0x12, 0x1e, 0xc3,
      0x02, 0x7a, 0x50, 0xe3, 0xc3, 0x5e, 0xe5, 0x41,
      0x1b, 0x4d, 0x7e, 0x74, 0xd9, 0x9f, 0x69, 0x79,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dobot
const rosidl_type_hash_t *
dobot__srv__PlayPresetAction_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x46, 0x3a, 0xdf, 0x31, 0x4e, 0x5f, 0x9d, 0x1e,
      0x8b, 0x69, 0x4c, 0x64, 0xf8, 0xda, 0xa1, 0xe2,
      0x87, 0xf9, 0x7e, 0xa5, 0xd9, 0x3d, 0x46, 0xdc,
      0xf5, 0x04, 0x9c, 0x43, 0x56, 0xb1, 0xde, 0x4a,
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

static char dobot__srv__PlayPresetAction__TYPE_NAME[] = "dobot/srv/PlayPresetAction";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dobot__srv__PlayPresetAction_Event__TYPE_NAME[] = "dobot/srv/PlayPresetAction_Event";
static char dobot__srv__PlayPresetAction_Request__TYPE_NAME[] = "dobot/srv/PlayPresetAction_Request";
static char dobot__srv__PlayPresetAction_Response__TYPE_NAME[] = "dobot/srv/PlayPresetAction_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char dobot__srv__PlayPresetAction__FIELD_NAME__request_message[] = "request_message";
static char dobot__srv__PlayPresetAction__FIELD_NAME__response_message[] = "response_message";
static char dobot__srv__PlayPresetAction__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dobot__srv__PlayPresetAction__FIELDS[] = {
  {
    {dobot__srv__PlayPresetAction__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__PlayPresetAction_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__PlayPresetAction__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__PlayPresetAction_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__PlayPresetAction__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dobot__srv__PlayPresetAction_Event__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__PlayPresetAction__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__PlayPresetAction_Event__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__PlayPresetAction_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__PlayPresetAction_Response__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__PlayPresetAction__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__PlayPresetAction__TYPE_NAME, 26, 26},
      {dobot__srv__PlayPresetAction__FIELDS, 3, 3},
    },
    {dobot__srv__PlayPresetAction__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dobot__srv__PlayPresetAction_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dobot__srv__PlayPresetAction_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dobot__srv__PlayPresetAction_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__PlayPresetAction_Request__FIELD_NAME__action[] = "action";
static char dobot__srv__PlayPresetAction_Request__FIELD_NAME__timeout_ms[] = "timeout_ms";

static rosidl_runtime_c__type_description__Field dobot__srv__PlayPresetAction_Request__FIELDS[] = {
  {
    {dobot__srv__PlayPresetAction_Request__FIELD_NAME__action, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__PlayPresetAction_Request__FIELD_NAME__timeout_ms, 10, 10},
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
dobot__srv__PlayPresetAction_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__PlayPresetAction_Request__TYPE_NAME, 34, 34},
      {dobot__srv__PlayPresetAction_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__PlayPresetAction_Response__FIELD_NAME__code[] = "code";
static char dobot__srv__PlayPresetAction_Response__FIELD_NAME__message[] = "message";
static char dobot__srv__PlayPresetAction_Response__FIELD_NAME__fsm_id[] = "fsm_id";

static rosidl_runtime_c__type_description__Field dobot__srv__PlayPresetAction_Response__FIELDS[] = {
  {
    {dobot__srv__PlayPresetAction_Response__FIELD_NAME__code, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__PlayPresetAction_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__PlayPresetAction_Response__FIELD_NAME__fsm_id, 6, 6},
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
dobot__srv__PlayPresetAction_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__PlayPresetAction_Response__TYPE_NAME, 35, 35},
      {dobot__srv__PlayPresetAction_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dobot__srv__PlayPresetAction_Event__FIELD_NAME__info[] = "info";
static char dobot__srv__PlayPresetAction_Event__FIELD_NAME__request[] = "request";
static char dobot__srv__PlayPresetAction_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dobot__srv__PlayPresetAction_Event__FIELDS[] = {
  {
    {dobot__srv__PlayPresetAction_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__PlayPresetAction_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dobot__srv__PlayPresetAction_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {dobot__srv__PlayPresetAction_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dobot__srv__PlayPresetAction_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dobot__srv__PlayPresetAction_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__PlayPresetAction_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {dobot__srv__PlayPresetAction_Response__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dobot__srv__PlayPresetAction_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dobot__srv__PlayPresetAction_Event__TYPE_NAME, 32, 32},
      {dobot__srv__PlayPresetAction_Event__FIELDS, 3, 3},
    },
    {dobot__srv__PlayPresetAction_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dobot__srv__PlayPresetAction_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dobot__srv__PlayPresetAction_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe6\\x92\\xad\\xe6\\x94\\xbe\\xe9\\xa2\\x84\\xe8\\xae\\xbe\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe3\\x80\\x82\\xe5\\xaf\\xb9\\xe5\\xba\\x94 C++ \\xe7\\x9a\\x84 AutoEnterBox\\xe3\\x80\\x81AutoExitBox\\xe3\\x80\\x81LieDown\\xe3\\x80\\x81GoProne\\xe3\\x80\\x81StandUpFromSupine\\xe3\\x80\\x81StandUpFromProne\\xe3\\x80\\x82\n"
  "# action \\xe5\\x8f\\x96\\xe5\\x80\\xbc\\xe4\\xb8\\x8e\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\x9c\\xba\\xe7\\xbc\\x96\\xe5\\x8f\\xb7\\xef\\xbc\\x9a\n"
  "#   auto_enter_box 307   \\xe8\\x87\\xaa\\xe4\\xb8\\xbb\\xe5\\x85\\xa5\\xe7\\xae\\xb1\\xef\\xbc\\x8c\\xe5\\xae\\x8c\\xe6\\x88\\x90\\xe5\\x90\\x8e\\xe8\\x87\\xaa\\xe5\\x8a\\xa8\\xe8\\xbf\\x9b\\xe5\\x85\\xa5\\xe9\\x98\\xbb\\xe5\\xb0\\xbc\\xef\\xbc\\x881\\xef\\xbc\\x89\n"
  "#   auto_exit_box 308    \\xe8\\x87\\xaa\\xe4\\xb8\\xbb\\xe5\\x87\\xba\\xe7\\xae\\xb1\\xef\\xbc\\x8c\\xe5\\x85\\x88\\xe8\\xbf\\x9b\\xe5\\x85\\xa5\\xe6\\x8b\\x9f\\xe4\\xba\\xba\\xe8\\xa1\\x8c\\xe8\\xb5\\xb0\\xef\\xbc\\x88304\\xef\\xbc\\x89\\xef\\xbc\\x8c\\xe7\\xba\\xa6 2 s \\xe5\\x90\\x8e\\xe8\\x87\\xaa\\xe5\\x8a\\xa8\\xe8\\xbf\\x9b\\xe5\\x85\\xa5\\xe7\\xab\\x99\\xe7\\xab\\x8b\\xef\\xbc\\x88300\\xef\\xbc\\x89\n"
  "#   lie_down 310         \\xe8\\xba\\xba\\xe4\\xb8\\x8b\\xef\\xbc\\x8c\\xe5\\xae\\x8c\\xe6\\x88\\x90\\xe5\\x90\\x8e\\xe8\\x87\\xaa\\xe5\\x8a\\xa8\\xe8\\xbf\\x9b\\xe5\\x85\\xa5\\xe9\\x98\\xbb\\xe5\\xb0\\xbc\\xef\\xbc\\x881\\xef\\xbc\\x89\n"
  "#   stand_up_supine 311  \\xe4\\xbb\\xb0\\xe5\\xa7\\xbf\\xe8\\xb5\\xb7\\xe8\\xba\\xab\\xef\\xbc\\x8c\\xe6\\x94\\xb6\\xe5\\xb0\\xbe\\xe5\\x90\\x8c auto_exit_box\n"
  "#   go_prone 312         \\xe8\\xb6\\xb4\\xe4\\xb8\\x8b\\xef\\xbc\\x8c\\xe5\\xae\\x8c\\xe6\\x88\\x90\\xe5\\x90\\x8e\\xe8\\x87\\xaa\\xe5\\x8a\\xa8\\xe8\\xbf\\x9b\\xe5\\x85\\xa5\\xe9\\x98\\xbb\\xe5\\xb0\\xbc\\xef\\xbc\\x881\\xef\\xbc\\x89\n"
  "#   stand_up_prone 313   \\xe4\\xbf\\xaf\\xe5\\xa7\\xbf\\xe8\\xb5\\xb7\\xe8\\xba\\xab\\xef\\xbc\\x8c\\xe6\\x94\\xb6\\xe5\\xb0\\xbe\\xe5\\x90\\x8c auto_exit_box\n"
  "# \\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xe5\\x8f\\xaa\\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe5\\x88\\x87\\xe6\\x8d\\xa2\\xe8\\xa2\\xab\\xe6\\x8e\\xa5\\xe5\\x8f\\x97\\xef\\xbc\\x8c\\xe4\\xb8\\x8d\\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe5\\xb7\\xb2\\xe7\\xbb\\x8f\\xe5\\x81\\x9a\\xe5\\xae\\x8c\\xe3\\x80\\x82auto_exit_box \\xe7\\xad\\x89\\xe5\\x8a\\xa8\\xe4\\xbd\\x9c\\xe8\\xbf\\x94\\xe5\\x9b\\x9e\\xe5\\x90\\x8e\\xe4\\xb8\\x8d\\xe8\\xa6\\x81\\xe7\\xab\\x8b\\xe5\\x88\\xbb\\xe5\\x88\\x87 standing\\xe3\\x80\\x82\n"
  "string action\n"
  "int32 timeout_ms\n"
  "---\n"
  "int32 code\n"
  "string message\n"
  "# \\xe5\\xb7\\xb2\\xe4\\xb8\\x8b\\xe5\\x8f\\x91\\xe7\\x9a\\x84\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe6\\x9c\\xba\\xe7\\xbc\\x96\\xe5\\x8f\\xb7\\xe3\\x80\\x82\\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\\xe6\\x97\\xb6\\xe4\\xb8\\xba -1\\xe3\\x80\\x82\n"
  "int32 fsm_id";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__PlayPresetAction__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__PlayPresetAction__TYPE_NAME, 26, 26},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 551, 551},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__PlayPresetAction_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__PlayPresetAction_Request__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__PlayPresetAction_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__PlayPresetAction_Response__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dobot__srv__PlayPresetAction_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dobot__srv__PlayPresetAction_Event__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__PlayPresetAction__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__PlayPresetAction__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dobot__srv__PlayPresetAction_Event__get_individual_type_description_source(NULL);
    sources[3] = *dobot__srv__PlayPresetAction_Request__get_individual_type_description_source(NULL);
    sources[4] = *dobot__srv__PlayPresetAction_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__PlayPresetAction_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__PlayPresetAction_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__PlayPresetAction_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__PlayPresetAction_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dobot__srv__PlayPresetAction_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dobot__srv__PlayPresetAction_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dobot__srv__PlayPresetAction_Request__get_individual_type_description_source(NULL);
    sources[3] = *dobot__srv__PlayPresetAction_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
