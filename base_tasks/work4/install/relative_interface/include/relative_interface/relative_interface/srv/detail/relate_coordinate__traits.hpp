// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from relative_interface:srv/RelateCoordinate.idl
// generated code does not contain a copyright notice

#ifndef RELATIVE_INTERFACE__SRV__DETAIL__RELATE_COORDINATE__TRAITS_HPP_
#define RELATIVE_INTERFACE__SRV__DETAIL__RELATE_COORDINATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "relative_interface/srv/detail/relate_coordinate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace relative_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const RelateCoordinate_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: offset_theta
  {
    out << "offset_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_theta, out);
    out << ", ";
  }

  // member: offset_x
  {
    out << "offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_x, out);
    out << ", ";
  }

  // member: offset_y
  {
    out << "offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_y, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RelateCoordinate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: offset_theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_theta: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_theta, out);
    out << "\n";
  }

  // member: offset_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_x, out);
    out << "\n";
  }

  // member: offset_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_y, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RelateCoordinate_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace relative_interface

namespace rosidl_generator_traits
{

[[deprecated("use relative_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const relative_interface::srv::RelateCoordinate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  relative_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use relative_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const relative_interface::srv::RelateCoordinate_Request & msg)
{
  return relative_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<relative_interface::srv::RelateCoordinate_Request>()
{
  return "relative_interface::srv::RelateCoordinate_Request";
}

template<>
inline const char * name<relative_interface::srv::RelateCoordinate_Request>()
{
  return "relative_interface/srv/RelateCoordinate_Request";
}

template<>
struct has_fixed_size<relative_interface::srv::RelateCoordinate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<relative_interface::srv::RelateCoordinate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<relative_interface::srv::RelateCoordinate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace relative_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const RelateCoordinate_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RelateCoordinate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RelateCoordinate_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace relative_interface

namespace rosidl_generator_traits
{

[[deprecated("use relative_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const relative_interface::srv::RelateCoordinate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  relative_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use relative_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const relative_interface::srv::RelateCoordinate_Response & msg)
{
  return relative_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<relative_interface::srv::RelateCoordinate_Response>()
{
  return "relative_interface::srv::RelateCoordinate_Response";
}

template<>
inline const char * name<relative_interface::srv::RelateCoordinate_Response>()
{
  return "relative_interface/srv/RelateCoordinate_Response";
}

template<>
struct has_fixed_size<relative_interface::srv::RelateCoordinate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<relative_interface::srv::RelateCoordinate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<relative_interface::srv::RelateCoordinate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<relative_interface::srv::RelateCoordinate>()
{
  return "relative_interface::srv::RelateCoordinate";
}

template<>
inline const char * name<relative_interface::srv::RelateCoordinate>()
{
  return "relative_interface/srv/RelateCoordinate";
}

template<>
struct has_fixed_size<relative_interface::srv::RelateCoordinate>
  : std::integral_constant<
    bool,
    has_fixed_size<relative_interface::srv::RelateCoordinate_Request>::value &&
    has_fixed_size<relative_interface::srv::RelateCoordinate_Response>::value
  >
{
};

template<>
struct has_bounded_size<relative_interface::srv::RelateCoordinate>
  : std::integral_constant<
    bool,
    has_bounded_size<relative_interface::srv::RelateCoordinate_Request>::value &&
    has_bounded_size<relative_interface::srv::RelateCoordinate_Response>::value
  >
{
};

template<>
struct is_service<relative_interface::srv::RelateCoordinate>
  : std::true_type
{
};

template<>
struct is_service_request<relative_interface::srv::RelateCoordinate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<relative_interface::srv::RelateCoordinate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RELATIVE_INTERFACE__SRV__DETAIL__RELATE_COORDINATE__TRAITS_HPP_
