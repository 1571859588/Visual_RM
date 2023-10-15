// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lt:srv/Addtwo.idl
// generated code does not contain a copyright notice

#ifndef LT__SRV__DETAIL__ADDTWO__STRUCT_HPP_
#define LT__SRV__DETAIL__ADDTWO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lt__srv__Addtwo_Request __attribute__((deprecated))
#else
# define DEPRECATED__lt__srv__Addtwo_Request __declspec(deprecated)
#endif

namespace lt
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Addtwo_Request_
{
  using Type = Addtwo_Request_<ContainerAllocator>;

  explicit Addtwo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
      this->b = 0l;
    }
  }

  explicit Addtwo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
      this->b = 0l;
    }
  }

  // field types and members
  using _a_type =
    int32_t;
  _a_type a;
  using _b_type =
    int32_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const int32_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int32_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lt::srv::Addtwo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lt::srv::Addtwo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lt::srv::Addtwo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lt::srv::Addtwo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lt::srv::Addtwo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lt::srv::Addtwo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lt::srv::Addtwo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lt::srv::Addtwo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lt::srv::Addtwo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lt::srv::Addtwo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lt__srv__Addtwo_Request
    std::shared_ptr<lt::srv::Addtwo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lt__srv__Addtwo_Request
    std::shared_ptr<lt::srv::Addtwo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Addtwo_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const Addtwo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Addtwo_Request_

// alias to use template instance with default allocator
using Addtwo_Request =
  lt::srv::Addtwo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lt


#ifndef _WIN32
# define DEPRECATED__lt__srv__Addtwo_Response __attribute__((deprecated))
#else
# define DEPRECATED__lt__srv__Addtwo_Response __declspec(deprecated)
#endif

namespace lt
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Addtwo_Response_
{
  using Type = Addtwo_Response_<ContainerAllocator>;

  explicit Addtwo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0l;
    }
  }

  explicit Addtwo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0l;
    }
  }

  // field types and members
  using _sum_type =
    int32_t;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const int32_t & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lt::srv::Addtwo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lt::srv::Addtwo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lt::srv::Addtwo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lt::srv::Addtwo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lt::srv::Addtwo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lt::srv::Addtwo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lt::srv::Addtwo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lt::srv::Addtwo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lt::srv::Addtwo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lt::srv::Addtwo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lt__srv__Addtwo_Response
    std::shared_ptr<lt::srv::Addtwo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lt__srv__Addtwo_Response
    std::shared_ptr<lt::srv::Addtwo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Addtwo_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const Addtwo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Addtwo_Response_

// alias to use template instance with default allocator
using Addtwo_Response =
  lt::srv::Addtwo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lt

namespace lt
{

namespace srv
{

struct Addtwo
{
  using Request = lt::srv::Addtwo_Request;
  using Response = lt::srv::Addtwo_Response;
};

}  // namespace srv

}  // namespace lt

#endif  // LT__SRV__DETAIL__ADDTWO__STRUCT_HPP_
