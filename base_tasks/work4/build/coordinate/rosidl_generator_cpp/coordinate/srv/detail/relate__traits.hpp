// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from coordinate:srv/Relate.idl
// generated code does not contain a copyright notice

#ifndef COORDINATE__SRV__DETAIL__RELATE__TRAITS_HPP_
#define COORDINATE__SRV__DETAIL__RELATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "coordinate/srv/detail/relate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace coordinate
{

namespace srv
{

inline void to_flow_style_yaml(
  const Relate_Request & msg,
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
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Relate_Request & msg,
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

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Relate_Request & msg, bool use_flow_style = false)
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

}  // namespace coordinate

namespace rosidl_generator_traits
{

[[deprecated("use coordinate::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const coordinate::srv::Relate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  coordinate::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use coordinate::srv::to_yaml() instead")]]
inline std::string to_yaml(const coordinate::srv::Relate_Request & msg)
{
  return coordinate::srv::to_yaml(msg);
}

template<>
inline const char * data_type<coordinate::srv::Relate_Request>()
{
  return "coordinate::srv::Relate_Request";
}

template<>
inline const char * name<coordinate::srv::Relate_Request>()
{
  return "coordinate/srv/Relate_Request";
}

template<>
struct has_fixed_size<coordinate::srv::Relate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<coordinate::srv::Relate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<coordinate::srv::Relate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace coordinate
{

namespace srv
{

inline void to_flow_style_yaml(
  const Relate_Response & msg,
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
  const Relate_Response & msg,
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

inline std::string to_yaml(const Relate_Response & msg, bool use_flow_style = false)
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

}  // namespace coordinate

namespace rosidl_generator_traits
{

[[deprecated("use coordinate::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const coordinate::srv::Relate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  coordinate::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use coordinate::srv::to_yaml() instead")]]
inline std::string to_yaml(const coordinate::srv::Relate_Response & msg)
{
  return coordinate::srv::to_yaml(msg);
}

template<>
inline const char * data_type<coordinate::srv::Relate_Response>()
{
  return "coordinate::srv::Relate_Response";
}

template<>
inline const char * name<coordinate::srv::Relate_Response>()
{
  return "coordinate/srv/Relate_Response";
}

template<>
struct has_fixed_size<coordinate::srv::Relate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<coordinate::srv::Relate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<coordinate::srv::Relate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<coordinate::srv::Relate>()
{
  return "coordinate::srv::Relate";
}

template<>
inline const char * name<coordinate::srv::Relate>()
{
  return "coordinate/srv/Relate";
}

template<>
struct has_fixed_size<coordinate::srv::Relate>
  : std::integral_constant<
    bool,
    has_fixed_size<coordinate::srv::Relate_Request>::value &&
    has_fixed_size<coordinate::srv::Relate_Response>::value
  >
{
};

template<>
struct has_bounded_size<coordinate::srv::Relate>
  : std::integral_constant<
    bool,
    has_bounded_size<coordinate::srv::Relate_Request>::value &&
    has_bounded_size<coordinate::srv::Relate_Response>::value
  >
{
};

template<>
struct is_service<coordinate::srv::Relate>
  : std::true_type
{
};

template<>
struct is_service_request<coordinate::srv::Relate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<coordinate::srv::Relate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COORDINATE__SRV__DETAIL__RELATE__TRAITS_HPP_
