# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from tku_msgs/CameraId.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CameraId(genpy.Message):
  _md5sum = "3cc97f36ddee60a3976eec15137b52b9"
  _type = "tku_msgs/CameraId"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool checkcameraid
int16 cameraid
"""
  __slots__ = ['checkcameraid','cameraid']
  _slot_types = ['bool','int16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       checkcameraid,cameraid

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CameraId, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.checkcameraid is None:
        self.checkcameraid = False
      if self.cameraid is None:
        self.cameraid = 0
    else:
      self.checkcameraid = False
      self.cameraid = 0

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
      buff.write(_get_struct_Bh().pack(_x.checkcameraid, _x.cameraid))
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
      end = 0
      _x = self
      start = end
      end += 3
      (_x.checkcameraid, _x.cameraid,) = _get_struct_Bh().unpack(str[start:end])
      self.checkcameraid = bool(self.checkcameraid)
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
      buff.write(_get_struct_Bh().pack(_x.checkcameraid, _x.cameraid))
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
      end = 0
      _x = self
      start = end
      end += 3
      (_x.checkcameraid, _x.cameraid,) = _get_struct_Bh().unpack(str[start:end])
      self.checkcameraid = bool(self.checkcameraid)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_Bh = None
def _get_struct_Bh():
    global _struct_Bh
    if _struct_Bh is None:
        _struct_Bh = struct.Struct("<Bh")
    return _struct_Bh
