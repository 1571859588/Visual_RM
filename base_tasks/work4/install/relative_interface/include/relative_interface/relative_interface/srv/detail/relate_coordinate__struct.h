// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from relative_interface:srv/RelateCoordinate.idl
// generated code does not contain a copyright notice

#ifndef RELATIVE_INTERFACE__SRV__DETAIL__RELATE_COORDINATE__STRUCT_H_
#define RELATIVE_INTERFACE__SRV__DETAIL__RELATE_COORDINATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RelateCoordinate in the package relative_interface.
typedef struct relative_interface__srv__RelateCoordinate_Request
{
  /// offset radians
  double offset_theta;
  double offset_x;
  double offset_y;
  double x;
  double y;
} relative_interface__srv__RelateCoordinate_Request;

// Struct for a sequence of relative_interface__srv__RelateCoordinate_Request.
typedef struct relative_interface__srv__RelateCoordinate_Request__Sequence
{
  relative_interface__srv__RelateCoordinate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} relative_interface__srv__RelateCoordinate_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RelateCoordinate in the package relative_interface.
typedef struct relative_interface__srv__RelateCoordinate_Response
{
  double x;
  double y;
} relative_interface__srv__RelateCoordinate_Response;

// Struct for a sequence of relative_interface__srv__RelateCoordinate_Response.
typedef struct relative_interface__srv__RelateCoordinate_Response__Sequence
{
  relative_interface__srv__RelateCoordinate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} relative_interface__srv__RelateCoordinate_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RELATIVE_INTERFACE__SRV__DETAIL__RELATE_COORDINATE__STRUCT_H_
