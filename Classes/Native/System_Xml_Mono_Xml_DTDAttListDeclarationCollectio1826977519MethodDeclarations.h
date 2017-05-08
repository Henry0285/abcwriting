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

// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t1826977519;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t1003748425;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel281012916.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_Mono_Xml_DTDAttListDeclaration1003748425.h"

// System.Void Mono.Xml.DTDAttListDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAttListDeclarationCollection__ctor_m4199523704 (DTDAttListDeclarationCollection_t1826977519 * __this, DTDObjectModel_t281012916 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration Mono.Xml.DTDAttListDeclarationCollection::get_Item(System.String)
extern "C"  DTDAttListDeclaration_t1003748425 * DTDAttListDeclarationCollection_get_Item_m2551642928 (DTDAttListDeclarationCollection_t1826977519 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclarationCollection::Add(System.String,Mono.Xml.DTDAttListDeclaration)
extern "C"  void DTDAttListDeclarationCollection_Add_m496519038 (DTDAttListDeclarationCollection_t1826977519 * __this, String_t* ___name, DTDAttListDeclaration_t1003748425 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
