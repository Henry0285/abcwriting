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

// System.Net.BindIPEndPoint
struct BindIPEndPoint_t208398569;
// System.Object
struct Il2CppObject;
// System.Net.IPEndPoint
struct IPEndPoint_t290384604;
// System.Net.ServicePoint
struct ServicePoint_t3647242307;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_System_Net_ServicePoint3647242307.h"
#include "System_System_Net_IPEndPoint290384604.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
extern "C"  void BindIPEndPoint__ctor_m2014121651 (BindIPEndPoint_t208398569 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
extern "C"  IPEndPoint_t290384604 * BindIPEndPoint_Invoke_m4182856584 (BindIPEndPoint_t208398569 * __this, ServicePoint_t3647242307 * ___servicePoint, IPEndPoint_t290384604 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IPEndPoint_t290384604 * pinvoke_delegate_wrapper_BindIPEndPoint_t208398569(Il2CppObject* delegate, ServicePoint_t3647242307 * ___servicePoint, IPEndPoint_t290384604 * ___remoteEndPoint, int32_t ___retryCount);
// System.IAsyncResult System.Net.BindIPEndPoint::BeginInvoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BindIPEndPoint_BeginInvoke_m801006666 (BindIPEndPoint_t208398569 * __this, ServicePoint_t3647242307 * ___servicePoint, IPEndPoint_t290384604 * ___remoteEndPoint, int32_t ___retryCount, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::EndInvoke(System.IAsyncResult)
extern "C"  IPEndPoint_t290384604 * BindIPEndPoint_EndInvoke_m2822459026 (BindIPEndPoint_t208398569 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
