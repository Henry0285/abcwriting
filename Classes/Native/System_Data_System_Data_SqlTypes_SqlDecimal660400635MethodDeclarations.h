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

// System.Int32[]
struct Int32U5BU5D_t3315407976;
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
#include "System_Data_System_Data_SqlTypes_SqlDecimal660400635.h"
#include "mscorlib_System_Decimal173022926.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_XmlWriter1713407564.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet529105423.h"
#include "System_Data_System_Data_SqlTypes_SqlBoolean926406812.h"

// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Decimal)
extern "C"  void SqlDecimal__ctor_m2099418447 (SqlDecimal_t660400635 * __this, Decimal_t173022926  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Int64)
extern "C"  void SqlDecimal__ctor_m3333458825 (SqlDecimal_t660400635 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Byte,System.Byte,System.Boolean,System.Int32[])
extern "C"  void SqlDecimal__ctor_m1622357667 (SqlDecimal_t660400635 * __this, uint8_t ___bPrecision, uint8_t ___bScale, bool ___fPositive, Int32U5BU5D_t3315407976* ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.ctor(System.Byte,System.Byte,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SqlDecimal__ctor_m2554340474 (SqlDecimal_t660400635 * __this, uint8_t ___bPrecision, uint8_t ___bScale, bool ___fPositive, int32_t ___data1, int32_t ___data2, int32_t ___data3, int32_t ___data4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::.cctor()
extern "C"  void SqlDecimal__cctor_m2295239394 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void SqlDecimal_System_Xml_Serialization_IXmlSerializable_ReadXml_m2499422195 (SqlDecimal_t660400635 * __this, XmlReader_t1154388064 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlDecimal::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void SqlDecimal_System_Xml_Serialization_IXmlSerializable_WriteXml_m1025209772 (SqlDecimal_t660400635 * __this, XmlWriter_t1713407564 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.SqlTypes.SqlDecimal::get_Data()
extern "C"  Int32U5BU5D_t3315407976* SqlDecimal_get_Data_m437405754 (SqlDecimal_t660400635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDecimal::get_IsNull()
extern "C"  bool SqlDecimal_get_IsNull_m590265403 (SqlDecimal_t660400635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDecimal::get_IsPositive()
extern "C"  bool SqlDecimal_get_IsPositive_m3395883511 (SqlDecimal_t660400635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlDecimal::get_Precision()
extern "C"  uint8_t SqlDecimal_get_Precision_m997609008 (SqlDecimal_t660400635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlDecimal::get_Scale()
extern "C"  uint8_t SqlDecimal_get_Scale_m437663638 (SqlDecimal_t660400635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Data.SqlTypes.SqlDecimal::get_Value()
extern "C"  Decimal_t173022926  SqlDecimal_get_Value_m2856520964 (SqlDecimal_t660400635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::AdjustScale(System.Data.SqlTypes.SqlDecimal,System.Int32,System.Boolean)
extern "C"  SqlDecimal_t660400635  SqlDecimal_AdjustScale_m1036651591 (Il2CppObject * __this /* static, unused */, SqlDecimal_t660400635  ___n, int32_t ___digits, bool ___fRound, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::CompareTo(System.Object)
extern "C"  int32_t SqlDecimal_CompareTo_m894329975 (SqlDecimal_t660400635 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::CompareTo(System.Data.SqlTypes.SqlDecimal)
extern "C"  int32_t SqlDecimal_CompareTo_m1340666602 (SqlDecimal_t660400635 * __this, SqlDecimal_t660400635  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.SqlTypes.SqlDecimal::Equals(System.Object)
extern "C"  bool SqlDecimal_Equals_m2003590938 (SqlDecimal_t660400635 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::GetHashCode()
extern "C"  int32_t SqlDecimal_GetHashCode_m2848900138 (SqlDecimal_t660400635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Round(System.Data.SqlTypes.SqlDecimal,System.Int32)
extern "C"  SqlDecimal_t660400635  SqlDecimal_Round_m957295511 (Il2CppObject * __this /* static, unused */, SqlDecimal_t660400635  ___n, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Data.SqlTypes.SqlDecimal::GetPrecision(System.Decimal)
extern "C"  uint8_t SqlDecimal_GetPrecision_m4292129 (SqlDecimal_t660400635 * __this, Decimal_t173022926  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Data.SqlTypes.SqlDecimal::ToDouble()
extern "C"  double SqlDecimal_ToDouble_m3985025332 (SqlDecimal_t660400635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.SqlTypes.SqlDecimal::ToString()
extern "C"  String_t* SqlDecimal_ToString_m2628530420 (SqlDecimal_t660400635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.SqlTypes.SqlDecimal::Div128By32(System.UInt64&,System.UInt64&,System.UInt32,System.UInt32&)
extern "C"  int32_t SqlDecimal_Div128By32_m2094747981 (Il2CppObject * __this /* static, unused */, uint64_t* ___hi, uint64_t* ___lo, uint32_t ___divider, uint32_t* ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Truncate(System.Data.SqlTypes.SqlDecimal,System.Int32)
extern "C"  SqlDecimal_t660400635  SqlDecimal_Truncate_m381674339 (Il2CppObject * __this /* static, unused */, SqlDecimal_t660400635  ___n, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Data.SqlTypes.SqlDecimal::GetXsdType(System.Xml.Schema.XmlSchemaSet)
extern "C"  XmlQualifiedName_t3059647944 * SqlDecimal_GetXsdType_m1502861726 (Il2CppObject * __this /* static, unused */, XmlSchemaSet_t529105423 * ___schemaSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDecimal::op_Equality(System.Data.SqlTypes.SqlDecimal,System.Data.SqlTypes.SqlDecimal)
extern "C"  SqlBoolean_t926406812  SqlDecimal_op_Equality_m172014346 (Il2CppObject * __this /* static, unused */, SqlDecimal_t660400635  ___x, SqlDecimal_t660400635  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::op_Multiply(System.Data.SqlTypes.SqlDecimal,System.Data.SqlTypes.SqlDecimal)
extern "C"  SqlDecimal_t660400635  SqlDecimal_op_Multiply_m4145404439 (Il2CppObject * __this /* static, unused */, SqlDecimal_t660400635  ___x, SqlDecimal_t660400635  ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::op_Implicit(System.Int64)
extern "C"  SqlDecimal_t660400635  SqlDecimal_op_Implicit_m480779450 (Il2CppObject * __this /* static, unused */, int64_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct SqlDecimal_t660400635;
struct SqlDecimal_t660400635_marshaled_pinvoke;

extern "C" void SqlDecimal_t660400635_marshal_pinvoke(const SqlDecimal_t660400635& unmarshaled, SqlDecimal_t660400635_marshaled_pinvoke& marshaled);
extern "C" void SqlDecimal_t660400635_marshal_pinvoke_back(const SqlDecimal_t660400635_marshaled_pinvoke& marshaled, SqlDecimal_t660400635& unmarshaled);
extern "C" void SqlDecimal_t660400635_marshal_pinvoke_cleanup(SqlDecimal_t660400635_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct SqlDecimal_t660400635;
struct SqlDecimal_t660400635_marshaled_com;

extern "C" void SqlDecimal_t660400635_marshal_com(const SqlDecimal_t660400635& unmarshaled, SqlDecimal_t660400635_marshaled_com& marshaled);
extern "C" void SqlDecimal_t660400635_marshal_com_back(const SqlDecimal_t660400635_marshaled_com& marshaled, SqlDecimal_t660400635& unmarshaled);
extern "C" void SqlDecimal_t660400635_marshal_com_cleanup(SqlDecimal_t660400635_marshaled_com& marshaled);
