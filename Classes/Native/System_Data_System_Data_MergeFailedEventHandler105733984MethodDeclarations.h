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

// System.Data.MergeFailedEventHandler
struct MergeFailedEventHandler_t105733984;
// System.Object
struct Il2CppObject;
// System.Data.MergeFailedEventArgs
struct MergeFailedEventArgs_t499212429;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_Data_System_Data_MergeFailedEventArgs499212429.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Data.MergeFailedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void MergeFailedEventHandler__ctor_m2524219970 (MergeFailedEventHandler_t105733984 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeFailedEventHandler::Invoke(System.Object,System.Data.MergeFailedEventArgs)
extern "C"  void MergeFailedEventHandler_Invoke_m4220971897 (MergeFailedEventHandler_t105733984 * __this, Il2CppObject * ___sender, MergeFailedEventArgs_t499212429 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MergeFailedEventHandler_t105733984(Il2CppObject* delegate, Il2CppObject * ___sender, MergeFailedEventArgs_t499212429 * ___e);
// System.IAsyncResult System.Data.MergeFailedEventHandler::BeginInvoke(System.Object,System.Data.MergeFailedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MergeFailedEventHandler_BeginInvoke_m4155933602 (MergeFailedEventHandler_t105733984 * __this, Il2CppObject * ___sender, MergeFailedEventArgs_t499212429 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeFailedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void MergeFailedEventHandler_EndInvoke_m965450364 (MergeFailedEventHandler_t105733984 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
