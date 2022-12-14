;; Auto-generated. Do not edit!


(when (boundp 'widowx_block_manipulation::BlockPoseArray)
  (if (not (find-package "WIDOWX_BLOCK_MANIPULATION"))
    (make-package "WIDOWX_BLOCK_MANIPULATION"))
  (shadow 'BlockPoseArray (find-package "WIDOWX_BLOCK_MANIPULATION")))
(unless (find-package "WIDOWX_BLOCK_MANIPULATION::BLOCKPOSEARRAY")
  (make-package "WIDOWX_BLOCK_MANIPULATION::BLOCKPOSEARRAY"))

(in-package "ROS")
;;//! \htmlinclude BlockPoseArray.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass widowx_block_manipulation::BlockPoseArray
  :super ros::object
  :slots (_header _poses ))

(defmethod widowx_block_manipulation::BlockPoseArray
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:poses __poses) (let (r) (dotimes (i 0) (push (instance widowx_block_manipulation::BlockPose :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _poses __poses)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:poses
   (&rest __poses)
   (if (keywordp (car __poses))
       (send* _poses __poses)
     (progn
       (if __poses (setq _poses (car __poses)))
       _poses)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; widowx_block_manipulation/BlockPose[] _poses
    (apply #'+ (send-all _poses :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; widowx_block_manipulation/BlockPose[] _poses
     (write-long (length _poses) s)
     (dolist (elem _poses)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; widowx_block_manipulation/BlockPose[] _poses
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _poses (let (r) (dotimes (i n) (push (instance widowx_block_manipulation::BlockPose :init) r)) r))
     (dolist (elem- _poses)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get widowx_block_manipulation::BlockPoseArray :md5sum-) "0b9009808bd0695c0ca2990c0003dcea")
(setf (get widowx_block_manipulation::BlockPoseArray :datatype-) "widowx_block_manipulation/BlockPoseArray")
(setf (get widowx_block_manipulation::BlockPoseArray :definition-)
      "std_msgs/Header header
widowx_block_manipulation/BlockPose[] poses
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: widowx_block_manipulation/BlockPose
geometry_msgs/Point position
geometry_msgs/Quaternion orientation
std_msgs/ColorRGBA color
================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: std_msgs/ColorRGBA
float32 r
float32 g
float32 b
float32 a

")



(provide :widowx_block_manipulation/BlockPoseArray "0b9009808bd0695c0ca2990c0003dcea")


