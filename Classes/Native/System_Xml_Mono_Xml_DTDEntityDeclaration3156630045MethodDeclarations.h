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

// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t3156630045;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel281012916.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Collections_ArrayList1468494371.h"

// System.Void Mono.Xml.DTDEntityDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDEntityDeclaration__ctor_m2690488300 (DTDEntityDeclaration_t3156630045 * __this, DTDObjectModel_t281012916 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_NotationName()
extern "C"  String_t* DTDEntityDeclaration_get_NotationName_m4063229687 (DTDEntityDeclaration_t3156630045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::set_NotationName(System.String)
extern "C"  void DTDEntityDeclaration_set_NotationName_m1696775068 (DTDEntityDeclaration_t3156630045 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEntityDeclaration::get_HasExternalReference()
extern "C"  bool DTDEntityDeclaration_get_HasExternalReference_m1249013021 (DTDEntityDeclaration_t3156630045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityDeclaration::get_EntityValue()
extern "C"  String_t* DTDEntityDeclaration_get_EntityValue_m3577133706 (DTDEntityDeclaration_t3156630045 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclaration::ScanEntityValue(System.Collections.ArrayList)
extern "C"  void DTDEntityDeclaration_ScanEntityValue_m4021782236 (DTDEntityDeclaration_t3156630045 * __this, ArrayList_t1468494371 * ___refs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
