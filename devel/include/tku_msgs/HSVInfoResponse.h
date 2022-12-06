// Generated by gencpp from file tku_msgs/HSVInfoResponse.msg
// DO NOT EDIT!


#ifndef TKU_MSGS_MESSAGE_HSVINFORESPONSE_H
#define TKU_MSGS_MESSAGE_HSVINFORESPONSE_H


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
struct HSVInfoResponse_
{
  typedef HSVInfoResponse_<ContainerAllocator> Type;

  HSVInfoResponse_()
    : Hmin(0)
    , Hmax(0)
    , Smin(0)
    , Smax(0)
    , Vmin(0)
    , Vmax(0)  {
    }
  HSVInfoResponse_(const ContainerAllocator& _alloc)
    : Hmin(0)
    , Hmax(0)
    , Smin(0)
    , Smax(0)
    , Vmin(0)
    , Vmax(0)  {
  (void)_alloc;
    }



   typedef int32_t _Hmin_type;
  _Hmin_type Hmin;

   typedef int32_t _Hmax_type;
  _Hmax_type Hmax;

   typedef int32_t _Smin_type;
  _Smin_type Smin;

   typedef int32_t _Smax_type;
  _Smax_type Smax;

   typedef int32_t _Vmin_type;
  _Vmin_type Vmin;

   typedef int32_t _Vmax_type;
  _Vmax_type Vmax;





  typedef boost::shared_ptr< ::tku_msgs::HSVInfoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tku_msgs::HSVInfoResponse_<ContainerAllocator> const> ConstPtr;

}; // struct HSVInfoResponse_

typedef ::tku_msgs::HSVInfoResponse_<std::allocator<void> > HSVInfoResponse;

typedef boost::shared_ptr< ::tku_msgs::HSVInfoResponse > HSVInfoResponsePtr;
typedef boost::shared_ptr< ::tku_msgs::HSVInfoResponse const> HSVInfoResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tku_msgs::HSVInfoResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tku_msgs::HSVInfoResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tku_msgs::HSVInfoResponse_<ContainerAllocator1> & lhs, const ::tku_msgs::HSVInfoResponse_<ContainerAllocator2> & rhs)
{
  return lhs.Hmin == rhs.Hmin &&
    lhs.Hmax == rhs.Hmax &&
    lhs.Smin == rhs.Smin &&
    lhs.Smax == rhs.Smax &&
    lhs.Vmin == rhs.Vmin &&
    lhs.Vmax == rhs.Vmax;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tku_msgs::HSVInfoResponse_<ContainerAllocator1> & lhs, const ::tku_msgs::HSVInfoResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tku_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::HSVInfoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::HSVInfoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::HSVInfoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::HSVInfoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::HSVInfoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::HSVInfoResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tku_msgs::HSVInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ef1760db172b14d05ca025430a2d5576";
  }

  static const char* value(const ::tku_msgs::HSVInfoResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xef1760db172b14d0ULL;
  static const uint64_t static_value2 = 0x5ca025430a2d5576ULL;
};

template<class ContainerAllocator>
struct DataType< ::tku_msgs::HSVInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tku_msgs/HSVInfoResponse";
  }

  static const char* value(const ::tku_msgs::HSVInfoResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tku_msgs::HSVInfoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 Hmin\n"
"int32 Hmax\n"
"int32 Smin\n"
"int32 Smax\n"
"int32 Vmin\n"
"int32 Vmax\n"
"\n"
;
  }

  static const char* value(const ::tku_msgs::HSVInfoResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tku_msgs::HSVInfoResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Hmin);
      stream.next(m.Hmax);
      stream.next(m.Smin);
      stream.next(m.Smax);
      stream.next(m.Vmin);
      stream.next(m.Vmax);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HSVInfoResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tku_msgs::HSVInfoResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tku_msgs::HSVInfoResponse_<ContainerAllocator>& v)
  {
    s << indent << "Hmin: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Hmin);
    s << indent << "Hmax: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Hmax);
    s << indent << "Smin: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Smin);
    s << indent << "Smax: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Smax);
    s << indent << "Vmin: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Vmin);
    s << indent << "Vmax: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Vmax);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TKU_MSGS_MESSAGE_HSVINFORESPONSE_H
