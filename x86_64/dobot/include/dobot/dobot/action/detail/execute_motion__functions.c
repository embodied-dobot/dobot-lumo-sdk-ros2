// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot:action/ExecuteMotion.idl
// generated code does not contain a copyright notice
#include "dobot/action/detail/execute_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

bool
dobot__action__ExecuteMotion_Goal__init(dobot__action__ExecuteMotion_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    dobot__action__ExecuteMotion_Goal__fini(msg);
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    dobot__action__ExecuteMotion_Goal__fini(msg);
    return false;
  }
  // vx
  // vy
  // vyaw
  // duration
  // fsm_id
  // timeout_ms
  return true;
}

void
dobot__action__ExecuteMotion_Goal__fini(dobot__action__ExecuteMotion_Goal * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // vx
  // vy
  // vyaw
  // duration
  // fsm_id
  // timeout_ms
}

bool
dobot__action__ExecuteMotion_Goal__are_equal(const dobot__action__ExecuteMotion_Goal * lhs, const dobot__action__ExecuteMotion_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // vyaw
  if (lhs->vyaw != rhs->vyaw) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // fsm_id
  if (lhs->fsm_id != rhs->fsm_id) {
    return false;
  }
  // timeout_ms
  if (lhs->timeout_ms != rhs->timeout_ms) {
    return false;
  }
  return true;
}

bool
dobot__action__ExecuteMotion_Goal__copy(
  const dobot__action__ExecuteMotion_Goal * input,
  dobot__action__ExecuteMotion_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // vyaw
  output->vyaw = input->vyaw;
  // duration
  output->duration = input->duration;
  // fsm_id
  output->fsm_id = input->fsm_id;
  // timeout_ms
  output->timeout_ms = input->timeout_ms;
  return true;
}

dobot__action__ExecuteMotion_Goal *
dobot__action__ExecuteMotion_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_Goal * msg = (dobot__action__ExecuteMotion_Goal *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__action__ExecuteMotion_Goal));
  bool success = dobot__action__ExecuteMotion_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__action__ExecuteMotion_Goal__destroy(dobot__action__ExecuteMotion_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__action__ExecuteMotion_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__action__ExecuteMotion_Goal__Sequence__init(dobot__action__ExecuteMotion_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_Goal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_Goal)) {
      return false;
    }
    data = (dobot__action__ExecuteMotion_Goal *)allocator.zero_allocate(size, sizeof(dobot__action__ExecuteMotion_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__action__ExecuteMotion_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__action__ExecuteMotion_Goal__fini(&data[i - 1]);
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
dobot__action__ExecuteMotion_Goal__Sequence__fini(dobot__action__ExecuteMotion_Goal__Sequence * array)
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
      dobot__action__ExecuteMotion_Goal__fini(&array->data[i]);
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

dobot__action__ExecuteMotion_Goal__Sequence *
dobot__action__ExecuteMotion_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_Goal__Sequence * array = (dobot__action__ExecuteMotion_Goal__Sequence *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__action__ExecuteMotion_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__action__ExecuteMotion_Goal__Sequence__destroy(dobot__action__ExecuteMotion_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__action__ExecuteMotion_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__action__ExecuteMotion_Goal__Sequence__are_equal(const dobot__action__ExecuteMotion_Goal__Sequence * lhs, const dobot__action__ExecuteMotion_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__action__ExecuteMotion_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__action__ExecuteMotion_Goal__Sequence__copy(
  const dobot__action__ExecuteMotion_Goal__Sequence * input,
  dobot__action__ExecuteMotion_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_Goal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__action__ExecuteMotion_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__action__ExecuteMotion_Goal * data =
      (dobot__action__ExecuteMotion_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__action__ExecuteMotion_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__action__ExecuteMotion_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__action__ExecuteMotion_Goal__copy(
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
dobot__action__ExecuteMotion_Result__init(dobot__action__ExecuteMotion_Result * msg)
{
  if (!msg) {
    return false;
  }
  // code
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    dobot__action__ExecuteMotion_Result__fini(msg);
    return false;
  }
  // fsm_id
  return true;
}

void
dobot__action__ExecuteMotion_Result__fini(dobot__action__ExecuteMotion_Result * msg)
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
dobot__action__ExecuteMotion_Result__are_equal(const dobot__action__ExecuteMotion_Result * lhs, const dobot__action__ExecuteMotion_Result * rhs)
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
dobot__action__ExecuteMotion_Result__copy(
  const dobot__action__ExecuteMotion_Result * input,
  dobot__action__ExecuteMotion_Result * output)
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

dobot__action__ExecuteMotion_Result *
dobot__action__ExecuteMotion_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_Result * msg = (dobot__action__ExecuteMotion_Result *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__action__ExecuteMotion_Result));
  bool success = dobot__action__ExecuteMotion_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__action__ExecuteMotion_Result__destroy(dobot__action__ExecuteMotion_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__action__ExecuteMotion_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__action__ExecuteMotion_Result__Sequence__init(dobot__action__ExecuteMotion_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_Result * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_Result)) {
      return false;
    }
    data = (dobot__action__ExecuteMotion_Result *)allocator.zero_allocate(size, sizeof(dobot__action__ExecuteMotion_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__action__ExecuteMotion_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__action__ExecuteMotion_Result__fini(&data[i - 1]);
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
dobot__action__ExecuteMotion_Result__Sequence__fini(dobot__action__ExecuteMotion_Result__Sequence * array)
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
      dobot__action__ExecuteMotion_Result__fini(&array->data[i]);
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

dobot__action__ExecuteMotion_Result__Sequence *
dobot__action__ExecuteMotion_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_Result__Sequence * array = (dobot__action__ExecuteMotion_Result__Sequence *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__action__ExecuteMotion_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__action__ExecuteMotion_Result__Sequence__destroy(dobot__action__ExecuteMotion_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__action__ExecuteMotion_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__action__ExecuteMotion_Result__Sequence__are_equal(const dobot__action__ExecuteMotion_Result__Sequence * lhs, const dobot__action__ExecuteMotion_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__action__ExecuteMotion_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__action__ExecuteMotion_Result__Sequence__copy(
  const dobot__action__ExecuteMotion_Result__Sequence * input,
  dobot__action__ExecuteMotion_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_Result)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__action__ExecuteMotion_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__action__ExecuteMotion_Result * data =
      (dobot__action__ExecuteMotion_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__action__ExecuteMotion_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__action__ExecuteMotion_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__action__ExecuteMotion_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stage`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
dobot__action__ExecuteMotion_Feedback__init(dobot__action__ExecuteMotion_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // stage
  if (!rosidl_runtime_c__String__init(&msg->stage)) {
    dobot__action__ExecuteMotion_Feedback__fini(msg);
    return false;
  }
  // fsm_id
  return true;
}

void
dobot__action__ExecuteMotion_Feedback__fini(dobot__action__ExecuteMotion_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // stage
  rosidl_runtime_c__String__fini(&msg->stage);
  // fsm_id
}

bool
dobot__action__ExecuteMotion_Feedback__are_equal(const dobot__action__ExecuteMotion_Feedback * lhs, const dobot__action__ExecuteMotion_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stage
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->stage), &(rhs->stage)))
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
dobot__action__ExecuteMotion_Feedback__copy(
  const dobot__action__ExecuteMotion_Feedback * input,
  dobot__action__ExecuteMotion_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // stage
  if (!rosidl_runtime_c__String__copy(
      &(input->stage), &(output->stage)))
  {
    return false;
  }
  // fsm_id
  output->fsm_id = input->fsm_id;
  return true;
}

dobot__action__ExecuteMotion_Feedback *
dobot__action__ExecuteMotion_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_Feedback * msg = (dobot__action__ExecuteMotion_Feedback *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__action__ExecuteMotion_Feedback));
  bool success = dobot__action__ExecuteMotion_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__action__ExecuteMotion_Feedback__destroy(dobot__action__ExecuteMotion_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__action__ExecuteMotion_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__action__ExecuteMotion_Feedback__Sequence__init(dobot__action__ExecuteMotion_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_Feedback * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_Feedback)) {
      return false;
    }
    data = (dobot__action__ExecuteMotion_Feedback *)allocator.zero_allocate(size, sizeof(dobot__action__ExecuteMotion_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__action__ExecuteMotion_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__action__ExecuteMotion_Feedback__fini(&data[i - 1]);
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
dobot__action__ExecuteMotion_Feedback__Sequence__fini(dobot__action__ExecuteMotion_Feedback__Sequence * array)
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
      dobot__action__ExecuteMotion_Feedback__fini(&array->data[i]);
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

dobot__action__ExecuteMotion_Feedback__Sequence *
dobot__action__ExecuteMotion_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_Feedback__Sequence * array = (dobot__action__ExecuteMotion_Feedback__Sequence *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__action__ExecuteMotion_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__action__ExecuteMotion_Feedback__Sequence__destroy(dobot__action__ExecuteMotion_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__action__ExecuteMotion_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__action__ExecuteMotion_Feedback__Sequence__are_equal(const dobot__action__ExecuteMotion_Feedback__Sequence * lhs, const dobot__action__ExecuteMotion_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__action__ExecuteMotion_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__action__ExecuteMotion_Feedback__Sequence__copy(
  const dobot__action__ExecuteMotion_Feedback__Sequence * input,
  dobot__action__ExecuteMotion_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_Feedback)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__action__ExecuteMotion_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__action__ExecuteMotion_Feedback * data =
      (dobot__action__ExecuteMotion_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__action__ExecuteMotion_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__action__ExecuteMotion_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__action__ExecuteMotion_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "dobot/action/detail/execute_motion__functions.h"

bool
dobot__action__ExecuteMotion_SendGoal_Request__init(dobot__action__ExecuteMotion_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    dobot__action__ExecuteMotion_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!dobot__action__ExecuteMotion_Goal__init(&msg->goal)) {
    dobot__action__ExecuteMotion_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
dobot__action__ExecuteMotion_SendGoal_Request__fini(dobot__action__ExecuteMotion_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  dobot__action__ExecuteMotion_Goal__fini(&msg->goal);
}

bool
dobot__action__ExecuteMotion_SendGoal_Request__are_equal(const dobot__action__ExecuteMotion_SendGoal_Request * lhs, const dobot__action__ExecuteMotion_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!dobot__action__ExecuteMotion_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
dobot__action__ExecuteMotion_SendGoal_Request__copy(
  const dobot__action__ExecuteMotion_SendGoal_Request * input,
  dobot__action__ExecuteMotion_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!dobot__action__ExecuteMotion_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

dobot__action__ExecuteMotion_SendGoal_Request *
dobot__action__ExecuteMotion_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_SendGoal_Request * msg = (dobot__action__ExecuteMotion_SendGoal_Request *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__action__ExecuteMotion_SendGoal_Request));
  bool success = dobot__action__ExecuteMotion_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__action__ExecuteMotion_SendGoal_Request__destroy(dobot__action__ExecuteMotion_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__action__ExecuteMotion_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__action__ExecuteMotion_SendGoal_Request__Sequence__init(dobot__action__ExecuteMotion_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_SendGoal_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_SendGoal_Request)) {
      return false;
    }
    data = (dobot__action__ExecuteMotion_SendGoal_Request *)allocator.zero_allocate(size, sizeof(dobot__action__ExecuteMotion_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__action__ExecuteMotion_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__action__ExecuteMotion_SendGoal_Request__fini(&data[i - 1]);
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
dobot__action__ExecuteMotion_SendGoal_Request__Sequence__fini(dobot__action__ExecuteMotion_SendGoal_Request__Sequence * array)
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
      dobot__action__ExecuteMotion_SendGoal_Request__fini(&array->data[i]);
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

dobot__action__ExecuteMotion_SendGoal_Request__Sequence *
dobot__action__ExecuteMotion_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_SendGoal_Request__Sequence * array = (dobot__action__ExecuteMotion_SendGoal_Request__Sequence *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__action__ExecuteMotion_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__action__ExecuteMotion_SendGoal_Request__Sequence__destroy(dobot__action__ExecuteMotion_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__action__ExecuteMotion_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__action__ExecuteMotion_SendGoal_Request__Sequence__are_equal(const dobot__action__ExecuteMotion_SendGoal_Request__Sequence * lhs, const dobot__action__ExecuteMotion_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__action__ExecuteMotion_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__action__ExecuteMotion_SendGoal_Request__Sequence__copy(
  const dobot__action__ExecuteMotion_SendGoal_Request__Sequence * input,
  dobot__action__ExecuteMotion_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_SendGoal_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__action__ExecuteMotion_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__action__ExecuteMotion_SendGoal_Request * data =
      (dobot__action__ExecuteMotion_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__action__ExecuteMotion_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__action__ExecuteMotion_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__action__ExecuteMotion_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
dobot__action__ExecuteMotion_SendGoal_Response__init(dobot__action__ExecuteMotion_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    dobot__action__ExecuteMotion_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
dobot__action__ExecuteMotion_SendGoal_Response__fini(dobot__action__ExecuteMotion_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
dobot__action__ExecuteMotion_SendGoal_Response__are_equal(const dobot__action__ExecuteMotion_SendGoal_Response * lhs, const dobot__action__ExecuteMotion_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
dobot__action__ExecuteMotion_SendGoal_Response__copy(
  const dobot__action__ExecuteMotion_SendGoal_Response * input,
  dobot__action__ExecuteMotion_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

dobot__action__ExecuteMotion_SendGoal_Response *
dobot__action__ExecuteMotion_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_SendGoal_Response * msg = (dobot__action__ExecuteMotion_SendGoal_Response *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__action__ExecuteMotion_SendGoal_Response));
  bool success = dobot__action__ExecuteMotion_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__action__ExecuteMotion_SendGoal_Response__destroy(dobot__action__ExecuteMotion_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__action__ExecuteMotion_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__action__ExecuteMotion_SendGoal_Response__Sequence__init(dobot__action__ExecuteMotion_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_SendGoal_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_SendGoal_Response)) {
      return false;
    }
    data = (dobot__action__ExecuteMotion_SendGoal_Response *)allocator.zero_allocate(size, sizeof(dobot__action__ExecuteMotion_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__action__ExecuteMotion_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__action__ExecuteMotion_SendGoal_Response__fini(&data[i - 1]);
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
dobot__action__ExecuteMotion_SendGoal_Response__Sequence__fini(dobot__action__ExecuteMotion_SendGoal_Response__Sequence * array)
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
      dobot__action__ExecuteMotion_SendGoal_Response__fini(&array->data[i]);
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

dobot__action__ExecuteMotion_SendGoal_Response__Sequence *
dobot__action__ExecuteMotion_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_SendGoal_Response__Sequence * array = (dobot__action__ExecuteMotion_SendGoal_Response__Sequence *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__action__ExecuteMotion_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__action__ExecuteMotion_SendGoal_Response__Sequence__destroy(dobot__action__ExecuteMotion_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__action__ExecuteMotion_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__action__ExecuteMotion_SendGoal_Response__Sequence__are_equal(const dobot__action__ExecuteMotion_SendGoal_Response__Sequence * lhs, const dobot__action__ExecuteMotion_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__action__ExecuteMotion_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__action__ExecuteMotion_SendGoal_Response__Sequence__copy(
  const dobot__action__ExecuteMotion_SendGoal_Response__Sequence * input,
  dobot__action__ExecuteMotion_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_SendGoal_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__action__ExecuteMotion_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__action__ExecuteMotion_SendGoal_Response * data =
      (dobot__action__ExecuteMotion_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__action__ExecuteMotion_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__action__ExecuteMotion_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__action__ExecuteMotion_SendGoal_Response__copy(
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
// #include "dobot/action/detail/execute_motion__functions.h"

bool
dobot__action__ExecuteMotion_SendGoal_Event__init(dobot__action__ExecuteMotion_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    dobot__action__ExecuteMotion_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!dobot__action__ExecuteMotion_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    dobot__action__ExecuteMotion_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!dobot__action__ExecuteMotion_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    dobot__action__ExecuteMotion_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
dobot__action__ExecuteMotion_SendGoal_Event__fini(dobot__action__ExecuteMotion_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  dobot__action__ExecuteMotion_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  dobot__action__ExecuteMotion_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
dobot__action__ExecuteMotion_SendGoal_Event__are_equal(const dobot__action__ExecuteMotion_SendGoal_Event * lhs, const dobot__action__ExecuteMotion_SendGoal_Event * rhs)
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
  if (!dobot__action__ExecuteMotion_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!dobot__action__ExecuteMotion_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
dobot__action__ExecuteMotion_SendGoal_Event__copy(
  const dobot__action__ExecuteMotion_SendGoal_Event * input,
  dobot__action__ExecuteMotion_SendGoal_Event * output)
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
  if (!dobot__action__ExecuteMotion_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!dobot__action__ExecuteMotion_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

dobot__action__ExecuteMotion_SendGoal_Event *
dobot__action__ExecuteMotion_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_SendGoal_Event * msg = (dobot__action__ExecuteMotion_SendGoal_Event *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__action__ExecuteMotion_SendGoal_Event));
  bool success = dobot__action__ExecuteMotion_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__action__ExecuteMotion_SendGoal_Event__destroy(dobot__action__ExecuteMotion_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__action__ExecuteMotion_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__action__ExecuteMotion_SendGoal_Event__Sequence__init(dobot__action__ExecuteMotion_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_SendGoal_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_SendGoal_Event)) {
      return false;
    }
    data = (dobot__action__ExecuteMotion_SendGoal_Event *)allocator.zero_allocate(size, sizeof(dobot__action__ExecuteMotion_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__action__ExecuteMotion_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__action__ExecuteMotion_SendGoal_Event__fini(&data[i - 1]);
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
dobot__action__ExecuteMotion_SendGoal_Event__Sequence__fini(dobot__action__ExecuteMotion_SendGoal_Event__Sequence * array)
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
      dobot__action__ExecuteMotion_SendGoal_Event__fini(&array->data[i]);
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

dobot__action__ExecuteMotion_SendGoal_Event__Sequence *
dobot__action__ExecuteMotion_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_SendGoal_Event__Sequence * array = (dobot__action__ExecuteMotion_SendGoal_Event__Sequence *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__action__ExecuteMotion_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__action__ExecuteMotion_SendGoal_Event__Sequence__destroy(dobot__action__ExecuteMotion_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__action__ExecuteMotion_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__action__ExecuteMotion_SendGoal_Event__Sequence__are_equal(const dobot__action__ExecuteMotion_SendGoal_Event__Sequence * lhs, const dobot__action__ExecuteMotion_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__action__ExecuteMotion_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__action__ExecuteMotion_SendGoal_Event__Sequence__copy(
  const dobot__action__ExecuteMotion_SendGoal_Event__Sequence * input,
  dobot__action__ExecuteMotion_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_SendGoal_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__action__ExecuteMotion_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__action__ExecuteMotion_SendGoal_Event * data =
      (dobot__action__ExecuteMotion_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__action__ExecuteMotion_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__action__ExecuteMotion_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__action__ExecuteMotion_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
dobot__action__ExecuteMotion_GetResult_Request__init(dobot__action__ExecuteMotion_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    dobot__action__ExecuteMotion_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
dobot__action__ExecuteMotion_GetResult_Request__fini(dobot__action__ExecuteMotion_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
dobot__action__ExecuteMotion_GetResult_Request__are_equal(const dobot__action__ExecuteMotion_GetResult_Request * lhs, const dobot__action__ExecuteMotion_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
dobot__action__ExecuteMotion_GetResult_Request__copy(
  const dobot__action__ExecuteMotion_GetResult_Request * input,
  dobot__action__ExecuteMotion_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

dobot__action__ExecuteMotion_GetResult_Request *
dobot__action__ExecuteMotion_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_GetResult_Request * msg = (dobot__action__ExecuteMotion_GetResult_Request *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__action__ExecuteMotion_GetResult_Request));
  bool success = dobot__action__ExecuteMotion_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__action__ExecuteMotion_GetResult_Request__destroy(dobot__action__ExecuteMotion_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__action__ExecuteMotion_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__action__ExecuteMotion_GetResult_Request__Sequence__init(dobot__action__ExecuteMotion_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_GetResult_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_GetResult_Request)) {
      return false;
    }
    data = (dobot__action__ExecuteMotion_GetResult_Request *)allocator.zero_allocate(size, sizeof(dobot__action__ExecuteMotion_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__action__ExecuteMotion_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__action__ExecuteMotion_GetResult_Request__fini(&data[i - 1]);
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
dobot__action__ExecuteMotion_GetResult_Request__Sequence__fini(dobot__action__ExecuteMotion_GetResult_Request__Sequence * array)
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
      dobot__action__ExecuteMotion_GetResult_Request__fini(&array->data[i]);
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

dobot__action__ExecuteMotion_GetResult_Request__Sequence *
dobot__action__ExecuteMotion_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_GetResult_Request__Sequence * array = (dobot__action__ExecuteMotion_GetResult_Request__Sequence *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__action__ExecuteMotion_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__action__ExecuteMotion_GetResult_Request__Sequence__destroy(dobot__action__ExecuteMotion_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__action__ExecuteMotion_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__action__ExecuteMotion_GetResult_Request__Sequence__are_equal(const dobot__action__ExecuteMotion_GetResult_Request__Sequence * lhs, const dobot__action__ExecuteMotion_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__action__ExecuteMotion_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__action__ExecuteMotion_GetResult_Request__Sequence__copy(
  const dobot__action__ExecuteMotion_GetResult_Request__Sequence * input,
  dobot__action__ExecuteMotion_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_GetResult_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__action__ExecuteMotion_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__action__ExecuteMotion_GetResult_Request * data =
      (dobot__action__ExecuteMotion_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__action__ExecuteMotion_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__action__ExecuteMotion_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__action__ExecuteMotion_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "dobot/action/detail/execute_motion__functions.h"

bool
dobot__action__ExecuteMotion_GetResult_Response__init(dobot__action__ExecuteMotion_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!dobot__action__ExecuteMotion_Result__init(&msg->result)) {
    dobot__action__ExecuteMotion_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
dobot__action__ExecuteMotion_GetResult_Response__fini(dobot__action__ExecuteMotion_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  dobot__action__ExecuteMotion_Result__fini(&msg->result);
}

bool
dobot__action__ExecuteMotion_GetResult_Response__are_equal(const dobot__action__ExecuteMotion_GetResult_Response * lhs, const dobot__action__ExecuteMotion_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!dobot__action__ExecuteMotion_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
dobot__action__ExecuteMotion_GetResult_Response__copy(
  const dobot__action__ExecuteMotion_GetResult_Response * input,
  dobot__action__ExecuteMotion_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!dobot__action__ExecuteMotion_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

dobot__action__ExecuteMotion_GetResult_Response *
dobot__action__ExecuteMotion_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_GetResult_Response * msg = (dobot__action__ExecuteMotion_GetResult_Response *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__action__ExecuteMotion_GetResult_Response));
  bool success = dobot__action__ExecuteMotion_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__action__ExecuteMotion_GetResult_Response__destroy(dobot__action__ExecuteMotion_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__action__ExecuteMotion_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__action__ExecuteMotion_GetResult_Response__Sequence__init(dobot__action__ExecuteMotion_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_GetResult_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_GetResult_Response)) {
      return false;
    }
    data = (dobot__action__ExecuteMotion_GetResult_Response *)allocator.zero_allocate(size, sizeof(dobot__action__ExecuteMotion_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__action__ExecuteMotion_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__action__ExecuteMotion_GetResult_Response__fini(&data[i - 1]);
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
dobot__action__ExecuteMotion_GetResult_Response__Sequence__fini(dobot__action__ExecuteMotion_GetResult_Response__Sequence * array)
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
      dobot__action__ExecuteMotion_GetResult_Response__fini(&array->data[i]);
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

dobot__action__ExecuteMotion_GetResult_Response__Sequence *
dobot__action__ExecuteMotion_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_GetResult_Response__Sequence * array = (dobot__action__ExecuteMotion_GetResult_Response__Sequence *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__action__ExecuteMotion_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__action__ExecuteMotion_GetResult_Response__Sequence__destroy(dobot__action__ExecuteMotion_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__action__ExecuteMotion_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__action__ExecuteMotion_GetResult_Response__Sequence__are_equal(const dobot__action__ExecuteMotion_GetResult_Response__Sequence * lhs, const dobot__action__ExecuteMotion_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__action__ExecuteMotion_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__action__ExecuteMotion_GetResult_Response__Sequence__copy(
  const dobot__action__ExecuteMotion_GetResult_Response__Sequence * input,
  dobot__action__ExecuteMotion_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_GetResult_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__action__ExecuteMotion_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__action__ExecuteMotion_GetResult_Response * data =
      (dobot__action__ExecuteMotion_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__action__ExecuteMotion_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__action__ExecuteMotion_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__action__ExecuteMotion_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "dobot/action/detail/execute_motion__functions.h"

bool
dobot__action__ExecuteMotion_GetResult_Event__init(dobot__action__ExecuteMotion_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    dobot__action__ExecuteMotion_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!dobot__action__ExecuteMotion_GetResult_Request__Sequence__init(&msg->request, 0)) {
    dobot__action__ExecuteMotion_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!dobot__action__ExecuteMotion_GetResult_Response__Sequence__init(&msg->response, 0)) {
    dobot__action__ExecuteMotion_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
dobot__action__ExecuteMotion_GetResult_Event__fini(dobot__action__ExecuteMotion_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  dobot__action__ExecuteMotion_GetResult_Request__Sequence__fini(&msg->request);
  // response
  dobot__action__ExecuteMotion_GetResult_Response__Sequence__fini(&msg->response);
}

bool
dobot__action__ExecuteMotion_GetResult_Event__are_equal(const dobot__action__ExecuteMotion_GetResult_Event * lhs, const dobot__action__ExecuteMotion_GetResult_Event * rhs)
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
  if (!dobot__action__ExecuteMotion_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!dobot__action__ExecuteMotion_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
dobot__action__ExecuteMotion_GetResult_Event__copy(
  const dobot__action__ExecuteMotion_GetResult_Event * input,
  dobot__action__ExecuteMotion_GetResult_Event * output)
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
  if (!dobot__action__ExecuteMotion_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!dobot__action__ExecuteMotion_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

dobot__action__ExecuteMotion_GetResult_Event *
dobot__action__ExecuteMotion_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_GetResult_Event * msg = (dobot__action__ExecuteMotion_GetResult_Event *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__action__ExecuteMotion_GetResult_Event));
  bool success = dobot__action__ExecuteMotion_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__action__ExecuteMotion_GetResult_Event__destroy(dobot__action__ExecuteMotion_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__action__ExecuteMotion_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__action__ExecuteMotion_GetResult_Event__Sequence__init(dobot__action__ExecuteMotion_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_GetResult_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_GetResult_Event)) {
      return false;
    }
    data = (dobot__action__ExecuteMotion_GetResult_Event *)allocator.zero_allocate(size, sizeof(dobot__action__ExecuteMotion_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__action__ExecuteMotion_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__action__ExecuteMotion_GetResult_Event__fini(&data[i - 1]);
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
dobot__action__ExecuteMotion_GetResult_Event__Sequence__fini(dobot__action__ExecuteMotion_GetResult_Event__Sequence * array)
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
      dobot__action__ExecuteMotion_GetResult_Event__fini(&array->data[i]);
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

dobot__action__ExecuteMotion_GetResult_Event__Sequence *
dobot__action__ExecuteMotion_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_GetResult_Event__Sequence * array = (dobot__action__ExecuteMotion_GetResult_Event__Sequence *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__action__ExecuteMotion_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__action__ExecuteMotion_GetResult_Event__Sequence__destroy(dobot__action__ExecuteMotion_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__action__ExecuteMotion_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__action__ExecuteMotion_GetResult_Event__Sequence__are_equal(const dobot__action__ExecuteMotion_GetResult_Event__Sequence * lhs, const dobot__action__ExecuteMotion_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__action__ExecuteMotion_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__action__ExecuteMotion_GetResult_Event__Sequence__copy(
  const dobot__action__ExecuteMotion_GetResult_Event__Sequence * input,
  dobot__action__ExecuteMotion_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_GetResult_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__action__ExecuteMotion_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__action__ExecuteMotion_GetResult_Event * data =
      (dobot__action__ExecuteMotion_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__action__ExecuteMotion_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__action__ExecuteMotion_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__action__ExecuteMotion_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "dobot/action/detail/execute_motion__functions.h"

bool
dobot__action__ExecuteMotion_FeedbackMessage__init(dobot__action__ExecuteMotion_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    dobot__action__ExecuteMotion_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!dobot__action__ExecuteMotion_Feedback__init(&msg->feedback)) {
    dobot__action__ExecuteMotion_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
dobot__action__ExecuteMotion_FeedbackMessage__fini(dobot__action__ExecuteMotion_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  dobot__action__ExecuteMotion_Feedback__fini(&msg->feedback);
}

bool
dobot__action__ExecuteMotion_FeedbackMessage__are_equal(const dobot__action__ExecuteMotion_FeedbackMessage * lhs, const dobot__action__ExecuteMotion_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!dobot__action__ExecuteMotion_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
dobot__action__ExecuteMotion_FeedbackMessage__copy(
  const dobot__action__ExecuteMotion_FeedbackMessage * input,
  dobot__action__ExecuteMotion_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!dobot__action__ExecuteMotion_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

dobot__action__ExecuteMotion_FeedbackMessage *
dobot__action__ExecuteMotion_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_FeedbackMessage * msg = (dobot__action__ExecuteMotion_FeedbackMessage *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__action__ExecuteMotion_FeedbackMessage));
  bool success = dobot__action__ExecuteMotion_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__action__ExecuteMotion_FeedbackMessage__destroy(dobot__action__ExecuteMotion_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__action__ExecuteMotion_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__action__ExecuteMotion_FeedbackMessage__Sequence__init(dobot__action__ExecuteMotion_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_FeedbackMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_FeedbackMessage)) {
      return false;
    }
    data = (dobot__action__ExecuteMotion_FeedbackMessage *)allocator.zero_allocate(size, sizeof(dobot__action__ExecuteMotion_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__action__ExecuteMotion_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__action__ExecuteMotion_FeedbackMessage__fini(&data[i - 1]);
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
dobot__action__ExecuteMotion_FeedbackMessage__Sequence__fini(dobot__action__ExecuteMotion_FeedbackMessage__Sequence * array)
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
      dobot__action__ExecuteMotion_FeedbackMessage__fini(&array->data[i]);
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

dobot__action__ExecuteMotion_FeedbackMessage__Sequence *
dobot__action__ExecuteMotion_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__action__ExecuteMotion_FeedbackMessage__Sequence * array = (dobot__action__ExecuteMotion_FeedbackMessage__Sequence *)allocator.allocate(sizeof(dobot__action__ExecuteMotion_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__action__ExecuteMotion_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__action__ExecuteMotion_FeedbackMessage__Sequence__destroy(dobot__action__ExecuteMotion_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__action__ExecuteMotion_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__action__ExecuteMotion_FeedbackMessage__Sequence__are_equal(const dobot__action__ExecuteMotion_FeedbackMessage__Sequence * lhs, const dobot__action__ExecuteMotion_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__action__ExecuteMotion_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__action__ExecuteMotion_FeedbackMessage__Sequence__copy(
  const dobot__action__ExecuteMotion_FeedbackMessage__Sequence * input,
  dobot__action__ExecuteMotion_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__action__ExecuteMotion_FeedbackMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__action__ExecuteMotion_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__action__ExecuteMotion_FeedbackMessage * data =
      (dobot__action__ExecuteMotion_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__action__ExecuteMotion_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__action__ExecuteMotion_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__action__ExecuteMotion_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
