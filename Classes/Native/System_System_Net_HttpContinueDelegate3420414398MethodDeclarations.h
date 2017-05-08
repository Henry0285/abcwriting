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

// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t3420414398;
// System.Object
struct Il2CppObject;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t541997719;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_System_Net_WebHeaderCollection541997719.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Net.HttpContinueDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void HttpContinueDelegate__ctor_m1263450672 (HttpContinueDelegate_t3420414398 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::Invoke(System.Int32,System.Net.WebHeaderCollection)
extern "C"  void HttpContinueDelegate_Invoke_m3569872736 (HttpContinueDelegate_t3420414398 * __this, int32_t ___StatusCode, WebHeaderCollection_t541997719 * ___httpHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_HttpContinueDelegate_t3420414398(Il2CppObject* delegate, int32_t ___StatusCode, WebHeaderCollection_t541997719 * ___httpHeaders);
// System.IAsyncResult System.Net.HttpContinueDelegate::BeginInvoke(System.Int32,System.Net.WebHeaderCollection,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HttpContinueDelegate_BeginInvoke_m2566846579 (HttpContinueDelegate_t3420414398 * __this, int32_t ___StatusCode, WebHeaderCollection_t541997719 * ___httpHeaders, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void HttpContinueDelegate_EndInvoke_m2445439486 (HttpContinueDelegate_t3420414398 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
