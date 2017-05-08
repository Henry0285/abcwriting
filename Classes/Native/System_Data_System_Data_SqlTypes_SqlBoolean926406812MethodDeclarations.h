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
#include "System_Data_System_Data_SqlTypes_SqlBoolean926406812.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"

// System.Void System.Data.SqlTypes.SqlBoolean::.ctor(System.Boolean)
extern "C"  void SqlBoolean__ctor_m1173820463 (SqlBoolean_t926406812 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBoolean::.ctor(System.Int32)
extern "C"  void SqlBoolean__ctor_m916472097 (SqlBoolean_t926406812 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBoolean::.cctor()
extern "C"  void SqlBoolean__cctor_m219523595 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBoolean::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlBoolean_System_Xml_Serialization_IXmlSerializable_ReadXml_m2679778614 (SqlBoolean_t926406812 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlBoolean::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlBoolean_System_Xml_Serialization_IXmlSerializable_WriteXml_m17884089 (SqlBoolean_t926406812 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlBoolean::get_ByteValue()
extern "C"  uint8_t SqlBoolean_get_ByteValue_m293910010 (SqlBoolean_t926406812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_IsNull()
extern "C"  bool SqlBoolean_get_IsNull_m2970917164 (SqlBoolean_t926406812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_IsTrue()
extern "C"  bool SqlBoolean_get_IsTrue_m3751950077 (SqlBoolean_t926406812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_Value()
extern "C"  bool SqlBoolean_get_Value_m3404106564 (SqlBoolean_t926406812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBoolean::CompareTo(System.Object)
extern "C"  int32_t SqlBoolean_CompareTo_m400629676 (SqlBoolean_t926406812 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBoolean::CompareTo(System.Data.SqlTypes.SqlBoolean)
extern "C"  int32_t SqlBoolean_CompareTo_m2518032432 (SqlBoolean_t926406812 * __this, SqlBoolean_t926406812  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::Equals(System.Object)
extern "C"  bool SqlBoolean_Equals_m2072166337 (SqlBoolean_t926406812 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlBoolean::GetHashCode()
extern "C"  int32_t SqlBoolean_GetHashCode_m3079758215 (SqlBoolean_t926406812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlBoolean::ToString()
extern "C"  String_t* SqlBoolean_ToString_m1535355607 (SqlBoolean_t926406812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlBoolean::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t3059647944 * SqlBoolean_GetXsdType_m2367677543 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t529105423 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::op_Equality(System.Data.SqlTypes.SqlBoolean,System.Data.SqlTypes.SqlBoolean)
extern "C"  SqlBoolean_t926406812  SqlBoolean_op_Equality_m3625337587 (Il2CppObject * __this /* static, unused */, SqlBoolean_t926406812  ___x, SqlBoolean_t926406812  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlBoolean::op_Explicit(System.Data.SqlTypes.SqlBoolean)
extern "C"  bool SqlBoolean_op_Explicit_m426489734 (Il2CppObject * __this /* static, unused */, SqlBoolean_t926406812  ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlBoolean_t926406812;
struct SqlBoolean_t926406812_marshaled_pinvoke;

extern "C" void SqlBoolean_t926406812_marshal_pinvoke(const SqlBoolean_t926406812& unmarshaled, SqlBoolean_t926406812_marshaled_pinvoke& marshaled);
extern "C" void SqlBoolean_t926406812_marshal_pinvoke_back(const SqlBoolean_t926406812_marshaled_pinvoke& marshaled, SqlBoolean_t926406812& unmarshaled);
extern "C" void SqlBoolean_t926406812_marshal_pinvoke_cleanup(SqlBoolean_t926406812_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlBoolean_t926406812;
struct SqlBoolean_t926406812_marshaled_com;

extern "C" void SqlBoolean_t926406812_marshal_com(const SqlBoolean_t926406812& unmarshaled, SqlBoolean_t926406812_marshaled_com& marshaled);
extern "C" void SqlBoolean_t926406812_marshal_com_back(const SqlBoolean_t926406812_marshaled_com& marshaled, SqlBoolean_t926406812& unmarshaled);
extern "C" void SqlBoolean_t926406812_marshal_com_cleanup(SqlBoolean_t926406812_marshaled_com& marshaled);
