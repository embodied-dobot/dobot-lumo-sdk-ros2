// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot:msg/JoystickValue.idl
// generated code does not contain a copyright notice
#include "dobot/msg/detail/joystick_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
dobot__msg__JoystickValue__init(dobot__msg__JoystickValue * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
dobot__msg__JoystickValue__fini(dobot__msg__JoystickValue * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
dobot__msg__JoystickValue__are_equal(const dobot__msg__JoystickValue * lhs, const dobot__msg__JoystickValue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
dobot__msg__JoystickValue__copy(
  const dobot__msg__JoystickValue * input,
  dobot__msg__JoystickValue * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

dobot__msg__JoystickValue *
dobot__msg__JoystickValue__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__JoystickValue * msg = (dobot__msg__JoystickValue *)allocator.allocate(sizeof(dobot__msg__JoystickValue), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot__msg__JoystickValue));
  bool success = dobot__msg__JoystickValue__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot__msg__JoystickValue__destroy(dobot__msg__JoystickValue * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot__msg__JoystickValue__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot__msg__JoystickValue__Sequence__init(dobot__msg__JoystickValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__JoystickValue * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(dobot__msg__JoystickValue)) {
      return false;
    }
    data = (dobot__msg__JoystickValue *)allocator.zero_allocate(size, sizeof(dobot__msg__JoystickValue), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot__msg__JoystickValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot__msg__JoystickValue__fini(&data[i - 1]);
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
dobot__msg__JoystickValue__Sequence__fini(dobot__msg__JoystickValue__Sequence * array)
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
      dobot__msg__JoystickValue__fini(&array->data[i]);
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

dobot__msg__JoystickValue__Sequence *
dobot__msg__JoystickValue__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot__msg__JoystickValue__Sequence * array = (dobot__msg__JoystickValue__Sequence *)allocator.allocate(sizeof(dobot__msg__JoystickValue__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot__msg__JoystickValue__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot__msg__JoystickValue__Sequence__destroy(dobot__msg__JoystickValue__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot__msg__JoystickValue__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot__msg__JoystickValue__Sequence__are_equal(const dobot__msg__JoystickValue__Sequence * lhs, const dobot__msg__JoystickValue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot__msg__JoystickValue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot__msg__JoystickValue__Sequence__copy(
  const dobot__msg__JoystickValue__Sequence * input,
  dobot__msg__JoystickValue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(dobot__msg__JoystickValue)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(dobot__msg__JoystickValue);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot__msg__JoystickValue * data =
      (dobot__msg__JoystickValue *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot__msg__JoystickValue__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot__msg__JoystickValue__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot__msg__JoystickValue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
