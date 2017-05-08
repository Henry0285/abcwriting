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

// Mono.Data.Sqlite.SQLite3
struct SQLite3_t4176363920;
// System.String
struct String_t;
// Mono.Data.Sqlite.SqliteStatement
struct SqliteStatement_t3556180586;
// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t196696233;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// Mono.Data.Sqlite.SQLiteCallback
struct SQLiteCallback_t45166166;
// Mono.Data.Sqlite.SQLiteFinalCallback
struct SQLiteFinalCallback_t12811102;
// Mono.Data.Sqlite.SQLiteCollation
struct SQLiteCollation_t1346775202;
// Mono.Data.Sqlite.SQLiteUpdateCallback
struct SQLiteUpdateCallback_t936776887;
// Mono.Data.Sqlite.SQLiteCommitCallback
struct SQLiteCommitCallback_t4075712783;
// Mono.Data.Sqlite.SQLiteRollbackCallback
struct SQLiteRollbackCallback_t1047005064;
// System.Object
struct Il2CppObject;
// Mono.Data.Sqlite.SQLiteType
struct SQLiteType_t2725963705;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteDateFormat1592298981.h"
#include "mscorlib_System_String1967731336.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteOpenFlagsEn360223551.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteStatement3556180586.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteConnection196696233.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_TypeAffinity422422069.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteCallback45166166.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteFinalCallbac12811102.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteCollation1346775202.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteUpdateCallb936776887.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteCommitCall4075712783.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteRollbackCa1047005064.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteType2725963705.h"

// System.Void Mono.Data.Sqlite.SQLite3::.ctor(Mono.Data.Sqlite.SQLiteDateFormats)
extern "C"  void SQLite3__ctor_m2395098109 (SQLite3_t4176363920 * __this, int32_t ___fmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::Dispose(System.Boolean)
extern "C"  void SQLite3_Dispose_m3400306864 (SQLite3_t4176363920 * __this, bool ___bDisposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::Close()
extern "C"  void SQLite3_Close_m1449093500 (SQLite3_t4176363920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3::get_Version()
extern "C"  String_t* SQLite3_get_Version_m2817007880 (SQLite3_t4176363920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3::get_SQLiteVersion()
extern "C"  String_t* SQLite3_get_SQLiteVersion_m3301225136 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SQLite3::get_Changes()
extern "C"  int32_t SQLite3_get_Changes_m3720488282 (SQLite3_t4176363920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::Open(System.String,Mono.Data.Sqlite.SQLiteOpenFlagsEnum,System.Int32,System.Boolean)
extern "C"  void SQLite3_Open_m3901683305 (SQLite3_t4176363920 * __this, String_t* ___strFilename, int32_t ___flags, int32_t ___maxPoolSize, bool ___usePool, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::SetTimeout(System.Int32)
extern "C"  void SQLite3_SetTimeout_m3783147664 (SQLite3_t4176363920 * __this, int32_t ___nTimeoutMS, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SQLite3::Step(Mono.Data.Sqlite.SqliteStatement)
extern "C"  bool SQLite3_Step_m1915836664 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SQLite3::Reset(Mono.Data.Sqlite.SqliteStatement)
extern "C"  int32_t SQLite3_Reset_m2913340303 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3::SQLiteLastError()
extern "C"  String_t* SQLite3_SQLiteLastError_m2371751061 (SQLite3_t4176363920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteStatement Mono.Data.Sqlite.SQLite3::Prepare(Mono.Data.Sqlite.SqliteConnection,System.String,Mono.Data.Sqlite.SqliteStatement,System.UInt32,System.String&)
extern "C"  SqliteStatement_t3556180586 * SQLite3_Prepare_m3701654139 (SQLite3_t4176363920 * __this, SqliteConnection_t196696233 * ___cnn, String_t* ___strSql, SqliteStatement_t3556180586 * ___previous, uint32_t ___timeoutMS, String_t** ___strRemain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::Bind_Double(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Double)
extern "C"  void SQLite3_Bind_Double_m2150621844 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::Bind_Int32(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Int32)
extern "C"  void SQLite3_Bind_Int32_m3330494868 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::Bind_Int64(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Int64)
extern "C"  void SQLite3_Bind_Int64_m168837350 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::Bind_Text(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.String)
extern "C"  void SQLite3_Bind_Text_m2359006302 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::Bind_DateTime(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.DateTime)
extern "C"  void SQLite3_Bind_DateTime_m7430132 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, DateTime_t2933746480  ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::Bind_Blob(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Byte[])
extern "C"  void SQLite3_Bind_Blob_m486536583 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, ByteU5BU5D_t3835026402* ___blobData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::Bind_Null(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  void SQLite3_Bind_Null_m2325408684 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SQLite3::Bind_ParamCount(Mono.Data.Sqlite.SqliteStatement)
extern "C"  int32_t SQLite3_Bind_ParamCount_m333087932 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3::Bind_ParamName(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  String_t* SQLite3_Bind_ParamName_m4184498912 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SQLite3::ColumnCount(Mono.Data.Sqlite.SqliteStatement)
extern "C"  int32_t SQLite3_ColumnCount_m1989543955 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3::ColumnName(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  String_t* SQLite3_ColumnName_m3583204221 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SQLite3::ColumnAffinity(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  int32_t SQLite3_ColumnAffinity_m8644759 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3::ColumnType(Mono.Data.Sqlite.SqliteStatement,System.Int32,Mono.Data.Sqlite.TypeAffinity&)
extern "C"  String_t* SQLite3_ColumnType_m1969118909 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, int32_t* ___nAffinity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SQLite3::ColumnIndex(Mono.Data.Sqlite.SqliteStatement,System.String)
extern "C"  int32_t SQLite3_ColumnIndex_m914038282 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3::ColumnOriginalName(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  String_t* SQLite3_ColumnOriginalName_m2984732256 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3::ColumnDatabaseName(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  String_t* SQLite3_ColumnDatabaseName_m2069325054 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3::ColumnTableName(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  String_t* SQLite3_ColumnTableName_m36933283 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::ColumnMetaData(System.String,System.String,System.String,System.String&,System.String&,System.Boolean&,System.Boolean&,System.Boolean&)
extern "C"  void SQLite3_ColumnMetaData_m2754032316 (SQLite3_t4176363920 * __this, String_t* ___dataBase, String_t* ___table, String_t* ___column, String_t** ___dataType, String_t** ___collateSequence, bool* ___notNull, bool* ___primaryKey, bool* ___autoIncrement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Mono.Data.Sqlite.SQLite3::GetDouble(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  double SQLite3_GetDouble_m2237186431 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SQLite3::GetInt32(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  int32_t SQLite3_GetInt32_m2690786215 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Data.Sqlite.SQLite3::GetInt64(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  int64_t SQLite3_GetInt64_m2306319843 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3::GetText(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  String_t* SQLite3_GetText_m3780356195 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Data.Sqlite.SQLite3::GetDateTime(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  DateTime_t2933746480  SQLite3_GetDateTime_m2454952351 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Data.Sqlite.SQLite3::GetBytes(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  int64_t SQLite3_GetBytes_m2489965829 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, int32_t ___nDataOffset, ByteU5BU5D_t3835026402* ___bDest, int32_t ___nStart, int32_t ___nLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SQLite3::IsNull(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  bool SQLite3_IsNull_m3731968354 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::CreateFunction(System.String,System.Int32,System.Boolean,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteCallback,Mono.Data.Sqlite.SQLiteFinalCallback)
extern "C"  void SQLite3_CreateFunction_m4270765378 (SQLite3_t4176363920 * __this, String_t* ___strFunction, int32_t ___nArgs, bool ___needCollSeq, SQLiteCallback_t45166166 * ___func, SQLiteCallback_t45166166 * ___funcstep, SQLiteFinalCallback_t12811102 * ___funcfinal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::CreateCollation(System.String,Mono.Data.Sqlite.SQLiteCollation,Mono.Data.Sqlite.SQLiteCollation)
extern "C"  void SQLite3_CreateCollation_m2397668791 (SQLite3_t4176363920 * __this, String_t* ___strCollation, SQLiteCollation_t1346775202 * ___func, SQLiteCollation_t1346775202 * ___func16, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Data.Sqlite.SQLite3::GetParamValueBytes(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  int64_t SQLite3_GetParamValueBytes_m1039193548 (SQLite3_t4176363920 * __this, IntPtr_t ___p, int32_t ___nDataOffset, ByteU5BU5D_t3835026402* ___bDest, int32_t ___nStart, int32_t ___nLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Mono.Data.Sqlite.SQLite3::GetParamValueDouble(System.IntPtr)
extern "C"  double SQLite3_GetParamValueDouble_m1618385646 (SQLite3_t4176363920 * __this, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Data.Sqlite.SQLite3::GetParamValueInt64(System.IntPtr)
extern "C"  int64_t SQLite3_GetParamValueInt64_m3898527552 (SQLite3_t4176363920 * __this, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Data.Sqlite.SQLite3::GetParamValueText(System.IntPtr)
extern "C"  String_t* SQLite3_GetParamValueText_m68396252 (SQLite3_t4176363920 * __this, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SQLite3::GetParamValueType(System.IntPtr)
extern "C"  int32_t SQLite3_GetParamValueType_m2066958664 (SQLite3_t4176363920 * __this, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::ReturnBlob(System.IntPtr,System.Byte[])
extern "C"  void SQLite3_ReturnBlob_m3836764114 (SQLite3_t4176363920 * __this, IntPtr_t ___context, ByteU5BU5D_t3835026402* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::ReturnDouble(System.IntPtr,System.Double)
extern "C"  void SQLite3_ReturnDouble_m2343339079 (SQLite3_t4176363920 * __this, IntPtr_t ___context, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::ReturnError(System.IntPtr,System.String)
extern "C"  void SQLite3_ReturnError_m1979017926 (SQLite3_t4176363920 * __this, IntPtr_t ___context, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::ReturnInt64(System.IntPtr,System.Int64)
extern "C"  void SQLite3_ReturnInt64_m3882139047 (SQLite3_t4176363920 * __this, IntPtr_t ___context, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::ReturnNull(System.IntPtr)
extern "C"  void SQLite3_ReturnNull_m3005867227 (SQLite3_t4176363920 * __this, IntPtr_t ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::ReturnText(System.IntPtr,System.String)
extern "C"  void SQLite3_ReturnText_m1226667187 (SQLite3_t4176363920 * __this, IntPtr_t ___context, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.SQLite3::AggregateContext(System.IntPtr)
extern "C"  IntPtr_t SQLite3_AggregateContext_m2835306237 (SQLite3_t4176363920 * __this, IntPtr_t ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::SetPassword(System.Byte[])
extern "C"  void SQLite3_SetPassword_m1746120568 (SQLite3_t4176363920 * __this, ByteU5BU5D_t3835026402* ___passwordBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::SetUpdateHook(Mono.Data.Sqlite.SQLiteUpdateCallback)
extern "C"  void SQLite3_SetUpdateHook_m354652309 (SQLite3_t4176363920 * __this, SQLiteUpdateCallback_t936776887 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::SetCommitHook(Mono.Data.Sqlite.SQLiteCommitCallback)
extern "C"  void SQLite3_SetCommitHook_m958693205 (SQLite3_t4176363920 * __this, SQLiteCommitCallback_t4075712783 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::SetRollbackHook(Mono.Data.Sqlite.SQLiteRollbackCallback)
extern "C"  void SQLite3_SetRollbackHook_m2089415989 (SQLite3_t4176363920 * __this, SQLiteRollbackCallback_t1047005064 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SQLite3::GetValue(Mono.Data.Sqlite.SqliteStatement,System.Int32,Mono.Data.Sqlite.SQLiteType)
extern "C"  Il2CppObject * SQLite3_GetValue_m2476003266 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___index, SQLiteType_t2725963705 * ___typ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SQLite3::GetCursorForTable(Mono.Data.Sqlite.SqliteStatement,System.Int32,System.Int32)
extern "C"  int32_t SQLite3_GetCursorForTable_m2430820663 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___db, int32_t ___rootPage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Data.Sqlite.SQLite3::GetRowIdForCursor(Mono.Data.Sqlite.SqliteStatement,System.Int32)
extern "C"  int64_t SQLite3_GetRowIdForCursor_m644474440 (SQLite3_t4176363920 * __this, SqliteStatement_t3556180586 * ___stmt, int32_t ___cursor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLite3::GetIndexColumnExtendedInfo(System.String,System.String,System.String,System.Int32&,System.Int32&,System.String&)
extern "C"  void SQLite3_GetIndexColumnExtendedInfo_m3394405741 (SQLite3_t4176363920 * __this, String_t* ___database, String_t* ___index, String_t* ___column, int32_t* ___sortMode, int32_t* ___onError, String_t** ___collationSequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
