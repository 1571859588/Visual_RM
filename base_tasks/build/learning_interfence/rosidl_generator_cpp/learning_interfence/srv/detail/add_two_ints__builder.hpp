// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from learning_interfence:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef LEARNING_INTERFENCE__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_
#define LEARNING_INTERFENCE__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "learning_interfence/srv/detail/add_two_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace learning_interfence
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Request_b
{
public:
  explicit Init_AddTwoInts_Request_b(::learning_interfence::srv::AddTwoInts_Request & msg)
  : msg_(msg)
  {}
  ::learning_interfence::srv::AddTwoInts_Request b(::learning_interfence::srv::AddTwoInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::learning_interfence::srv::AddTwoInts_Request msg_;
};

class Init_AddTwoInts_Request_a
{
public:
  Init_AddTwoInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoInts_Request_b a(::learning_interfence::srv::AddTwoInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoInts_Request_b(msg_);
  }

private:
  ::learning_interfence::srv::AddTwoInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::learning_interfence::srv::AddTwoInts_Request>()
{
  return learning_interfence::srv::builder::Init_AddTwoInts_Request_a();
}

}  // namespace learning_interfence


namespace learning_interfence
{

namespace srv
{

namespace builder
{

class Init_AddTwoInts_Response_sum
{
public:
  Init_AddTwoInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::learning_interfence::srv::AddTwoInts_Response sum(::learning_interfence::srv::AddTwoInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::learning_interfence::srv::AddTwoInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::learning_interfence::srv::AddTwoInts_Response>()
{
  return learning_interfence::srv::builder::Init_AddTwoInts_Response_sum();
}

}  // namespace learning_interfence

#endif  // LEARNING_INTERFENCE__SRV__DETAIL__ADD_TWO_INTS__BUILDER_HPP_
