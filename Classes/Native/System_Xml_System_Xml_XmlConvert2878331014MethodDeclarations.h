﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Char[]
struct CharU5BU5D_t1685951112;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "System_Xml_System_Xml_XmlDateTimeSerializationMode1574837101.h"
#include "mscorlib_System_Globalization_DateTimeStyles2848593525.h"
#include "mscorlib_System_Decimal173022926.h"
#include "mscorlib_System_Guid756539922.h"
#include "mscorlib_System_TimeSpan1834055012.h"

// System.Void System.Xml.XmlConvert::.cctor()
extern "C"  void XmlConvert__cctor_m990448552 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::TryDecoding(System.String)
extern "C"  String_t* XmlConvert_TryDecoding_m512129050 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::DecodeName(System.String)
extern "C"  String_t* XmlConvert_DecodeName_m2822703075 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeLocalName(System.String)
extern "C"  String_t* XmlConvert_EncodeLocalName_m2355278800 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::IsInvalid(System.Char,System.Boolean)
extern "C"  bool XmlConvert_IsInvalid_m2880631860 (Il2CppObject * __this /* static, unused */, uint16_t ___c, bool ___firstOnlyLetter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String,System.Boolean)
extern "C"  String_t* XmlConvert_EncodeName_m2955797710 (Il2CppObject * __this /* static, unused */, String_t* ___name, bool ___nmtoken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String)
extern "C"  String_t* XmlConvert_EncodeName_m830433105 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::ToBoolean(System.String)
extern "C"  bool XmlConvert_ToBoolean_m1218506242 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Xml.XmlConvert::ToByte(System.String)
extern "C"  uint8_t XmlConvert_ToByte_m363267584 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String)
extern "C"  DateTime_t2933746480  XmlConvert_ToDateTime_m994963552 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.Xml.XmlDateTimeSerializationMode)
extern "C"  DateTime_t2933746480  XmlConvert_ToDateTime_m1217843511 (Il2CppObject * __this /* static, unused */, String_t* ___value, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.String[])
extern "C"  DateTime_t2933746480  XmlConvert_ToDateTime_m2401508700 (Il2CppObject * __this /* static, unused */, String_t* ___s, StringU5BU5D_t3764931161* ___formats, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.String[],System.Globalization.DateTimeStyles)
extern "C"  DateTime_t2933746480  XmlConvert_ToDateTime_m1186467199 (Il2CppObject * __this /* static, unused */, String_t* ___s, StringU5BU5D_t3764931161* ___formats, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.XmlConvert::ToDecimal(System.String)
extern "C"  Decimal_t173022926  XmlConvert_ToDecimal_m1244084824 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XmlConvert::ToDouble(System.String)
extern "C"  double XmlConvert_ToDouble_m720485344 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Xml.XmlConvert::TryParseStringFloatConstants(System.String)
extern "C"  float XmlConvert_TryParseStringFloatConstants_m442500501 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::TryParseStringConstant(System.String,System.String,System.Int32,System.Int32)
extern "C"  bool XmlConvert_TryParseStringConstant_m3504021278 (Il2CppObject * __this /* static, unused */, String_t* ___format, String_t* ___s, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Xml.XmlConvert::ToGuid(System.String)
extern "C"  Guid_t756539922  XmlConvert_ToGuid_m3542229728 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Xml.XmlConvert::ToInt16(System.String)
extern "C"  int16_t XmlConvert_ToInt16_m1630299202 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlConvert::ToInt32(System.String)
extern "C"  int32_t XmlConvert_ToInt32_m1775581778 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlConvert::ToInt64(System.String)
extern "C"  int64_t XmlConvert_ToInt64_m4199079136 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Xml.XmlConvert::ToSByte(System.String)
extern "C"  int8_t XmlConvert_ToSByte_m3953572736 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Xml.XmlConvert::ToSingle(System.String)
extern "C"  float XmlConvert_ToSingle_m2258647712 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Guid)
extern "C"  String_t* XmlConvert_ToString_m1516719048 (Il2CppObject * __this /* static, unused */, Guid_t756539922  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Int32)
extern "C"  String_t* XmlConvert_ToString_m267231745 (Il2CppObject * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Int16)
extern "C"  String_t* XmlConvert_ToString_m549556743 (Il2CppObject * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Byte)
extern "C"  String_t* XmlConvert_ToString_m838009945 (Il2CppObject * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Int64)
extern "C"  String_t* XmlConvert_ToString_m3580968078 (Il2CppObject * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Char)
extern "C"  String_t* XmlConvert_ToString_m1745595395 (Il2CppObject * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Boolean)
extern "C"  String_t* XmlConvert_ToString_m789141739 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.SByte)
extern "C"  String_t* XmlConvert_ToString_m3785086318 (Il2CppObject * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Decimal)
extern "C"  String_t* XmlConvert_ToString_m3945094538 (Il2CppObject * __this /* static, unused */, Decimal_t173022926  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.UInt64)
extern "C"  String_t* XmlConvert_ToString_m1091529603 (Il2CppObject * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.TimeSpan)
extern "C"  String_t* XmlConvert_ToString_m1759857076 (Il2CppObject * __this /* static, unused */, TimeSpan_t1834055012  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Double)
extern "C"  String_t* XmlConvert_ToString_m1190359640 (Il2CppObject * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Single)
extern "C"  String_t* XmlConvert_ToString_m2664053377 (Il2CppObject * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.UInt32)
extern "C"  String_t* XmlConvert_ToString_m2254328852 (Il2CppObject * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.UInt16)
extern "C"  String_t* XmlConvert_ToString_m4223697254 (Il2CppObject * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.DateTime,System.Xml.XmlDateTimeSerializationMode)
extern "C"  String_t* XmlConvert_ToString_m4109013699 (Il2CppObject * __this /* static, unused */, DateTime_t2933746480  ___value, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Xml.XmlConvert::ToTimeSpan(System.String)
extern "C"  TimeSpan_t1834055012  XmlConvert_ToTimeSpan_m25786016 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Xml.XmlConvert::ToUInt16(System.String)
extern "C"  uint16_t XmlConvert_ToUInt16_m3204521056 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Xml.XmlConvert::ToUInt32(System.String)
extern "C"  uint32_t XmlConvert_ToUInt32_m4264915808 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Xml.XmlConvert::ToUInt64(System.String)
extern "C"  uint64_t XmlConvert_ToUInt64_m2106131552 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyName(System.String)
extern "C"  String_t* XmlConvert_VerifyName_m1942946790 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyNCName(System.String)
extern "C"  String_t* XmlConvert_VerifyNCName_m2145737417 (Il2CppObject * __this /* static, unused */, String_t* ___ncname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Xml.XmlConvert::FromBinHexString(System.String)
extern "C"  ByteU5BU5D_t3835026402* XmlConvert_FromBinHexString_m3708238900 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlConvert::FromBinHexString(System.Char[],System.Int32,System.Int32,System.Byte[])
extern "C"  int32_t XmlConvert_FromBinHexString_m2538267662 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1685951112* ___chars, int32_t ___offset, int32_t ___charLength, ByteU5BU5D_t3835026402* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
