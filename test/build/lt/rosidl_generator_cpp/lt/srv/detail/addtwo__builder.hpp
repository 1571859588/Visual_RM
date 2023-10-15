// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lt:srv/Addtwo.idl
// generated code does not contain a copyright notice

#ifndef LT__SRV__DETAIL__ADDTWO__BUILDER_HPP_
#define LT__SRV__DETAIL__ADDTWO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lt/srv/detail/addtwo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lt
{

namespace srv
{

namespace builder
{

class Init_Addtwo_Request_b
{
public:
  explicit Init_Addtwo_Request_b(::lt::srv::Addtwo_Request & msg)
  : msg_(msg)
  {}
  ::lt::srv::Addtwo_Request b(::lt::srv::Addtwo_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lt::srv::Addtwo_Request msg_;
};

class Init_Addtwo_Request_a
{
public:
  Init_Addtwo_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Addtwo_Request_b a(::lt::srv::Addtwo_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Addtwo_Request_b(msg_);
  }

private:
  ::lt::srv::Addtwo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lt::srv::Addtwo_Request>()
{
  return lt::srv::builder::Init_Addtwo_Request_a();
}

}  // namespace lt


namespace lt
{

namespace srv
{

namespace builder
{

class Init_Addtwo_Response_sum
{
public:
  Init_Addtwo_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lt::srv::Addtwo_Response sum(::lt::srv::Addtwo_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lt::srv::Addtwo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lt::srv::Addtwo_Response>()
{
  return lt::srv::builder::Init_Addtwo_Response_sum();
}

}  // namespace lt

#endif  // LT__SRV__DETAIL__ADDTWO__BUILDER_HPP_
