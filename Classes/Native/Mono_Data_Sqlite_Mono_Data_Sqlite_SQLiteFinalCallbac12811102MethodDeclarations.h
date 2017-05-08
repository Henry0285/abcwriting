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

// Mono.Data.Sqlite.SQLiteFinalCallback
struct SQLiteFinalCallback_t12811102;
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

// System.Void Mono.Data.Sqlite.SQLiteFinalCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SQLiteFinalCallback__ctor_m2949827950 (SQLiteFinalCallback_t12811102 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteFinalCallback::Invoke(System.IntPtr)
extern "C"  void SQLiteFinalCallback_Invoke_m2306189754 (SQLiteFinalCallback_t12811102 * __this, IntPtr_t ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SQLiteFinalCallback_t12811102(Il2CppObject* delegate, IntPtr_t ___context);
// System.IAsyncResult Mono.Data.Sqlite.SQLiteFinalCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SQLiteFinalCallback_BeginInvoke_m427804167 (SQLiteFinalCallback_t12811102 * __this, IntPtr_t ___context, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteFinalCallback::EndInvoke(System.IAsyncResult)
extern "C"  void SQLiteFinalCallback_EndInvoke_m2070424096 (SQLiteFinalCallback_t12811102 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
