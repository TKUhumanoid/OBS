// Auto-generated. Do not edit!

// (in-package strategy.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class GetParameter {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.Dy = null;
      this.Dx = null;
      this.RD = null;
      this.LD = null;
      this.WR = null;
      this.WL = null;
      this.slope_avg = null;
      this.LeftblueOBS_XMax = null;
      this.RightblueOBS_XMin = null;
      this.in_reddoor_flag = null;
      this.L_XMAX = null;
      this.R_XMIN = null;
      this.b_obs_flag = null;
      this.y_obs_flag = null;
      this.l_center_Dy = null;
      this.r_center_Dy = null;
      this.center_Dy = null;
      this.one_b_flag = null;
      this.two_b_flag = null;
      this.Deep_sum = null;
    }
    else {
      if (initObj.hasOwnProperty('Dy')) {
        this.Dy = initObj.Dy
      }
      else {
        this.Dy = 0;
      }
      if (initObj.hasOwnProperty('Dx')) {
        this.Dx = initObj.Dx
      }
      else {
        this.Dx = 0.0;
      }
      if (initObj.hasOwnProperty('RD')) {
        this.RD = initObj.RD
      }
      else {
        this.RD = 0;
      }
      if (initObj.hasOwnProperty('LD')) {
        this.LD = initObj.LD
      }
      else {
        this.LD = 0;
      }
      if (initObj.hasOwnProperty('WR')) {
        this.WR = initObj.WR
      }
      else {
        this.WR = 0;
      }
      if (initObj.hasOwnProperty('WL')) {
        this.WL = initObj.WL
      }
      else {
        this.WL = 0;
      }
      if (initObj.hasOwnProperty('slope_avg')) {
        this.slope_avg = initObj.slope_avg
      }
      else {
        this.slope_avg = 0.0;
      }
      if (initObj.hasOwnProperty('LeftblueOBS_XMax')) {
        this.LeftblueOBS_XMax = initObj.LeftblueOBS_XMax
      }
      else {
        this.LeftblueOBS_XMax = 0;
      }
      if (initObj.hasOwnProperty('RightblueOBS_XMin')) {
        this.RightblueOBS_XMin = initObj.RightblueOBS_XMin
      }
      else {
        this.RightblueOBS_XMin = 0;
      }
      if (initObj.hasOwnProperty('in_reddoor_flag')) {
        this.in_reddoor_flag = initObj.in_reddoor_flag
      }
      else {
        this.in_reddoor_flag = false;
      }
      if (initObj.hasOwnProperty('L_XMAX')) {
        this.L_XMAX = initObj.L_XMAX
      }
      else {
        this.L_XMAX = 0;
      }
      if (initObj.hasOwnProperty('R_XMIN')) {
        this.R_XMIN = initObj.R_XMIN
      }
      else {
        this.R_XMIN = 0;
      }
      if (initObj.hasOwnProperty('b_obs_flag')) {
        this.b_obs_flag = initObj.b_obs_flag
      }
      else {
        this.b_obs_flag = false;
      }
      if (initObj.hasOwnProperty('y_obs_flag')) {
        this.y_obs_flag = initObj.y_obs_flag
      }
      else {
        this.y_obs_flag = false;
      }
      if (initObj.hasOwnProperty('l_center_Dy')) {
        this.l_center_Dy = initObj.l_center_Dy
      }
      else {
        this.l_center_Dy = 0;
      }
      if (initObj.hasOwnProperty('r_center_Dy')) {
        this.r_center_Dy = initObj.r_center_Dy
      }
      else {
        this.r_center_Dy = 0;
      }
      if (initObj.hasOwnProperty('center_Dy')) {
        this.center_Dy = initObj.center_Dy
      }
      else {
        this.center_Dy = 0;
      }
      if (initObj.hasOwnProperty('one_b_flag')) {
        this.one_b_flag = initObj.one_b_flag
      }
      else {
        this.one_b_flag = false;
      }
      if (initObj.hasOwnProperty('two_b_flag')) {
        this.two_b_flag = initObj.two_b_flag
      }
      else {
        this.two_b_flag = false;
      }
      if (initObj.hasOwnProperty('Deep_sum')) {
        this.Deep_sum = initObj.Deep_sum
      }
      else {
        this.Deep_sum = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetParameter
    // Serialize message field [Dy]
    bufferOffset = _serializer.int32(obj.Dy, buffer, bufferOffset);
    // Serialize message field [Dx]
    bufferOffset = _serializer.float32(obj.Dx, buffer, bufferOffset);
    // Serialize message field [RD]
    bufferOffset = _serializer.int32(obj.RD, buffer, bufferOffset);
    // Serialize message field [LD]
    bufferOffset = _serializer.int32(obj.LD, buffer, bufferOffset);
    // Serialize message field [WR]
    bufferOffset = _serializer.int32(obj.WR, buffer, bufferOffset);
    // Serialize message field [WL]
    bufferOffset = _serializer.int32(obj.WL, buffer, bufferOffset);
    // Serialize message field [slope_avg]
    bufferOffset = _serializer.float32(obj.slope_avg, buffer, bufferOffset);
    // Serialize message field [LeftblueOBS_XMax]
    bufferOffset = _serializer.int32(obj.LeftblueOBS_XMax, buffer, bufferOffset);
    // Serialize message field [RightblueOBS_XMin]
    bufferOffset = _serializer.int32(obj.RightblueOBS_XMin, buffer, bufferOffset);
    // Serialize message field [in_reddoor_flag]
    bufferOffset = _serializer.bool(obj.in_reddoor_flag, buffer, bufferOffset);
    // Serialize message field [L_XMAX]
    bufferOffset = _serializer.int32(obj.L_XMAX, buffer, bufferOffset);
    // Serialize message field [R_XMIN]
    bufferOffset = _serializer.int32(obj.R_XMIN, buffer, bufferOffset);
    // Serialize message field [b_obs_flag]
    bufferOffset = _serializer.bool(obj.b_obs_flag, buffer, bufferOffset);
    // Serialize message field [y_obs_flag]
    bufferOffset = _serializer.bool(obj.y_obs_flag, buffer, bufferOffset);
    // Serialize message field [l_center_Dy]
    bufferOffset = _serializer.int32(obj.l_center_Dy, buffer, bufferOffset);
    // Serialize message field [r_center_Dy]
    bufferOffset = _serializer.int32(obj.r_center_Dy, buffer, bufferOffset);
    // Serialize message field [center_Dy]
    bufferOffset = _serializer.int32(obj.center_Dy, buffer, bufferOffset);
    // Serialize message field [one_b_flag]
    bufferOffset = _serializer.bool(obj.one_b_flag, buffer, bufferOffset);
    // Serialize message field [two_b_flag]
    bufferOffset = _serializer.bool(obj.two_b_flag, buffer, bufferOffset);
    // Serialize message field [Deep_sum]
    bufferOffset = _serializer.int32(obj.Deep_sum, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetParameter
    let len;
    let data = new GetParameter(null);
    // Deserialize message field [Dy]
    data.Dy = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [Dx]
    data.Dx = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [RD]
    data.RD = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [LD]
    data.LD = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [WR]
    data.WR = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [WL]
    data.WL = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [slope_avg]
    data.slope_avg = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [LeftblueOBS_XMax]
    data.LeftblueOBS_XMax = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [RightblueOBS_XMin]
    data.RightblueOBS_XMin = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [in_reddoor_flag]
    data.in_reddoor_flag = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [L_XMAX]
    data.L_XMAX = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [R_XMIN]
    data.R_XMIN = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [b_obs_flag]
    data.b_obs_flag = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [y_obs_flag]
    data.y_obs_flag = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [l_center_Dy]
    data.l_center_Dy = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [r_center_Dy]
    data.r_center_Dy = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [center_Dy]
    data.center_Dy = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [one_b_flag]
    data.one_b_flag = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [two_b_flag]
    data.two_b_flag = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [Deep_sum]
    data.Deep_sum = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 65;
  }

  static datatype() {
    // Returns string type for a message object
    return 'strategy/GetParameter';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9759c82a913d9fb9e363417e06932b7a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 Dy
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetParameter(null);
    if (msg.Dy !== undefined) {
      resolved.Dy = msg.Dy;
    }
    else {
      resolved.Dy = 0
    }

    if (msg.Dx !== undefined) {
      resolved.Dx = msg.Dx;
    }
    else {
      resolved.Dx = 0.0
    }

    if (msg.RD !== undefined) {
      resolved.RD = msg.RD;
    }
    else {
      resolved.RD = 0
    }

    if (msg.LD !== undefined) {
      resolved.LD = msg.LD;
    }
    else {
      resolved.LD = 0
    }

    if (msg.WR !== undefined) {
      resolved.WR = msg.WR;
    }
    else {
      resolved.WR = 0
    }

    if (msg.WL !== undefined) {
      resolved.WL = msg.WL;
    }
    else {
      resolved.WL = 0
    }

    if (msg.slope_avg !== undefined) {
      resolved.slope_avg = msg.slope_avg;
    }
    else {
      resolved.slope_avg = 0.0
    }

    if (msg.LeftblueOBS_XMax !== undefined) {
      resolved.LeftblueOBS_XMax = msg.LeftblueOBS_XMax;
    }
    else {
      resolved.LeftblueOBS_XMax = 0
    }

    if (msg.RightblueOBS_XMin !== undefined) {
      resolved.RightblueOBS_XMin = msg.RightblueOBS_XMin;
    }
    else {
      resolved.RightblueOBS_XMin = 0
    }

    if (msg.in_reddoor_flag !== undefined) {
      resolved.in_reddoor_flag = msg.in_reddoor_flag;
    }
    else {
      resolved.in_reddoor_flag = false
    }

    if (msg.L_XMAX !== undefined) {
      resolved.L_XMAX = msg.L_XMAX;
    }
    else {
      resolved.L_XMAX = 0
    }

    if (msg.R_XMIN !== undefined) {
      resolved.R_XMIN = msg.R_XMIN;
    }
    else {
      resolved.R_XMIN = 0
    }

    if (msg.b_obs_flag !== undefined) {
      resolved.b_obs_flag = msg.b_obs_flag;
    }
    else {
      resolved.b_obs_flag = false
    }

    if (msg.y_obs_flag !== undefined) {
      resolved.y_obs_flag = msg.y_obs_flag;
    }
    else {
      resolved.y_obs_flag = false
    }

    if (msg.l_center_Dy !== undefined) {
      resolved.l_center_Dy = msg.l_center_Dy;
    }
    else {
      resolved.l_center_Dy = 0
    }

    if (msg.r_center_Dy !== undefined) {
      resolved.r_center_Dy = msg.r_center_Dy;
    }
    else {
      resolved.r_center_Dy = 0
    }

    if (msg.center_Dy !== undefined) {
      resolved.center_Dy = msg.center_Dy;
    }
    else {
      resolved.center_Dy = 0
    }

    if (msg.one_b_flag !== undefined) {
      resolved.one_b_flag = msg.one_b_flag;
    }
    else {
      resolved.one_b_flag = false
    }

    if (msg.two_b_flag !== undefined) {
      resolved.two_b_flag = msg.two_b_flag;
    }
    else {
      resolved.two_b_flag = false
    }

    if (msg.Deep_sum !== undefined) {
      resolved.Deep_sum = msg.Deep_sum;
    }
    else {
      resolved.Deep_sum = 0
    }

    return resolved;
    }
};

module.exports = GetParameter;
