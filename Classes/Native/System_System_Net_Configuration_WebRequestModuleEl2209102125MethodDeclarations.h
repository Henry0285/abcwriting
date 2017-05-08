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

// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t2209102125;
// System.Net.Configuration.WebRequestModuleElement
struct WebRequestModuleElement_t2929238495;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1301937485;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Configuration_WebRequestModuleEl2929238495.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Configuration_System_Configuration_Configur1301937485.h"

// System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
extern "C"  void WebRequestModuleElementCollection__ctor_m2554518849 (WebRequestModuleElementCollection_t2209102125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.WebRequestModuleElement System.Net.Configuration.WebRequestModuleElementCollection::get_Item(System.Int32)
extern "C"  WebRequestModuleElement_t2929238495 * WebRequestModuleElementCollection_get_Item_m3772845008 (WebRequestModuleElementCollection_t2209102125 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::set_Item(System.Int32,System.Net.Configuration.WebRequestModuleElement)
extern "C"  void WebRequestModuleElementCollection_set_Item_m1273950197 (WebRequestModuleElementCollection_t2209102125 * __this, int32_t ___index, WebRequestModuleElement_t2929238495 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.WebRequestModuleElement System.Net.Configuration.WebRequestModuleElementCollection::get_Item(System.String)
extern "C"  WebRequestModuleElement_t2929238495 * WebRequestModuleElementCollection_get_Item_m2606451413 (WebRequestModuleElementCollection_t2209102125 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::set_Item(System.String,System.Net.Configuration.WebRequestModuleElement)
extern "C"  void WebRequestModuleElementCollection_set_Item_m990562408 (WebRequestModuleElementCollection_t2209102125 * __this, String_t* ___name, WebRequestModuleElement_t2929238495 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Add(System.Net.Configuration.WebRequestModuleElement)
extern "C"  void WebRequestModuleElementCollection_Add_m1773764357 (WebRequestModuleElementCollection_t2209102125 * __this, WebRequestModuleElement_t2929238495 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Clear()
extern "C"  void WebRequestModuleElementCollection_Clear_m234210046 (WebRequestModuleElementCollection_t2209102125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.WebRequestModuleElementCollection::CreateNewElement()
extern "C"  ConfigurationElement_t1301937485 * WebRequestModuleElementCollection_CreateNewElement_m4183583867 (WebRequestModuleElementCollection_t2209102125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.WebRequestModuleElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Il2CppObject * WebRequestModuleElementCollection_GetElementKey_m1597738280 (WebRequestModuleElementCollection_t2209102125 * __this, ConfigurationElement_t1301937485 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.WebRequestModuleElementCollection::IndexOf(System.Net.Configuration.WebRequestModuleElement)
extern "C"  int32_t WebRequestModuleElementCollection_IndexOf_m733194837 (WebRequestModuleElementCollection_t2209102125 * __this, WebRequestModuleElement_t2929238495 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Remove(System.Net.Configuration.WebRequestModuleElement)
extern "C"  void WebRequestModuleElementCollection_Remove_m2714506006 (WebRequestModuleElementCollection_t2209102125 * __this, WebRequestModuleElement_t2929238495 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Remove(System.String)
extern "C"  void WebRequestModuleElementCollection_Remove_m3408603801 (WebRequestModuleElementCollection_t2209102125 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::RemoveAt(System.Int32)
extern "C"  void WebRequestModuleElementCollection_RemoveAt_m401998039 (WebRequestModuleElementCollection_t2209102125 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
