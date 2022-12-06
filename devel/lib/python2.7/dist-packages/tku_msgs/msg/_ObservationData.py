# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from tku_msgs/ObservationData.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import tku_msgs.msg

class ObservationData(genpy.Message):
  _md5sum = "04b866c2459e969db73d6d3706f9068b"
  _type = "tku_msgs/ObservationData"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool imagestate
FeaturePoint[] scan_line
LineData[] landmark

================================================================================
MSG: tku_msgs/FeaturePoint
Distance[] feature_point

================================================================================
MSG: tku_msgs/Distance
int16 x_dis
int16 y_dis
int16 dis

================================================================================
MSG: tku_msgs/LineData
float32 angle
int16 length
Cooridinate start_point
Cooridinate end_point
Cooridinate center_point

================================================================================
MSG: tku_msgs/Cooridinate
int16 x
int16 y
"""
  __slots__ = ['imagestate','scan_line','landmark']
  _slot_types = ['bool','tku_msgs/FeaturePoint[]','tku_msgs/LineData[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       imagestate,scan_line,landmark

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ObservationData, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.imagestate is None:
        self.imagestate = False
      if self.scan_line is None:
        self.scan_line = []
      if self.landmark is None:
        self.landmark = []
    else:
      self.imagestate = False
      self.scan_line = []
      self.landmark = []

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
      _x = self.imagestate
      buff.write(_get_struct_B().pack(_x))
      length = len(self.scan_line)
      buff.write(_struct_I.pack(length))
      for val1 in self.scan_line:
        length = len(val1.feature_point)
        buff.write(_struct_I.pack(length))
        for val2 in val1.feature_point:
          _x = val2
          buff.write(_get_struct_3h().pack(_x.x_dis, _x.y_dis, _x.dis))
      length = len(self.landmark)
      buff.write(_struct_I.pack(length))
      for val1 in self.landmark:
        _x = val1
        buff.write(_get_struct_fh().pack(_x.angle, _x.length))
        _v1 = val1.start_point
        _x = _v1
        buff.write(_get_struct_2h().pack(_x.x, _x.y))
        _v2 = val1.end_point
        _x = _v2
        buff.write(_get_struct_2h().pack(_x.x, _x.y))
        _v3 = val1.center_point
        _x = _v3
        buff.write(_get_struct_2h().pack(_x.x, _x.y))
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
      if self.scan_line is None:
        self.scan_line = None
      if self.landmark is None:
        self.landmark = None
      end = 0
      start = end
      end += 1
      (self.imagestate,) = _get_struct_B().unpack(str[start:end])
      self.imagestate = bool(self.imagestate)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.scan_line = []
      for i in range(0, length):
        val1 = tku_msgs.msg.FeaturePoint()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.feature_point = []
        for i in range(0, length):
          val2 = tku_msgs.msg.Distance()
          _x = val2
          start = end
          end += 6
          (_x.x_dis, _x.y_dis, _x.dis,) = _get_struct_3h().unpack(str[start:end])
          val1.feature_point.append(val2)
        self.scan_line.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.landmark = []
      for i in range(0, length):
        val1 = tku_msgs.msg.LineData()
        _x = val1
        start = end
        end += 6
        (_x.angle, _x.length,) = _get_struct_fh().unpack(str[start:end])
        _v4 = val1.start_point
        _x = _v4
        start = end
        end += 4
        (_x.x, _x.y,) = _get_struct_2h().unpack(str[start:end])
        _v5 = val1.end_point
        _x = _v5
        start = end
        end += 4
        (_x.x, _x.y,) = _get_struct_2h().unpack(str[start:end])
        _v6 = val1.center_point
        _x = _v6
        start = end
        end += 4
        (_x.x, _x.y,) = _get_struct_2h().unpack(str[start:end])
        self.landmark.append(val1)
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
      _x = self.imagestate
      buff.write(_get_struct_B().pack(_x))
      length = len(self.scan_line)
      buff.write(_struct_I.pack(length))
      for val1 in self.scan_line:
        length = len(val1.feature_point)
        buff.write(_struct_I.pack(length))
        for val2 in val1.feature_point:
          _x = val2
          buff.write(_get_struct_3h().pack(_x.x_dis, _x.y_dis, _x.dis))
      length = len(self.landmark)
      buff.write(_struct_I.pack(length))
      for val1 in self.landmark:
        _x = val1
        buff.write(_get_struct_fh().pack(_x.angle, _x.length))
        _v7 = val1.start_point
        _x = _v7
        buff.write(_get_struct_2h().pack(_x.x, _x.y))
        _v8 = val1.end_point
        _x = _v8
        buff.write(_get_struct_2h().pack(_x.x, _x.y))
        _v9 = val1.center_point
        _x = _v9
        buff.write(_get_struct_2h().pack(_x.x, _x.y))
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
      if self.scan_line is None:
        self.scan_line = None
      if self.landmark is None:
        self.landmark = None
      end = 0
      start = end
      end += 1
      (self.imagestate,) = _get_struct_B().unpack(str[start:end])
      self.imagestate = bool(self.imagestate)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.scan_line = []
      for i in range(0, length):
        val1 = tku_msgs.msg.FeaturePoint()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.feature_point = []
        for i in range(0, length):
          val2 = tku_msgs.msg.Distance()
          _x = val2
          start = end
          end += 6
          (_x.x_dis, _x.y_dis, _x.dis,) = _get_struct_3h().unpack(str[start:end])
          val1.feature_point.append(val2)
        self.scan_line.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.landmark = []
      for i in range(0, length):
        val1 = tku_msgs.msg.LineData()
        _x = val1
        start = end
        end += 6
        (_x.angle, _x.length,) = _get_struct_fh().unpack(str[start:end])
        _v10 = val1.start_point
        _x = _v10
        start = end
        end += 4
        (_x.x, _x.y,) = _get_struct_2h().unpack(str[start:end])
        _v11 = val1.end_point
        _x = _v11
        start = end
        end += 4
        (_x.x, _x.y,) = _get_struct_2h().unpack(str[start:end])
        _v12 = val1.center_point
        _x = _v12
        start = end
        end += 4
        (_x.x, _x.y,) = _get_struct_2h().unpack(str[start:end])
        self.landmark.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2h = None
def _get_struct_2h():
    global _struct_2h
    if _struct_2h is None:
        _struct_2h = struct.Struct("<2h")
    return _struct_2h
_struct_3h = None
def _get_struct_3h():
    global _struct_3h
    if _struct_3h is None:
        _struct_3h = struct.Struct("<3h")
    return _struct_3h
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_fh = None
def _get_struct_fh():
    global _struct_fh
    if _struct_fh is None:
        _struct_fh = struct.Struct("<fh")
    return _struct_fh
