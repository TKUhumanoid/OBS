// Generated by gencpp from file tku_msgs/Walking_message.msg
// DO NOT EDIT!


#ifndef TKU_MSGS_MESSAGE_WALKING_MESSAGE_H
#define TKU_MSGS_MESSAGE_WALKING_MESSAGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tku_msgs
{
template <class ContainerAllocator>
struct Walking_message_
{
  typedef Walking_message_<ContainerAllocator> Type;

  Walking_message_()
    : X(0)
    , Y(0)
    , Z(0)
    , THETA(0)
    , Walking_Cmd(0)
    , Sensor_Mode(0)  {
    }
  Walking_message_(const ContainerAllocator& _alloc)
    : X(0)
    , Y(0)
    , Z(0)
    , THETA(0)
    , Walking_Cmd(0)
    , Sensor_Mode(0)  {
  (void)_alloc;
    }



   typedef int32_t _X_type;
  _X_type X;

   typedef int32_t _Y_type;
  _Y_type Y;

   typedef int32_t _Z_type;
  _Z_type Z;

   typedef int32_t _THETA_type;
  _THETA_type THETA;

   typedef int32_t _Walking_Cmd_type;
  _Walking_Cmd_type Walking_Cmd;

   typedef int32_t _Sensor_Mode_type;
  _Sensor_Mode_type Sensor_Mode;





  typedef boost::shared_ptr< ::tku_msgs::Walking_message_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tku_msgs::Walking_message_<ContainerAllocator> const> ConstPtr;

}; // struct Walking_message_

typedef ::tku_msgs::Walking_message_<std::allocator<void> > Walking_message;

typedef boost::shared_ptr< ::tku_msgs::Walking_message > Walking_messagePtr;
typedef boost::shared_ptr< ::tku_msgs::Walking_message const> Walking_messageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tku_msgs::Walking_message_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tku_msgs::Walking_message_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tku_msgs::Walking_message_<ContainerAllocator1> & lhs, const ::tku_msgs::Walking_message_<ContainerAllocator2> & rhs)
{
  return lhs.X == rhs.X &&
    lhs.Y == rhs.Y &&
    lhs.Z == rhs.Z &&
    lhs.THETA == rhs.THETA &&
    lhs.Walking_Cmd == rhs.Walking_Cmd &&
    lhs.Sensor_Mode == rhs.Sensor_Mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tku_msgs::Walking_message_<ContainerAllocator1> & lhs, const ::tku_msgs::Walking_message_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tku_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::Walking_message_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::Walking_message_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::Walking_message_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::Walking_message_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::Walking_message_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::Walking_message_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tku_msgs::Walking_message_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b0d0a5fcb9aac712e8b8ff719a5c6246";
  }

  static const char* value(const ::tku_msgs::Walking_message_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb0d0a5fcb9aac712ULL;
  static const uint64_t static_value2 = 0xe8b8ff719a5c6246ULL;
};

template<class ContainerAllocator>
struct DataType< ::tku_msgs::Walking_message_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tku_msgs/Walking_message";
  }

  static const char* value(const ::tku_msgs::Walking_message_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tku_msgs::Walking_message_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 X\n"
"int32 Y\n"
"int32 Z\n"
"int32 THETA\n"
"int32 Walking_Cmd\n"
"int32 Sensor_Mode\n"
;
  }

  static const char* value(const ::tku_msgs::Walking_message_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tku_msgs::Walking_message_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.X);
      stream.next(m.Y);
      stream.next(m.Z);
      stream.next(m.THETA);
      stream.next(m.Walking_Cmd);
      stream.next(m.Sensor_Mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Walking_message_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tku_msgs::Walking_message_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tku_msgs::Walking_message_<ContainerAllocator>& v)
  {
    s << indent << "X: ";
    Printer<int32_t>::stream(s, indent + "  ", v.X);
    s << indent << "Y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Y);
    s << indent << "Z: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Z);
    s << indent << "THETA: ";
    Printer<int32_t>::stream(s, indent + "  ", v.THETA);
    s << indent << "Walking_Cmd: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Walking_Cmd);
    s << indent << "Sensor_Mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Sensor_Mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TKU_MSGS_MESSAGE_WALKING_MESSAGE_H
