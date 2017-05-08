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

// Mono.Data.Sqlite.SQLiteCallback
struct SQLiteCallback_t45166166;
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

// System.Void Mono.Data.Sqlite.SQLiteCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SQLiteCallback__ctor_m1365180018 (SQLiteCallback_t45166166 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteCallback::Invoke(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  void SQLiteCallback_Invoke_m1013867175 (SQLiteCallback_t45166166 * __this, IntPtr_t ___context, int32_t ___nArgs, IntPtr_t ___argsptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SQLiteCallback_t45166166(Il2CppObject* delegate, IntPtr_t ___context, int32_t ___nArgs, IntPtr_t ___argsptr);
// System.IAsyncResult Mono.Data.Sqlite.SQLiteCallback::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SQLiteCallback_BeginInvoke_m898408972 (SQLiteCallback_t45166166 * __this, IntPtr_t ___context, int32_t ___nArgs, IntPtr_t ___argsptr, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteCallback::EndInvoke(System.IAsyncResult)
extern "C"  void SQLiteCallback_EndInvoke_m285747200 (SQLiteCallback_t45166166 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
