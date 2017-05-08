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

// Mono.Data.Sqlite.SqliteParameterCollection
struct SqliteParameterCollection_t3688613832;
// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_t1985130020;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;
// Mono.Data.Sqlite.SqliteParameter
struct SqliteParameter_t4187736858;
// System.String
struct String_t;
// System.Array
struct Il2CppArray;
// System.Data.Common.DbParameter
struct DbParameter_t2495940673;
// Mono.Data.Sqlite.SqliteStatement
struct SqliteStatement_t3556180586;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteCommand1985130020.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteParameter4187736858.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Array4136897760.h"
#include "System_Data_System_Data_Common_DbParameter2495940673.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteStatement3556180586.h"

// System.Void Mono.Data.Sqlite.SqliteParameterCollection::.ctor(Mono.Data.Sqlite.SqliteCommand)
extern "C"  void SqliteParameterCollection__ctor_m3764909538 (SqliteParameterCollection_t3688613832 * __this, SqliteCommand_t1985130020 * ___cmd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::get_IsSynchronized()
extern "C"  bool SqliteParameterCollection_get_IsSynchronized_m1180874897 (SqliteParameterCollection_t3688613832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::get_IsFixedSize()
extern "C"  bool SqliteParameterCollection_get_IsFixedSize_m845212478 (SqliteParameterCollection_t3688613832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::get_IsReadOnly()
extern "C"  bool SqliteParameterCollection_get_IsReadOnly_m569608645 (SqliteParameterCollection_t3688613832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Data.Sqlite.SqliteParameterCollection::get_SyncRoot()
extern "C"  Il2CppObject * SqliteParameterCollection_get_SyncRoot_m2915269621 (SqliteParameterCollection_t3688613832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Data.Sqlite.SqliteParameterCollection::GetEnumerator()
extern "C"  Il2CppObject * SqliteParameterCollection_GetEnumerator_m108360578 (SqliteParameterCollection_t3688613832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(Mono.Data.Sqlite.SqliteParameter)
extern "C"  int32_t SqliteParameterCollection_Add_m3990749891 (SqliteParameterCollection_t3688613832 * __this, SqliteParameter_t4187736858 * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::Add(System.Object)
extern "C"  int32_t SqliteParameterCollection_Add_m3352580629 (SqliteParameterCollection_t3688613832 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::AddWithValue(System.String,System.Object)
extern "C"  SqliteParameter_t4187736858 * SqliteParameterCollection_AddWithValue_m3786442659 (SqliteParameterCollection_t3688613832 * __this, String_t* ___parameterName, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::AddRange(System.Array)
extern "C"  void SqliteParameterCollection_AddRange_m1416059398 (SqliteParameterCollection_t3688613832 * __this, Il2CppArray * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Clear()
extern "C"  void SqliteParameterCollection_Clear_m3647696953 (SqliteParameterCollection_t3688613832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteParameterCollection::Contains(System.Object)
extern "C"  bool SqliteParameterCollection_Contains_m542307885 (SqliteParameterCollection_t3688613832 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::CopyTo(System.Array,System.Int32)
extern "C"  void SqliteParameterCollection_CopyTo_m3519869649 (SqliteParameterCollection_t3688613832 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::get_Count()
extern "C"  int32_t SqliteParameterCollection_get_Count_m3994694954 (SqliteParameterCollection_t3688613832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteParameter Mono.Data.Sqlite.SqliteParameterCollection::get_Item(System.Int32)
extern "C"  SqliteParameter_t4187736858 * SqliteParameterCollection_get_Item_m1085227872 (SqliteParameterCollection_t3688613832 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbParameter Mono.Data.Sqlite.SqliteParameterCollection::GetParameter(System.Int32)
extern "C"  DbParameter_t2495940673 * SqliteParameterCollection_GetParameter_m2613573486 (SqliteParameterCollection_t3688613832 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::IndexOf(System.String)
extern "C"  int32_t SqliteParameterCollection_IndexOf_m1293623987 (SqliteParameterCollection_t3688613832 * __this, String_t* ___parameterName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SqliteParameterCollection::IndexOf(System.Object)
extern "C"  int32_t SqliteParameterCollection_IndexOf_m3520783879 (SqliteParameterCollection_t3688613832 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Insert(System.Int32,System.Object)
extern "C"  void SqliteParameterCollection_Insert_m4119507610 (SqliteParameterCollection_t3688613832 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Remove(System.Object)
extern "C"  void SqliteParameterCollection_Remove_m4019677216 (SqliteParameterCollection_t3688613832 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::RemoveAt(System.Int32)
extern "C"  void SqliteParameterCollection_RemoveAt_m2842701300 (SqliteParameterCollection_t3688613832 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::SetParameter(System.Int32,System.Data.Common.DbParameter)
extern "C"  void SqliteParameterCollection_SetParameter_m1742682063 (SqliteParameterCollection_t3688613832 * __this, int32_t ___index, DbParameter_t2495940673 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::Unbind()
extern "C"  void SqliteParameterCollection_Unbind_m2054579804 (SqliteParameterCollection_t3688613832 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteParameterCollection::MapParameters(Mono.Data.Sqlite.SqliteStatement)
extern "C"  void SqliteParameterCollection_MapParameters_m2918036088 (SqliteParameterCollection_t3688613832 * __this, SqliteStatement_t3556180586 * ___activeStatement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
