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

// Mono.Data.Sqlite.SqliteConvert
struct SqliteConvert_t1641943084;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Type
struct Type_t;
// Mono.Data.Sqlite.SQLiteType
struct SQLiteType_t2725963705;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteDateFormat1592298981.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteType2725963705.h"
#include "System_Data_System_Data_DbType824390233.h"
#include "mscorlib_System_Type77837473.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_TypeAffinity422422069.h"

// System.Void Mono.Data.Sqlite.SqliteConvert::.ctor(Mono.Data.Sqlite.SQLiteDateFormats)
extern "C"  void SqliteConvert__ctor_m3810757105 (SqliteConvert_t1641943084 * __this, int32_t ___fmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteConvert::.cctor()
extern "C"  void SqliteConvert__cctor_m3663796867 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Data.Sqlite.SqliteConvert::ToUTF8(System.String)
extern "C"  ByteU5BU5D_t3835026402* SqliteConvert_ToUTF8_m3797457148 (Il2CppObject * __this /* static, unused */, String_t* ___sourceText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Data.Sqlite.SqliteConvert::ToUTF8(System.DateTime)
extern "C"  ByteU5BU5D_t3835026402* SqliteConvert_ToUTF8_m1174433064 (SqliteConvert_t1641943084 * __this, DateTime_t2933746480  ___dateTimeValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteConvert::ToString(System.IntPtr,System.Int32)
extern "C"  String_t* SqliteConvert_ToString_m2460618300 (SqliteConvert_t1641943084 * __this, IntPtr_t ___nativestring, int32_t ___nativestringlen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteConvert::UTF8ToString(System.IntPtr,System.Int32)
extern "C"  String_t* SqliteConvert_UTF8ToString_m1234427123 (Il2CppObject * __this /* static, unused */, IntPtr_t ___nativestring, int32_t ___nativestringlen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Data.Sqlite.SqliteConvert::ToDateTime(System.String)
extern "C"  DateTime_t2933746480  SqliteConvert_ToDateTime_m1587306865 (SqliteConvert_t1641943084 * __this, String_t* ___dateText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Data.Sqlite.SqliteConvert::ToDateTime(System.Double)
extern "C"  DateTime_t2933746480  SqliteConvert_ToDateTime_m1098251173 (SqliteConvert_t1641943084 * __this, double ___julianDay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Mono.Data.Sqlite.SqliteConvert::ToJulianDay(System.DateTime)
extern "C"  double SqliteConvert_ToJulianDay_m1354514381 (SqliteConvert_t1641943084 * __this, DateTime_t2933746480  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteConvert::ToString(System.DateTime)
extern "C"  String_t* SqliteConvert_ToString_m3774947505 (SqliteConvert_t1641943084 * __this, DateTime_t2933746480  ___dateValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Data.Sqlite.SqliteConvert::ToDateTime(System.IntPtr,System.Int32)
extern "C"  DateTime_t2933746480  SqliteConvert_ToDateTime_m606967572 (SqliteConvert_t1641943084 * __this, IntPtr_t ___ptr, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Data.Sqlite.SqliteConvert::Split(System.String,System.Char)
extern "C"  StringU5BU5D_t3764931161* SqliteConvert_Split_m4038550782 (Il2CppObject * __this /* static, unused */, String_t* ___source, uint16_t ___separator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteConvert::ToBoolean(System.String)
extern "C"  bool SqliteConvert_ToBoolean_m3044712497 (Il2CppObject * __this /* static, unused */, String_t* ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Data.Sqlite.SqliteConvert::SQLiteTypeToType(Mono.Data.Sqlite.SQLiteType)
extern "C"  Type_t * SqliteConvert_SQLiteTypeToType_m4113020186 (Il2CppObject * __this /* static, unused */, SQLiteType_t2725963705 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DbType Mono.Data.Sqlite.SqliteConvert::TypeToDbType(System.Type)
extern "C"  int32_t SqliteConvert_TypeToDbType_m1055901380 (Il2CppObject * __this /* static, unused */, Type_t * ___typ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteConvert::DbTypeToColumnSize(System.Data.DbType)
extern "C"  int32_t SqliteConvert_DbTypeToColumnSize_m3343591987 (Il2CppObject * __this /* static, unused */, int32_t ___typ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteConvert::DbTypeToNumericPrecision(System.Data.DbType)
extern "C"  Il2CppObject * SqliteConvert_DbTypeToNumericPrecision_m2545944732 (Il2CppObject * __this /* static, unused */, int32_t ___typ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteConvert::DbTypeToNumericScale(System.Data.DbType)
extern "C"  Il2CppObject * SqliteConvert_DbTypeToNumericScale_m794374666 (Il2CppObject * __this /* static, unused */, int32_t ___typ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteConvert::DbTypeToTypeName(System.Data.DbType)
extern "C"  String_t* SqliteConvert_DbTypeToTypeName_m17748596 (Il2CppObject * __this /* static, unused */, int32_t ___typ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Mono.Data.Sqlite.SqliteConvert::DbTypeToType(System.Data.DbType)
extern "C"  Type_t * SqliteConvert_DbTypeToType_m1932425588 (Il2CppObject * __this /* static, unused */, int32_t ___typ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SqliteConvert::TypeToAffinity(System.Type)
extern "C"  int32_t SqliteConvert_TypeToAffinity_m2856160318 (Il2CppObject * __this /* static, unused */, Type_t * ___typ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DbType Mono.Data.Sqlite.SqliteConvert::TypeNameToDbType(System.String)
extern "C"  int32_t SqliteConvert_TypeNameToDbType_m3757768006 (Il2CppObject * __this /* static, unused */, String_t* ___Name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
