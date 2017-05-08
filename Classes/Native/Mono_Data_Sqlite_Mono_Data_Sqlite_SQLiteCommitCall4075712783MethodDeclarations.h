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

// Mono.Data.Sqlite.SQLiteCommitCallback
struct SQLiteCommitCallback_t4075712783;
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

// System.Void Mono.Data.Sqlite.SQLiteCommitCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SQLiteCommitCallback__ctor_m391641155 (SQLiteCommitCallback_t4075712783 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SQLiteCommitCallback::Invoke(System.IntPtr)
extern "C"  int32_t SQLiteCommitCallback_Invoke_m3183311751 (SQLiteCommitCallback_t4075712783 * __this, IntPtr_t ___puser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_SQLiteCommitCallback_t4075712783(Il2CppObject* delegate, IntPtr_t ___puser);
// System.IAsyncResult Mono.Data.Sqlite.SQLiteCommitCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SQLiteCommitCallback_BeginInvoke_m3859749880 (SQLiteCommitCallback_t4075712783 * __this, IntPtr_t ___puser, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Data.Sqlite.SQLiteCommitCallback::EndInvoke(System.IAsyncResult)
extern "C"  int32_t SQLiteCommitCallback_EndInvoke_m1204990439 (SQLiteCommitCallback_t4075712783 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
