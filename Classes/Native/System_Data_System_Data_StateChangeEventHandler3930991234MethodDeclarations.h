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

// System.Data.StateChangeEventHandler
struct StateChangeEventHandler_t3930991234;
// System.Object
struct Il2CppObject;
// System.Data.StateChangeEventArgs
struct StateChangeEventArgs_t1835024549;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_Data_System_Data_StateChangeEventArgs1835024549.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Data.StateChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void StateChangeEventHandler__ctor_m3466766454 (StateChangeEventHandler_t3930991234 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.StateChangeEventHandler::Invoke(System.Object,System.Data.StateChangeEventArgs)
extern "C"  void StateChangeEventHandler_Invoke_m1890177511 (StateChangeEventHandler_t3930991234 * __this, Il2CppObject * ___sender, StateChangeEventArgs_t1835024549 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_StateChangeEventHandler_t3930991234(Il2CppObject* delegate, Il2CppObject * ___sender, StateChangeEventArgs_t1835024549 * ___e);
// System.IAsyncResult System.Data.StateChangeEventHandler::BeginInvoke(System.Object,System.Data.StateChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StateChangeEventHandler_BeginInvoke_m1649635066 (StateChangeEventHandler_t3930991234 * __this, Il2CppObject * ___sender, StateChangeEventArgs_t1835024549 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.StateChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void StateChangeEventHandler_EndInvoke_m3472464448 (StateChangeEventHandler_t3930991234 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
