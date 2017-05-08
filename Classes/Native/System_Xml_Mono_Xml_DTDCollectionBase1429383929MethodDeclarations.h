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

// Mono.Xml.DTDCollectionBase
struct DTDCollectionBase_t1429383929;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// System.String
struct String_t;
// Mono.Xml.DTDNode
struct DTDNode_t2942778164;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel281012916.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_Mono_Xml_DTDNode2942778164.h"

// System.Void Mono.Xml.DTDCollectionBase::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDCollectionBase__ctor_m1900614452 (DTDCollectionBase_t1429383929 * __this, DTDObjectModel_t281012916 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDCollectionBase::get_Root()
extern "C"  DTDObjectModel_t281012916 * DTDCollectionBase_get_Root_m3300909812 (DTDCollectionBase_t1429383929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDCollectionBase::BaseAdd(System.String,Mono.Xml.DTDNode)
extern "C"  void DTDCollectionBase_BaseAdd_m1820377490 (DTDCollectionBase_t1429383929 * __this, String_t* ___name, DTDNode_t2942778164 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDCollectionBase::Contains(System.String)
extern "C"  bool DTDCollectionBase_Contains_m2433427925 (DTDCollectionBase_t1429383929 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDCollectionBase::BaseGet(System.String)
extern "C"  Il2CppObject * DTDCollectionBase_BaseGet_m3216049204 (DTDCollectionBase_t1429383929 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
