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
#include "System_Data_System_Data_SqlTypes_SqlInt641335578429.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean926406812.h"

// System.Void System.Data.SqlTypes.SqlInt64::.ctor(System.Int64)
extern "C"  void SqlInt64__ctor_m1214204367 (SqlInt64_t1335578429 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt64::.cctor()
extern "C"  void SqlInt64__cctor_m162630630 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt64::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlInt64_System_Xml_Serialization_IXmlSerializable_ReadXml_m3132271973 (SqlInt64_t1335578429 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlInt64::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlInt64_System_Xml_Serialization_IXmlSerializable_WriteXml_m111239616 (SqlInt64_t1335578429 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt64::get_IsNull()
extern "C"  bool SqlInt64_get_IsNull_m601624985 (SqlInt64_t1335578429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.SqlTypes.SqlInt64::get_Value()
extern "C"  int64_t SqlInt64_get_Value_m2286652644 (SqlInt64_t1335578429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt64::CompareTo(System.Object)
extern "C"  int32_t SqlInt64_CompareTo_m2421782681 (SqlInt64_t1335578429 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt64::CompareSqlInt64(System.Data.SqlTypes.SqlInt64)
extern "C"  int32_t SqlInt64_CompareSqlInt64_m1646310412 (SqlInt64_t1335578429 * __this, SqlInt64_t1335578429  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlInt64::Equals(System.Object)
extern "C"  bool SqlInt64_Equals_m411064070 (SqlInt64_t1335578429 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlInt64::GetHashCode()
extern "C"  int32_t SqlInt64_GetHashCode_m2382853126 (SqlInt64_t1335578429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlInt64::ToString()
extern "C"  String_t* SqlInt64_ToString_m2568585572 (SqlInt64_t1335578429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlInt64::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t3059647944 * SqlInt64_GetXsdType_m1358293834 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t529105423 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt64::op_Equality(System.Data.SqlTypes.SqlInt64,System.Data.SqlTypes.SqlInt64)
extern "C"  SqlBoolean_t926406812  SqlInt64_op_Equality_m4189266174 (Il2CppObject * __this /* static, unused */, SqlInt64_t1335578429  ___x, SqlInt64_t1335578429  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlInt64_t1335578429;
struct SqlInt64_t1335578429_marshaled_pinvoke;

extern "C" void SqlInt64_t1335578429_marshal_pinvoke(const SqlInt64_t1335578429& unmarshaled, SqlInt64_t1335578429_marshaled_pinvoke& marshaled);
extern "C" void SqlInt64_t1335578429_marshal_pinvoke_back(const SqlInt64_t1335578429_marshaled_pinvoke& marshaled, SqlInt64_t1335578429& unmarshaled);
extern "C" void SqlInt64_t1335578429_marshal_pinvoke_cleanup(SqlInt64_t1335578429_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlInt64_t1335578429;
struct SqlInt64_t1335578429_marshaled_com;

extern "C" void SqlInt64_t1335578429_marshal_com(const SqlInt64_t1335578429& unmarshaled, SqlInt64_t1335578429_marshaled_com& marshaled);
extern "C" void SqlInt64_t1335578429_marshal_com_back(const SqlInt64_t1335578429_marshaled_com& marshaled, SqlInt64_t1335578429& unmarshaled);
extern "C" void SqlInt64_t1335578429_marshal_com_cleanup(SqlInt64_t1335578429_marshaled_com& marshaled);
