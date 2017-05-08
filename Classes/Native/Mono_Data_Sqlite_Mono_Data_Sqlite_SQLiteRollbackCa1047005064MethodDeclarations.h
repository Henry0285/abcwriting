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

// Mono.Data.Sqlite.SQLiteRollbackCallback
struct SQLiteRollbackCallback_t1047005064;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void Mono.Data.Sqlite.SQLiteRollbackCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SQLiteRollbackCallback__ctor_m1041686810 (SQLiteRollbackCallback_t1047005064 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteRollbackCallback::Invoke(System.IntPtr)
extern "C"  void SQLiteRollbackCallback_Invoke_m2372851354 (SQLiteRollbackCallback_t1047005064 * __this, IntPtr_t ___puser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SQLiteRollbackCallback_t1047005064(Il2CppObject* delegate, IntPtr_t ___puser);
// System.IAsyncResult Mono.Data.Sqlite.SQLiteRollbackCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SQLiteRollbackCallback_BeginInvoke_m1351764105 (SQLiteRollbackCallback_t1047005064 * __this, IntPtr_t ___puser, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteRollbackCallback::EndInvoke(System.IAsyncResult)
extern "C"  void SQLiteRollbackCallback_EndInvoke_m3987187636 (SQLiteRollbackCallback_t1047005064 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
