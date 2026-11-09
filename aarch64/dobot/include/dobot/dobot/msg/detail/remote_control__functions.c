// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot:msg/RemoteControl.idl
// generated code does not contain a copyright notice
#include "dobot/msg/detail/remote_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `btn_move`
// Member `btn_turn`
#include "dobot/msg/detail/joystick_value__functions.h"

bool
dobot__msg__RemoteControl__init(dobot__msg__RemoteControl * msg)
{
  if (!msg) {
    return false;
  }
  // btn_move
  if (!dobot__msg__JoystickValue__init(&msg->btn_move)) {
    dobot__msg__RemoteControl__fini(msg);
    return false;
  }
  // btn_turn
  if (!dobot__msg__JoystickValue__init(&msg->btn_turn)) {
    dobot__msg__RemoteControl__fini(msg);
    return false;
  }
  return true;
}

void
dobot__msg__RemoteControl__fini(dobot__msg__RemoteControl * msg)
{
  if (!msg) {
    return;
  }
  // btn_move
  dobot__msg__JoystickValue__fini(&msg->btn_move);
  // btn_turn
  dobot__msg__JoystickValue__fini(&msg->btn_turn);
}

bool
dobot__msg__RemoteControl__are_equal(const dobot__msg__RemoteControl * lhs, const dobot__msg__RemoteControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // btn_move
  if (!dobot__msg__JoystickValue__are_equal(
      &(lhs->btn_move), &(rhs->btn_move)))
  {
    return false;
  }
  // btn_turn
  if (!dobot__msg__JoystickValue__are_equal(
      &(lhs->btn_turn), &(rhs->btn_turn)))
  {
    return false;
  }
  return true;
}

bool
dobot__msg__RemoteControl__copy(
  const dobot__msg__RemoteControl * input,
  dobot__msg__RemoteControl * output)
{
  if (!input || !output) {
    return false;
  }
  // btn_move
  if (!dobot__msg__JoystickValue__copy(
      &(input->btn_move), &(output->btn_move)))
  {
    return false;
  }
  // btn_turn
  if (!dobot__msg__JoystickValue__copy(
      &(input->btn_turn), &(output->btn_turn)))
  {
    return false;
  }
  return true;
}

dobot__msg__RemoteControl *
dobot__msg__RemoteControl__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__RemoteControl * msg = (dobot__msg__RemoteControl *)allocator.allocate(sizeof(dobot__msg__RemoteControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__msg__RemoteControl));
  bool success = dobot__msg__RemoteControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__msg__RemoteControl__destroy(dobot__msg__RemoteControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__msg__RemoteControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__msg__RemoteControl__Sequence__init(dobot__msg__RemoteControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__RemoteControl * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__msg__RemoteControl)) {
      return false;
    }
    data = (dobot__msg__RemoteControl *)allocator.zero_allocate(size, sizeof(dobot__msg__RemoteControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__msg__RemoteControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__msg__RemoteControl__fini(&data[i - 1]);
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
dobot__msg__RemoteControl__Sequence__fini(dobot__msg__RemoteControl__Sequence * array)
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
      dobot__msg__RemoteControl__fini(&array->data[i]);
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

dobot__msg__RemoteControl__Sequence *
dobot__msg__RemoteControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__RemoteControl__Sequence * array = (dobot__msg__RemoteControl__Sequence *)allocator.allocate(sizeof(dobot__msg__RemoteControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__msg__RemoteControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__msg__RemoteControl__Sequence__destroy(dobot__msg__RemoteControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__msg__RemoteControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__msg__RemoteControl__Sequence__are_equal(const dobot__msg__RemoteControl__Sequence * lhs, const dobot__msg__RemoteControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__msg__RemoteControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__msg__RemoteControl__Sequence__copy(
  const dobot__msg__RemoteControl__Sequence * input,
  dobot__msg__RemoteControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__msg__RemoteControl)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__msg__RemoteControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__msg__RemoteControl * data =
      (dobot__msg__RemoteControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__msg__RemoteControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__msg__RemoteControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__msg__RemoteControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
