// Generated by gencpp from file tku_msgs/SoccerData.msg
// DO NOT EDIT!


#ifndef TKU_MSGS_MESSAGE_SOCCERDATA_H
#define TKU_MSGS_MESSAGE_SOCCERDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <tku_msgs/Distance.h>

namespace tku_msgs
{
template <class ContainerAllocator>
struct SoccerData_
{
  typedef SoccerData_<ContainerAllocator> Type;

  SoccerData_()
    : x(0)
    , y(0)
    , height(0)
    , width(0)
    , distance()
    , object_mode(0)  {
    }
  SoccerData_(const ContainerAllocator& _alloc)
    : x(0)
    , y(0)
    , height(0)
    , width(0)
    , distance(_alloc)
    , object_mode(0)  {
  (void)_alloc;
    }



   typedef int32_t _x_type;
  _x_type x;

   typedef int32_t _y_type;
  _y_type y;

   typedef int32_t _height_type;
  _height_type height;

   typedef int32_t _width_type;
  _width_type width;

   typedef  ::tku_msgs::Distance_<ContainerAllocator>  _distance_type;
  _distance_type distance;

   typedef int32_t _object_mode_type;
  _object_mode_type object_mode;





  typedef boost::shared_ptr< ::tku_msgs::SoccerData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tku_msgs::SoccerData_<ContainerAllocator> const> ConstPtr;

}; // struct SoccerData_

typedef ::tku_msgs::SoccerData_<std::allocator<void> > SoccerData;

typedef boost::shared_ptr< ::tku_msgs::SoccerData > SoccerDataPtr;
typedef boost::shared_ptr< ::tku_msgs::SoccerData const> SoccerDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tku_msgs::SoccerData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tku_msgs::SoccerData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tku_msgs::SoccerData_<ContainerAllocator1> & lhs, const ::tku_msgs::SoccerData_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.height == rhs.height &&
    lhs.width == rhs.width &&
    lhs.distance == rhs.distance &&
    lhs.object_mode == rhs.object_mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tku_msgs::SoccerData_<ContainerAllocator1> & lhs, const ::tku_msgs::SoccerData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tku_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::SoccerData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::SoccerData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::SoccerData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::SoccerData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::SoccerData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::SoccerData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tku_msgs::SoccerData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f053806e000580e82f90d2eca914fb02";
  }

  static const char* value(const ::tku_msgs::SoccerData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf053806e000580e8ULL;
  static const uint64_t static_value2 = 0x2f90d2eca914fb02ULL;
};

template<class ContainerAllocator>
struct DataType< ::tku_msgs::SoccerData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tku_msgs/SoccerData";
  }

  static const char* value(const ::tku_msgs::SoccerData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tku_msgs::SoccerData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 x\n"
"int32 y\n"
"int32 height\n"
"int32 width\n"
"Distance distance\n"
"int32 object_mode\n"
"\n"
"================================================================================\n"
"MSG: tku_msgs/Distance\n"
"int16 x_dis\n"
"int16 y_dis\n"
"int16 dis\n"
;
  }

  static const char* value(const ::tku_msgs::SoccerData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tku_msgs::SoccerData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.height);
      stream.next(m.width);
      stream.next(m.distance);
      stream.next(m.object_mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SoccerData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tku_msgs::SoccerData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tku_msgs::SoccerData_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
    s << indent << "height: ";
    Printer<int32_t>::stream(s, indent + "  ", v.height);
    s << indent << "width: ";
    Printer<int32_t>::stream(s, indent + "  ", v.width);
    s << indent << "distance: ";
    s << std::endl;
    Printer< ::tku_msgs::Distance_<ContainerAllocator> >::stream(s, indent + "  ", v.distance);
    s << indent << "object_mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.object_mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TKU_MSGS_MESSAGE_SOCCERDATA_H
