// Generated by gencpp from file tku_msgs/DrawImage.msg
// DO NOT EDIT!


#ifndef TKU_MSGS_MESSAGE_DRAWIMAGE_H
#define TKU_MSGS_MESSAGE_DRAWIMAGE_H


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
struct DrawImage_
{
  typedef DrawImage_<ContainerAllocator> Type;

  DrawImage_()
    : cnt(0)
    , Mode(0)
    , XMin(0)
    , XMax(0)
    , YMin(0)
    , YMax(0)
    , rValue(0)
    , gValue(0)
    , bValue(0)  {
    }
  DrawImage_(const ContainerAllocator& _alloc)
    : cnt(0)
    , Mode(0)
    , XMin(0)
    , XMax(0)
    , YMin(0)
    , YMax(0)
    , rValue(0)
    , gValue(0)
    , bValue(0)  {
  (void)_alloc;
    }



   typedef int16_t _cnt_type;
  _cnt_type cnt;

   typedef int16_t _Mode_type;
  _Mode_type Mode;

   typedef int16_t _XMin_type;
  _XMin_type XMin;

   typedef int16_t _XMax_type;
  _XMax_type XMax;

   typedef int16_t _YMin_type;
  _YMin_type YMin;

   typedef int16_t _YMax_type;
  _YMax_type YMax;

   typedef int32_t _rValue_type;
  _rValue_type rValue;

   typedef int32_t _gValue_type;
  _gValue_type gValue;

   typedef int32_t _bValue_type;
  _bValue_type bValue;





  typedef boost::shared_ptr< ::tku_msgs::DrawImage_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tku_msgs::DrawImage_<ContainerAllocator> const> ConstPtr;

}; // struct DrawImage_

typedef ::tku_msgs::DrawImage_<std::allocator<void> > DrawImage;

typedef boost::shared_ptr< ::tku_msgs::DrawImage > DrawImagePtr;
typedef boost::shared_ptr< ::tku_msgs::DrawImage const> DrawImageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tku_msgs::DrawImage_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tku_msgs::DrawImage_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tku_msgs::DrawImage_<ContainerAllocator1> & lhs, const ::tku_msgs::DrawImage_<ContainerAllocator2> & rhs)
{
  return lhs.cnt == rhs.cnt &&
    lhs.Mode == rhs.Mode &&
    lhs.XMin == rhs.XMin &&
    lhs.XMax == rhs.XMax &&
    lhs.YMin == rhs.YMin &&
    lhs.YMax == rhs.YMax &&
    lhs.rValue == rhs.rValue &&
    lhs.gValue == rhs.gValue &&
    lhs.bValue == rhs.bValue;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tku_msgs::DrawImage_<ContainerAllocator1> & lhs, const ::tku_msgs::DrawImage_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tku_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::DrawImage_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::DrawImage_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::DrawImage_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::DrawImage_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::DrawImage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::DrawImage_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tku_msgs::DrawImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4f46c76bfaefb605a36feaa62dd79230";
  }

  static const char* value(const ::tku_msgs::DrawImage_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4f46c76bfaefb605ULL;
  static const uint64_t static_value2 = 0xa36feaa62dd79230ULL;
};

template<class ContainerAllocator>
struct DataType< ::tku_msgs::DrawImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tku_msgs/DrawImage";
  }

  static const char* value(const ::tku_msgs::DrawImage_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tku_msgs::DrawImage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 cnt\n"
"int16 Mode\n"
"int16 XMin\n"
"int16 XMax\n"
"int16 YMin\n"
"int16 YMax\n"
"int32 rValue\n"
"int32 gValue\n"
"int32 bValue\n"
;
  }

  static const char* value(const ::tku_msgs::DrawImage_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tku_msgs::DrawImage_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cnt);
      stream.next(m.Mode);
      stream.next(m.XMin);
      stream.next(m.XMax);
      stream.next(m.YMin);
      stream.next(m.YMax);
      stream.next(m.rValue);
      stream.next(m.gValue);
      stream.next(m.bValue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DrawImage_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tku_msgs::DrawImage_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tku_msgs::DrawImage_<ContainerAllocator>& v)
  {
    s << indent << "cnt: ";
    Printer<int16_t>::stream(s, indent + "  ", v.cnt);
    s << indent << "Mode: ";
    Printer<int16_t>::stream(s, indent + "  ", v.Mode);
    s << indent << "XMin: ";
    Printer<int16_t>::stream(s, indent + "  ", v.XMin);
    s << indent << "XMax: ";
    Printer<int16_t>::stream(s, indent + "  ", v.XMax);
    s << indent << "YMin: ";
    Printer<int16_t>::stream(s, indent + "  ", v.YMin);
    s << indent << "YMax: ";
    Printer<int16_t>::stream(s, indent + "  ", v.YMax);
    s << indent << "rValue: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rValue);
    s << indent << "gValue: ";
    Printer<int32_t>::stream(s, indent + "  ", v.gValue);
    s << indent << "bValue: ";
    Printer<int32_t>::stream(s, indent + "  ", v.bValue);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TKU_MSGS_MESSAGE_DRAWIMAGE_H
