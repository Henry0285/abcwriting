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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteConnection1221216963.h"

// System.Void Mono.Data.Sqlite.SqliteConnectionHandle::.ctor(System.IntPtr)
extern "C"  void SqliteConnectionHandle__ctor_m2625443685 (SqliteConnectionHandle_t1221216963 * __this, IntPtr_t ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteConnectionHandle::.ctor()
extern "C"  void SqliteConnectionHandle__ctor_m1778948843 (SqliteConnectionHandle_t1221216963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteConnectionHandle::ReleaseHandle()
extern "C"  bool SqliteConnectionHandle_ReleaseHandle_m295862142 (SqliteConnectionHandle_t1221216963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Data.Sqlite.SqliteConnectionHandle::get_IsInvalid()
extern "C"  bool SqliteConnectionHandle_get_IsInvalid_m3105485085 (SqliteConnectionHandle_t1221216963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Data.Sqlite.SqliteConnectionHandle::op_Implicit(Mono.Data.Sqlite.SqliteConnectionHandle)
extern "C"  IntPtr_t SqliteConnectionHandle_op_Implicit_m1057475564 (Il2CppObject * __this /* static, unused */, SqliteConnectionHandle_t1221216963 * ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.Sqlite.SqliteConnectionHandle Mono.Data.Sqlite.SqliteConnectionHandle::op_Implicit(System.IntPtr)
extern "C"  SqliteConnectionHandle_t1221216963 * SqliteConnectionHandle_op_Implicit_m2216999086 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db, const MethodInfo* method) IL2CPP_METHOD_ATTR;
