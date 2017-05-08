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
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t529105423;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlByte3521055450.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean926406812.h"

// System.Void System.Data.SqlTypes.SqlByte::.ctor(System.Byte)
extern "C"  void SqlByte__ctor_m4225703907 (SqlByte_t3521055450 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlByte::.cctor()
extern "C"  void SqlByte__cctor_m920630137 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlByte::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlByte_System_Xml_Serialization_IXmlSerializable_ReadXml_m3803179954 (SqlByte_t3521055450 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlByte::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlByte_System_Xml_Serialization_IXmlSerializable_WriteXml_m172062647 (SqlByte_t3521055450 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlByte::get_IsNull()
extern "C"  bool SqlByte_get_IsNull_m3005568400 (SqlByte_t3521055450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlByte::get_Value()
extern "C"  uint8_t SqlByte_get_Value_m1915151532 (SqlByte_t3521055450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlByte::CompareTo(System.Object)
extern "C"  int32_t SqlByte_CompareTo_m4269108724 (SqlByte_t3521055450 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlByte::CompareTo(System.Data.SqlTypes.SqlByte)
extern "C"  int32_t SqlByte_CompareTo_m1043612240 (SqlByte_t3521055450 * __this, SqlByte_t3521055450  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlByte::Equals(System.Object)
extern "C"  bool SqlByte_Equals_m3310612539 (SqlByte_t3521055450 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlByte::GetHashCode()
extern "C"  int32_t SqlByte_GetHashCode_m449031769 (SqlByte_t3521055450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlByte::ToString()
extern "C"  String_t* SqlByte_ToString_m1061137985 (SqlByte_t3521055450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlByte::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t3059647944 * SqlByte_GetXsdType_m3575809837 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t529105423 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlByte::op_Equality(System.Data.SqlTypes.SqlByte,System.Data.SqlTypes.SqlByte)
extern "C"  SqlBoolean_t926406812  SqlByte_op_Equality_m3312218453 (Il2CppObject * __this /* static, unused */, SqlByte_t3521055450  ___x, SqlByte_t3521055450  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlByte_t3521055450;
struct SqlByte_t3521055450_marshaled_pinvoke;

extern "C" void SqlByte_t3521055450_marshal_pinvoke(const SqlByte_t3521055450& unmarshaled, SqlByte_t3521055450_marshaled_pinvoke& marshaled);
extern "C" void SqlByte_t3521055450_marshal_pinvoke_back(const SqlByte_t3521055450_marshaled_pinvoke& marshaled, SqlByte_t3521055450& unmarshaled);
extern "C" void SqlByte_t3521055450_marshal_pinvoke_cleanup(SqlByte_t3521055450_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlByte_t3521055450;
struct SqlByte_t3521055450_marshaled_com;

extern "C" void SqlByte_t3521055450_marshal_com(const SqlByte_t3521055450& unmarshaled, SqlByte_t3521055450_marshaled_com& marshaled);
extern "C" void SqlByte_t3521055450_marshal_com_back(const SqlByte_t3521055450_marshaled_com& marshaled, SqlByte_t3521055450& unmarshaled);
extern "C" void SqlByte_t3521055450_marshal_com_cleanup(SqlByte_t3521055450_marshaled_com& marshaled);
