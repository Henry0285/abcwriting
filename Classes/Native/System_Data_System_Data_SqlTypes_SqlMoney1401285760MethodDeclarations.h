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
#include "System_Data_System_Data_SqlTypes_SqlMoney1401285760.h"
#include "mscorlib_System_Decimal173022926.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean926406812.h"

// System.Void System.Data.SqlTypes.SqlMoney::.ctor(System.Decimal)
extern "C"  void SqlMoney__ctor_m3292197014 (SqlMoney_t1401285760 * __this, Decimal_t173022926  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::.ctor(System.Int32)
extern "C"  void SqlMoney__ctor_m1641042733 (SqlMoney_t1401285760 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::.cctor()
extern "C"  void SqlMoney__cctor_m2540024943 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlMoney_System_Xml_Serialization_IXmlSerializable_ReadXml_m132644594 (SqlMoney_t1401285760 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlMoney::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlMoney_System_Xml_Serialization_IXmlSerializable_WriteXml_m2654101845 (SqlMoney_t1401285760 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlMoney::get_IsNull()
extern "C"  bool SqlMoney_get_IsNull_m4170733576 (SqlMoney_t1401285760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Data.SqlTypes.SqlMoney::get_Value()
extern "C"  Decimal_t173022926  SqlMoney_get_Value_m3006915021 (SqlMoney_t1401285760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlMoney::CompareTo(System.Object)
extern "C"  int32_t SqlMoney_CompareTo_m2104660224 (SqlMoney_t1401285760 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlMoney::CompareSqlMoney(System.Data.SqlTypes.SqlMoney)
extern "C"  int32_t SqlMoney_CompareSqlMoney_m2769859647 (SqlMoney_t1401285760 * __this, SqlMoney_t1401285760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlMoney::Equals(System.Object)
extern "C"  bool SqlMoney_Equals_m2037911565 (SqlMoney_t1401285760 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlMoney::GetHashCode()
extern "C"  int32_t SqlMoney_GetHashCode_m389551459 (SqlMoney_t1401285760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlMoney::ToString()
extern "C"  String_t* SqlMoney_ToString_m2142934475 (SqlMoney_t1401285760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlMoney::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t3059647944 * SqlMoney_GetXsdType_m754989459 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t529105423 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlMoney::op_Equality(System.Data.SqlTypes.SqlMoney,System.Data.SqlTypes.SqlMoney)
extern "C"  SqlBoolean_t926406812  SqlMoney_op_Equality_m4000254183 (Il2CppObject * __this /* static, unused */, SqlMoney_t1401285760  ___x, SqlMoney_t1401285760  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlMoney_t1401285760;
struct SqlMoney_t1401285760_marshaled_pinvoke;

extern "C" void SqlMoney_t1401285760_marshal_pinvoke(const SqlMoney_t1401285760& unmarshaled, SqlMoney_t1401285760_marshaled_pinvoke& marshaled);
extern "C" void SqlMoney_t1401285760_marshal_pinvoke_back(const SqlMoney_t1401285760_marshaled_pinvoke& marshaled, SqlMoney_t1401285760& unmarshaled);
extern "C" void SqlMoney_t1401285760_marshal_pinvoke_cleanup(SqlMoney_t1401285760_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlMoney_t1401285760;
struct SqlMoney_t1401285760_marshaled_com;

extern "C" void SqlMoney_t1401285760_marshal_com(const SqlMoney_t1401285760& unmarshaled, SqlMoney_t1401285760_marshaled_com& marshaled);
extern "C" void SqlMoney_t1401285760_marshal_com_back(const SqlMoney_t1401285760_marshaled_com& marshaled, SqlMoney_t1401285760& unmarshaled);
extern "C" void SqlMoney_t1401285760_marshal_com_cleanup(SqlMoney_t1401285760_marshaled_com& marshaled);
