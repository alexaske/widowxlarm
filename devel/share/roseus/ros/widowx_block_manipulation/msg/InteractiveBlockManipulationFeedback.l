;; Auto-generated. Do not edit!


(when (boundp 'widowx_block_manipulation::InteractiveBlockManipulationFeedback)
  (if (not (find-package "WIDOWX_BLOCK_MANIPULATION"))
    (make-package "WIDOWX_BLOCK_MANIPULATION"))
  (shadow 'InteractiveBlockManipulationFeedback (find-package "WIDOWX_BLOCK_MANIPULATION")))
(unless (find-package "WIDOWX_BLOCK_MANIPULATION::INTERACTIVEBLOCKMANIPULATIONFEEDBACK")
  (make-package "WIDOWX_BLOCK_MANIPULATION::INTERACTIVEBLOCKMANIPULATIONFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude InteractiveBlockManipulationFeedback.msg.html


(defclass widowx_block_manipulation::InteractiveBlockManipulationFeedback
  :super ros::object
  :slots ())

(defmethod widowx_block_manipulation::InteractiveBlockManipulationFeedback
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(setf (get widowx_block_manipulation::InteractiveBlockManipulationFeedback :md5sum-) "d41d8cd98f00b204e9800998ecf8427e")
(setf (get widowx_block_manipulation::InteractiveBlockManipulationFeedback :datatype-) "widowx_block_manipulation/InteractiveBlockManipulationFeedback")
(setf (get widowx_block_manipulation::InteractiveBlockManipulationFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#feedback


")



(provide :widowx_block_manipulation/InteractiveBlockManipulationFeedback "d41d8cd98f00b204e9800998ecf8427e")

