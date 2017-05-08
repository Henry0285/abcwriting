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

// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t2915398427;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t609236864;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_System_ComponentModel_ListChangedEventArgs609236864.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.ComponentModel.ListChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ListChangedEventHandler__ctor_m1609476863 (ListChangedEventHandler_t2915398427 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventHandler::Invoke(System.Object,System.ComponentModel.ListChangedEventArgs)
extern "C"  void ListChangedEventHandler_Invoke_m2113751515 (ListChangedEventHandler_t2915398427 * __this, Il2CppObject * ___sender, ListChangedEventArgs_t609236864 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ListChangedEventHandler_t2915398427(Il2CppObject* delegate, Il2CppObject * ___sender, ListChangedEventArgs_t609236864 * ___e);
// System.IAsyncResult System.ComponentModel.ListChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.ListChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ListChangedEventHandler_BeginInvoke_m865365000 (ListChangedEventHandler_t2915398427 * __this, Il2CppObject * ___sender, ListChangedEventArgs_t609236864 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ListChangedEventHandler_EndInvoke_m2224075705 (ListChangedEventHandler_t2915398427 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
