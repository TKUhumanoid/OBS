// Generated by gencpp from file tku_msgs/ReadMotionRequest.msg
// DO NOT EDIT!


#ifndef TKU_MSGS_MESSAGE_READMOTIONREQUEST_H
#define TKU_MSGS_MESSAGE_READMOTIONREQUEST_H


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
struct ReadMotionRequest_
{
  typedef ReadMotionRequest_<ContainerAllocator> Type;

  ReadMotionRequest_()
    : read(false)
    , name()
    , readstate(0)  {
    }
  ReadMotionRequest_(const ContainerAllocator& _alloc)
    : read(false)
    , name(_alloc)
    , readstate(0)  {
  (void)_alloc;
    }



   typedef uint8_t _read_type;
  _read_type read;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef int16_t _readstate_type;
  _readstate_type readstate;





  typedef boost::shared_ptr< ::tku_msgs::ReadMotionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tku_msgs::ReadMotionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ReadMotionRequest_

typedef ::tku_msgs::ReadMotionRequest_<std::allocator<void> > ReadMotionRequest;

typedef boost::shared_ptr< ::tku_msgs::ReadMotionRequest > ReadMotionRequestPtr;
typedef boost::shared_ptr< ::tku_msgs::ReadMotionRequest const> ReadMotionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tku_msgs::ReadMotionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tku_msgs::ReadMotionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tku_msgs::ReadMotionRequest_<ContainerAllocator1> & lhs, const ::tku_msgs::ReadMotionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.read == rhs.read &&
    lhs.name == rhs.name &&
    lhs.readstate == rhs.readstate;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tku_msgs::ReadMotionRequest_<ContainerAllocator1> & lhs, const ::tku_msgs::ReadMotionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tku_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::ReadMotionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::ReadMotionRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::ReadMotionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::ReadMotionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::ReadMotionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::ReadMotionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tku_msgs::ReadMotionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "46f0a8d4b8fdd80b49203be9e34adb25";
  }

  static const char* value(const ::tku_msgs::ReadMotionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x46f0a8d4b8fdd80bULL;
  static const uint64_t static_value2 = 0x49203be9e34adb25ULL;
};

template<class ContainerAllocator>
struct DataType< ::tku_msgs::ReadMotionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tku_msgs/ReadMotionRequest";
  }

  static const char* value(const ::tku_msgs::ReadMotionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tku_msgs::ReadMotionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool read\n"
"string name\n"
"int16 readstate\n"
;
  }

  static const char* value(const ::tku_msgs::ReadMotionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tku_msgs::ReadMotionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.read);
      stream.next(m.name);
      stream.next(m.readstate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReadMotionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tku_msgs::ReadMotionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tku_msgs::ReadMotionRequest_<ContainerAllocator>& v)
  {
    s << indent << "read: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.read);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "readstate: ";
    Printer<int16_t>::stream(s, indent + "  ", v.readstate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TKU_MSGS_MESSAGE_READMOTIONREQUEST_H
