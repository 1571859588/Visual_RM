// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from relative_interface:srv/RelateCoordinate.idl
// generated code does not contain a copyright notice

#ifndef RELATIVE_INTERFACE__SRV__DETAIL__RELATE_COORDINATE__BUILDER_HPP_
#define RELATIVE_INTERFACE__SRV__DETAIL__RELATE_COORDINATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "relative_interface/srv/detail/relate_coordinate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace relative_interface
{

namespace srv
{

namespace builder
{

class Init_RelateCoordinate_Request_y
{
public:
  explicit Init_RelateCoordinate_Request_y(::relative_interface::srv::RelateCoordinate_Request & msg)
  : msg_(msg)
  {}
  ::relative_interface::srv::RelateCoordinate_Request y(::relative_interface::srv::RelateCoordinate_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::relative_interface::srv::RelateCoordinate_Request msg_;
};

class Init_RelateCoordinate_Request_x
{
public:
  explicit Init_RelateCoordinate_Request_x(::relative_interface::srv::RelateCoordinate_Request & msg)
  : msg_(msg)
  {}
  Init_RelateCoordinate_Request_y x(::relative_interface::srv::RelateCoordinate_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RelateCoordinate_Request_y(msg_);
  }

private:
  ::relative_interface::srv::RelateCoordinate_Request msg_;
};

class Init_RelateCoordinate_Request_offset_y
{
public:
  explicit Init_RelateCoordinate_Request_offset_y(::relative_interface::srv::RelateCoordinate_Request & msg)
  : msg_(msg)
  {}
  Init_RelateCoordinate_Request_x offset_y(::relative_interface::srv::RelateCoordinate_Request::_offset_y_type arg)
  {
    msg_.offset_y = std::move(arg);
    return Init_RelateCoordinate_Request_x(msg_);
  }

private:
  ::relative_interface::srv::RelateCoordinate_Request msg_;
};

class Init_RelateCoordinate_Request_offset_x
{
public:
  explicit Init_RelateCoordinate_Request_offset_x(::relative_interface::srv::RelateCoordinate_Request & msg)
  : msg_(msg)
  {}
  Init_RelateCoordinate_Request_offset_y offset_x(::relative_interface::srv::RelateCoordinate_Request::_offset_x_type arg)
  {
    msg_.offset_x = std::move(arg);
    return Init_RelateCoordinate_Request_offset_y(msg_);
  }

private:
  ::relative_interface::srv::RelateCoordinate_Request msg_;
};

class Init_RelateCoordinate_Request_offset_theta
{
public:
  Init_RelateCoordinate_Request_offset_theta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelateCoordinate_Request_offset_x offset_theta(::relative_interface::srv::RelateCoordinate_Request::_offset_theta_type arg)
  {
    msg_.offset_theta = std::move(arg);
    return Init_RelateCoordinate_Request_offset_x(msg_);
  }

private:
  ::relative_interface::srv::RelateCoordinate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::relative_interface::srv::RelateCoordinate_Request>()
{
  return relative_interface::srv::builder::Init_RelateCoordinate_Request_offset_theta();
}

}  // namespace relative_interface


namespace relative_interface
{

namespace srv
{

namespace builder
{

class Init_RelateCoordinate_Response_y
{
public:
  explicit Init_RelateCoordinate_Response_y(::relative_interface::srv::RelateCoordinate_Response & msg)
  : msg_(msg)
  {}
  ::relative_interface::srv::RelateCoordinate_Response y(::relative_interface::srv::RelateCoordinate_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::relative_interface::srv::RelateCoordinate_Response msg_;
};

class Init_RelateCoordinate_Response_x
{
public:
  Init_RelateCoordinate_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelateCoordinate_Response_y x(::relative_interface::srv::RelateCoordinate_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RelateCoordinate_Response_y(msg_);
  }

private:
  ::relative_interface::srv::RelateCoordinate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::relative_interface::srv::RelateCoordinate_Response>()
{
  return relative_interface::srv::builder::Init_RelateCoordinate_Response_x();
}

}  // namespace relative_interface

#endif  // RELATIVE_INTERFACE__SRV__DETAIL__RELATE_COORDINATE__BUILDER_HPP_
