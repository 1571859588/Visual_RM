// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from relative_interface:srv/RelateCoordinate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "relative_interface/srv/detail/relate_coordinate__rosidl_typesupport_introspection_c.h"
#include "relative_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "relative_interface/srv/detail/relate_coordinate__functions.h"
#include "relative_interface/srv/detail/relate_coordinate__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void relative_interface__srv__RelateCoordinate_Request__rosidl_typesupport_introspection_c__RelateCoordinate_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  relative_interface__srv__RelateCoordinate_Request__init(message_memory);
}

void relative_interface__srv__RelateCoordinate_Request__rosidl_typesupport_introspection_c__RelateCoordinate_Request_fini_function(void * message_memory)
{
  relative_interface__srv__RelateCoordinate_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember relative_interface__srv__RelateCoordinate_Request__rosidl_typesupport_introspection_c__RelateCoordinate_Request_message_member_array[5] = {
  {
    "offset_theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(relative_interface__srv__RelateCoordinate_Request, offset_theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(relative_interface__srv__RelateCoordinate_Request, offset_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(relative_interface__srv__RelateCoordinate_Request, offset_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(relative_interface__srv__RelateCoordinate_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(relative_interface__srv__RelateCoordinate_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers relative_interface__srv__RelateCoordinate_Request__rosidl_typesupport_introspection_c__RelateCoordinate_Request_message_members = {
  "relative_interface__srv",  // message namespace
  "RelateCoordinate_Request",  // message name
  5,  // number of fields
  sizeof(relative_interface__srv__RelateCoordinate_Request),
  relative_interface__srv__RelateCoordinate_Request__rosidl_typesupport_introspection_c__RelateCoordinate_Request_message_member_array,  // message members
  relative_interface__srv__RelateCoordinate_Request__rosidl_typesupport_introspection_c__RelateCoordinate_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  relative_interface__srv__RelateCoordinate_Request__rosidl_typesupport_introspection_c__RelateCoordinate_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t relative_interface__srv__RelateCoordinate_Request__rosidl_typesupport_introspection_c__RelateCoordinate_Request_message_type_support_handle = {
  0,
  &relative_interface__srv__RelateCoordinate_Request__rosidl_typesupport_introspection_c__RelateCoordinate_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_relative_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, relative_interface, srv, RelateCoordinate_Request)() {
  if (!relative_interface__srv__RelateCoordinate_Request__rosidl_typesupport_introspection_c__RelateCoordinate_Request_message_type_support_handle.typesupport_identifier) {
    relative_interface__srv__RelateCoordinate_Request__rosidl_typesupport_introspection_c__RelateCoordinate_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &relative_interface__srv__RelateCoordinate_Request__rosidl_typesupport_introspection_c__RelateCoordinate_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "relative_interface/srv/detail/relate_coordinate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "relative_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "relative_interface/srv/detail/relate_coordinate__functions.h"
// already included above
// #include "relative_interface/srv/detail/relate_coordinate__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void relative_interface__srv__RelateCoordinate_Response__rosidl_typesupport_introspection_c__RelateCoordinate_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  relative_interface__srv__RelateCoordinate_Response__init(message_memory);
}

void relative_interface__srv__RelateCoordinate_Response__rosidl_typesupport_introspection_c__RelateCoordinate_Response_fini_function(void * message_memory)
{
  relative_interface__srv__RelateCoordinate_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember relative_interface__srv__RelateCoordinate_Response__rosidl_typesupport_introspection_c__RelateCoordinate_Response_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(relative_interface__srv__RelateCoordinate_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(relative_interface__srv__RelateCoordinate_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers relative_interface__srv__RelateCoordinate_Response__rosidl_typesupport_introspection_c__RelateCoordinate_Response_message_members = {
  "relative_interface__srv",  // message namespace
  "RelateCoordinate_Response",  // message name
  2,  // number of fields
  sizeof(relative_interface__srv__RelateCoordinate_Response),
  relative_interface__srv__RelateCoordinate_Response__rosidl_typesupport_introspection_c__RelateCoordinate_Response_message_member_array,  // message members
  relative_interface__srv__RelateCoordinate_Response__rosidl_typesupport_introspection_c__RelateCoordinate_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  relative_interface__srv__RelateCoordinate_Response__rosidl_typesupport_introspection_c__RelateCoordinate_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t relative_interface__srv__RelateCoordinate_Response__rosidl_typesupport_introspection_c__RelateCoordinate_Response_message_type_support_handle = {
  0,
  &relative_interface__srv__RelateCoordinate_Response__rosidl_typesupport_introspection_c__RelateCoordinate_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_relative_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, relative_interface, srv, RelateCoordinate_Response)() {
  if (!relative_interface__srv__RelateCoordinate_Response__rosidl_typesupport_introspection_c__RelateCoordinate_Response_message_type_support_handle.typesupport_identifier) {
    relative_interface__srv__RelateCoordinate_Response__rosidl_typesupport_introspection_c__RelateCoordinate_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &relative_interface__srv__RelateCoordinate_Response__rosidl_typesupport_introspection_c__RelateCoordinate_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "relative_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "relative_interface/srv/detail/relate_coordinate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers relative_interface__srv__detail__relate_coordinate__rosidl_typesupport_introspection_c__RelateCoordinate_service_members = {
  "relative_interface__srv",  // service namespace
  "RelateCoordinate",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // relative_interface__srv__detail__relate_coordinate__rosidl_typesupport_introspection_c__RelateCoordinate_Request_message_type_support_handle,
  NULL  // response message
  // relative_interface__srv__detail__relate_coordinate__rosidl_typesupport_introspection_c__RelateCoordinate_Response_message_type_support_handle
};

static rosidl_service_type_support_t relative_interface__srv__detail__relate_coordinate__rosidl_typesupport_introspection_c__RelateCoordinate_service_type_support_handle = {
  0,
  &relative_interface__srv__detail__relate_coordinate__rosidl_typesupport_introspection_c__RelateCoordinate_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, relative_interface, srv, RelateCoordinate_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, relative_interface, srv, RelateCoordinate_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_relative_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, relative_interface, srv, RelateCoordinate)() {
  if (!relative_interface__srv__detail__relate_coordinate__rosidl_typesupport_introspection_c__RelateCoordinate_service_type_support_handle.typesupport_identifier) {
    relative_interface__srv__detail__relate_coordinate__rosidl_typesupport_introspection_c__RelateCoordinate_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)relative_interface__srv__detail__relate_coordinate__rosidl_typesupport_introspection_c__RelateCoordinate_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, relative_interface, srv, RelateCoordinate_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, relative_interface, srv, RelateCoordinate_Response)()->data;
  }

  return &relative_interface__srv__detail__relate_coordinate__rosidl_typesupport_introspection_c__RelateCoordinate_service_type_support_handle;
}
