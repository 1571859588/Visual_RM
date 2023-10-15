// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lt:srv/Addtwo.idl
// generated code does not contain a copyright notice

#ifndef LT__SRV__DETAIL__ADDTWO__FUNCTIONS_H_
#define LT__SRV__DETAIL__ADDTWO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lt/msg/rosidl_generator_c__visibility_control.h"

#include "lt/srv/detail/addtwo__struct.h"

/// Initialize srv/Addtwo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lt__srv__Addtwo_Request
 * )) before or use
 * lt__srv__Addtwo_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
bool
lt__srv__Addtwo_Request__init(lt__srv__Addtwo_Request * msg);

/// Finalize srv/Addtwo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
void
lt__srv__Addtwo_Request__fini(lt__srv__Addtwo_Request * msg);

/// Create srv/Addtwo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lt__srv__Addtwo_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
lt__srv__Addtwo_Request *
lt__srv__Addtwo_Request__create();

/// Destroy srv/Addtwo message.
/**
 * It calls
 * lt__srv__Addtwo_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
void
lt__srv__Addtwo_Request__destroy(lt__srv__Addtwo_Request * msg);

/// Check for srv/Addtwo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
bool
lt__srv__Addtwo_Request__are_equal(const lt__srv__Addtwo_Request * lhs, const lt__srv__Addtwo_Request * rhs);

/// Copy a srv/Addtwo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
bool
lt__srv__Addtwo_Request__copy(
  const lt__srv__Addtwo_Request * input,
  lt__srv__Addtwo_Request * output);

/// Initialize array of srv/Addtwo messages.
/**
 * It allocates the memory for the number of elements and calls
 * lt__srv__Addtwo_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
bool
lt__srv__Addtwo_Request__Sequence__init(lt__srv__Addtwo_Request__Sequence * array, size_t size);

/// Finalize array of srv/Addtwo messages.
/**
 * It calls
 * lt__srv__Addtwo_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
void
lt__srv__Addtwo_Request__Sequence__fini(lt__srv__Addtwo_Request__Sequence * array);

/// Create array of srv/Addtwo messages.
/**
 * It allocates the memory for the array and calls
 * lt__srv__Addtwo_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
lt__srv__Addtwo_Request__Sequence *
lt__srv__Addtwo_Request__Sequence__create(size_t size);

/// Destroy array of srv/Addtwo messages.
/**
 * It calls
 * lt__srv__Addtwo_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
void
lt__srv__Addtwo_Request__Sequence__destroy(lt__srv__Addtwo_Request__Sequence * array);

/// Check for srv/Addtwo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
bool
lt__srv__Addtwo_Request__Sequence__are_equal(const lt__srv__Addtwo_Request__Sequence * lhs, const lt__srv__Addtwo_Request__Sequence * rhs);

/// Copy an array of srv/Addtwo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
bool
lt__srv__Addtwo_Request__Sequence__copy(
  const lt__srv__Addtwo_Request__Sequence * input,
  lt__srv__Addtwo_Request__Sequence * output);

/// Initialize srv/Addtwo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lt__srv__Addtwo_Response
 * )) before or use
 * lt__srv__Addtwo_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
bool
lt__srv__Addtwo_Response__init(lt__srv__Addtwo_Response * msg);

/// Finalize srv/Addtwo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
void
lt__srv__Addtwo_Response__fini(lt__srv__Addtwo_Response * msg);

/// Create srv/Addtwo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lt__srv__Addtwo_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
lt__srv__Addtwo_Response *
lt__srv__Addtwo_Response__create();

/// Destroy srv/Addtwo message.
/**
 * It calls
 * lt__srv__Addtwo_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
void
lt__srv__Addtwo_Response__destroy(lt__srv__Addtwo_Response * msg);

/// Check for srv/Addtwo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
bool
lt__srv__Addtwo_Response__are_equal(const lt__srv__Addtwo_Response * lhs, const lt__srv__Addtwo_Response * rhs);

/// Copy a srv/Addtwo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
bool
lt__srv__Addtwo_Response__copy(
  const lt__srv__Addtwo_Response * input,
  lt__srv__Addtwo_Response * output);

/// Initialize array of srv/Addtwo messages.
/**
 * It allocates the memory for the number of elements and calls
 * lt__srv__Addtwo_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
bool
lt__srv__Addtwo_Response__Sequence__init(lt__srv__Addtwo_Response__Sequence * array, size_t size);

/// Finalize array of srv/Addtwo messages.
/**
 * It calls
 * lt__srv__Addtwo_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
void
lt__srv__Addtwo_Response__Sequence__fini(lt__srv__Addtwo_Response__Sequence * array);

/// Create array of srv/Addtwo messages.
/**
 * It allocates the memory for the array and calls
 * lt__srv__Addtwo_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
lt__srv__Addtwo_Response__Sequence *
lt__srv__Addtwo_Response__Sequence__create(size_t size);

/// Destroy array of srv/Addtwo messages.
/**
 * It calls
 * lt__srv__Addtwo_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
void
lt__srv__Addtwo_Response__Sequence__destroy(lt__srv__Addtwo_Response__Sequence * array);

/// Check for srv/Addtwo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
bool
lt__srv__Addtwo_Response__Sequence__are_equal(const lt__srv__Addtwo_Response__Sequence * lhs, const lt__srv__Addtwo_Response__Sequence * rhs);

/// Copy an array of srv/Addtwo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lt
bool
lt__srv__Addtwo_Response__Sequence__copy(
  const lt__srv__Addtwo_Response__Sequence * input,
  lt__srv__Addtwo_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LT__SRV__DETAIL__ADDTWO__FUNCTIONS_H_
