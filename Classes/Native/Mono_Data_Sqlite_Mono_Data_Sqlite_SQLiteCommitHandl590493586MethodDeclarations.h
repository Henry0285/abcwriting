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

// Mono.Data.Sqlite.SQLiteCommitHandler
struct SQLiteCommitHandler_t590493586;
// System.Object
struct Il2CppObject;
// Mono.Data.Sqlite.CommitEventArgs
struct CommitEventArgs_t2246166419;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_CommitEventArgs2246166419.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void Mono.Data.Sqlite.SQLiteCommitHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void SQLiteCommitHandler__ctor_m2769072834 (SQLiteCommitHandler_t590493586 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteCommitHandler::Invoke(System.Object,Mono.Data.Sqlite.CommitEventArgs)
extern "C"  void SQLiteCommitHandler_Invoke_m3398867721 (SQLiteCommitHandler_t590493586 * __this, Il2CppObject * ___sender, CommitEventArgs_t2246166419 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SQLiteCommitHandler_t590493586(Il2CppObject* delegate, Il2CppObject * ___sender, CommitEventArgs_t2246166419 * ___e);
// System.IAsyncResult Mono.Data.Sqlite.SQLiteCommitHandler::BeginInvoke(System.Object,Mono.Data.Sqlite.CommitEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SQLiteCommitHandler_BeginInvoke_m4009953254 (SQLiteCommitHandler_t590493586 * __this, Il2CppObject * ___sender, CommitEventArgs_t2246166419 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteCommitHandler::EndInvoke(System.IAsyncResult)
extern "C"  void SQLiteCommitHandler_EndInvoke_m115998092 (SQLiteCommitHandler_t590493586 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
