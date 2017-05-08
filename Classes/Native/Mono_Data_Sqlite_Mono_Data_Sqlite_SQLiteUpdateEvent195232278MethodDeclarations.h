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

// Mono.Data.Sqlite.SQLiteUpdateEventHandler
struct SQLiteUpdateEventHandler_t195232278;
// System.Object
struct Il2CppObject;
// Mono.Data.Sqlite.UpdateEventArgs
struct UpdateEventArgs_t1875575163;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_UpdateEventArgs1875575163.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void Mono.Data.Sqlite.SQLiteUpdateEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void SQLiteUpdateEventHandler__ctor_m3851456860 (SQLiteUpdateEventHandler_t195232278 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteUpdateEventHandler::Invoke(System.Object,Mono.Data.Sqlite.UpdateEventArgs)
extern "C"  void SQLiteUpdateEventHandler_Invoke_m3072518897 (SQLiteUpdateEventHandler_t195232278 * __this, Il2CppObject * ___sender, UpdateEventArgs_t1875575163 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SQLiteUpdateEventHandler_t195232278(Il2CppObject* delegate, Il2CppObject * ___sender, UpdateEventArgs_t1875575163 * ___e);
// System.IAsyncResult Mono.Data.Sqlite.SQLiteUpdateEventHandler::BeginInvoke(System.Object,Mono.Data.Sqlite.UpdateEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SQLiteUpdateEventHandler_BeginInvoke_m4165085528 (SQLiteUpdateEventHandler_t195232278 * __this, Il2CppObject * ___sender, UpdateEventArgs_t1875575163 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Data.Sqlite.SQLiteUpdateEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void SQLiteUpdateEventHandler_EndInvoke_m3351590694 (SQLiteUpdateEventHandler_t195232278 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
