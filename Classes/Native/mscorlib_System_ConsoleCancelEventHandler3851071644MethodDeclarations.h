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

// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t3851071644;
// System.Object
struct Il2CppObject;
// System.ConsoleCancelEventArgs
struct ConsoleCancelEventArgs_t439083037;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_ConsoleCancelEventArgs439083037.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.ConsoleCancelEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ConsoleCancelEventHandler__ctor_m3545072248 (ConsoleCancelEventHandler_t3851071644 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleCancelEventHandler::Invoke(System.Object,System.ConsoleCancelEventArgs)
extern "C"  void ConsoleCancelEventHandler_Invoke_m547481933 (ConsoleCancelEventHandler_t3851071644 * __this, Il2CppObject * ___sender, ConsoleCancelEventArgs_t439083037 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ConsoleCancelEventHandler_t3851071644(Il2CppObject* delegate, Il2CppObject * ___sender, ConsoleCancelEventArgs_t439083037 * ___e);
// System.IAsyncResult System.ConsoleCancelEventHandler::BeginInvoke(System.Object,System.ConsoleCancelEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ConsoleCancelEventHandler_BeginInvoke_m827901614 (ConsoleCancelEventHandler_t3851071644 * __this, Il2CppObject * ___sender, ConsoleCancelEventArgs_t439083037 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleCancelEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ConsoleCancelEventHandler_EndInvoke_m2308294146 (ConsoleCancelEventHandler_t3851071644 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
