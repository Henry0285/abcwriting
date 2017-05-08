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

// System.Net.IPHostEntry
struct IPHostEntry_t1824588443;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t1404135628;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Net.IPHostEntry::.ctor()
extern "C"  void IPHostEntry__ctor_m1980718113 (IPHostEntry_t1824588443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern "C"  IPAddressU5BU5D_t1404135628* IPHostEntry_get_AddressList_m3789532398 (IPHostEntry_t1824588443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern "C"  void IPHostEntry_set_AddressList_m1460329715 (IPHostEntry_t1824588443 * __this, IPAddressU5BU5D_t1404135628* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern "C"  void IPHostEntry_set_Aliases_m2619040206 (IPHostEntry_t1824588443 * __this, StringU5BU5D_t3764931161* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern "C"  void IPHostEntry_set_HostName_m1551169633 (IPHostEntry_t1824588443 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
