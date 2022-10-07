// Generated by gencpp from file widowx_block_manipulation/BlockDetectionResult.msg
// DO NOT EDIT!


#ifndef WIDOWX_BLOCK_MANIPULATION_MESSAGE_BLOCKDETECTIONRESULT_H
#define WIDOWX_BLOCK_MANIPULATION_MESSAGE_BLOCKDETECTIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseArray.h>
#include <widowx_block_manipulation/BlockPoseArray.h>

namespace widowx_block_manipulation
{
template <class ContainerAllocator>
struct BlockDetectionResult_
{
  typedef BlockDetectionResult_<ContainerAllocator> Type;

  BlockDetectionResult_()
    : blocks()
    , colored_blocks()  {
    }
  BlockDetectionResult_(const ContainerAllocator& _alloc)
    : blocks(_alloc)
    , colored_blocks(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseArray_<ContainerAllocator>  _blocks_type;
  _blocks_type blocks;

   typedef  ::widowx_block_manipulation::BlockPoseArray_<ContainerAllocator>  _colored_blocks_type;
  _colored_blocks_type colored_blocks;





  typedef boost::shared_ptr< ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> const> ConstPtr;

}; // struct BlockDetectionResult_

typedef ::widowx_block_manipulation::BlockDetectionResult_<std::allocator<void> > BlockDetectionResult;

typedef boost::shared_ptr< ::widowx_block_manipulation::BlockDetectionResult > BlockDetectionResultPtr;
typedef boost::shared_ptr< ::widowx_block_manipulation::BlockDetectionResult const> BlockDetectionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator1> & lhs, const ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator2> & rhs)
{
  return lhs.blocks == rhs.blocks &&
    lhs.colored_blocks == rhs.colored_blocks;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator1> & lhs, const ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace widowx_block_manipulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5e2b26cd9a6d99274f271f331a7d27da";
  }

  static const char* value(const ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5e2b26cd9a6d9927ULL;
  static const uint64_t static_value2 = 0x4f271f331a7d27daULL;
};

template<class ContainerAllocator>
struct DataType< ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "widowx_block_manipulation/BlockDetectionResult";
  }

  static const char* value(const ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#result definition\n"
"geometry_msgs/PoseArray blocks\n"
"widowx_block_manipulation/BlockPoseArray colored_blocks\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseArray\n"
"# An array of poses with a header for global reference.\n"
"\n"
"Header header\n"
"\n"
"Pose[] poses\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
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
"MSG: widowx_block_manipulation/BlockPoseArray\n"
"std_msgs/Header header\n"
"widowx_block_manipulation/BlockPose[] poses\n"
"================================================================================\n"
"MSG: widowx_block_manipulation/BlockPose\n"
"geometry_msgs/Point position\n"
"geometry_msgs/Quaternion orientation\n"
"std_msgs/ColorRGBA color\n"
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
;
  }

  static const char* value(const ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.blocks);
      stream.next(m.colored_blocks);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BlockDetectionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::widowx_block_manipulation::BlockDetectionResult_<ContainerAllocator>& v)
  {
    s << indent << "blocks: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseArray_<ContainerAllocator> >::stream(s, indent + "  ", v.blocks);
    s << indent << "colored_blocks: ";
    s << std::endl;
    Printer< ::widowx_block_manipulation::BlockPoseArray_<ContainerAllocator> >::stream(s, indent + "  ", v.colored_blocks);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WIDOWX_BLOCK_MANIPULATION_MESSAGE_BLOCKDETECTIONRESULT_H
