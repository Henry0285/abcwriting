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

// System.Byte[]
struct ByteU5BU5D_t3835026402;
// Mono.Data.Sqlite.SQLiteCallback
struct SQLiteCallback_t45166166;
// Mono.Data.Sqlite.SQLiteFinalCallback
struct SQLiteFinalCallback_t12811102;
// System.String
struct String_t;
// Mono.Data.Sqlite.SQLiteCollation
struct SQLiteCollation_t1346775202;
// Mono.Data.Sqlite.SQLiteUpdateCallback
struct SQLiteUpdateCallback_t936776887;
// Mono.Data.Sqlite.SQLiteCommitCallback
struct SQLiteCommitCallback_t4075712783;
// Mono.Data.Sqlite.SQLiteRollbackCallback
struct SQLiteRollbackCallback_t1047005064;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteCallback45166166.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteFinalCallbac12811102.h"
#include "mscorlib_System_String1967731336.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_TypeAffinity422422069.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteCollation1346775202.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteUpdateCallb936776887.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteCommitCall4075712783.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteRollbackCa1047005064.h"

// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_close(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_close_m3030298796 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_create_function(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IntPtr,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteFinalCallback)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_create_function_m4287670660 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, ByteU5BU5D_t3835026402* ___strName, int32_t ___nArgs, int32_t ___nType, IntPtr_t ___pvUser, SQLiteCallback_t45166166 * ___func, SQLiteCallback_t45166166 * ___fstep, SQLiteFinalCallback_t12811102 * ___ffinal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_finalize(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_finalize_m1244767440 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open_v2(System.Byte[],System.IntPtr&,System.Int32,System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_open_v2_m4157424113 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___utf8Filename, IntPtr_t* ___db, int32_t ___flags, IntPtr_t ___vfs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open(System.Byte[],System.IntPtr&)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_open_m2179285609 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3835026402* ___utf8Filename, IntPtr_t* ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_open16(System.String,System.IntPtr&)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_open16_m2055329851 (Il2CppObject * __this /* static, unused */, String_t* ___fileName, IntPtr_t* ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_reset(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_reset_m3333216081 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_parameter_name(System.IntPtr,System.Int32)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_bind_parameter_name_m3104156945 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_database_name(System.IntPtr,System.Int32)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_column_database_name_m1404639836 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_database_name16(System.IntPtr,System.Int32)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_column_database_name16_m2502147609 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_decltype(System.IntPtr,System.Int32)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_column_decltype_m3251779425 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_name(System.IntPtr,System.Int32)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_column_name_m2261276492 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_name16(System.IntPtr,System.Int32)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_column_name16_m2018534403 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_origin_name(System.IntPtr,System.Int32)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_column_origin_name_m3966694511 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_origin_name16(System.IntPtr,System.Int32)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_column_origin_name16_m2614317810 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_table_name(System.IntPtr,System.Int32)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_column_table_name_m1617242201 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_table_name16(System.IntPtr,System.Int32)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_column_table_name16_m2578768602 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_text(System.IntPtr,System.Int32)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_column_text_m3120183164 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_text16(System.IntPtr,System.Int32)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_column_text16_m2312166393 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_errmsg(System.IntPtr)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_errmsg_m2305957663 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_prepare(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr&,System.IntPtr&)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_prepare_m1218186556 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, IntPtr_t ___pSql, int32_t ___nBytes, IntPtr_t* ___stmt, IntPtr_t* ___ptrRemain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_table_column_metadata(System.IntPtr,System.Byte[],System.Byte[],System.Byte[],System.IntPtr&,System.IntPtr&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_table_column_metadata_m2488453981 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, ByteU5BU5D_t3835026402* ___dbName, ByteU5BU5D_t3835026402* ___tblName, ByteU5BU5D_t3835026402* ___colName, IntPtr_t* ___ptrDataType, IntPtr_t* ___ptrCollSeq, int32_t* ___notNull, int32_t* ___primaryKey, int32_t* ___autoInc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_text(System.IntPtr)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_value_text_m3579868390 (Il2CppObject * __this /* static, unused */, IntPtr_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_text16(System.IntPtr)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_value_text16_m705034897 (Il2CppObject * __this /* static, unused */, IntPtr_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_libversion()
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_libversion_m3951572640 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_changes(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_changes_m112843625 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_busy_timeout(System.IntPtr,System.Int32)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_busy_timeout_m2310231148 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_blob(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_blob_m1323464756 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, ByteU5BU5D_t3835026402* ___value, int32_t ___nSize, IntPtr_t ___nTransient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_double(System.IntPtr,System.Int32,System.Double)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_double_m3897171950 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_int(System.IntPtr,System.Int32,System.Int32)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_int_m3133120477 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_int64(System.IntPtr,System.Int32,System.Int64)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_int64_m2398245640 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_null(System.IntPtr,System.Int32)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_null_m2494046826 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_text(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_text_m1895672192 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, ByteU5BU5D_t3835026402* ___value, int32_t ___nlen, IntPtr_t ___pvReserved, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_parameter_count(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_parameter_count_m2793498695 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_count(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_column_count_m3272869672 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_step(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_step_m4267759096 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_double(System.IntPtr,System.Int32)
extern "C"  double UnsafeNativeMethods_sqlite3_column_double_m1182650062 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_int(System.IntPtr,System.Int32)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_column_int_m659878539 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_int64(System.IntPtr,System.Int32)
extern "C"  int64_t UnsafeNativeMethods_sqlite3_column_int64_m894008454 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_blob(System.IntPtr,System.Int32)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_column_blob_m1052355676 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_bytes(System.IntPtr,System.Int32)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_column_bytes_m4210774437 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_column_type(System.IntPtr,System.Int32)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_column_type_m1562505628 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_create_collation(System.IntPtr,System.Byte[],System.Int32,System.IntPtr,Mono.Data.Sqlite.SQLiteCollation)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_create_collation_m633881950 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, ByteU5BU5D_t3835026402* ___strName, int32_t ___nType, IntPtr_t ___pvUser, SQLiteCollation_t1346775202 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_blob(System.IntPtr)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_value_blob_m3113680698 (Il2CppObject * __this /* static, unused */, IntPtr_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_bytes(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_value_bytes_m98908177 (Il2CppObject * __this /* static, unused */, IntPtr_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_double(System.IntPtr)
extern "C"  double UnsafeNativeMethods_sqlite3_value_double_m2513364420 (Il2CppObject * __this /* static, unused */, IntPtr_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_int64(System.IntPtr)
extern "C"  int64_t UnsafeNativeMethods_sqlite3_value_int64_m1862595366 (Il2CppObject * __this /* static, unused */, IntPtr_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_value_type(System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_value_type_m2355582624 (Il2CppObject * __this /* static, unused */, IntPtr_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_blob(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
extern "C"  void UnsafeNativeMethods_sqlite3_result_blob_m4006635299 (Il2CppObject * __this /* static, unused */, IntPtr_t ___context, ByteU5BU5D_t3835026402* ___value, int32_t ___nSize, IntPtr_t ___pvReserved, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_double(System.IntPtr,System.Double)
extern "C"  void UnsafeNativeMethods_sqlite3_result_double_m260580087 (Il2CppObject * __this /* static, unused */, IntPtr_t ___context, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_error(System.IntPtr,System.Byte[],System.Int32)
extern "C"  void UnsafeNativeMethods_sqlite3_result_error_m3673102910 (Il2CppObject * __this /* static, unused */, IntPtr_t ___context, ByteU5BU5D_t3835026402* ___strErr, int32_t ___nLen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_int64(System.IntPtr,System.Int64)
extern "C"  void UnsafeNativeMethods_sqlite3_result_int64_m550489943 (Il2CppObject * __this /* static, unused */, IntPtr_t ___context, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_null(System.IntPtr)
extern "C"  void UnsafeNativeMethods_sqlite3_result_null_m3076341275 (Il2CppObject * __this /* static, unused */, IntPtr_t ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_text(System.IntPtr,System.Byte[],System.Int32,System.IntPtr)
extern "C"  void UnsafeNativeMethods_sqlite3_result_text_m1862606261 (Il2CppObject * __this /* static, unused */, IntPtr_t ___context, ByteU5BU5D_t3835026402* ___value, int32_t ___nLen, IntPtr_t ___pvReserved, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_aggregate_context(System.IntPtr,System.Int32)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_aggregate_context_m3765581763 (Il2CppObject * __this /* static, unused */, IntPtr_t ___context, int32_t ___nBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_bind_text16(System.IntPtr,System.Int32,System.String,System.Int32,System.IntPtr)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_bind_text16_m2522643478 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt, int32_t ___index, String_t* ___value, int32_t ___nlen, IntPtr_t ___pvReserved, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_error16(System.IntPtr,System.String,System.Int32)
extern "C"  void UnsafeNativeMethods_sqlite3_result_error16_m541955734 (Il2CppObject * __this /* static, unused */, IntPtr_t ___context, String_t* ___strName, int32_t ___nLen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_result_text16(System.IntPtr,System.String,System.Int32,System.IntPtr)
extern "C"  void UnsafeNativeMethods_sqlite3_result_text16_m2928632139 (Il2CppObject * __this /* static, unused */, IntPtr_t ___context, String_t* ___strName, int32_t ___nLen, IntPtr_t ___pvReserved, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_key(System.IntPtr,System.Byte[],System.Int32)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_key_m3635363825 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, ByteU5BU5D_t3835026402* ___key, int32_t ___keylen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_update_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteUpdateCallback,System.IntPtr)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_update_hook_m937360285 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, SQLiteUpdateCallback_t936776887 * ___func, IntPtr_t ___pvUser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_commit_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteCommitCallback,System.IntPtr)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_commit_hook_m2460352797 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, SQLiteCommitCallback_t4075712783 * ___func, IntPtr_t ___pvUser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_rollback_hook(System.IntPtr,Mono.Data.Sqlite.SQLiteRollbackCallback,System.IntPtr)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_rollback_hook_m2793346605 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, SQLiteRollbackCallback_t1047005064 * ___func, IntPtr_t ___pvUser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_next_stmt(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t UnsafeNativeMethods_sqlite3_next_stmt_m642114043 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, IntPtr_t ___stmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.UnsafeNativeMethods::sqlite3_exec(System.IntPtr,System.Byte[],System.IntPtr,System.IntPtr,System.IntPtr&)
extern "C"  int32_t UnsafeNativeMethods_sqlite3_exec_m2999405264 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, ByteU5BU5D_t3835026402* ___strSql, IntPtr_t ___pvCallback, IntPtr_t ___pvParam, IntPtr_t* ___errMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
