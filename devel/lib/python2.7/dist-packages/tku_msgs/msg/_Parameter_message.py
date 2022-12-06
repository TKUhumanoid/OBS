# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from tku_msgs/Parameter_message.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import tku_msgs.msg

class Parameter_message(genpy.Message):
  _md5sum = "61870ff10c088bf227acbd6f8806b885"
  _type = "tku_msgs/Parameter_message"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """int32 Walking_Mode
float64 X_Swing_Range
float64 Y_Swing_Range
float64 Z_Swing_Range
int32 Period_T
int32 Period_T2
int32 Sample_Time
float64 OSC_LockRange 
float64 BASE_Default_Z
int32 Y_Swing_Shift
int32 X_Swing_COM
int32 BASE_LIFT_Z
bool Stand_Balance
B_SplineParam B_SplineParam

================================================================================
MSG: tku_msgs/B_SplineParam
float32 Kick_Point_X
float32 Kick_Point_Y
float32 Kick_Point_Z
float32 Back_Point_X
float32 Back_Point_Z
float32 Support_Foot_Hip_Upper_Pitch
float32 Kick_Foot_Ankle_Upper_Pitch
float32 Support_Foot_Ankle_Upper_Pitch"""
  __slots__ = ['Walking_Mode','X_Swing_Range','Y_Swing_Range','Z_Swing_Range','Period_T','Period_T2','Sample_Time','OSC_LockRange','BASE_Default_Z','Y_Swing_Shift','X_Swing_COM','BASE_LIFT_Z','Stand_Balance','B_SplineParam']
  _slot_types = ['int32','float64','float64','float64','int32','int32','int32','float64','float64','int32','int32','int32','bool','tku_msgs/B_SplineParam']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       Walking_Mode,X_Swing_Range,Y_Swing_Range,Z_Swing_Range,Period_T,Period_T2,Sample_Time,OSC_LockRange,BASE_Default_Z,Y_Swing_Shift,X_Swing_COM,BASE_LIFT_Z,Stand_Balance,B_SplineParam

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Parameter_message, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.Walking_Mode is None:
        self.Walking_Mode = 0
      if self.X_Swing_Range is None:
        self.X_Swing_Range = 0.
      if self.Y_Swing_Range is None:
        self.Y_Swing_Range = 0.
      if self.Z_Swing_Range is None:
        self.Z_Swing_Range = 0.
      if self.Period_T is None:
        self.Period_T = 0
      if self.Period_T2 is None:
        self.Period_T2 = 0
      if self.Sample_Time is None:
        self.Sample_Time = 0
      if self.OSC_LockRange is None:
        self.OSC_LockRange = 0.
      if self.BASE_Default_Z is None:
        self.BASE_Default_Z = 0.
      if self.Y_Swing_Shift is None:
        self.Y_Swing_Shift = 0
      if self.X_Swing_COM is None:
        self.X_Swing_COM = 0
      if self.BASE_LIFT_Z is None:
        self.BASE_LIFT_Z = 0
      if self.Stand_Balance is None:
        self.Stand_Balance = False
      if self.B_SplineParam is None:
        self.B_SplineParam = tku_msgs.msg.B_SplineParam()
    else:
      self.Walking_Mode = 0
      self.X_Swing_Range = 0.
      self.Y_Swing_Range = 0.
      self.Z_Swing_Range = 0.
      self.Period_T = 0
      self.Period_T2 = 0
      self.Sample_Time = 0
      self.OSC_LockRange = 0.
      self.BASE_Default_Z = 0.
      self.Y_Swing_Shift = 0
      self.X_Swing_COM = 0
      self.BASE_LIFT_Z = 0
      self.Stand_Balance = False
      self.B_SplineParam = tku_msgs.msg.B_SplineParam()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_i3d3i2d3iB8f().pack(_x.Walking_Mode, _x.X_Swing_Range, _x.Y_Swing_Range, _x.Z_Swing_Range, _x.Period_T, _x.Period_T2, _x.Sample_Time, _x.OSC_LockRange, _x.BASE_Default_Z, _x.Y_Swing_Shift, _x.X_Swing_COM, _x.BASE_LIFT_Z, _x.Stand_Balance, _x.B_SplineParam.Kick_Point_X, _x.B_SplineParam.Kick_Point_Y, _x.B_SplineParam.Kick_Point_Z, _x.B_SplineParam.Back_Point_X, _x.B_SplineParam.Back_Point_Z, _x.B_SplineParam.Support_Foot_Hip_Upper_Pitch, _x.B_SplineParam.Kick_Foot_Ankle_Upper_Pitch, _x.B_SplineParam.Support_Foot_Ankle_Upper_Pitch))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.B_SplineParam is None:
        self.B_SplineParam = tku_msgs.msg.B_SplineParam()
      end = 0
      _x = self
      start = end
      end += 101
      (_x.Walking_Mode, _x.X_Swing_Range, _x.Y_Swing_Range, _x.Z_Swing_Range, _x.Period_T, _x.Period_T2, _x.Sample_Time, _x.OSC_LockRange, _x.BASE_Default_Z, _x.Y_Swing_Shift, _x.X_Swing_COM, _x.BASE_LIFT_Z, _x.Stand_Balance, _x.B_SplineParam.Kick_Point_X, _x.B_SplineParam.Kick_Point_Y, _x.B_SplineParam.Kick_Point_Z, _x.B_SplineParam.Back_Point_X, _x.B_SplineParam.Back_Point_Z, _x.B_SplineParam.Support_Foot_Hip_Upper_Pitch, _x.B_SplineParam.Kick_Foot_Ankle_Upper_Pitch, _x.B_SplineParam.Support_Foot_Ankle_Upper_Pitch,) = _get_struct_i3d3i2d3iB8f().unpack(str[start:end])
      self.Stand_Balance = bool(self.Stand_Balance)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_i3d3i2d3iB8f().pack(_x.Walking_Mode, _x.X_Swing_Range, _x.Y_Swing_Range, _x.Z_Swing_Range, _x.Period_T, _x.Period_T2, _x.Sample_Time, _x.OSC_LockRange, _x.BASE_Default_Z, _x.Y_Swing_Shift, _x.X_Swing_COM, _x.BASE_LIFT_Z, _x.Stand_Balance, _x.B_SplineParam.Kick_Point_X, _x.B_SplineParam.Kick_Point_Y, _x.B_SplineParam.Kick_Point_Z, _x.B_SplineParam.Back_Point_X, _x.B_SplineParam.Back_Point_Z, _x.B_SplineParam.Support_Foot_Hip_Upper_Pitch, _x.B_SplineParam.Kick_Foot_Ankle_Upper_Pitch, _x.B_SplineParam.Support_Foot_Ankle_Upper_Pitch))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.B_SplineParam is None:
        self.B_SplineParam = tku_msgs.msg.B_SplineParam()
      end = 0
      _x = self
      start = end
      end += 101
      (_x.Walking_Mode, _x.X_Swing_Range, _x.Y_Swing_Range, _x.Z_Swing_Range, _x.Period_T, _x.Period_T2, _x.Sample_Time, _x.OSC_LockRange, _x.BASE_Default_Z, _x.Y_Swing_Shift, _x.X_Swing_COM, _x.BASE_LIFT_Z, _x.Stand_Balance, _x.B_SplineParam.Kick_Point_X, _x.B_SplineParam.Kick_Point_Y, _x.B_SplineParam.Kick_Point_Z, _x.B_SplineParam.Back_Point_X, _x.B_SplineParam.Back_Point_Z, _x.B_SplineParam.Support_Foot_Hip_Upper_Pitch, _x.B_SplineParam.Kick_Foot_Ankle_Upper_Pitch, _x.B_SplineParam.Support_Foot_Ankle_Upper_Pitch,) = _get_struct_i3d3i2d3iB8f().unpack(str[start:end])
      self.Stand_Balance = bool(self.Stand_Balance)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i3d3i2d3iB8f = None
def _get_struct_i3d3i2d3iB8f():
    global _struct_i3d3i2d3iB8f
    if _struct_i3d3i2d3iB8f is None:
        _struct_i3d3i2d3iB8f = struct.Struct("<i3d3i2d3iB8f")
    return _struct_i3d3i2d3iB8f
