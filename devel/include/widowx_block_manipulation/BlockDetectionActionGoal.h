// Generated by gencpp from file widowx_block_manipulation/BlockDetectionActionGoal.msg
// DO NOT EDIT!


#ifndef WIDOWX_BLOCK_MANIPULATION_MESSAGE_BLOCKDETECTIONACTIONGOAL_H
#define WIDOWX_BLOCK_MANIPULATION_MESSAGE_BLOCKDETECTIONACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <widowx_block_manipulation/BlockDetectionGoal.h>

namespace widowx_block_manipulation
{
template <class ContainerAllocator>
struct BlockDetectionActionGoal_
{
  typedef BlockDetectionActionGoal_<ContainerAllocator> Type;

  BlockDetectionActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  BlockDetectionActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::widowx_block_manipulation::BlockDetectionGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct BlockDetectionActionGoal_

typedef ::widowx_block_manipulation::BlockDetectionActionGoal_<std::allocator<void> > BlockDetectionActionGoal;

typedef boost::shared_ptr< ::widowx_block_manipulation::BlockDetectionActionGoal > BlockDetectionActionGoalPtr;
typedef boost::shared_ptr< ::widowx_block_manipulation::BlockDetectionActionGoal const> BlockDetectionActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator1> & lhs, const ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator1> & lhs, const ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace widowx_block_manipulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1ebf2c1d94729e15f30169d8857420df";
  }

  static const char* value(const ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1ebf2c1d94729e15ULL;
  static const uint64_t static_value2 = 0xf30169d8857420dfULL;
};

template<class ContainerAllocator>
struct DataType< ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "widowx_block_manipulation/BlockDetectionActionGoal";
  }

  static const char* value(const ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"BlockDetectionGoal goal\n"
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
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: widowx_block_manipulation/BlockDetectionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#goal definition\n"
"string frame\n"
"float32 table_height\n"
"float32 block_size\n"
;
  }

  static const char* value(const ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BlockDetectionActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::widowx_block_manipulation::BlockDetectionActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::widowx_block_manipulation::BlockDetectionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WIDOWX_BLOCK_MANIPULATION_MESSAGE_BLOCKDETECTIONACTIONGOAL_H
