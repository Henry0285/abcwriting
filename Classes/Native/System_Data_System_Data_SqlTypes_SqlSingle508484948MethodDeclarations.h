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
#include "System_Data_System_Data_SqlTypes_SqlSingle508484948.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean926406812.h"

// System.Void System.Data.SqlTypes.SqlSingle::.ctor(System.Single)
extern "C"  void SqlSingle__ctor_m1654037251 (SqlSingle_t508484948 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlSingle::.cctor()
extern "C"  void SqlSingle__cctor_m3709750769 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlSingle::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlSingle_System_Xml_Serialization_IXmlSerializable_ReadXml_m3822659640 (SqlSingle_t508484948 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlSingle::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlSingle_System_Xml_Serialization_IXmlSerializable_WriteXml_m2223337267 (SqlSingle_t508484948 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlSingle::get_IsNull()
extern "C"  bool SqlSingle_get_IsNull_m1203952298 (SqlSingle_t508484948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Data.SqlTypes.SqlSingle::get_Value()
extern "C"  float SqlSingle_get_Value_m2539174860 (SqlSingle_t508484948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlSingle::CompareTo(System.Object)
extern "C"  int32_t SqlSingle_CompareTo_m769398038 (SqlSingle_t508484948 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlSingle::CompareSqlSingle(System.Data.SqlTypes.SqlSingle)
extern "C"  int32_t SqlSingle_CompareSqlSingle_m3343256441 (SqlSingle_t508484948 * __this, SqlSingle_t508484948  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlSingle::Equals(System.Object)
extern "C"  bool SqlSingle_Equals_m133244655 (SqlSingle_t508484948 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlSingle::GetHashCode()
extern "C"  int32_t SqlSingle_GetHashCode_m4093612801 (SqlSingle_t508484948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlSingle::ToString()
extern "C"  String_t* SqlSingle_ToString_m3843356441 (SqlSingle_t508484948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlSingle::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t3059647944 * SqlSingle_GetXsdType_m3479096525 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t529105423 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlSingle::op_Equality(System.Data.SqlTypes.SqlSingle,System.Data.SqlTypes.SqlSingle)
extern "C"  SqlBoolean_t926406812  SqlSingle_op_Equality_m3193341253 (Il2CppObject * __this /* static, unused */, SqlSingle_t508484948  ___x, SqlSingle_t508484948  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlSingle_t508484948;
struct SqlSingle_t508484948_marshaled_pinvoke;

extern "C" void SqlSingle_t508484948_marshal_pinvoke(const SqlSingle_t508484948& unmarshaled, SqlSingle_t508484948_marshaled_pinvoke& marshaled);
extern "C" void SqlSingle_t508484948_marshal_pinvoke_back(const SqlSingle_t508484948_marshaled_pinvoke& marshaled, SqlSingle_t508484948& unmarshaled);
extern "C" void SqlSingle_t508484948_marshal_pinvoke_cleanup(SqlSingle_t508484948_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlSingle_t508484948;
struct SqlSingle_t508484948_marshaled_com;

extern "C" void SqlSingle_t508484948_marshal_com(const SqlSingle_t508484948& unmarshaled, SqlSingle_t508484948_marshaled_com& marshaled);
extern "C" void SqlSingle_t508484948_marshal_com_back(const SqlSingle_t508484948_marshaled_com& marshaled, SqlSingle_t508484948& unmarshaled);
extern "C" void SqlSingle_t508484948_marshal_com_cleanup(SqlSingle_t508484948_marshaled_com& marshaled);
