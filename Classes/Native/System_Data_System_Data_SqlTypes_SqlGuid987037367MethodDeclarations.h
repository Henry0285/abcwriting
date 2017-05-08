#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Xml.XmlWriter
struct XmlWriter_t1713407564;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t529105423;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlGuid987037367.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "mscorlib_System_Guid756539922.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean926406812.h"

// System.Void System.Data.SqlTypes.SqlGuid::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlGuid_System_Xml_Serialization_IXmlSerializable_ReadXml_m1203407187 (SqlGuid_t987037367 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlGuid::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlGuid_System_Xml_Serialization_IXmlSerializable_WriteXml_m3166762840 (SqlGuid_t987037367 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlGuid::get_IsNull()
extern "C"  bool SqlGuid_get_IsNull_m281495307 (SqlGuid_t987037367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Data.SqlTypes.SqlGuid::get_Value()
extern "C"  Guid_t756539922  SqlGuid_get_Value_m1946828662 (SqlGuid_t987037367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlGuid::CompareTo(System.Object)
extern "C"  int32_t SqlGuid_CompareTo_m3772648735 (SqlGuid_t987037367 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlGuid::CompareTo(System.Data.SqlTypes.SqlGuid)
extern "C"  int32_t SqlGuid_CompareTo_m3870721872 (SqlGuid_t987037367 * __this, SqlGuid_t987037367  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlGuid::Equals(System.Object)
extern "C"  bool SqlGuid_Equals_m3671285030 (SqlGuid_t987037367 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlGuid::GetHashCode()
extern "C"  int32_t SqlGuid_GetHashCode_m991116318 (SqlGuid_t987037367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Data.SqlTypes.SqlGuid::ToByteArray()
extern "C"  ByteU5BU5D_t3835026402* SqlGuid_ToByteArray_m2381622259 (SqlGuid_t987037367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlGuid::ToString()
extern "C"  String_t* SqlGuid_ToString_m1242610842 (SqlGuid_t987037367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlGuid::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t3059647944 * SqlGuid_GetXsdType_m2795968436 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t529105423 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlGuid::op_Equality(System.Data.SqlTypes.SqlGuid,System.Data.SqlTypes.SqlGuid)
extern "C"  SqlBoolean_t926406812  SqlGuid_op_Equality_m1449404922 (Il2CppObject * __this /* static, unused */, SqlGuid_t987037367  ___x, SqlGuid_t987037367  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlGuid_t987037367;
struct SqlGuid_t987037367_marshaled_pinvoke;

extern "C" void SqlGuid_t987037367_marshal_pinvoke(const SqlGuid_t987037367& unmarshaled, SqlGuid_t987037367_marshaled_pinvoke& marshaled);
extern "C" void SqlGuid_t987037367_marshal_pinvoke_back(const SqlGuid_t987037367_marshaled_pinvoke& marshaled, SqlGuid_t987037367& unmarshaled);
extern "C" void SqlGuid_t987037367_marshal_pinvoke_cleanup(SqlGuid_t987037367_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlGuid_t987037367;
struct SqlGuid_t987037367_marshaled_com;

extern "C" void SqlGuid_t987037367_marshal_com(const SqlGuid_t987037367& unmarshaled, SqlGuid_t987037367_marshaled_com& marshaled);
extern "C" void SqlGuid_t987037367_marshal_com_back(const SqlGuid_t987037367_marshaled_com& marshaled, SqlGuid_t987037367& unmarshaled);
extern "C" void SqlGuid_t987037367_marshal_com_cleanup(SqlGuid_t987037367_marshaled_com& marshaled);
