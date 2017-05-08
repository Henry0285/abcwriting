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

// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t4233303943;
// System.Object
struct Il2CppObject;
// System.Data.DataRowChangeEventArgs
struct DataRowChangeEventArgs_t1049210364;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_Data_System_Data_DataRowChangeEventArgs1049210364.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Data.DataRowChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DataRowChangeEventHandler__ctor_m2537844913 (DataRowChangeEventHandler_t4233303943 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowChangeEventHandler::Invoke(System.Object,System.Data.DataRowChangeEventArgs)
extern "C"  void DataRowChangeEventHandler_Invoke_m181381497 (DataRowChangeEventHandler_t4233303943 * __this, Il2CppObject * ___sender, DataRowChangeEventArgs_t1049210364 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DataRowChangeEventHandler_t4233303943(Il2CppObject* delegate, Il2CppObject * ___sender, DataRowChangeEventArgs_t1049210364 * ___e);
// System.IAsyncResult System.Data.DataRowChangeEventHandler::BeginInvoke(System.Object,System.Data.DataRowChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DataRowChangeEventHandler_BeginInvoke_m2955927784 (DataRowChangeEventHandler_t4233303943 * __this, Il2CppObject * ___sender, DataRowChangeEventArgs_t1049210364 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRowChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DataRowChangeEventHandler_EndInvoke_m897109711 (DataRowChangeEventHandler_t4233303943 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
