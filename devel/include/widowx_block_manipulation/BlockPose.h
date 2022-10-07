// Generated by gencpp from file widowx_block_manipulation/BlockPose.msg
// DO NOT EDIT!


#ifndef WIDOWX_BLOCK_MANIPULATION_MESSAGE_BLOCKPOSE_H
#define WIDOWX_BLOCK_MANIPULATION_MESSAGE_BLOCKPOSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Quaternion.h>
#include <std_msgs/ColorRGBA.h>

namespace widowx_block_manipulation
{
template <class ContainerAllocator>
struct BlockPose_
{
  typedef BlockPose_<ContainerAllocator> Type;

  BlockPose_()
    : position()
    , orientation()
    , color()  {
    }
  BlockPose_(const ContainerAllocator& _alloc)
    : position(_alloc)
    , orientation(_alloc)
    , color(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _color_type;
  _color_type color;





  typedef boost::shared_ptr< ::widowx_block_manipulation::BlockPose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::widowx_block_manipulation::BlockPose_<ContainerAllocator> const> ConstPtr;

}; // struct BlockPose_

typedef ::widowx_block_manipulation::BlockPose_<std::allocator<void> > BlockPose;

typedef boost::shared_ptr< ::widowx_block_manipulation::BlockPose > BlockPosePtr;
typedef boost::shared_ptr< ::widowx_block_manipulation::BlockPose const> BlockPoseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::widowx_block_manipulation::BlockPose_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::widowx_block_manipulation::BlockPose_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::widowx_block_manipulation::BlockPose_<ContainerAllocator1> & lhs, const ::widowx_block_manipulation::BlockPose_<ContainerAllocator2> & rhs)
{
  return lhs.position == rhs.position &&
    lhs.orientation == rhs.orientation &&
    lhs.color == rhs.color;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::widowx_block_manipulation::BlockPose_<ContainerAllocator1> & lhs, const ::widowx_block_manipulation::BlockPose_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace widowx_block_manipulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::widowx_block_manipulation::BlockPose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::widowx_block_manipulation::BlockPose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::widowx_block_manipulation::BlockPose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::widowx_block_manipulation::BlockPose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::widowx_block_manipulation::BlockPose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::widowx_block_manipulation::BlockPose_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::widowx_block_manipulation::BlockPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d8177f1ddf34f13385e0621f5b132e51";
  }

  static const char* value(const ::widowx_block_manipulation::BlockPose_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd8177f1ddf34f133ULL;
  static const uint64_t static_value2 = 0x85e0621f5b132e51ULL;
};

template<class ContainerAllocator>
struct DataType< ::widowx_block_manipulation::BlockPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "widowx_block_manipulation/BlockPose";
  }

  static const char* value(const ::widowx_block_manipulation::BlockPose_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::widowx_block_manipulation::BlockPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point position\n"
"geometry_msgs/Quaternion orientation\n"
"std_msgs/ColorRGBA color\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
;
  }

  static const char* value(const ::widowx_block_manipulation::BlockPose_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::widowx_block_manipulation::BlockPose_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
      stream.next(m.orientation);
      stream.next(m.color);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BlockPose_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::widowx_block_manipulation::BlockPose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::widowx_block_manipulation::BlockPose_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
    s << indent << "color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.color);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WIDOWX_BLOCK_MANIPULATION_MESSAGE_BLOCKPOSE_H