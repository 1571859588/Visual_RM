// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from relative_interface:srv/RelateCoordinate.idl
// generated code does not contain a copyright notice
#include "relative_interface/srv/detail/relate_coordinate__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "relative_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "relative_interface/srv/detail/relate_coordinate__struct.h"
#include "relative_interface/srv/detail/relate_coordinate__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RelateCoordinate_Request__ros_msg_type = relative_interface__srv__RelateCoordinate_Request;

static bool _RelateCoordinate_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RelateCoordinate_Request__ros_msg_type * ros_message = static_cast<const _RelateCoordinate_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: offset_theta
  {
    cdr << ros_message->offset_theta;
  }

  // Field name: offset_x
  {
    cdr << ros_message->offset_x;
  }

  // Field name: offset_y
  {
    cdr << ros_message->offset_y;
  }

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  return true;
}

static bool _RelateCoordinate_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RelateCoordinate_Request__ros_msg_type * ros_message = static_cast<_RelateCoordinate_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: offset_theta
  {
    cdr >> ros_message->offset_theta;
  }

  // Field name: offset_x
  {
    cdr >> ros_message->offset_x;
  }

  // Field name: offset_y
  {
    cdr >> ros_message->offset_y;
  }

  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_relative_interface
size_t get_serialized_size_relative_interface__srv__RelateCoordinate_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RelateCoordinate_Request__ros_msg_type * ros_message = static_cast<const _RelateCoordinate_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name offset_theta
  {
    size_t item_size = sizeof(ros_message->offset_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset_x
  {
    size_t item_size = sizeof(ros_message->offset_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset_y
  {
    size_t item_size = sizeof(ros_message->offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RelateCoordinate_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_relative_interface__srv__RelateCoordinate_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_relative_interface
size_t max_serialized_size_relative_interface__srv__RelateCoordinate_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: offset_theta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: offset_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: offset_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RelateCoordinate_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_relative_interface__srv__RelateCoordinate_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RelateCoordinate_Request = {
  "relative_interface::srv",
  "RelateCoordinate_Request",
  _RelateCoordinate_Request__cdr_serialize,
  _RelateCoordinate_Request__cdr_deserialize,
  _RelateCoordinate_Request__get_serialized_size,
  _RelateCoordinate_Request__max_serialized_size
};

static rosidl_message_type_support_t _RelateCoordinate_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RelateCoordinate_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, relative_interface, srv, RelateCoordinate_Request)() {
  return &_RelateCoordinate_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "relative_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "relative_interface/srv/detail/relate_coordinate__struct.h"
// already included above
// #include "relative_interface/srv/detail/relate_coordinate__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RelateCoordinate_Response__ros_msg_type = relative_interface__srv__RelateCoordinate_Response;

static bool _RelateCoordinate_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RelateCoordinate_Response__ros_msg_type * ros_message = static_cast<const _RelateCoordinate_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  return true;
}

static bool _RelateCoordinate_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RelateCoordinate_Response__ros_msg_type * ros_message = static_cast<_RelateCoordinate_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_relative_interface
size_t get_serialized_size_relative_interface__srv__RelateCoordinate_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RelateCoordinate_Response__ros_msg_type * ros_message = static_cast<const _RelateCoordinate_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RelateCoordinate_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_relative_interface__srv__RelateCoordinate_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_relative_interface
size_t max_serialized_size_relative_interface__srv__RelateCoordinate_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RelateCoordinate_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_relative_interface__srv__RelateCoordinate_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RelateCoordinate_Response = {
  "relative_interface::srv",
  "RelateCoordinate_Response",
  _RelateCoordinate_Response__cdr_serialize,
  _RelateCoordinate_Response__cdr_deserialize,
  _RelateCoordinate_Response__get_serialized_size,
  _RelateCoordinate_Response__max_serialized_size
};

static rosidl_message_type_support_t _RelateCoordinate_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RelateCoordinate_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, relative_interface, srv, RelateCoordinate_Response)() {
  return &_RelateCoordinate_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "relative_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "relative_interface/srv/relate_coordinate.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RelateCoordinate__callbacks = {
  "relative_interface::srv",
  "RelateCoordinate",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, relative_interface, srv, RelateCoordinate_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, relative_interface, srv, RelateCoordinate_Response)(),
};

static rosidl_service_type_support_t RelateCoordinate__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RelateCoordinate__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, relative_interface, srv, RelateCoordinate)() {
  return &RelateCoordinate__handle;
}

#if defined(__cplusplus)
}
#endif
