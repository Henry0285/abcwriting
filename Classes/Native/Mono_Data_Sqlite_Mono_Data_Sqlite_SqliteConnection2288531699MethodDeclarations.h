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

// Mono.Data.Sqlite.SqliteConnectionHandle
struct SqliteConnectionHandle_t1221216963;
// System.String
struct String_t;
// Mono.Data.Sqlite.SqliteConnectionPool/Pool
struct Pool_t3771281794;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteConnection1221216963.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteConnection3771281794.h"

// System.Void Mono.Data.Sqlite.SqliteConnectionPool::.cctor()
extern "C"  void SqliteConnectionPool__cctor_m1715653868 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteConnectionHandle Mono.Data.Sqlite.SqliteConnectionPool::Remove(System.String,System.Int32,System.Int32&)
extern "C"  SqliteConnectionHandle_t1221216963 * SqliteConnectionPool_Remove_m992780789 (Il2CppObject * __this /* static, unused */, String_t* ___fileName, int32_t ___maxPoolSize, int32_t* ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteConnectionPool::Add(System.String,Mono.Data.Sqlite.SqliteConnectionHandle,System.Int32)
extern "C"  void SqliteConnectionPool_Add_m1849562758 (Il2CppObject * __this /* static, unused */, String_t* ___fileName, SqliteConnectionHandle_t1221216963 * ___hdl, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteConnectionPool::ResizePool(Mono.Data.Sqlite.SqliteConnectionPool/Pool,System.Boolean)
extern "C"  void SqliteConnectionPool_ResizePool_m4261237586 (Il2CppObject * __this /* static, unused */, Pool_t3771281794 * ___queue, bool ___forAdding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
