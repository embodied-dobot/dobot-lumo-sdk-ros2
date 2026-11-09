// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot:msg/UpperState.idl
// generated code does not contain a copyright notice
#include "dobot/msg/detail/upper_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `motor_state`
#include "dobot/msg/detail/motor_state__functions.h"

bool
dobot__msg__UpperState__init(dobot__msg__UpperState * msg)
{
  if (!msg) {
    return false;
  }
  // robot_type
  // is_upper_control
  // motor_state
  for (size_t i = 0; i < 18; ++i) {
    if (!dobot__msg__MotorState__init(&msg->motor_state[i])) {
      dobot__msg__UpperState__fini(msg);
      return false;
    }
  }
  // timestamp_us
  return true;
}

void
dobot__msg__UpperState__fini(dobot__msg__UpperState * msg)
{
  if (!msg) {
    return;
  }
  // robot_type
  // is_upper_control
  // motor_state
  for (size_t i = 0; i < 18; ++i) {
    dobot__msg__MotorState__fini(&msg->motor_state[i]);
  }
  // timestamp_us
}

bool
dobot__msg__UpperState__are_equal(const dobot__msg__UpperState * lhs, const dobot__msg__UpperState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_type
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->robot_type[i] != rhs->robot_type[i]) {
      return false;
    }
  }
  // is_upper_control
  if (lhs->is_upper_control != rhs->is_upper_control) {
    return false;
  }
  // motor_state
  for (size_t i = 0; i < 18; ++i) {
    if (!dobot__msg__MotorState__are_equal(
        &(lhs->motor_state[i]), &(rhs->motor_state[i])))
    {
      return false;
    }
  }
  // timestamp_us
  if (lhs->timestamp_us != rhs->timestamp_us) {
    return false;
  }
  return true;
}

bool
dobot__msg__UpperState__copy(
  const dobot__msg__UpperState * input,
  dobot__msg__UpperState * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_type
  for (size_t i = 0; i < 16; ++i) {
    output->robot_type[i] = input->robot_type[i];
  }
  // is_upper_control
  output->is_upper_control = input->is_upper_control;
  // motor_state
  for (size_t i = 0; i < 18; ++i) {
    if (!dobot__msg__MotorState__copy(
        &(input->motor_state[i]), &(output->motor_state[i])))
    {
      return false;
    }
  }
  // timestamp_us
  output->timestamp_us = input->timestamp_us;
  return true;
}

dobot__msg__UpperState *
dobot__msg__UpperState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__UpperState * msg = (dobot__msg__UpperState *)allocator.allocate(sizeof(dobot__msg__UpperState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__msg__UpperState));
  bool success = dobot__msg__UpperState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__msg__UpperState__destroy(dobot__msg__UpperState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__msg__UpperState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__msg__UpperState__Sequence__init(dobot__msg__UpperState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__UpperState * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__msg__UpperState)) {
      return false;
    }
    data = (dobot__msg__UpperState *)allocator.zero_allocate(size, sizeof(dobot__msg__UpperState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__msg__UpperState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__msg__UpperState__fini(&data[i - 1]);
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
dobot__msg__UpperState__Sequence__fini(dobot__msg__UpperState__Sequence * array)
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
      dobot__msg__UpperState__fini(&array->data[i]);
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

dobot__msg__UpperState__Sequence *
dobot__msg__UpperState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__UpperState__Sequence * array = (dobot__msg__UpperState__Sequence *)allocator.allocate(sizeof(dobot__msg__UpperState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__msg__UpperState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__msg__UpperState__Sequence__destroy(dobot__msg__UpperState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__msg__UpperState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__msg__UpperState__Sequence__are_equal(const dobot__msg__UpperState__Sequence * lhs, const dobot__msg__UpperState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__msg__UpperState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__msg__UpperState__Sequence__copy(
  const dobot__msg__UpperState__Sequence * input,
  dobot__msg__UpperState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__msg__UpperState)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__msg__UpperState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__msg__UpperState * data =
      (dobot__msg__UpperState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__msg__UpperState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__msg__UpperState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__msg__UpperState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
