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

// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t1003748425;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// System.String
struct String_t;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3993153307;
// System.Collections.IList
struct IList_t2346154967;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel281012916.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_Mono_Xml_DTDAttributeDefinition3993153307.h"

// System.Void Mono.Xml.DTDAttListDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAttListDeclaration__ctor_m3756114148 (DTDAttListDeclaration_t1003748425 * __this, DTDObjectModel_t281012916 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttListDeclaration::get_Name()
extern "C"  String_t* DTDAttListDeclaration_get_Name_m672497659 (DTDAttListDeclaration_t1003748425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::set_Name(System.String)
extern "C"  void DTDAttListDeclaration_set_Name_m3245118514 (DTDAttListDeclaration_t1003748425 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.Int32)
extern "C"  DTDAttributeDefinition_t3993153307 * DTDAttListDeclaration_get_Item_m1297205765 (DTDAttListDeclaration_t1003748425 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.String)
extern "C"  DTDAttributeDefinition_t3993153307 * DTDAttListDeclaration_get_Item_m206042238 (DTDAttListDeclaration_t1003748425 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.Int32)
extern "C"  DTDAttributeDefinition_t3993153307 * DTDAttListDeclaration_Get_m4237133207 (DTDAttListDeclaration_t1003748425 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.String)
extern "C"  DTDAttributeDefinition_t3993153307 * DTDAttListDeclaration_Get_m2606960742 (DTDAttListDeclaration_t1003748425 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Mono.Xml.DTDAttListDeclaration::get_Definitions()
extern "C"  Il2CppObject * DTDAttListDeclaration_get_Definitions_m117770611 (DTDAttListDeclaration_t1003748425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::Add(Mono.Xml.DTDAttributeDefinition)
extern "C"  void DTDAttListDeclaration_Add_m371192978 (DTDAttListDeclaration_t1003748425 * __this, DTDAttributeDefinition_t3993153307 * ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
