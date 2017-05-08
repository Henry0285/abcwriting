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

// System.Data.FillErrorEventHandler
struct FillErrorEventHandler_t1710923108;
// System.Object
struct Il2CppObject;
// System.Data.FillErrorEventArgs
struct FillErrorEventArgs_t577193385;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_Data_System_Data_FillErrorEventArgs577193385.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Data.FillErrorEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void FillErrorEventHandler__ctor_m2336423646 (FillErrorEventHandler_t1710923108 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.FillErrorEventHandler::Invoke(System.Object,System.Data.FillErrorEventArgs)
extern "C"  void FillErrorEventHandler_Invoke_m3470872185 (FillErrorEventHandler_t1710923108 * __this, Il2CppObject * ___sender, FillErrorEventArgs_t577193385 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FillErrorEventHandler_t1710923108(Il2CppObject* delegate, Il2CppObject * ___sender, FillErrorEventArgs_t577193385 * ___e);
// System.IAsyncResult System.Data.FillErrorEventHandler::BeginInvoke(System.Object,System.Data.FillErrorEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FillErrorEventHandler_BeginInvoke_m2003176970 (FillErrorEventHandler_t1710923108 * __this, Il2CppObject * ___sender, FillErrorEventArgs_t577193385 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.FillErrorEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void FillErrorEventHandler_EndInvoke_m2837513312 (FillErrorEventHandler_t1710923108 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
