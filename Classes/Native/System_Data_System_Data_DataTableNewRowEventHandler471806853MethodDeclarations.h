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

// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t471806853;
// System.Object
struct Il2CppObject;
// System.Data.DataTableNewRowEventArgs
struct DataTableNewRowEventArgs_t2872906236;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_Data_System_Data_DataTableNewRowEventArgs2872906236.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Data.DataTableNewRowEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DataTableNewRowEventHandler__ctor_m741975185 (DataTableNewRowEventHandler_t471806853 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableNewRowEventHandler::Invoke(System.Object,System.Data.DataTableNewRowEventArgs)
extern "C"  void DataTableNewRowEventHandler_Invoke_m579015769 (DataTableNewRowEventHandler_t471806853 * __this, Il2CppObject * ___sender, DataTableNewRowEventArgs_t2872906236 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DataTableNewRowEventHandler_t471806853(Il2CppObject* delegate, Il2CppObject * ___sender, DataTableNewRowEventArgs_t2872906236 * ___e);
// System.IAsyncResult System.Data.DataTableNewRowEventHandler::BeginInvoke(System.Object,System.Data.DataTableNewRowEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DataTableNewRowEventHandler_BeginInvoke_m3784520496 (DataTableNewRowEventHandler_t471806853 * __this, Il2CppObject * ___sender, DataTableNewRowEventArgs_t2872906236 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataTableNewRowEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DataTableNewRowEventHandler_EndInvoke_m821019831 (DataTableNewRowEventHandler_t471806853 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
