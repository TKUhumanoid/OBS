// Generated by gencpp from file tku_msgs/ObservationData.msg
// DO NOT EDIT!


#ifndef TKU_MSGS_MESSAGE_OBSERVATIONDATA_H
#define TKU_MSGS_MESSAGE_OBSERVATIONDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <tku_msgs/FeaturePoint.h>
#include <tku_msgs/LineData.h>

namespace tku_msgs
{
template <class ContainerAllocator>
struct ObservationData_
{
  typedef ObservationData_<ContainerAllocator> Type;

  ObservationData_()
    : imagestate(false)
    , scan_line()
    , landmark()  {
    }
  ObservationData_(const ContainerAllocator& _alloc)
    : imagestate(false)
    , scan_line(_alloc)
    , landmark(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _imagestate_type;
  _imagestate_type imagestate;

   typedef std::vector< ::tku_msgs::FeaturePoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::tku_msgs::FeaturePoint_<ContainerAllocator> >::other >  _scan_line_type;
  _scan_line_type scan_line;

   typedef std::vector< ::tku_msgs::LineData_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::tku_msgs::LineData_<ContainerAllocator> >::other >  _landmark_type;
  _landmark_type landmark;





  typedef boost::shared_ptr< ::tku_msgs::ObservationData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tku_msgs::ObservationData_<ContainerAllocator> const> ConstPtr;

}; // struct ObservationData_

typedef ::tku_msgs::ObservationData_<std::allocator<void> > ObservationData;

typedef boost::shared_ptr< ::tku_msgs::ObservationData > ObservationDataPtr;
typedef boost::shared_ptr< ::tku_msgs::ObservationData const> ObservationDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tku_msgs::ObservationData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tku_msgs::ObservationData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tku_msgs::ObservationData_<ContainerAllocator1> & lhs, const ::tku_msgs::ObservationData_<ContainerAllocator2> & rhs)
{
  return lhs.imagestate == rhs.imagestate &&
    lhs.scan_line == rhs.scan_line &&
    lhs.landmark == rhs.landmark;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tku_msgs::ObservationData_<ContainerAllocator1> & lhs, const ::tku_msgs::ObservationData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tku_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::ObservationData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::ObservationData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::ObservationData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::ObservationData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::ObservationData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::ObservationData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tku_msgs::ObservationData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "04b866c2459e969db73d6d3706f9068b";
  }

  static const char* value(const ::tku_msgs::ObservationData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x04b866c2459e969dULL;
  static const uint64_t static_value2 = 0xb73d6d3706f9068bULL;
};

template<class ContainerAllocator>
struct DataType< ::tku_msgs::ObservationData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tku_msgs/ObservationData";
  }

  static const char* value(const ::tku_msgs::ObservationData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tku_msgs::ObservationData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool imagestate\n"
"FeaturePoint[] scan_line\n"
"LineData[] landmark\n"
"\n"
"================================================================================\n"
"MSG: tku_msgs/FeaturePoint\n"
"Distance[] feature_point\n"
"\n"
"================================================================================\n"
"MSG: tku_msgs/Distance\n"
"int16 x_dis\n"
"int16 y_dis\n"
"int16 dis\n"
"\n"
"================================================================================\n"
"MSG: tku_msgs/LineData\n"
"float32 angle\n"
"int16 length\n"
"Cooridinate start_point\n"
"Cooridinate end_point\n"
"Cooridinate center_point\n"
"\n"
"================================================================================\n"
"MSG: tku_msgs/Cooridinate\n"
"int16 x\n"
"int16 y\n"
;
  }

  static const char* value(const ::tku_msgs::ObservationData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tku_msgs::ObservationData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.imagestate);
      stream.next(m.scan_line);
      stream.next(m.landmark);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObservationData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tku_msgs::ObservationData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tku_msgs::ObservationData_<ContainerAllocator>& v)
  {
    s << indent << "imagestate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.imagestate);
    s << indent << "scan_line[]" << std::endl;
    for (size_t i = 0; i < v.scan_line.size(); ++i)
    {
      s << indent << "  scan_line[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::tku_msgs::FeaturePoint_<ContainerAllocator> >::stream(s, indent + "    ", v.scan_line[i]);
    }
    s << indent << "landmark[]" << std::endl;
    for (size_t i = 0; i < v.landmark.size(); ++i)
    {
      s << indent << "  landmark[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::tku_msgs::LineData_<ContainerAllocator> >::stream(s, indent + "    ", v.landmark[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TKU_MSGS_MESSAGE_OBSERVATIONDATA_H
