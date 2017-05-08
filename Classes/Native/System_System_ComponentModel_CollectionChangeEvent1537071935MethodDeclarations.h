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

// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t1537071935;
// System.Object
struct Il2CppObject;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t2303381684;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_System_ComponentModel_CollectionChangeEvent2303381684.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.ComponentModel.CollectionChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void CollectionChangeEventHandler__ctor_m471418715 (CollectionChangeEventHandler_t1537071935 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CollectionChangeEventHandler::Invoke(System.Object,System.ComponentModel.CollectionChangeEventArgs)
extern "C"  void CollectionChangeEventHandler_Invoke_m1100007127 (CollectionChangeEventHandler_t1537071935 * __this, Il2CppObject * ___sender, CollectionChangeEventArgs_t2303381684 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CollectionChangeEventHandler_t1537071935(Il2CppObject* delegate, Il2CppObject * ___sender, CollectionChangeEventArgs_t2303381684 * ___e);
// System.IAsyncResult System.ComponentModel.CollectionChangeEventHandler::BeginInvoke(System.Object,System.ComponentModel.CollectionChangeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CollectionChangeEventHandler_BeginInvoke_m1462915896 (CollectionChangeEventHandler_t1537071935 * __this, Il2CppObject * ___sender, CollectionChangeEventArgs_t2303381684 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CollectionChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void CollectionChangeEventHandler_EndInvoke_m3482772445 (CollectionChangeEventHandler_t1537071935 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
