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

// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t3654972885;
// System.Xml.XmlNameTable
struct XmlNameTable_t1855692664;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable1855692664.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlNamespaceManager__ctor_m3164566160 (XmlNamespaceManager_t3654972885 * __this, XmlNameTable_t1855692664 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::InitData()
extern "C"  void XmlNamespaceManager_InitData_m3477770228 (XmlNamespaceManager_t3654972885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowDecls()
extern "C"  void XmlNamespaceManager_GrowDecls_m2859508936 (XmlNamespaceManager_t3654972885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowScopes()
extern "C"  void XmlNamespaceManager_GrowScopes_m2950002396 (XmlNamespaceManager_t3654972885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace()
extern "C"  String_t* XmlNamespaceManager_get_DefaultNamespace_m3196089042 (XmlNamespaceManager_t3654972885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable()
extern "C"  XmlNameTable_t1855692664 * XmlNamespaceManager_get_NameTable_m2778517119 (XmlNamespaceManager_t3654972885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String)
extern "C"  void XmlNamespaceManager_AddNamespace_m2220419410 (XmlNamespaceManager_t3654972885 * __this, String_t* ___prefix, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String,System.Boolean)
extern "C"  void XmlNamespaceManager_AddNamespace_m894615713 (XmlNamespaceManager_t3654972885 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::IsValidDeclaration(System.String,System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_IsValidDeclaration_m3148002380 (Il2CppObject * __this /* static, unused */, String_t* ___prefix, String_t* ___uri, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamespaceManager::GetEnumerator()
extern "C"  Il2CppObject * XmlNamespaceManager_GetEnumerator_m798756962 (XmlNamespaceManager_t3654972885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String)
extern "C"  String_t* XmlNamespaceManager_LookupNamespace_m2447392304 (XmlNamespaceManager_t3654972885 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupNamespace_m4087961197 (XmlNamespaceManager_t3654972885 * __this, String_t* ___prefix, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::CompareString(System.String,System.String,System.Boolean)
extern "C"  bool XmlNamespaceManager_CompareString_m4270482857 (XmlNamespaceManager_t3654972885 * __this, String_t* ___s1, String_t* ___s2, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefix(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupPrefix_m79475592 (XmlNamespaceManager_t3654972885 * __this, String_t* ___uri, bool ___atomizedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixExclusive(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupPrefixExclusive_m1980314712 (XmlNamespaceManager_t3654972885 * __this, String_t* ___uri, bool ___atomizedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixCore(System.String,System.Boolean,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupPrefixCore_m1101302650 (XmlNamespaceManager_t3654972885 * __this, String_t* ___uri, bool ___atomizedName, bool ___excludeOverriden, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::IsOverriden(System.Int32)
extern "C"  bool XmlNamespaceManager_IsOverriden_m3317736709 (XmlNamespaceManager_t3654972885 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::PopScope()
extern "C"  bool XmlNamespaceManager_PopScope_m2180989617 (XmlNamespaceManager_t3654972885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::PushScope()
extern "C"  void XmlNamespaceManager_PushScope_m2590149744 (XmlNamespaceManager_t3654972885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String)
extern "C"  void XmlNamespaceManager_RemoveNamespace_m326939873 (XmlNamespaceManager_t3654972885 * __this, String_t* ___prefix, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String,System.Boolean)
extern "C"  void XmlNamespaceManager_RemoveNamespace_m2582663710 (XmlNamespaceManager_t3654972885 * __this, String_t* ___prefix, String_t* ___uri, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
