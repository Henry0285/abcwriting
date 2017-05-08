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
#include "System_Data_System_Data_SqlTypes_SqlDouble71259113.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean926406812.h"

// System.Void System.Data.SqlTypes.SqlDouble::.ctor(System.Double)
extern "C"  void SqlDouble__ctor_m3523555415 (SqlDouble_t71259113 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDouble::.cctor()
extern "C"  void SqlDouble__cctor_m1311865794 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDouble::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlDouble_System_Xml_Serialization_IXmlSerializable_ReadXml_m3715937349 (SqlDouble_t71259113 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDouble::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlDouble_System_Xml_Serialization_IXmlSerializable_WriteXml_m4266064236 (SqlDouble_t71259113 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDouble::get_IsNull()
extern "C"  bool SqlDouble_get_IsNull_m3098406409 (SqlDouble_t71259113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Data.SqlTypes.SqlDouble::get_Value()
extern "C"  double SqlDouble_get_Value_m551839182 (SqlDouble_t71259113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDouble::CompareTo(System.Object)
extern "C"  int32_t SqlDouble_CompareTo_m1499292045 (SqlDouble_t71259113 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDouble::CompareTo(System.Data.SqlTypes.SqlDouble)
extern "C"  int32_t SqlDouble_CompareTo_m510235568 (SqlDouble_t71259113 * __this, SqlDouble_t71259113  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDouble::Equals(System.Object)
extern "C"  bool SqlDouble_Equals_m1649046586 (SqlDouble_t71259113 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDouble::GetHashCode()
extern "C"  int32_t SqlDouble_GetHashCode_m2927505050 (SqlDouble_t71259113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlDouble::ToString()
extern "C"  String_t* SqlDouble_ToString_m4241528378 (SqlDouble_t71259113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlDouble::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t3059647944 * SqlDouble_GetXsdType_m2363522100 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t529105423 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDouble::op_Equality(System.Data.SqlTypes.SqlDouble,System.Data.SqlTypes.SqlDouble)
extern "C"  SqlBoolean_t926406812  SqlDouble_op_Equality_m707259826 (Il2CppObject * __this /* static, unused */, SqlDouble_t71259113  ___x, SqlDouble_t71259113  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlDouble_t71259113;
struct SqlDouble_t71259113_marshaled_pinvoke;

extern "C" void SqlDouble_t71259113_marshal_pinvoke(const SqlDouble_t71259113& unmarshaled, SqlDouble_t71259113_marshaled_pinvoke& marshaled);
extern "C" void SqlDouble_t71259113_marshal_pinvoke_back(const SqlDouble_t71259113_marshaled_pinvoke& marshaled, SqlDouble_t71259113& unmarshaled);
extern "C" void SqlDouble_t71259113_marshal_pinvoke_cleanup(SqlDouble_t71259113_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlDouble_t71259113;
struct SqlDouble_t71259113_marshaled_com;

extern "C" void SqlDouble_t71259113_marshal_com(const SqlDouble_t71259113& unmarshaled, SqlDouble_t71259113_marshaled_com& marshaled);
extern "C" void SqlDouble_t71259113_marshal_com_back(const SqlDouble_t71259113_marshaled_com& marshaled, SqlDouble_t71259113& unmarshaled);
extern "C" void SqlDouble_t71259113_marshal_com_cleanup(SqlDouble_t71259113_marshaled_com& marshaled);
