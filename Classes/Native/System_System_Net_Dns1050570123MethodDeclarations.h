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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Net.IPHostEntry
struct IPHostEntry_t1824588443;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Net.Dns::.cctor()
extern "C"  void Dns__cctor_m2821276024 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C"  bool Dns_GetHostByName_internal_m1349738089 (Il2CppObject * __this /* static, unused */, String_t* ___host, String_t** ___h_name, StringU5BU5D_t3764931161** ___h_aliases, StringU5BU5D_t3764931161** ___h_addr_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
extern "C"  IPHostEntry_t1824588443 * Dns_hostent_to_IPHostEntry_m3727947264 (Il2CppObject * __this /* static, unused */, String_t* ___h_name, StringU5BU5D_t3764931161* ___h_aliases, StringU5BU5D_t3764931161* ___h_addrlist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern "C"  IPHostEntry_t1824588443 * Dns_GetHostByName_m3673230969 (Il2CppObject * __this /* static, unused */, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
