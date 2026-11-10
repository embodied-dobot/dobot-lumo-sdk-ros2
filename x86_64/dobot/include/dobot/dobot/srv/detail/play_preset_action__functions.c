// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot:srv/PlayPresetAction.idl
// generated code does not contain a copyright notice
#include "dobot/srv/detail/play_preset_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `action`
#include "rosidl_runtime_c/string_functions.h"

bool
dobot__srv__PlayPresetAction_Request__init(dobot__srv__PlayPresetAction_Request * msg)
{
  if (!msg) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__init(&msg->action)) {
    dobot__srv__PlayPresetAction_Request__fini(msg);
    return false;
  }
  // timeout_ms
  return true;
}

void
dobot__srv__PlayPresetAction_Request__fini(dobot__srv__PlayPresetAction_Request * msg)
{
  if (!msg) {
    return;
  }
  // action
  rosidl_runtime_c__String__fini(&msg->action);
  // timeout_ms
}

bool
dobot__srv__PlayPresetAction_Request__are_equal(const dobot__srv__PlayPresetAction_Request * lhs, const dobot__srv__PlayPresetAction_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // timeout_ms
  if (lhs->timeout_ms != rhs->timeout_ms) {
    return false;
  }
  return true;
}

bool
dobot__srv__PlayPresetAction_Request__copy(
  const dobot__srv__PlayPresetAction_Request * input,
  dobot__srv__PlayPresetAction_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // timeout_ms
  output->timeout_ms = input->timeout_ms;
  return true;
}

dobot__srv__PlayPresetAction_Request *
dobot__srv__PlayPresetAction_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__srv__PlayPresetAction_Request * msg = (dobot__srv__PlayPresetAction_Request *)allocator.allocate(sizeof(dobot__srv__PlayPresetAction_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__srv__PlayPresetAction_Request));
  bool success = dobot__srv__PlayPresetAction_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__srv__PlayPresetAction_Request__destroy(dobot__srv__PlayPresetAction_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__srv__PlayPresetAction_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__srv__PlayPresetAction_Request__Sequence__init(dobot__srv__PlayPresetAction_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__srv__PlayPresetAction_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__srv__PlayPresetAction_Request)) {
      return false;
    }
    data = (dobot__srv__PlayPresetAction_Request *)allocator.zero_allocate(size, sizeof(dobot__srv__PlayPresetAction_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__srv__PlayPresetAction_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__srv__PlayPresetAction_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dobot__srv__PlayPresetAction_Request__Sequence__fini(dobot__srv__PlayPresetAction_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dobot__srv__PlayPresetAction_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dobot__srv__PlayPresetAction_Request__Sequence *
dobot__srv__PlayPresetAction_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__srv__PlayPresetAction_Request__Sequence * array = (dobot__srv__PlayPresetAction_Request__Sequence *)allocator.allocate(sizeof(dobot__srv__PlayPresetAction_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__srv__PlayPresetAction_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__srv__PlayPresetAction_Request__Sequence__destroy(dobot__srv__PlayPresetAction_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__srv__PlayPresetAction_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__srv__PlayPresetAction_Request__Sequence__are_equal(const dobot__srv__PlayPresetAction_Request__Sequence * lhs, const dobot__srv__PlayPresetAction_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__srv__PlayPresetAction_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__srv__PlayPresetAction_Request__Sequence__copy(
  const dobot__srv__PlayPresetAction_Request__Sequence * input,
  dobot__srv__PlayPresetAction_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__srv__PlayPresetAction_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__srv__PlayPresetAction_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__srv__PlayPresetAction_Request * data =
      (dobot__srv__PlayPresetAction_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__srv__PlayPresetAction_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__srv__PlayPresetAction_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__srv__PlayPresetAction_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
dobot__srv__PlayPresetAction_Response__init(dobot__srv__PlayPresetAction_Response * msg)
{
  if (!msg) {
    return false;
  }
  // code
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    dobot__srv__PlayPresetAction_Response__fini(msg);
    return false;
  }
  // fsm_id
  return true;
}

void
dobot__srv__PlayPresetAction_Response__fini(dobot__srv__PlayPresetAction_Response * msg)
{
  if (!msg) {
    return;
  }
  // code
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // fsm_id
}

bool
dobot__srv__PlayPresetAction_Response__are_equal(const dobot__srv__PlayPresetAction_Response * lhs, const dobot__srv__PlayPresetAction_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // fsm_id
  if (lhs->fsm_id != rhs->fsm_id) {
    return false;
  }
  return true;
}

bool
dobot__srv__PlayPresetAction_Response__copy(
  const dobot__srv__PlayPresetAction_Response * input,
  dobot__srv__PlayPresetAction_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // code
  output->code = input->code;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // fsm_id
  output->fsm_id = input->fsm_id;
  return true;
}

dobot__srv__PlayPresetAction_Response *
dobot__srv__PlayPresetAction_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__srv__PlayPresetAction_Response * msg = (dobot__srv__PlayPresetAction_Response *)allocator.allocate(sizeof(dobot__srv__PlayPresetAction_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__srv__PlayPresetAction_Response));
  bool success = dobot__srv__PlayPresetAction_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__srv__PlayPresetAction_Response__destroy(dobot__srv__PlayPresetAction_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__srv__PlayPresetAction_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__srv__PlayPresetAction_Response__Sequence__init(dobot__srv__PlayPresetAction_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__srv__PlayPresetAction_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__srv__PlayPresetAction_Response)) {
      return false;
    }
    data = (dobot__srv__PlayPresetAction_Response *)allocator.zero_allocate(size, sizeof(dobot__srv__PlayPresetAction_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__srv__PlayPresetAction_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__srv__PlayPresetAction_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dobot__srv__PlayPresetAction_Response__Sequence__fini(dobot__srv__PlayPresetAction_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dobot__srv__PlayPresetAction_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dobot__srv__PlayPresetAction_Response__Sequence *
dobot__srv__PlayPresetAction_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__srv__PlayPresetAction_Response__Sequence * array = (dobot__srv__PlayPresetAction_Response__Sequence *)allocator.allocate(sizeof(dobot__srv__PlayPresetAction_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__srv__PlayPresetAction_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__srv__PlayPresetAction_Response__Sequence__destroy(dobot__srv__PlayPresetAction_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__srv__PlayPresetAction_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__srv__PlayPresetAction_Response__Sequence__are_equal(const dobot__srv__PlayPresetAction_Response__Sequence * lhs, const dobot__srv__PlayPresetAction_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__srv__PlayPresetAction_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__srv__PlayPresetAction_Response__Sequence__copy(
  const dobot__srv__PlayPresetAction_Response__Sequence * input,
  dobot__srv__PlayPresetAction_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__srv__PlayPresetAction_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__srv__PlayPresetAction_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__srv__PlayPresetAction_Response * data =
      (dobot__srv__PlayPresetAction_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__srv__PlayPresetAction_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__srv__PlayPresetAction_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__srv__PlayPresetAction_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "dobot/srv/detail/play_preset_action__functions.h"

bool
dobot__srv__PlayPresetAction_Event__init(dobot__srv__PlayPresetAction_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    dobot__srv__PlayPresetAction_Event__fini(msg);
    return false;
  }
  // request
  if (!dobot__srv__PlayPresetAction_Request__Sequence__init(&msg->request, 0)) {
    dobot__srv__PlayPresetAction_Event__fini(msg);
    return false;
  }
  // response
  if (!dobot__srv__PlayPresetAction_Response__Sequence__init(&msg->response, 0)) {
    dobot__srv__PlayPresetAction_Event__fini(msg);
    return false;
  }
  return true;
}

void
dobot__srv__PlayPresetAction_Event__fini(dobot__srv__PlayPresetAction_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  dobot__srv__PlayPresetAction_Request__Sequence__fini(&msg->request);
  // response
  dobot__srv__PlayPresetAction_Response__Sequence__fini(&msg->response);
}

bool
dobot__srv__PlayPresetAction_Event__are_equal(const dobot__srv__PlayPresetAction_Event * lhs, const dobot__srv__PlayPresetAction_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!dobot__srv__PlayPresetAction_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!dobot__srv__PlayPresetAction_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
dobot__srv__PlayPresetAction_Event__copy(
  const dobot__srv__PlayPresetAction_Event * input,
  dobot__srv__PlayPresetAction_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!dobot__srv__PlayPresetAction_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!dobot__srv__PlayPresetAction_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

dobot__srv__PlayPresetAction_Event *
dobot__srv__PlayPresetAction_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__srv__PlayPresetAction_Event * msg = (dobot__srv__PlayPresetAction_Event *)allocator.allocate(sizeof(dobot__srv__PlayPresetAction_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__srv__PlayPresetAction_Event));
  bool success = dobot__srv__PlayPresetAction_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__srv__PlayPresetAction_Event__destroy(dobot__srv__PlayPresetAction_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__srv__PlayPresetAction_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__srv__PlayPresetAction_Event__Sequence__init(dobot__srv__PlayPresetAction_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__srv__PlayPresetAction_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__srv__PlayPresetAction_Event)) {
      return false;
    }
    data = (dobot__srv__PlayPresetAction_Event *)allocator.zero_allocate(size, sizeof(dobot__srv__PlayPresetAction_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__srv__PlayPresetAction_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__srv__PlayPresetAction_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dobot__srv__PlayPresetAction_Event__Sequence__fini(dobot__srv__PlayPresetAction_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dobot__srv__PlayPresetAction_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dobot__srv__PlayPresetAction_Event__Sequence *
dobot__srv__PlayPresetAction_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__srv__PlayPresetAction_Event__Sequence * array = (dobot__srv__PlayPresetAction_Event__Sequence *)allocator.allocate(sizeof(dobot__srv__PlayPresetAction_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__srv__PlayPresetAction_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__srv__PlayPresetAction_Event__Sequence__destroy(dobot__srv__PlayPresetAction_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__srv__PlayPresetAction_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__srv__PlayPresetAction_Event__Sequence__are_equal(const dobot__srv__PlayPresetAction_Event__Sequence * lhs, const dobot__srv__PlayPresetAction_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__srv__PlayPresetAction_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__srv__PlayPresetAction_Event__Sequence__copy(
  const dobot__srv__PlayPresetAction_Event__Sequence * input,
  dobot__srv__PlayPresetAction_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__srv__PlayPresetAction_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__srv__PlayPresetAction_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__srv__PlayPresetAction_Event * data =
      (dobot__srv__PlayPresetAction_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__srv__PlayPresetAction_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__srv__PlayPresetAction_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__srv__PlayPresetAction_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
