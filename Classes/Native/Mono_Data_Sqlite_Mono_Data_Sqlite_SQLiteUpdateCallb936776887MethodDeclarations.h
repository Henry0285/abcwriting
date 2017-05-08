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

// Mono.Data.Sqlite.SQLiteUpdateCallback
struct SQLiteUpdateCallback_t936776887;
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

// System.Void Mono.Data.Sqlite.SQLiteUpdateCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SQLiteUpdateCallback__ctor_m1903374555 (SQLiteUpdateCallback_t936776887 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteUpdateCallback::Invoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.Int64)
extern "C"  void SQLiteUpdateCallback_Invoke_m2980125214 (SQLiteUpdateCallback_t936776887 * __this, IntPtr_t ___puser, int32_t ___type, IntPtr_t ___database, IntPtr_t ___table, int64_t ___rowid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SQLiteUpdateCallback_t936776887(Il2CppObject* delegate, IntPtr_t ___puser, int32_t ___type, IntPtr_t ___database, IntPtr_t ___table, int64_t ___rowid);
// System.IAsyncResult Mono.Data.Sqlite.SQLiteUpdateCallback::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.Int64,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SQLiteUpdateCallback_BeginInvoke_m2815356417 (SQLiteUpdateCallback_t936776887 * __this, IntPtr_t ___puser, int32_t ___type, IntPtr_t ___database, IntPtr_t ___table, int64_t ___rowid, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteUpdateCallback::EndInvoke(System.IAsyncResult)
extern "C"  void SQLiteUpdateCallback_EndInvoke_m2488866105 (SQLiteUpdateCallback_t936776887 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
