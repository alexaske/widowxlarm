; Auto-generated. Do not edit!


(cl:in-package widowx_block_manipulation-msg)


;//! \htmlinclude BlockDetectionGoal.msg.html

(cl:defclass <BlockDetectionGoal> (roslisp-msg-protocol:ros-message)
  ((frame
    :reader frame
    :initarg :frame
    :type cl:string
    :initform "")
   (table_height
    :reader table_height
    :initarg :table_height
    :type cl:float
    :initform 0.0)
   (block_size
    :reader block_size
    :initarg :block_size
    :type cl:float
    :initform 0.0))
)

(cl:defclass BlockDetectionGoal (<BlockDetectionGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <BlockDetectionGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'BlockDetectionGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name widowx_block_manipulation-msg:<BlockDetectionGoal> is deprecated: use widowx_block_manipulation-msg:BlockDetectionGoal instead.")))

(cl:ensure-generic-function 'frame-val :lambda-list '(m))
(cl:defmethod frame-val ((m <BlockDetectionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader widowx_block_manipulation-msg:frame-val is deprecated.  Use widowx_block_manipulation-msg:frame instead.")
  (frame m))

(cl:ensure-generic-function 'table_height-val :lambda-list '(m))
(cl:defmethod table_height-val ((m <BlockDetectionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader widowx_block_manipulation-msg:table_height-val is deprecated.  Use widowx_block_manipulation-msg:table_height instead.")
  (table_height m))

(cl:ensure-generic-function 'block_size-val :lambda-list '(m))
(cl:defmethod block_size-val ((m <BlockDetectionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader widowx_block_manipulation-msg:block_size-val is deprecated.  Use widowx_block_manipulation-msg:block_size instead.")
  (block_size m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <BlockDetectionGoal>) ostream)
  "Serializes a message object of type '<BlockDetectionGoal>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'frame))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'frame))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'table_height))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'block_size))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <BlockDetectionGoal>) istream)
  "Deserializes a message object of type '<BlockDetectionGoal>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'frame) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'frame) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'table_height) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'block_size) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<BlockDetectionGoal>)))
  "Returns string type for a message object of type '<BlockDetectionGoal>"
  "widowx_block_manipulation/BlockDetectionGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'BlockDetectionGoal)))
  "Returns string type for a message object of type 'BlockDetectionGoal"
  "widowx_block_manipulation/BlockDetectionGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<BlockDetectionGoal>)))
  "Returns md5sum for a message object of type '<BlockDetectionGoal>"
  "55e74460cfe309311425690ecb457a45")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'BlockDetectionGoal)))
  "Returns md5sum for a message object of type 'BlockDetectionGoal"
  "55e74460cfe309311425690ecb457a45")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<BlockDetectionGoal>)))
  "Returns full string definition for message of type '<BlockDetectionGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal definition~%string frame~%float32 table_height~%float32 block_size~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'BlockDetectionGoal)))
  "Returns full string definition for message of type 'BlockDetectionGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#goal definition~%string frame~%float32 table_height~%float32 block_size~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <BlockDetectionGoal>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'frame))
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <BlockDetectionGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'BlockDetectionGoal
    (cl:cons ':frame (frame msg))
    (cl:cons ':table_height (table_height msg))
    (cl:cons ':block_size (block_size msg))
))
