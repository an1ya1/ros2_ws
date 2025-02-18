// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_unitree_legged_msgs:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_unitree_legged_msgs/msg/detail/motor_cmd__rosidl_typesupport_introspection_c.h"
#include "ros2_unitree_legged_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_unitree_legged_msgs/msg/detail/motor_cmd__functions.h"
#include "ros2_unitree_legged_msgs/msg/detail/motor_cmd__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_unitree_legged_msgs__msg__MotorCmd__init(message_memory);
}

void ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_fini_function(void * message_memory)
{
  ros2_unitree_legged_msgs__msg__MotorCmd__fini(message_memory);
}

size_t ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__size_function__MotorCmd__reserve(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__reserve(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__reserve(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__fetch_function__MotorCmd__reserve(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__reserve(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__assign_function__MotorCmd__reserve(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__reserve(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_member_array[7] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_unitree_legged_msgs__msg__MotorCmd, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_unitree_legged_msgs__msg__MotorCmd, q),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_unitree_legged_msgs__msg__MotorCmd, dq),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tau",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_unitree_legged_msgs__msg__MotorCmd, tau),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_unitree_legged_msgs__msg__MotorCmd, kp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_unitree_legged_msgs__msg__MotorCmd, kd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(ros2_unitree_legged_msgs__msg__MotorCmd, reserve),  // bytes offset in struct
    NULL,  // default value
    ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__size_function__MotorCmd__reserve,  // size() function pointer
    ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__reserve,  // get_const(index) function pointer
    ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__reserve,  // get(index) function pointer
    ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__fetch_function__MotorCmd__reserve,  // fetch(index, &value) function pointer
    ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__assign_function__MotorCmd__reserve,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_members = {
  "ros2_unitree_legged_msgs__msg",  // message namespace
  "MotorCmd",  // message name
  7,  // number of fields
  sizeof(ros2_unitree_legged_msgs__msg__MotorCmd),
  ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_member_array,  // message members
  ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_type_support_handle = {
  0,
  &ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_unitree_legged_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_unitree_legged_msgs, msg, MotorCmd)() {
  if (!ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_type_support_handle.typesupport_identifier) {
    ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_unitree_legged_msgs__msg__MotorCmd__rosidl_typesupport_introspection_c__MotorCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
