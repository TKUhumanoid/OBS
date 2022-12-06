# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from tku_msgs/ObjectList.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import tku_msgs.msg

class ObjectList(genpy.Message):
  _md5sum = "2c07141cb8eb44d90e2277a09e02ec2c"
  _type = "tku_msgs/ObjectList"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """ColorArray[] Objectlist

================================================================================
MSG: tku_msgs/ColorArray
int32 cnt
ColorData[] Colorarray

================================================================================
MSG: tku_msgs/ColorData
int32 X
int32 Y
int32 XMin
int32 XMax
int32 YMin
int32 YMax
int32 Width
int32 Height
int32 size                                                 
"""
  __slots__ = ['Objectlist']
  _slot_types = ['tku_msgs/ColorArray[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       Objectlist

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ObjectList, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.Objectlist is None:
        self.Objectlist = []
    else:
      self.Objectlist = []

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
      length = len(self.Objectlist)
      buff.write(_struct_I.pack(length))
      for val1 in self.Objectlist:
        _x = val1.cnt
        buff.write(_get_struct_i().pack(_x))
        length = len(val1.Colorarray)
        buff.write(_struct_I.pack(length))
        for val2 in val1.Colorarray:
          _x = val2
          buff.write(_get_struct_9i().pack(_x.X, _x.Y, _x.XMin, _x.XMax, _x.YMin, _x.YMax, _x.Width, _x.Height, _x.size))
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
      if self.Objectlist is None:
        self.Objectlist = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.Objectlist = []
      for i in range(0, length):
        val1 = tku_msgs.msg.ColorArray()
        start = end
        end += 4
        (val1.cnt,) = _get_struct_i().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.Colorarray = []
        for i in range(0, length):
          val2 = tku_msgs.msg.ColorData()
          _x = val2
          start = end
          end += 36
          (_x.X, _x.Y, _x.XMin, _x.XMax, _x.YMin, _x.YMax, _x.Width, _x.Height, _x.size,) = _get_struct_9i().unpack(str[start:end])
          val1.Colorarray.append(val2)
        self.Objectlist.append(val1)
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
      length = len(self.Objectlist)
      buff.write(_struct_I.pack(length))
      for val1 in self.Objectlist:
        _x = val1.cnt
        buff.write(_get_struct_i().pack(_x))
        length = len(val1.Colorarray)
        buff.write(_struct_I.pack(length))
        for val2 in val1.Colorarray:
          _x = val2
          buff.write(_get_struct_9i().pack(_x.X, _x.Y, _x.XMin, _x.XMax, _x.YMin, _x.YMax, _x.Width, _x.Height, _x.size))
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
      if self.Objectlist is None:
        self.Objectlist = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.Objectlist = []
      for i in range(0, length):
        val1 = tku_msgs.msg.ColorArray()
        start = end
        end += 4
        (val1.cnt,) = _get_struct_i().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.Colorarray = []
        for i in range(0, length):
          val2 = tku_msgs.msg.ColorData()
          _x = val2
          start = end
          end += 36
          (_x.X, _x.Y, _x.XMin, _x.XMax, _x.YMin, _x.YMax, _x.Width, _x.Height, _x.size,) = _get_struct_9i().unpack(str[start:end])
          val1.Colorarray.append(val2)
        self.Objectlist.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_9i = None
def _get_struct_9i():
    global _struct_9i
    if _struct_9i is None:
        _struct_9i = struct.Struct("<9i")
    return _struct_9i
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
