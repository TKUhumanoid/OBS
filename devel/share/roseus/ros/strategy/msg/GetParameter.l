;; Auto-generated. Do not edit!


(when (boundp 'strategy::GetParameter)
  (if (not (find-package "STRATEGY"))
    (make-package "STRATEGY"))
  (shadow 'GetParameter (find-package "STRATEGY")))
(unless (find-package "STRATEGY::GETPARAMETER")
  (make-package "STRATEGY::GETPARAMETER"))

(in-package "ROS")
;;//! \htmlinclude GetParameter.msg.html


(defclass strategy::GetParameter
  :super ros::object
  :slots (_Dy _Dx _RD _LD _WR _WL _slope_avg _LeftblueOBS_XMax _RightblueOBS_XMin _in_reddoor_flag _L_XMAX _R_XMIN _b_obs_flag _y_obs_flag _l_center_Dy _r_center_Dy _center_Dy _one_b_flag _two_b_flag _Deep_sum ))

(defmethod strategy::GetParameter
  (:init
   (&key
    ((:Dy __Dy) 0)
    ((:Dx __Dx) 0.0)
    ((:RD __RD) 0)
    ((:LD __LD) 0)
    ((:WR __WR) 0)
    ((:WL __WL) 0)
    ((:slope_avg __slope_avg) 0.0)
    ((:LeftblueOBS_XMax __LeftblueOBS_XMax) 0)
    ((:RightblueOBS_XMin __RightblueOBS_XMin) 0)
    ((:in_reddoor_flag __in_reddoor_flag) nil)
    ((:L_XMAX __L_XMAX) 0)
    ((:R_XMIN __R_XMIN) 0)
    ((:b_obs_flag __b_obs_flag) nil)
    ((:y_obs_flag __y_obs_flag) nil)
    ((:l_center_Dy __l_center_Dy) 0)
    ((:r_center_Dy __r_center_Dy) 0)
    ((:center_Dy __center_Dy) 0)
    ((:one_b_flag __one_b_flag) nil)
    ((:two_b_flag __two_b_flag) nil)
    ((:Deep_sum __Deep_sum) 0)
    )
   (send-super :init)
   (setq _Dy (round __Dy))
   (setq _Dx (float __Dx))
   (setq _RD (round __RD))
   (setq _LD (round __LD))
   (setq _WR (round __WR))
   (setq _WL (round __WL))
   (setq _slope_avg (float __slope_avg))
   (setq _LeftblueOBS_XMax (round __LeftblueOBS_XMax))
   (setq _RightblueOBS_XMin (round __RightblueOBS_XMin))
   (setq _in_reddoor_flag __in_reddoor_flag)
   (setq _L_XMAX (round __L_XMAX))
   (setq _R_XMIN (round __R_XMIN))
   (setq _b_obs_flag __b_obs_flag)
   (setq _y_obs_flag __y_obs_flag)
   (setq _l_center_Dy (round __l_center_Dy))
   (setq _r_center_Dy (round __r_center_Dy))
   (setq _center_Dy (round __center_Dy))
   (setq _one_b_flag __one_b_flag)
   (setq _two_b_flag __two_b_flag)
   (setq _Deep_sum (round __Deep_sum))
   self)
  (:Dy
   (&optional __Dy)
   (if __Dy (setq _Dy __Dy)) _Dy)
  (:Dx
   (&optional __Dx)
   (if __Dx (setq _Dx __Dx)) _Dx)
  (:RD
   (&optional __RD)
   (if __RD (setq _RD __RD)) _RD)
  (:LD
   (&optional __LD)
   (if __LD (setq _LD __LD)) _LD)
  (:WR
   (&optional __WR)
   (if __WR (setq _WR __WR)) _WR)
  (:WL
   (&optional __WL)
   (if __WL (setq _WL __WL)) _WL)
  (:slope_avg
   (&optional __slope_avg)
   (if __slope_avg (setq _slope_avg __slope_avg)) _slope_avg)
  (:LeftblueOBS_XMax
   (&optional __LeftblueOBS_XMax)
   (if __LeftblueOBS_XMax (setq _LeftblueOBS_XMax __LeftblueOBS_XMax)) _LeftblueOBS_XMax)
  (:RightblueOBS_XMin
   (&optional __RightblueOBS_XMin)
   (if __RightblueOBS_XMin (setq _RightblueOBS_XMin __RightblueOBS_XMin)) _RightblueOBS_XMin)
  (:in_reddoor_flag
   (&optional __in_reddoor_flag)
   (if __in_reddoor_flag (setq _in_reddoor_flag __in_reddoor_flag)) _in_reddoor_flag)
  (:L_XMAX
   (&optional __L_XMAX)
   (if __L_XMAX (setq _L_XMAX __L_XMAX)) _L_XMAX)
  (:R_XMIN
   (&optional __R_XMIN)
   (if __R_XMIN (setq _R_XMIN __R_XMIN)) _R_XMIN)
  (:b_obs_flag
   (&optional __b_obs_flag)
   (if __b_obs_flag (setq _b_obs_flag __b_obs_flag)) _b_obs_flag)
  (:y_obs_flag
   (&optional __y_obs_flag)
   (if __y_obs_flag (setq _y_obs_flag __y_obs_flag)) _y_obs_flag)
  (:l_center_Dy
   (&optional __l_center_Dy)
   (if __l_center_Dy (setq _l_center_Dy __l_center_Dy)) _l_center_Dy)
  (:r_center_Dy
   (&optional __r_center_Dy)
   (if __r_center_Dy (setq _r_center_Dy __r_center_Dy)) _r_center_Dy)
  (:center_Dy
   (&optional __center_Dy)
   (if __center_Dy (setq _center_Dy __center_Dy)) _center_Dy)
  (:one_b_flag
   (&optional __one_b_flag)
   (if __one_b_flag (setq _one_b_flag __one_b_flag)) _one_b_flag)
  (:two_b_flag
   (&optional __two_b_flag)
   (if __two_b_flag (setq _two_b_flag __two_b_flag)) _two_b_flag)
  (:Deep_sum
   (&optional __Deep_sum)
   (if __Deep_sum (setq _Deep_sum __Deep_sum)) _Deep_sum)
  (:serialization-length
   ()
   (+
    ;; int32 _Dy
    4
    ;; float32 _Dx
    4
    ;; int32 _RD
    4
    ;; int32 _LD
    4
    ;; int32 _WR
    4
    ;; int32 _WL
    4
    ;; float32 _slope_avg
    4
    ;; int32 _LeftblueOBS_XMax
    4
    ;; int32 _RightblueOBS_XMin
    4
    ;; bool _in_reddoor_flag
    1
    ;; int32 _L_XMAX
    4
    ;; int32 _R_XMIN
    4
    ;; bool _b_obs_flag
    1
    ;; bool _y_obs_flag
    1
    ;; int32 _l_center_Dy
    4
    ;; int32 _r_center_Dy
    4
    ;; int32 _center_Dy
    4
    ;; bool _one_b_flag
    1
    ;; bool _two_b_flag
    1
    ;; int32 _Deep_sum
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _Dy
       (write-long _Dy s)
     ;; float32 _Dx
       (sys::poke _Dx (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; int32 _RD
       (write-long _RD s)
     ;; int32 _LD
       (write-long _LD s)
     ;; int32 _WR
       (write-long _WR s)
     ;; int32 _WL
       (write-long _WL s)
     ;; float32 _slope_avg
       (sys::poke _slope_avg (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; int32 _LeftblueOBS_XMax
       (write-long _LeftblueOBS_XMax s)
     ;; int32 _RightblueOBS_XMin
       (write-long _RightblueOBS_XMin s)
     ;; bool _in_reddoor_flag
       (if _in_reddoor_flag (write-byte -1 s) (write-byte 0 s))
     ;; int32 _L_XMAX
       (write-long _L_XMAX s)
     ;; int32 _R_XMIN
       (write-long _R_XMIN s)
     ;; bool _b_obs_flag
       (if _b_obs_flag (write-byte -1 s) (write-byte 0 s))
     ;; bool _y_obs_flag
       (if _y_obs_flag (write-byte -1 s) (write-byte 0 s))
     ;; int32 _l_center_Dy
       (write-long _l_center_Dy s)
     ;; int32 _r_center_Dy
       (write-long _r_center_Dy s)
     ;; int32 _center_Dy
       (write-long _center_Dy s)
     ;; bool _one_b_flag
       (if _one_b_flag (write-byte -1 s) (write-byte 0 s))
     ;; bool _two_b_flag
       (if _two_b_flag (write-byte -1 s) (write-byte 0 s))
     ;; int32 _Deep_sum
       (write-long _Deep_sum s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _Dy
     (setq _Dy (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float32 _Dx
     (setq _Dx (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; int32 _RD
     (setq _RD (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _LD
     (setq _LD (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _WR
     (setq _WR (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _WL
     (setq _WL (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float32 _slope_avg
     (setq _slope_avg (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; int32 _LeftblueOBS_XMax
     (setq _LeftblueOBS_XMax (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _RightblueOBS_XMin
     (setq _RightblueOBS_XMin (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; bool _in_reddoor_flag
     (setq _in_reddoor_flag (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int32 _L_XMAX
     (setq _L_XMAX (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _R_XMIN
     (setq _R_XMIN (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; bool _b_obs_flag
     (setq _b_obs_flag (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _y_obs_flag
     (setq _y_obs_flag (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int32 _l_center_Dy
     (setq _l_center_Dy (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _r_center_Dy
     (setq _r_center_Dy (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _center_Dy
     (setq _center_Dy (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; bool _one_b_flag
     (setq _one_b_flag (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _two_b_flag
     (setq _two_b_flag (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int32 _Deep_sum
     (setq _Deep_sum (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get strategy::GetParameter :md5sum-) "9759c82a913d9fb9e363417e06932b7a")
(setf (get strategy::GetParameter :datatype-) "strategy/GetParameter")
(setf (get strategy::GetParameter :definition-)
      "int32 Dy
float32 Dx
int32 RD
int32 LD
int32 WR
int32 WL
float32 slope_avg
int32 LeftblueOBS_XMax
int32 RightblueOBS_XMin
bool in_reddoor_flag
int32 L_XMAX
int32 R_XMIN
bool b_obs_flag
bool y_obs_flag
int32 l_center_Dy
int32 r_center_Dy
int32 center_Dy
bool one_b_flag
bool two_b_flag
int32 Deep_sum

")



(provide :strategy/GetParameter "9759c82a913d9fb9e363417e06932b7a")


