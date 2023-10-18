// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from coordinate:srv/Relate.idl
// generated code does not contain a copyright notice

#ifndef COORDINATE__SRV__DETAIL__RELATE__STRUCT_HPP_
#define COORDINATE__SRV__DETAIL__RELATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__coordinate__srv__Relate_Request __attribute__((deprecated))
#else
# define DEPRECATED__coordinate__srv__Relate_Request __declspec(deprecated)
#endif

namespace coordinate
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Relate_Request_
{
  using Type = Relate_Request_<ContainerAllocator>;

  explicit Relate_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->theta = 0.0;
      this->offset_x = 0.0;
      this->offset_y = 0.0;
    }
  }

  explicit Relate_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->theta = 0.0;
      this->offset_x = 0.0;
      this->offset_y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _theta_type =
    double;
  _theta_type theta;
  using _offset_x_type =
    double;
  _offset_x_type offset_x;
  using _offset_y_type =
    double;
  _offset_y_type offset_y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__offset_x(
    const double & _arg)
  {
    this->offset_x = _arg;
    return *this;
  }
  Type & set__offset_y(
    const double & _arg)
  {
    this->offset_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coordinate::srv::Relate_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const coordinate::srv::Relate_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coordinate::srv::Relate_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coordinate::srv::Relate_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coordinate::srv::Relate_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coordinate::srv::Relate_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coordinate::srv::Relate_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coordinate::srv::Relate_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coordinate::srv::Relate_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coordinate::srv::Relate_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coordinate__srv__Relate_Request
    std::shared_ptr<coordinate::srv::Relate_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coordinate__srv__Relate_Request
    std::shared_ptr<coordinate::srv::Relate_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Relate_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->offset_x != other.offset_x) {
      return false;
    }
    if (this->offset_y != other.offset_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Relate_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Relate_Request_

// alias to use template instance with default allocator
using Relate_Request =
  coordinate::srv::Relate_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace coordinate


#ifndef _WIN32
# define DEPRECATED__coordinate__srv__Relate_Response __attribute__((deprecated))
#else
# define DEPRECATED__coordinate__srv__Relate_Response __declspec(deprecated)
#endif

namespace coordinate
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Relate_Response_
{
  using Type = Relate_Response_<ContainerAllocator>;

  explicit Relate_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit Relate_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coordinate::srv::Relate_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const coordinate::srv::Relate_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coordinate::srv::Relate_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coordinate::srv::Relate_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coordinate::srv::Relate_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coordinate::srv::Relate_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coordinate::srv::Relate_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coordinate::srv::Relate_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coordinate::srv::Relate_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coordinate::srv::Relate_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coordinate__srv__Relate_Response
    std::shared_ptr<coordinate::srv::Relate_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coordinate__srv__Relate_Response
    std::shared_ptr<coordinate::srv::Relate_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Relate_Response_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Relate_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Relate_Response_

// alias to use template instance with default allocator
using Relate_Response =
  coordinate::srv::Relate_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace coordinate

namespace coordinate
{

namespace srv
{

struct Relate
{
  using Request = coordinate::srv::Relate_Request;
  using Response = coordinate::srv::Relate_Response;
};

}  // namespace srv

}  // namespace coordinate

#endif  // COORDINATE__SRV__DETAIL__RELATE__STRUCT_HPP_
