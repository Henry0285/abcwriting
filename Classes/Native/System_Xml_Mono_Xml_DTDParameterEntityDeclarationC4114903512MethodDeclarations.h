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

// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t4114903512;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t1189197916;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel281012916.h"
#include "mscorlib_System_String1967731336.h"
#include "System_Xml_Mono_Xml_DTDParameterEntityDeclaration1189197916.h"

// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDParameterEntityDeclarationCollection__ctor_m3697537683 (DTDParameterEntityDeclarationCollection_t4114903512 * __this, DTDObjectModel_t281012916 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration Mono.Xml.DTDParameterEntityDeclarationCollection::get_Item(System.String)
extern "C"  DTDParameterEntityDeclaration_t1189197916 * DTDParameterEntityDeclarationCollection_get_Item_m2160586090 (DTDParameterEntityDeclarationCollection_t4114903512 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDParameterEntityDeclaration)
extern "C"  void DTDParameterEntityDeclarationCollection_Add_m942333182 (DTDParameterEntityDeclarationCollection_t4114903512 * __this, String_t* ___name, DTDParameterEntityDeclaration_t1189197916 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
