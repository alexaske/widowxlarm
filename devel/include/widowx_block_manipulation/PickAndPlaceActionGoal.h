// Generated by gencpp from file widowx_block_manipulation/PickAndPlaceActionGoal.msg
// DO NOT EDIT!


#ifndef WIDOWX_BLOCK_MANIPULATION_MESSAGE_PICKANDPLACEACTIONGOAL_H
#define WIDOWX_BLOCK_MANIPULATION_MESSAGE_PICKANDPLACEACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <widowx_block_manipulation/PickAndPlaceGoal.h>

namespace widowx_block_manipulation
{
template <class ContainerAllocator>
struct PickAndPlaceActionGoal_
{
  typedef PickAndPlaceActionGoal_<ContainerAllocator> Type;

  PickAndPlaceActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  PickAndPlaceActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::widowx_block_manipulation::PickAndPlaceGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct PickAndPlaceActionGoal_

typedef ::widowx_block_manipulation::PickAndPlaceActionGoal_<std::allocator<void> > PickAndPlaceActionGoal;

typedef boost::shared_ptr< ::widowx_block_manipulation::PickAndPlaceActionGoal > PickAndPlaceActionGoalPtr;
typedef boost::shared_ptr< ::widowx_block_manipulation::PickAndPlaceActionGoal const> PickAndPlaceActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator1> & lhs, const ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator1> & lhs, const ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace widowx_block_manipulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "414a1aaefb37f8efaa1fba6d43aa0061";
  }

  static const char* value(const ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x414a1aaefb37f8efULL;
  static const uint64_t static_value2 = 0xaa1fba6d43aa0061ULL;
};

template<class ContainerAllocator>
struct DataType< ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "widowx_block_manipulation/PickAndPlaceActionGoal";
  }

  static const char* value(const ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"PickAndPlaceGoal goal\n"
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
"MSG: widowx_block_manipulation/PickAndPlaceGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#goal definition\n"
"string frame\n"
"float32 z_up\n"
"float32 gripper_open\n"
"float32 gripper_closed\n"
"geometry_msgs/Pose pickup_pose\n"
"geometry_msgs/Pose place_pose\n"
"string topic\n"
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
;
  }

  static const char* value(const ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PickAndPlaceActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::widowx_block_manipulation::PickAndPlaceActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::widowx_block_manipulation::PickAndPlaceGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WIDOWX_BLOCK_MANIPULATION_MESSAGE_PICKANDPLACEACTIONGOAL_H
