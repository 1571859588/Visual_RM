// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from coordinate:srv/Relate.idl
// generated code does not contain a copyright notice

#ifndef COORDINATE__SRV__DETAIL__RELATE__BUILDER_HPP_
#define COORDINATE__SRV__DETAIL__RELATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "coordinate/srv/detail/relate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace coordinate
{

namespace srv
{

namespace builder
{

class Init_Relate_Request_offset_y
{
public:
  explicit Init_Relate_Request_offset_y(::coordinate::srv::Relate_Request & msg)
  : msg_(msg)
  {}
  ::coordinate::srv::Relate_Request offset_y(::coordinate::srv::Relate_Request::_offset_y_type arg)
  {
    msg_.offset_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coordinate::srv::Relate_Request msg_;
};

class Init_Relate_Request_offset_x
{
public:
  explicit Init_Relate_Request_offset_x(::coordinate::srv::Relate_Request & msg)
  : msg_(msg)
  {}
  Init_Relate_Request_offset_y offset_x(::coordinate::srv::Relate_Request::_offset_x_type arg)
  {
    msg_.offset_x = std::move(arg);
    return Init_Relate_Request_offset_y(msg_);
  }

private:
  ::coordinate::srv::Relate_Request msg_;
};

class Init_Relate_Request_theta
{
public:
  explicit Init_Relate_Request_theta(::coordinate::srv::Relate_Request & msg)
  : msg_(msg)
  {}
  Init_Relate_Request_offset_x theta(::coordinate::srv::Relate_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_Relate_Request_offset_x(msg_);
  }

private:
  ::coordinate::srv::Relate_Request msg_;
};

class Init_Relate_Request_y
{
public:
  explicit Init_Relate_Request_y(::coordinate::srv::Relate_Request & msg)
  : msg_(msg)
  {}
  Init_Relate_Request_theta y(::coordinate::srv::Relate_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Relate_Request_theta(msg_);
  }

private:
  ::coordinate::srv::Relate_Request msg_;
};

class Init_Relate_Request_x
{
public:
  Init_Relate_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Relate_Request_y x(::coordinate::srv::Relate_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Relate_Request_y(msg_);
  }

private:
  ::coordinate::srv::Relate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::coordinate::srv::Relate_Request>()
{
  return coordinate::srv::builder::Init_Relate_Request_x();
}

}  // namespace coordinate


namespace coordinate
{

namespace srv
{

namespace builder
{

class Init_Relate_Response_y
{
public:
  explicit Init_Relate_Response_y(::coordinate::srv::Relate_Response & msg)
  : msg_(msg)
  {}
  ::coordinate::srv::Relate_Response y(::coordinate::srv::Relate_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::coordinate::srv::Relate_Response msg_;
};

class Init_Relate_Response_x
{
public:
  Init_Relate_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Relate_Response_y x(::coordinate::srv::Relate_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Relate_Response_y(msg_);
  }

private:
  ::coordinate::srv::Relate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::coordinate::srv::Relate_Response>()
{
  return coordinate::srv::builder::Init_Relate_Response_x();
}

}  // namespace coordinate

#endif  // COORDINATE__SRV__DETAIL__RELATE__BUILDER_HPP_
