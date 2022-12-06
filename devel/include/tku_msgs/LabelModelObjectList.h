// Generated by gencpp from file tku_msgs/LabelModelObjectList.msg
// DO NOT EDIT!


#ifndef TKU_MSGS_MESSAGE_LABELMODELOBJECTLIST_H
#define TKU_MSGS_MESSAGE_LABELMODELOBJECTLIST_H


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
struct LabelModelObjectList_
{
  typedef LabelModelObjectList_<ContainerAllocator> Type;

  LabelModelObjectList_()
    : LabelModel()  {
    }
  LabelModelObjectList_(const ContainerAllocator& _alloc)
    : LabelModel(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _LabelModel_type;
  _LabelModel_type LabelModel;





  typedef boost::shared_ptr< ::tku_msgs::LabelModelObjectList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tku_msgs::LabelModelObjectList_<ContainerAllocator> const> ConstPtr;

}; // struct LabelModelObjectList_

typedef ::tku_msgs::LabelModelObjectList_<std::allocator<void> > LabelModelObjectList;

typedef boost::shared_ptr< ::tku_msgs::LabelModelObjectList > LabelModelObjectListPtr;
typedef boost::shared_ptr< ::tku_msgs::LabelModelObjectList const> LabelModelObjectListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tku_msgs::LabelModelObjectList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tku_msgs::LabelModelObjectList_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tku_msgs::LabelModelObjectList_<ContainerAllocator1> & lhs, const ::tku_msgs::LabelModelObjectList_<ContainerAllocator2> & rhs)
{
  return lhs.LabelModel == rhs.LabelModel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tku_msgs::LabelModelObjectList_<ContainerAllocator1> & lhs, const ::tku_msgs::LabelModelObjectList_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tku_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::LabelModelObjectList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tku_msgs::LabelModelObjectList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::LabelModelObjectList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tku_msgs::LabelModelObjectList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::LabelModelObjectList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tku_msgs::LabelModelObjectList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tku_msgs::LabelModelObjectList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d3ec37f0e604748d8ecf9aa0d22ba18e";
  }

  static const char* value(const ::tku_msgs::LabelModelObjectList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd3ec37f0e604748dULL;
  static const uint64_t static_value2 = 0x8ecf9aa0d22ba18eULL;
};

template<class ContainerAllocator>
struct DataType< ::tku_msgs::LabelModelObjectList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tku_msgs/LabelModelObjectList";
  }

  static const char* value(const ::tku_msgs::LabelModelObjectList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tku_msgs::LabelModelObjectList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "char[] LabelModel\n"
;
  }

  static const char* value(const ::tku_msgs::LabelModelObjectList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tku_msgs::LabelModelObjectList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.LabelModel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LabelModelObjectList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tku_msgs::LabelModelObjectList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tku_msgs::LabelModelObjectList_<ContainerAllocator>& v)
  {
    s << indent << "LabelModel[]" << std::endl;
    for (size_t i = 0; i < v.LabelModel.size(); ++i)
    {
      s << indent << "  LabelModel[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.LabelModel[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TKU_MSGS_MESSAGE_LABELMODELOBJECTLIST_H
