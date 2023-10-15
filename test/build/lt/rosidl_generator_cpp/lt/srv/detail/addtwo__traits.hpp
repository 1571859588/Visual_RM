// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lt:srv/Addtwo.idl
// generated code does not contain a copyright notice

#ifndef LT__SRV__DETAIL__ADDTWO__TRAITS_HPP_
#define LT__SRV__DETAIL__ADDTWO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lt/srv/detail/addtwo__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lt
{

namespace srv
{

inline void to_flow_style_yaml(
  const Addtwo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Addtwo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Addtwo_Request & msg, bool use_flow_style = false)
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

}  // namespace lt

namespace rosidl_generator_traits
{

[[deprecated("use lt::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lt::srv::Addtwo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lt::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lt::srv::to_yaml() instead")]]
inline std::string to_yaml(const lt::srv::Addtwo_Request & msg)
{
  return lt::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lt::srv::Addtwo_Request>()
{
  return "lt::srv::Addtwo_Request";
}

template<>
inline const char * name<lt::srv::Addtwo_Request>()
{
  return "lt/srv/Addtwo_Request";
}

template<>
struct has_fixed_size<lt::srv::Addtwo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lt::srv::Addtwo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lt::srv::Addtwo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lt
{

namespace srv
{

inline void to_flow_style_yaml(
  const Addtwo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Addtwo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Addtwo_Response & msg, bool use_flow_style = false)
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

}  // namespace lt

namespace rosidl_generator_traits
{

[[deprecated("use lt::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lt::srv::Addtwo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lt::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lt::srv::to_yaml() instead")]]
inline std::string to_yaml(const lt::srv::Addtwo_Response & msg)
{
  return lt::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lt::srv::Addtwo_Response>()
{
  return "lt::srv::Addtwo_Response";
}

template<>
inline const char * name<lt::srv::Addtwo_Response>()
{
  return "lt/srv/Addtwo_Response";
}

template<>
struct has_fixed_size<lt::srv::Addtwo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lt::srv::Addtwo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lt::srv::Addtwo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lt::srv::Addtwo>()
{
  return "lt::srv::Addtwo";
}

template<>
inline const char * name<lt::srv::Addtwo>()
{
  return "lt/srv/Addtwo";
}

template<>
struct has_fixed_size<lt::srv::Addtwo>
  : std::integral_constant<
    bool,
    has_fixed_size<lt::srv::Addtwo_Request>::value &&
    has_fixed_size<lt::srv::Addtwo_Response>::value
  >
{
};

template<>
struct has_bounded_size<lt::srv::Addtwo>
  : std::integral_constant<
    bool,
    has_bounded_size<lt::srv::Addtwo_Request>::value &&
    has_bounded_size<lt::srv::Addtwo_Response>::value
  >
{
};

template<>
struct is_service<lt::srv::Addtwo>
  : std::true_type
{
};

template<>
struct is_service_request<lt::srv::Addtwo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lt::srv::Addtwo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LT__SRV__DETAIL__ADDTWO__TRAITS_HPP_
