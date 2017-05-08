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

// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t1897009230;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t1963412794;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel281012916.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_Mono_Xml_DTDNotationDeclaration1963412794.h"

// System.Void Mono.Xml.DTDNotationDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDNotationDeclarationCollection__ctor_m4118765985 (DTDNotationDeclarationCollection_t1897009230 * __this, DTDObjectModel_t281012916 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration Mono.Xml.DTDNotationDeclarationCollection::get_Item(System.String)
extern "C"  DTDNotationDeclaration_t1963412794 * DTDNotationDeclarationCollection_get_Item_m414353938 (DTDNotationDeclarationCollection_t1897009230 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNotationDeclarationCollection::Add(System.String,Mono.Xml.DTDNotationDeclaration)
extern "C"  void DTDNotationDeclarationCollection_Add_m3551274252 (DTDNotationDeclarationCollection_t1897009230 * __this, String_t* ___name, DTDNotationDeclaration_t1963412794 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
