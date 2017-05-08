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

// Mono.Data.Sqlite.SqliteDataAdapter
struct SqliteDataAdapter_t3946922080;
// System.EventHandler`1<System.Data.Common.RowUpdatingEventArgs>
struct EventHandler_1_t2506331320;
// System.Delegate
struct Delegate_t49333446;
// System.MulticastDelegate
struct MulticastDelegate_t293776522;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_MulticastDelegate293776522.h"

// System.Void Mono.Data.Sqlite.SqliteDataAdapter::.ctor()
extern "C"  void SqliteDataAdapter__ctor_m2254600566 (SqliteDataAdapter_t3946922080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteDataAdapter::.cctor()
extern "C"  void SqliteDataAdapter__cctor_m3038026411 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteDataAdapter::add_RowUpdating(System.EventHandler`1<System.Data.Common.RowUpdatingEventArgs>)
extern "C"  void SqliteDataAdapter_add_RowUpdating_m3377406207 (SqliteDataAdapter_t3946922080 * __this, EventHandler_1_t2506331320 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SqliteDataAdapter::remove_RowUpdating(System.EventHandler`1<System.Data.Common.RowUpdatingEventArgs>)
extern "C"  void SqliteDataAdapter_remove_RowUpdating_m338712552 (SqliteDataAdapter_t3946922080 * __this, EventHandler_1_t2506331320 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate Mono.Data.Sqlite.SqliteDataAdapter::FindBuilder(System.MulticastDelegate)
extern "C"  Delegate_t49333446 * SqliteDataAdapter_FindBuilder_m62075499 (Il2CppObject * __this /* static, unused */, MulticastDelegate_t293776522 * ___mcd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
