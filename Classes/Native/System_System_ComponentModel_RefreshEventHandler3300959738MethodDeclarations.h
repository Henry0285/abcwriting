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

// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t3300959738;
// System.Object
struct Il2CppObject;
// System.ComponentModel.RefreshEventArgs
struct RefreshEventArgs_t2759607259;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_System_ComponentModel_RefreshEventArgs2759607259.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.ComponentModel.RefreshEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void RefreshEventHandler__ctor_m364042240 (RefreshEventHandler_t3300959738 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RefreshEventHandler::Invoke(System.ComponentModel.RefreshEventArgs)
extern "C"  void RefreshEventHandler_Invoke_m2415338745 (RefreshEventHandler_t3300959738 * __this, RefreshEventArgs_t2759607259 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_RefreshEventHandler_t3300959738(Il2CppObject* delegate, RefreshEventArgs_t2759607259 * ___e);
// System.IAsyncResult System.ComponentModel.RefreshEventHandler::BeginInvoke(System.ComponentModel.RefreshEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RefreshEventHandler_BeginInvoke_m195317252 (RefreshEventHandler_t3300959738 * __this, RefreshEventArgs_t2759607259 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RefreshEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void RefreshEventHandler_EndInvoke_m439483870 (RefreshEventHandler_t3300959738 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
