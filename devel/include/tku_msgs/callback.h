// Generated by gencpp from file tku_msgs/callback.msg
// DO NOT EDIT!


#ifndef TKU_MSGS_MESSAGE_CALLBACK_H
#define TKU_MSGS_MESSAGE_CALLBACK_H


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
struct callback_
{
  typedef callback_<ContainerAllocator> Type;

  callback_()
    : data(false)
    , sector(0)  {
    }
  callback_(const ContainerAllocator& _alloc)
    : data(false)
    , sector(0)  {
  (void)_alloc;
    }



   typedef uint8_t _data_type;
  _data_type data;

   typedef int16_t _sector_type;
  _sector_type sector;





  typedef boost::shared_ptr< ::tku_msgs::callback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tku_msgs::callback_<ContainerAllocator> const> ConstPtr;

}; // struct callback_

typedef ::tku_msgs::callback_<std::allocator<void> > callback;

typedef boost::shared_ptr< ::tku_msgs::callback > callbackPtr;
typedef boost::shared_ptr< ::tku_msgs::callback const> callbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tku_msgs::callback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tku_msgs::callback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tku_msgs::callback_<ContainerAllocator1> & lhs, const ::tku_msgs::callback_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data &&
    lhs.sector == rhs.sector;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tku_msgs::callback_<ContainerAllocator1> & lhs, const ::tku_msgs::callback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tku_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::callback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::callback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::callback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::callback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::callback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::callback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tku_msgs::callback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6b3cc904e6f0eab1b5086fa228da4f91";
  }

  static const char* value(const ::tku_msgs::callback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6b3cc904e6f0eab1ULL;
  static const uint64_t static_value2 = 0xb5086fa228da4f91ULL;
};

template<class ContainerAllocator>
struct DataType< ::tku_msgs::callback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tku_msgs/callback";
  }

  static const char* value(const ::tku_msgs::callback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tku_msgs::callback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool data\n"
"int16 sector\n"
"\n"
;
  }

  static const char* value(const ::tku_msgs::callback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tku_msgs::callback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
      stream.next(m.sector);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct callback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tku_msgs::callback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tku_msgs::callback_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.data);
    s << indent << "sector: ";
    Printer<int16_t>::stream(s, indent + "  ", v.sector);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TKU_MSGS_MESSAGE_CALLBACK_H
