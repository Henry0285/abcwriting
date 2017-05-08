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

// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct RenewalDelegate_t1274697707;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t4181633382;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_TimeSpan1834055012.h"
#include "mscorlib_System_TimeSpan1834055012MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void RenewalDelegate__ctor_m3725826843 (RenewalDelegate_t1274697707 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::Invoke(System.Runtime.Remoting.Lifetime.ILease)
extern "C"  TimeSpan_t1834055012  RenewalDelegate_Invoke_m2460191878 (RenewalDelegate_t1274697707 * __this, Il2CppObject * ___lease, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" TimeSpan_t1834055012  pinvoke_delegate_wrapper_RenewalDelegate_t1274697707(Il2CppObject* delegate, Il2CppObject * ___lease);
// System.IAsyncResult System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::BeginInvoke(System.Runtime.Remoting.Lifetime.ILease,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RenewalDelegate_BeginInvoke_m2014126248 (RenewalDelegate_t1274697707 * __this, Il2CppObject * ___lease, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::EndInvoke(System.IAsyncResult)
extern "C"  TimeSpan_t1834055012  RenewalDelegate_EndInvoke_m4219405444 (RenewalDelegate_t1274697707 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
