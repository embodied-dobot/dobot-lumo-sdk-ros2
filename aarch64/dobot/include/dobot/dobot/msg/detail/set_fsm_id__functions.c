// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot:msg/SetFsmId.idl
// generated code does not contain a copyright notice
#include "dobot/msg/detail/set_fsm_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `current_action`
#include "rosidl_runtime_c/string_functions.h"

bool
dobot__msg__SetFsmId__init(dobot__msg__SetFsmId * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // current_action
  if (!rosidl_runtime_c__String__init(&msg->current_action)) {
    dobot__msg__SetFsmId__fini(msg);
    return false;
  }
  return true;
}

void
dobot__msg__SetFsmId__fini(dobot__msg__SetFsmId * msg)
{
  if (!msg) {
    return;
  }
  // id
  // current_action
  rosidl_runtime_c__String__fini(&msg->current_action);
}

bool
dobot__msg__SetFsmId__are_equal(const dobot__msg__SetFsmId * lhs, const dobot__msg__SetFsmId * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // current_action
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_action), &(rhs->current_action)))
  {
    return false;
  }
  return true;
}

bool
dobot__msg__SetFsmId__copy(
  const dobot__msg__SetFsmId * input,
  dobot__msg__SetFsmId * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // current_action
  if (!rosidl_runtime_c__String__copy(
      &(input->current_action), &(output->current_action)))
  {
    return false;
  }
  return true;
}

dobot__msg__SetFsmId *
dobot__msg__SetFsmId__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__SetFsmId * msg = (dobot__msg__SetFsmId *)allocator.allocate(sizeof(dobot__msg__SetFsmId), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__msg__SetFsmId));
  bool success = dobot__msg__SetFsmId__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__msg__SetFsmId__destroy(dobot__msg__SetFsmId * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__msg__SetFsmId__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__msg__SetFsmId__Sequence__init(dobot__msg__SetFsmId__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__SetFsmId * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__msg__SetFsmId)) {
      return false;
    }
    data = (dobot__msg__SetFsmId *)allocator.zero_allocate(size, sizeof(dobot__msg__SetFsmId), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__msg__SetFsmId__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__msg__SetFsmId__fini(&data[i - 1]);
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
dobot__msg__SetFsmId__Sequence__fini(dobot__msg__SetFsmId__Sequence * array)
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
      dobot__msg__SetFsmId__fini(&array->data[i]);
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

dobot__msg__SetFsmId__Sequence *
dobot__msg__SetFsmId__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__SetFsmId__Sequence * array = (dobot__msg__SetFsmId__Sequence *)allocator.allocate(sizeof(dobot__msg__SetFsmId__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__msg__SetFsmId__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__msg__SetFsmId__Sequence__destroy(dobot__msg__SetFsmId__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__msg__SetFsmId__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__msg__SetFsmId__Sequence__are_equal(const dobot__msg__SetFsmId__Sequence * lhs, const dobot__msg__SetFsmId__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__msg__SetFsmId__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__msg__SetFsmId__Sequence__copy(
  const dobot__msg__SetFsmId__Sequence * input,
  dobot__msg__SetFsmId__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__msg__SetFsmId)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__msg__SetFsmId);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__msg__SetFsmId * data =
      (dobot__msg__SetFsmId *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__msg__SetFsmId__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__msg__SetFsmId__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__msg__SetFsmId__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
