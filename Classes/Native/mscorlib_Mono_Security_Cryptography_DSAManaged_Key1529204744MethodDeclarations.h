﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1529204744;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t591428026;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_EventArgs591428026.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void KeyGeneratedEventHandler__ctor_m553546121 (KeyGeneratedEventHandler_t1529204744 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
extern "C"  void KeyGeneratedEventHandler_Invoke_m4220935979 (KeyGeneratedEventHandler_t1529204744 * __this, Il2CppObject * ___sender, EventArgs_t591428026 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyGeneratedEventHandler_t1529204744(Il2CppObject* delegate, Il2CppObject * ___sender, EventArgs_t591428026 * ___e);
// System.IAsyncResult Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * KeyGeneratedEventHandler_BeginInvoke_m3006764834 (KeyGeneratedEventHandler_t1529204744 * __this, Il2CppObject * ___sender, EventArgs_t591428026 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void KeyGeneratedEventHandler_EndInvoke_m1587195139 (KeyGeneratedEventHandler_t1529204744 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
