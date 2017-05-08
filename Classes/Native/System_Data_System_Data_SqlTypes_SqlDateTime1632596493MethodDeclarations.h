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
#include "System_Data_System_Data_SqlTypes_SqlDateTime1632596493.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean926406812.h"

// System.Void System.Data.SqlTypes.SqlDateTime::.cctor()
extern "C"  void SqlDateTime__cctor_m1014198222 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlDateTime_System_Xml_Serialization_IXmlSerializable_ReadXml_m311353265 (SqlDateTime_t1632596493 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDateTime::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlDateTime_System_Xml_Serialization_IXmlSerializable_WriteXml_m2873494592 (SqlDateTime_t1632596493 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDateTime::get_IsNull()
extern "C"  bool SqlDateTime_get_IsNull_m1117097445 (SqlDateTime_t1632596493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Data.SqlTypes.SqlDateTime::get_Value()
extern "C"  DateTime_t2933746480  SqlDateTime_get_Value_m1606848286 (SqlDateTime_t1632596493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDateTime::CompareTo(System.Object)
extern "C"  int32_t SqlDateTime_CompareTo_m2998278097 (SqlDateTime_t1632596493 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDateTime::CompareTo(System.Data.SqlTypes.SqlDateTime)
extern "C"  int32_t SqlDateTime_CompareTo_m2879003664 (SqlDateTime_t1632596493 * __this, SqlDateTime_t1632596493  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDateTime::Equals(System.Object)
extern "C"  bool SqlDateTime_Equals_m959672982 (SqlDateTime_t1632596493 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDateTime::GetHashCode()
extern "C"  int32_t SqlDateTime_GetHashCode_m3898863926 (SqlDateTime_t1632596493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlDateTime::ToString()
extern "C"  String_t* SqlDateTime_ToString_m697163174 (SqlDateTime_t1632596493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlDateTime::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t3059647944 * SqlDateTime_GetXsdType_m3203147424 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t529105423 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDateTime::op_Equality(System.Data.SqlTypes.SqlDateTime,System.Data.SqlTypes.SqlDateTime)
extern "C"  SqlBoolean_t926406812  SqlDateTime_op_Equality_m543883470 (Il2CppObject * __this /* static, unused */, SqlDateTime_t1632596493  ___x, SqlDateTime_t1632596493  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
