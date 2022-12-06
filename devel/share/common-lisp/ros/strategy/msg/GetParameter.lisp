; Auto-generated. Do not edit!


(cl:in-package strategy-msg)


;//! \htmlinclude GetParameter.msg.html

(cl:defclass <GetParameter> (roslisp-msg-protocol:ros-message)
  ((Dy
    :reader Dy
    :initarg :Dy
    :type cl:integer
    :initform 0)
   (Dx
    :reader Dx
    :initarg :Dx
    :type cl:float
    :initform 0.0)
   (RD
    :reader RD
    :initarg :RD
    :type cl:integer
    :initform 0)
   (LD
    :reader LD
    :initarg :LD
    :type cl:integer
    :initform 0)
   (WR
    :reader WR
    :initarg :WR
    :type cl:integer
    :initform 0)
   (WL
    :reader WL
    :initarg :WL
    :type cl:integer
    :initform 0)
   (slope_avg
    :reader slope_avg
    :initarg :slope_avg
    :type cl:float
    :initform 0.0)
   (LeftblueOBS_XMax
    :reader LeftblueOBS_XMax
    :initarg :LeftblueOBS_XMax
    :type cl:integer
    :initform 0)
   (RightblueOBS_XMin
    :reader RightblueOBS_XMin
    :initarg :RightblueOBS_XMin
    :type cl:integer
    :initform 0)
   (in_reddoor_flag
    :reader in_reddoor_flag
    :initarg :in_reddoor_flag
    :type cl:boolean
    :initform cl:nil)
   (L_XMAX
    :reader L_XMAX
    :initarg :L_XMAX
    :type cl:integer
    :initform 0)
   (R_XMIN
    :reader R_XMIN
    :initarg :R_XMIN
    :type cl:integer
    :initform 0)
   (b_obs_flag
    :reader b_obs_flag
    :initarg :b_obs_flag
    :type cl:boolean
    :initform cl:nil)
   (y_obs_flag
    :reader y_obs_flag
    :initarg :y_obs_flag
    :type cl:boolean
    :initform cl:nil)
   (l_center_Dy
    :reader l_center_Dy
    :initarg :l_center_Dy
    :type cl:integer
    :initform 0)
   (r_center_Dy
    :reader r_center_Dy
    :initarg :r_center_Dy
    :type cl:integer
    :initform 0)
   (center_Dy
    :reader center_Dy
    :initarg :center_Dy
    :type cl:integer
    :initform 0)
   (one_b_flag
    :reader one_b_flag
    :initarg :one_b_flag
    :type cl:boolean
    :initform cl:nil)
   (two_b_flag
    :reader two_b_flag
    :initarg :two_b_flag
    :type cl:boolean
    :initform cl:nil)
   (Deep_sum
    :reader Deep_sum
    :initarg :Deep_sum
    :type cl:integer
    :initform 0))
)

(cl:defclass GetParameter (<GetParameter>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetParameter>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetParameter)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name strategy-msg:<GetParameter> is deprecated: use strategy-msg:GetParameter instead.")))

(cl:ensure-generic-function 'Dy-val :lambda-list '(m))
(cl:defmethod Dy-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:Dy-val is deprecated.  Use strategy-msg:Dy instead.")
  (Dy m))

(cl:ensure-generic-function 'Dx-val :lambda-list '(m))
(cl:defmethod Dx-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:Dx-val is deprecated.  Use strategy-msg:Dx instead.")
  (Dx m))

(cl:ensure-generic-function 'RD-val :lambda-list '(m))
(cl:defmethod RD-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:RD-val is deprecated.  Use strategy-msg:RD instead.")
  (RD m))

(cl:ensure-generic-function 'LD-val :lambda-list '(m))
(cl:defmethod LD-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:LD-val is deprecated.  Use strategy-msg:LD instead.")
  (LD m))

(cl:ensure-generic-function 'WR-val :lambda-list '(m))
(cl:defmethod WR-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:WR-val is deprecated.  Use strategy-msg:WR instead.")
  (WR m))

(cl:ensure-generic-function 'WL-val :lambda-list '(m))
(cl:defmethod WL-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:WL-val is deprecated.  Use strategy-msg:WL instead.")
  (WL m))

(cl:ensure-generic-function 'slope_avg-val :lambda-list '(m))
(cl:defmethod slope_avg-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:slope_avg-val is deprecated.  Use strategy-msg:slope_avg instead.")
  (slope_avg m))

(cl:ensure-generic-function 'LeftblueOBS_XMax-val :lambda-list '(m))
(cl:defmethod LeftblueOBS_XMax-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:LeftblueOBS_XMax-val is deprecated.  Use strategy-msg:LeftblueOBS_XMax instead.")
  (LeftblueOBS_XMax m))

(cl:ensure-generic-function 'RightblueOBS_XMin-val :lambda-list '(m))
(cl:defmethod RightblueOBS_XMin-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:RightblueOBS_XMin-val is deprecated.  Use strategy-msg:RightblueOBS_XMin instead.")
  (RightblueOBS_XMin m))

(cl:ensure-generic-function 'in_reddoor_flag-val :lambda-list '(m))
(cl:defmethod in_reddoor_flag-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:in_reddoor_flag-val is deprecated.  Use strategy-msg:in_reddoor_flag instead.")
  (in_reddoor_flag m))

(cl:ensure-generic-function 'L_XMAX-val :lambda-list '(m))
(cl:defmethod L_XMAX-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:L_XMAX-val is deprecated.  Use strategy-msg:L_XMAX instead.")
  (L_XMAX m))

(cl:ensure-generic-function 'R_XMIN-val :lambda-list '(m))
(cl:defmethod R_XMIN-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:R_XMIN-val is deprecated.  Use strategy-msg:R_XMIN instead.")
  (R_XMIN m))

(cl:ensure-generic-function 'b_obs_flag-val :lambda-list '(m))
(cl:defmethod b_obs_flag-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:b_obs_flag-val is deprecated.  Use strategy-msg:b_obs_flag instead.")
  (b_obs_flag m))

(cl:ensure-generic-function 'y_obs_flag-val :lambda-list '(m))
(cl:defmethod y_obs_flag-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:y_obs_flag-val is deprecated.  Use strategy-msg:y_obs_flag instead.")
  (y_obs_flag m))

(cl:ensure-generic-function 'l_center_Dy-val :lambda-list '(m))
(cl:defmethod l_center_Dy-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:l_center_Dy-val is deprecated.  Use strategy-msg:l_center_Dy instead.")
  (l_center_Dy m))

(cl:ensure-generic-function 'r_center_Dy-val :lambda-list '(m))
(cl:defmethod r_center_Dy-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:r_center_Dy-val is deprecated.  Use strategy-msg:r_center_Dy instead.")
  (r_center_Dy m))

(cl:ensure-generic-function 'center_Dy-val :lambda-list '(m))
(cl:defmethod center_Dy-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:center_Dy-val is deprecated.  Use strategy-msg:center_Dy instead.")
  (center_Dy m))

(cl:ensure-generic-function 'one_b_flag-val :lambda-list '(m))
(cl:defmethod one_b_flag-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:one_b_flag-val is deprecated.  Use strategy-msg:one_b_flag instead.")
  (one_b_flag m))

(cl:ensure-generic-function 'two_b_flag-val :lambda-list '(m))
(cl:defmethod two_b_flag-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:two_b_flag-val is deprecated.  Use strategy-msg:two_b_flag instead.")
  (two_b_flag m))

(cl:ensure-generic-function 'Deep_sum-val :lambda-list '(m))
(cl:defmethod Deep_sum-val ((m <GetParameter>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader strategy-msg:Deep_sum-val is deprecated.  Use strategy-msg:Deep_sum instead.")
  (Deep_sum m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetParameter>) ostream)
  "Serializes a message object of type '<GetParameter>"
  (cl:let* ((signed (cl:slot-value msg 'Dy)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'Dx))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'RD)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'LD)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'WR)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'WL)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'slope_avg))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'LeftblueOBS_XMax)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'RightblueOBS_XMin)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'in_reddoor_flag) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'L_XMAX)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'R_XMIN)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'b_obs_flag) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'y_obs_flag) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'l_center_Dy)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'r_center_Dy)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'center_Dy)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'one_b_flag) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'two_b_flag) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'Deep_sum)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetParameter>) istream)
  "Deserializes a message object of type '<GetParameter>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Dy) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'Dx) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'RD) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'LD) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'WR) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'WL) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'slope_avg) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'LeftblueOBS_XMax) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'RightblueOBS_XMin) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:setf (cl:slot-value msg 'in_reddoor_flag) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'L_XMAX) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'R_XMIN) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:setf (cl:slot-value msg 'b_obs_flag) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'y_obs_flag) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'l_center_Dy) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'r_center_Dy) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'center_Dy) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:setf (cl:slot-value msg 'one_b_flag) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'two_b_flag) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'Deep_sum) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetParameter>)))
  "Returns string type for a message object of type '<GetParameter>"
  "strategy/GetParameter")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetParameter)))
  "Returns string type for a message object of type 'GetParameter"
  "strategy/GetParameter")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetParameter>)))
  "Returns md5sum for a message object of type '<GetParameter>"
  "9759c82a913d9fb9e363417e06932b7a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetParameter)))
  "Returns md5sum for a message object of type 'GetParameter"
  "9759c82a913d9fb9e363417e06932b7a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetParameter>)))
  "Returns full string definition for message of type '<GetParameter>"
  (cl:format cl:nil "int32 Dy~%float32 Dx~%int32 RD~%int32 LD~%int32 WR~%int32 WL~%float32 slope_avg~%int32 LeftblueOBS_XMax~%int32 RightblueOBS_XMin~%bool in_reddoor_flag~%int32 L_XMAX~%int32 R_XMIN~%bool b_obs_flag~%bool y_obs_flag~%int32 l_center_Dy~%int32 r_center_Dy~%int32 center_Dy~%bool one_b_flag~%bool two_b_flag~%int32 Deep_sum~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetParameter)))
  "Returns full string definition for message of type 'GetParameter"
  (cl:format cl:nil "int32 Dy~%float32 Dx~%int32 RD~%int32 LD~%int32 WR~%int32 WL~%float32 slope_avg~%int32 LeftblueOBS_XMax~%int32 RightblueOBS_XMin~%bool in_reddoor_flag~%int32 L_XMAX~%int32 R_XMIN~%bool b_obs_flag~%bool y_obs_flag~%int32 l_center_Dy~%int32 r_center_Dy~%int32 center_Dy~%bool one_b_flag~%bool two_b_flag~%int32 Deep_sum~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetParameter>))
  (cl:+ 0
     4
     4
     4
     4
     4
     4
     4
     4
     4
     1
     4
     4
     1
     1
     4
     4
     4
     1
     1
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetParameter>))
  "Converts a ROS message object to a list"
  (cl:list 'GetParameter
    (cl:cons ':Dy (Dy msg))
    (cl:cons ':Dx (Dx msg))
    (cl:cons ':RD (RD msg))
    (cl:cons ':LD (LD msg))
    (cl:cons ':WR (WR msg))
    (cl:cons ':WL (WL msg))
    (cl:cons ':slope_avg (slope_avg msg))
    (cl:cons ':LeftblueOBS_XMax (LeftblueOBS_XMax msg))
    (cl:cons ':RightblueOBS_XMin (RightblueOBS_XMin msg))
    (cl:cons ':in_reddoor_flag (in_reddoor_flag msg))
    (cl:cons ':L_XMAX (L_XMAX msg))
    (cl:cons ':R_XMIN (R_XMIN msg))
    (cl:cons ':b_obs_flag (b_obs_flag msg))
    (cl:cons ':y_obs_flag (y_obs_flag msg))
    (cl:cons ':l_center_Dy (l_center_Dy msg))
    (cl:cons ':r_center_Dy (r_center_Dy msg))
    (cl:cons ':center_Dy (center_Dy msg))
    (cl:cons ':one_b_flag (one_b_flag msg))
    (cl:cons ':two_b_flag (two_b_flag msg))
    (cl:cons ':Deep_sum (Deep_sum msg))
))
