# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from tku_msgs/ReadMotionRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ReadMotionRequest(genpy.Message):
  _md5sum = "46f0a8d4b8fdd80b49203be9e34adb25"
  _type = "tku_msgs/ReadMotionRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool read
string name
int16 readstate
"""
  __slots__ = ['read','name','readstate']
  _slot_types = ['bool','string','int16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       read,name,readstate

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ReadMotionRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.read is None:
        self.read = False
      if self.name is None:
        self.name = ''
      if self.readstate is None:
        self.readstate = 0
    else:
      self.read = False
      self.name = ''
      self.readstate = 0

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
      _x = self.read
      buff.write(_get_struct_B().pack(_x))
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.readstate
      buff.write(_get_struct_h().pack(_x))
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
      start = end
      end += 1
      (self.read,) = _get_struct_B().unpack(str[start:end])
      self.read = bool(self.read)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.name = str[start:end]
      start = end
      end += 2
      (self.readstate,) = _get_struct_h().unpack(str[start:end])
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
      _x = self.read
      buff.write(_get_struct_B().pack(_x))
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.readstate
      buff.write(_get_struct_h().pack(_x))
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
      start = end
      end += 1
      (self.read,) = _get_struct_B().unpack(str[start:end])
      self.read = bool(self.read)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.name = str[start:end]
      start = end
      end += 2
      (self.readstate,) = _get_struct_h().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_h = None
def _get_struct_h():
    global _struct_h
    if _struct_h is None:
        _struct_h = struct.Struct("<h")
    return _struct_h
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from tku_msgs/ReadMotionResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ReadMotionResponse(genpy.Message):
  _md5sum = "9be25567668b09a6560656233265f235"
  _type = "tku_msgs/ReadMotionResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """int16 VectorCnt
int16[] motionstate
int16[] ID
int16[] MotionList
int16[] RelativeData
int16[] AbsoluteData

"""
  __slots__ = ['VectorCnt','motionstate','ID','MotionList','RelativeData','AbsoluteData']
  _slot_types = ['int16','int16[]','int16[]','int16[]','int16[]','int16[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       VectorCnt,motionstate,ID,MotionList,RelativeData,AbsoluteData

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ReadMotionResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.VectorCnt is None:
        self.VectorCnt = 0
      if self.motionstate is None:
        self.motionstate = []
      if self.ID is None:
        self.ID = []
      if self.MotionList is None:
        self.MotionList = []
      if self.RelativeData is None:
        self.RelativeData = []
      if self.AbsoluteData is None:
        self.AbsoluteData = []
    else:
      self.VectorCnt = 0
      self.motionstate = []
      self.ID = []
      self.MotionList = []
      self.RelativeData = []
      self.AbsoluteData = []

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
      _x = self.VectorCnt
      buff.write(_get_struct_h().pack(_x))
      length = len(self.motionstate)
      buff.write(_struct_I.pack(length))
      pattern = '<%sh'%length
      buff.write(struct.Struct(pattern).pack(*self.motionstate))
      length = len(self.ID)
      buff.write(_struct_I.pack(length))
      pattern = '<%sh'%length
      buff.write(struct.Struct(pattern).pack(*self.ID))
      length = len(self.MotionList)
      buff.write(_struct_I.pack(length))
      pattern = '<%sh'%length
      buff.write(struct.Struct(pattern).pack(*self.MotionList))
      length = len(self.RelativeData)
      buff.write(_struct_I.pack(length))
      pattern = '<%sh'%length
      buff.write(struct.Struct(pattern).pack(*self.RelativeData))
      length = len(self.AbsoluteData)
      buff.write(_struct_I.pack(length))
      pattern = '<%sh'%length
      buff.write(struct.Struct(pattern).pack(*self.AbsoluteData))
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
      start = end
      end += 2
      (self.VectorCnt,) = _get_struct_h().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sh'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.motionstate = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sh'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.ID = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sh'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.MotionList = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sh'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.RelativeData = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sh'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.AbsoluteData = s.unpack(str[start:end])
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
      _x = self.VectorCnt
      buff.write(_get_struct_h().pack(_x))
      length = len(self.motionstate)
      buff.write(_struct_I.pack(length))
      pattern = '<%sh'%length
      buff.write(self.motionstate.tostring())
      length = len(self.ID)
      buff.write(_struct_I.pack(length))
      pattern = '<%sh'%length
      buff.write(self.ID.tostring())
      length = len(self.MotionList)
      buff.write(_struct_I.pack(length))
      pattern = '<%sh'%length
      buff.write(self.MotionList.tostring())
      length = len(self.RelativeData)
      buff.write(_struct_I.pack(length))
      pattern = '<%sh'%length
      buff.write(self.RelativeData.tostring())
      length = len(self.AbsoluteData)
      buff.write(_struct_I.pack(length))
      pattern = '<%sh'%length
      buff.write(self.AbsoluteData.tostring())
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
      start = end
      end += 2
      (self.VectorCnt,) = _get_struct_h().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sh'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.motionstate = numpy.frombuffer(str[start:end], dtype=numpy.int16, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sh'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.ID = numpy.frombuffer(str[start:end], dtype=numpy.int16, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sh'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.MotionList = numpy.frombuffer(str[start:end], dtype=numpy.int16, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sh'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.RelativeData = numpy.frombuffer(str[start:end], dtype=numpy.int16, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sh'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.AbsoluteData = numpy.frombuffer(str[start:end], dtype=numpy.int16, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_h = None
def _get_struct_h():
    global _struct_h
    if _struct_h is None:
        _struct_h = struct.Struct("<h")
    return _struct_h
class ReadMotion(object):
  _type          = 'tku_msgs/ReadMotion'
  _md5sum = 'aba192d5d2599c4b6211587c2f618837'
  _request_class  = ReadMotionRequest
  _response_class = ReadMotionResponse
