// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from coordinate:srv/Relate.idl
// generated code does not contain a copyright notice
#include "coordinate/srv/detail/relate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
coordinate__srv__Relate_Request__init(coordinate__srv__Relate_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  // offset_x
  // offset_y
  return true;
}

void
coordinate__srv__Relate_Request__fini(coordinate__srv__Relate_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
  // offset_x
  // offset_y
}

bool
coordinate__srv__Relate_Request__are_equal(const coordinate__srv__Relate_Request * lhs, const coordinate__srv__Relate_Request * rhs)
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
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // offset_x
  if (lhs->offset_x != rhs->offset_x) {
    return false;
  }
  // offset_y
  if (lhs->offset_y != rhs->offset_y) {
    return false;
  }
  return true;
}

bool
coordinate__srv__Relate_Request__copy(
  const coordinate__srv__Relate_Request * input,
  coordinate__srv__Relate_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  // offset_x
  output->offset_x = input->offset_x;
  // offset_y
  output->offset_y = input->offset_y;
  return true;
}

coordinate__srv__Relate_Request *
coordinate__srv__Relate_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coordinate__srv__Relate_Request * msg = (coordinate__srv__Relate_Request *)allocator.allocate(sizeof(coordinate__srv__Relate_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coordinate__srv__Relate_Request));
  bool success = coordinate__srv__Relate_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coordinate__srv__Relate_Request__destroy(coordinate__srv__Relate_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coordinate__srv__Relate_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coordinate__srv__Relate_Request__Sequence__init(coordinate__srv__Relate_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coordinate__srv__Relate_Request * data = NULL;

  if (size) {
    data = (coordinate__srv__Relate_Request *)allocator.zero_allocate(size, sizeof(coordinate__srv__Relate_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coordinate__srv__Relate_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coordinate__srv__Relate_Request__fini(&data[i - 1]);
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
coordinate__srv__Relate_Request__Sequence__fini(coordinate__srv__Relate_Request__Sequence * array)
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
      coordinate__srv__Relate_Request__fini(&array->data[i]);
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

coordinate__srv__Relate_Request__Sequence *
coordinate__srv__Relate_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coordinate__srv__Relate_Request__Sequence * array = (coordinate__srv__Relate_Request__Sequence *)allocator.allocate(sizeof(coordinate__srv__Relate_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coordinate__srv__Relate_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coordinate__srv__Relate_Request__Sequence__destroy(coordinate__srv__Relate_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coordinate__srv__Relate_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coordinate__srv__Relate_Request__Sequence__are_equal(const coordinate__srv__Relate_Request__Sequence * lhs, const coordinate__srv__Relate_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coordinate__srv__Relate_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coordinate__srv__Relate_Request__Sequence__copy(
  const coordinate__srv__Relate_Request__Sequence * input,
  coordinate__srv__Relate_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coordinate__srv__Relate_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coordinate__srv__Relate_Request * data =
      (coordinate__srv__Relate_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coordinate__srv__Relate_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coordinate__srv__Relate_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coordinate__srv__Relate_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
coordinate__srv__Relate_Response__init(coordinate__srv__Relate_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
coordinate__srv__Relate_Response__fini(coordinate__srv__Relate_Response * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
coordinate__srv__Relate_Response__are_equal(const coordinate__srv__Relate_Response * lhs, const coordinate__srv__Relate_Response * rhs)
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
coordinate__srv__Relate_Response__copy(
  const coordinate__srv__Relate_Response * input,
  coordinate__srv__Relate_Response * output)
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

coordinate__srv__Relate_Response *
coordinate__srv__Relate_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coordinate__srv__Relate_Response * msg = (coordinate__srv__Relate_Response *)allocator.allocate(sizeof(coordinate__srv__Relate_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(coordinate__srv__Relate_Response));
  bool success = coordinate__srv__Relate_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
coordinate__srv__Relate_Response__destroy(coordinate__srv__Relate_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    coordinate__srv__Relate_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
coordinate__srv__Relate_Response__Sequence__init(coordinate__srv__Relate_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coordinate__srv__Relate_Response * data = NULL;

  if (size) {
    data = (coordinate__srv__Relate_Response *)allocator.zero_allocate(size, sizeof(coordinate__srv__Relate_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = coordinate__srv__Relate_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        coordinate__srv__Relate_Response__fini(&data[i - 1]);
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
coordinate__srv__Relate_Response__Sequence__fini(coordinate__srv__Relate_Response__Sequence * array)
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
      coordinate__srv__Relate_Response__fini(&array->data[i]);
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

coordinate__srv__Relate_Response__Sequence *
coordinate__srv__Relate_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  coordinate__srv__Relate_Response__Sequence * array = (coordinate__srv__Relate_Response__Sequence *)allocator.allocate(sizeof(coordinate__srv__Relate_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = coordinate__srv__Relate_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
coordinate__srv__Relate_Response__Sequence__destroy(coordinate__srv__Relate_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    coordinate__srv__Relate_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
coordinate__srv__Relate_Response__Sequence__are_equal(const coordinate__srv__Relate_Response__Sequence * lhs, const coordinate__srv__Relate_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!coordinate__srv__Relate_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
coordinate__srv__Relate_Response__Sequence__copy(
  const coordinate__srv__Relate_Response__Sequence * input,
  coordinate__srv__Relate_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(coordinate__srv__Relate_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    coordinate__srv__Relate_Response * data =
      (coordinate__srv__Relate_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!coordinate__srv__Relate_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          coordinate__srv__Relate_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!coordinate__srv__Relate_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
