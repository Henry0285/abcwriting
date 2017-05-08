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
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t529105423;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_SqlTypes_SqlString683401585.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "mscorlib_System_Globalization_CompareOptions2768100183.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean926406812.h"

// System.Void System.Data.SqlTypes.SqlString::.cctor()
extern "C"  void SqlString__cctor_m2275681658 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlString::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlString_System_Xml_Serialization_IXmlSerializable_ReadXml_m4031138481 (SqlString_t683401585 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlString::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlString_System_Xml_Serialization_IXmlSerializable_WriteXml_m1904679680 (SqlString_t683401585 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Data.SqlTypes.SqlString::get_CultureInfo()
extern "C"  CultureInfo_t634113868 * SqlString_get_CultureInfo_m3136744899 (SqlString_t683401585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlString::get_IsNull()
extern "C"  bool SqlString_get_IsNull_m566530717 (SqlString_t683401585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlString::get_Value()
extern "C"  String_t* SqlString_get_Value_m2529501710 (SqlString_t683401585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareOptions System.Data.SqlTypes.SqlString::get_CompareOptions()
extern "C"  int32_t SqlString_get_CompareOptions_m3001863823 (SqlString_t683401585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlString::CompareTo(System.Object)
extern "C"  int32_t SqlString_CompareTo_m2575196865 (SqlString_t683401585 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlString::CompareSqlString(System.Data.SqlTypes.SqlString)
extern "C"  int32_t SqlString_CompareSqlString_m2062037538 (SqlString_t683401585 * __this, SqlString_t683401585  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlString::Equals(System.Object)
extern "C"  bool SqlString_Equals_m967348710 (SqlString_t683401585 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlString::GetHashCode()
extern "C"  int32_t SqlString_GetHashCode_m3990415250 (SqlString_t683401585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlString::ToString()
extern "C"  String_t* SqlString_ToString_m741745202 (SqlString_t683401585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlString::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t3059647944 * SqlString_GetXsdType_m765795932 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t529105423 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlString::op_Equality(System.Data.SqlTypes.SqlString,System.Data.SqlTypes.SqlString)
extern "C"  SqlBoolean_t926406812  SqlString_op_Equality_m1178114298 (Il2CppObject * __this /* static, unused */, SqlString_t683401585  ___x, SqlString_t683401585  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlString::op_Explicit(System.Data.SqlTypes.SqlString)
extern "C"  String_t* SqlString_op_Explicit_m1261292231 (Il2CppObject * __this /* static, unused */, SqlString_t683401585  ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlString_t683401585;
struct SqlString_t683401585_marshaled_pinvoke;

extern "C" void SqlString_t683401585_marshal_pinvoke(const SqlString_t683401585& unmarshaled, SqlString_t683401585_marshaled_pinvoke& marshaled);
extern "C" void SqlString_t683401585_marshal_pinvoke_back(const SqlString_t683401585_marshaled_pinvoke& marshaled, SqlString_t683401585& unmarshaled);
extern "C" void SqlString_t683401585_marshal_pinvoke_cleanup(SqlString_t683401585_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlString_t683401585;
struct SqlString_t683401585_marshaled_com;

extern "C" void SqlString_t683401585_marshal_com(const SqlString_t683401585& unmarshaled, SqlString_t683401585_marshaled_com& marshaled);
extern "C" void SqlString_t683401585_marshal_com_back(const SqlString_t683401585_marshaled_com& marshaled, SqlString_t683401585& unmarshaled);
extern "C" void SqlString_t683401585_marshal_com_cleanup(SqlString_t683401585_marshaled_com& marshaled);
