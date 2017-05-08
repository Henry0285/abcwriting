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

// System.Xml.XmlNameEntry
struct XmlNameEntry_t2864223360;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t2219001062;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_XmlNameEntryCache2219001062.h"

// System.Void System.Xml.XmlNameEntry::.ctor(System.String,System.String,System.String)
extern "C"  void XmlNameEntry__ctor_m3965185189 (XmlNameEntry_t2864223360 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNameEntry::Update(System.String,System.String,System.String)
extern "C"  void XmlNameEntry_Update_m670586864 (XmlNameEntry_t2864223360 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNameEntry::Equals(System.Object)
extern "C"  bool XmlNameEntry_Equals_m2491241348 (XmlNameEntry_t2864223360 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNameEntry::GetHashCode()
extern "C"  int32_t XmlNameEntry_GetHashCode_m203390488 (XmlNameEntry_t2864223360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNameEntry::GetPrefixedName(System.Xml.XmlNameEntryCache)
extern "C"  String_t* XmlNameEntry_GetPrefixedName_m3491264144 (XmlNameEntry_t2864223360 * __this, XmlNameEntryCache_t2219001062 * ___owner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
