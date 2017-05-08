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

// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t1556841094;
// System.Object
struct Il2CppObject;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t3995238283;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_System_ComponentModel_PropertyChangedEventA3995238283.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PropertyChangedEventHandler__ctor_m3283190984 (PropertyChangedEventHandler_t1556841094 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C"  void PropertyChangedEventHandler_Invoke_m3733684827 (PropertyChangedEventHandler_t1556841094 * __this, Il2CppObject * ___sender, PropertyChangedEventArgs_t3995238283 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PropertyChangedEventHandler_t1556841094(Il2CppObject* delegate, Il2CppObject * ___sender, PropertyChangedEventArgs_t3995238283 * ___e);
// System.IAsyncResult System.ComponentModel.PropertyChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PropertyChangedEventHandler_BeginInvoke_m3150012958 (PropertyChangedEventHandler_t1556841094 * __this, Il2CppObject * ___sender, PropertyChangedEventArgs_t3995238283 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PropertyChangedEventHandler_EndInvoke_m109495738 (PropertyChangedEventHandler_t1556841094 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
