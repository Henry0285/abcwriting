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

// Mono.Data.Sqlite.SqliteParameter
struct SqliteParameter_t4187736858;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DbType824390233.h"
#include "System_Data_System_Data_DataRowVersion1299851267.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteParameter4187736858.h"
#include "System_Data_System_Data_ParameterDirection1566183995.h"

// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor()
extern "C"  void SqliteParameter__ctor_m1187617438 (SqliteParameter_t4187736858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Object)
extern "C"  void SqliteParameter__ctor_m1325680818 (SqliteParameter_t4187736858 * __this, String_t* ___parameterName, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.String,System.Data.DataRowVersion)
extern "C"  void SqliteParameter__ctor_m3126855329 (SqliteParameter_t4187736858 * __this, String_t* ___parameterName, int32_t ___parameterType, int32_t ___parameterSize, String_t* ___sourceColumn, int32_t ___rowVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(Mono.Data.Sqlite.SqliteParameter)
extern "C"  void SqliteParameter__ctor_m137838760 (SqliteParameter_t4187736858 * __this, SqliteParameter_t4187736858 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameter::.ctor(System.String,System.Data.DbType,System.Int32,System.Data.ParameterDirection,System.Boolean,System.Byte,System.Byte,System.String,System.Data.DataRowVersion,System.Object)
extern "C"  void SqliteParameter__ctor_m1945569417 (SqliteParameter_t4187736858 * __this, String_t* ___parameterName, int32_t ___parameterType, int32_t ___parameterSize, int32_t ___direction, bool ___isNullable, uint8_t ___precision, uint8_t ___scale, String_t* ___sourceColumn, int32_t ___rowVersion, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteParameter::get_IsNullable()
extern "C"  bool SqliteParameter_get_IsNullable_m3655475668 (SqliteParameter_t4187736858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameter::set_IsNullable(System.Boolean)
extern "C"  void SqliteParameter_set_IsNullable_m1285578835 (SqliteParameter_t4187736858 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DbType Mono.Data.Sqlite.SqliteParameter::get_DbType()
extern "C"  int32_t SqliteParameter_get_DbType_m2832794153 (SqliteParameter_t4187736858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameter::set_DbType(System.Data.DbType)
extern "C"  void SqliteParameter_set_DbType_m1891256162 (SqliteParameter_t4187736858 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ParameterDirection Mono.Data.Sqlite.SqliteParameter::get_Direction()
extern "C"  int32_t SqliteParameter_get_Direction_m171629838 (SqliteParameter_t4187736858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Direction(System.Data.ParameterDirection)
extern "C"  void SqliteParameter_set_Direction_m2653343995 (SqliteParameter_t4187736858 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteParameter::get_ParameterName()
extern "C"  String_t* SqliteParameter_get_ParameterName_m112121022 (SqliteParameter_t4187736858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameter::set_ParameterName(System.String)
extern "C"  void SqliteParameter_set_ParameterName_m2591781135 (SqliteParameter_t4187736858 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Size(System.Int32)
extern "C"  void SqliteParameter_set_Size_m2110998811 (SqliteParameter_t4187736858 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SqliteParameter::get_SourceColumn()
extern "C"  String_t* SqliteParameter_get_SourceColumn_m4112080529 (SqliteParameter_t4187736858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceColumn(System.String)
extern "C"  void SqliteParameter_set_SourceColumn_m3358420616 (SqliteParameter_t4187736858 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceColumnNullMapping(System.Boolean)
extern "C"  void SqliteParameter_set_SourceColumnNullMapping_m2417781524 (SqliteParameter_t4187736858 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRowVersion Mono.Data.Sqlite.SqliteParameter::get_SourceVersion()
extern "C"  int32_t SqliteParameter_get_SourceVersion_m2636744932 (SqliteParameter_t4187736858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameter::set_SourceVersion(System.Data.DataRowVersion)
extern "C"  void SqliteParameter_set_SourceVersion_m1711912513 (SqliteParameter_t4187736858 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteParameter::get_Value()
extern "C"  Il2CppObject * SqliteParameter_get_Value_m2370469425 (SqliteParameter_t4187736858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameter::set_Value(System.Object)
extern "C"  void SqliteParameter_set_Value_m2595801592 (SqliteParameter_t4187736858 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteParameter::Clone()
extern "C"  Il2CppObject * SqliteParameter_Clone_m1278415206 (SqliteParameter_t4187736858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
