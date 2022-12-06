// Generated by gencpp from file tku_msgs/wave.msg
// DO NOT EDIT!


#ifndef TKU_MSGS_MESSAGE_WAVE_H
#define TKU_MSGS_MESSAGE_WAVE_H


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
struct wave_
{
  typedef wave_<ContainerAllocator> Type;

  wave_()
    : R_move_X(0.0)
    , L_move_X(0.0)
    , R_move_Y(0.0)
    , L_move_Y(0.0)
    , R_move_Z(0.0)
    , L_move_Z(0.0)
    , move_COM_X(0.0)
    , move_COM_Y(0.0)
    , move_COM_Z(0.0)
    , R_Thta(0.0)
    , L_Thta(0.0)
    , Point(0)  {
    }
  wave_(const ContainerAllocator& _alloc)
    : R_move_X(0.0)
    , L_move_X(0.0)
    , R_move_Y(0.0)
    , L_move_Y(0.0)
    , R_move_Z(0.0)
    , L_move_Z(0.0)
    , move_COM_X(0.0)
    , move_COM_Y(0.0)
    , move_COM_Z(0.0)
    , R_Thta(0.0)
    , L_Thta(0.0)
    , Point(0)  {
  (void)_alloc;
    }



   typedef float _R_move_X_type;
  _R_move_X_type R_move_X;

   typedef float _L_move_X_type;
  _L_move_X_type L_move_X;

   typedef float _R_move_Y_type;
  _R_move_Y_type R_move_Y;

   typedef float _L_move_Y_type;
  _L_move_Y_type L_move_Y;

   typedef float _R_move_Z_type;
  _R_move_Z_type R_move_Z;

   typedef float _L_move_Z_type;
  _L_move_Z_type L_move_Z;

   typedef float _move_COM_X_type;
  _move_COM_X_type move_COM_X;

   typedef float _move_COM_Y_type;
  _move_COM_Y_type move_COM_Y;

   typedef float _move_COM_Z_type;
  _move_COM_Z_type move_COM_Z;

   typedef float _R_Thta_type;
  _R_Thta_type R_Thta;

   typedef float _L_Thta_type;
  _L_Thta_type L_Thta;

   typedef int32_t _Point_type;
  _Point_type Point;





  typedef boost::shared_ptr< ::tku_msgs::wave_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tku_msgs::wave_<ContainerAllocator> const> ConstPtr;

}; // struct wave_

typedef ::tku_msgs::wave_<std::allocator<void> > wave;

typedef boost::shared_ptr< ::tku_msgs::wave > wavePtr;
typedef boost::shared_ptr< ::tku_msgs::wave const> waveConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tku_msgs::wave_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tku_msgs::wave_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tku_msgs::wave_<ContainerAllocator1> & lhs, const ::tku_msgs::wave_<ContainerAllocator2> & rhs)
{
  return lhs.R_move_X == rhs.R_move_X &&
    lhs.L_move_X == rhs.L_move_X &&
    lhs.R_move_Y == rhs.R_move_Y &&
    lhs.L_move_Y == rhs.L_move_Y &&
    lhs.R_move_Z == rhs.R_move_Z &&
    lhs.L_move_Z == rhs.L_move_Z &&
    lhs.move_COM_X == rhs.move_COM_X &&
    lhs.move_COM_Y == rhs.move_COM_Y &&
    lhs.move_COM_Z == rhs.move_COM_Z &&
    lhs.R_Thta == rhs.R_Thta &&
    lhs.L_Thta == rhs.L_Thta &&
    lhs.Point == rhs.Point;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tku_msgs::wave_<ContainerAllocator1> & lhs, const ::tku_msgs::wave_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tku_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::wave_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::wave_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::wave_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::wave_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::wave_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::wave_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tku_msgs::wave_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2dde10a25ae38be88936bf8db5ec2f73";
  }

  static const char* value(const ::tku_msgs::wave_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2dde10a25ae38be8ULL;
  static const uint64_t static_value2 = 0x8936bf8db5ec2f73ULL;
};

template<class ContainerAllocator>
struct DataType< ::tku_msgs::wave_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tku_msgs/wave";
  }

  static const char* value(const ::tku_msgs::wave_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tku_msgs::wave_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 R_move_X\n"
"float32 L_move_X\n"
"float32 R_move_Y\n"
"float32 L_move_Y\n"
"float32 R_move_Z\n"
"float32 L_move_Z\n"
"float32 move_COM_X\n"
"float32 move_COM_Y\n"
"float32 move_COM_Z\n"
"float32 R_Thta\n"
"float32 L_Thta\n"
"int32 Point\n"
"\n"
;
  }

  static const char* value(const ::tku_msgs::wave_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tku_msgs::wave_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.R_move_X);
      stream.next(m.L_move_X);
      stream.next(m.R_move_Y);
      stream.next(m.L_move_Y);
      stream.next(m.R_move_Z);
      stream.next(m.L_move_Z);
      stream.next(m.move_COM_X);
      stream.next(m.move_COM_Y);
      stream.next(m.move_COM_Z);
      stream.next(m.R_Thta);
      stream.next(m.L_Thta);
      stream.next(m.Point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct wave_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tku_msgs::wave_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tku_msgs::wave_<ContainerAllocator>& v)
  {
    s << indent << "R_move_X: ";
    Printer<float>::stream(s, indent + "  ", v.R_move_X);
    s << indent << "L_move_X: ";
    Printer<float>::stream(s, indent + "  ", v.L_move_X);
    s << indent << "R_move_Y: ";
    Printer<float>::stream(s, indent + "  ", v.R_move_Y);
    s << indent << "L_move_Y: ";
    Printer<float>::stream(s, indent + "  ", v.L_move_Y);
    s << indent << "R_move_Z: ";
    Printer<float>::stream(s, indent + "  ", v.R_move_Z);
    s << indent << "L_move_Z: ";
    Printer<float>::stream(s, indent + "  ", v.L_move_Z);
    s << indent << "move_COM_X: ";
    Printer<float>::stream(s, indent + "  ", v.move_COM_X);
    s << indent << "move_COM_Y: ";
    Printer<float>::stream(s, indent + "  ", v.move_COM_Y);
    s << indent << "move_COM_Z: ";
    Printer<float>::stream(s, indent + "  ", v.move_COM_Z);
    s << indent << "R_Thta: ";
    Printer<float>::stream(s, indent + "  ", v.R_Thta);
    s << indent << "L_Thta: ";
    Printer<float>::stream(s, indent + "  ", v.L_Thta);
    s << indent << "Point: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Point);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TKU_MSGS_MESSAGE_WAVE_H
