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

// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t1744847757;
// System.Object
struct Il2CppObject;
// System.Data.DataColumnChangeEventArgs
struct DataColumnChangeEventArgs_t2256485616;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_Data_System_Data_DataColumnChangeEventArgs2256485616.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Data.DataColumnChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DataColumnChangeEventHandler__ctor_m3141598837 (DataColumnChangeEventHandler_t1744847757 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnChangeEventHandler::Invoke(System.Object,System.Data.DataColumnChangeEventArgs)
extern "C"  void DataColumnChangeEventHandler_Invoke_m1208602481 (DataColumnChangeEventHandler_t1744847757 * __this, Il2CppObject * ___sender, DataColumnChangeEventArgs_t2256485616 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DataColumnChangeEventHandler_t1744847757(Il2CppObject* delegate, Il2CppObject * ___sender, DataColumnChangeEventArgs_t2256485616 * ___e);
// System.IAsyncResult System.Data.DataColumnChangeEventHandler::BeginInvoke(System.Object,System.Data.DataColumnChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DataColumnChangeEventHandler_BeginInvoke_m2540610056 (DataColumnChangeEventHandler_t1744847757 * __this, Il2CppObject * ___sender, DataColumnChangeEventArgs_t2256485616 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DataColumnChangeEventHandler_EndInvoke_m1100381443 (DataColumnChangeEventHandler_t1744847757 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
