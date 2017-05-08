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

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t2134243691;
// System.Net.ServicePoint
struct ServicePoint_t3647242307;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t2391926550;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3205926943;
// System.Collections.Queue
struct Queue_t3616109649;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_ServicePoint3647242307.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Net_HttpWebRequest3205926943.h"
#include "System_System_Net_WebConnection2391926550.h"

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C"  void WebConnectionGroup__ctor_m986089174 (WebConnectionGroup_t2134243691 * __this, ServicePoint_t3647242307 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C"  WebConnection_t2391926550 * WebConnectionGroup_GetConnection_m3073081905 (WebConnectionGroup_t2134243691 * __this, HttpWebRequest_t3205926943 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C"  void WebConnectionGroup_PrepareSharingNtlm_m2263879438 (Il2CppObject * __this /* static, unused */, WebConnection_t2391926550 * ___cnc, HttpWebRequest_t3205926943 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C"  WebConnection_t2391926550 * WebConnectionGroup_CreateOrReuseConnection_m512876780 (WebConnectionGroup_t2134243691 * __this, HttpWebRequest_t3205926943 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C"  Queue_t3616109649 * WebConnectionGroup_get_Queue_m768136775 (WebConnectionGroup_t2134243691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
