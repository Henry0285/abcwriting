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

// Mono.Xml.DTDElementAutomata
struct DTDElementAutomata_t4145287398;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// System.String
struct String_t;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t2713586350;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel281012916.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Xml.DTDElementAutomata::.ctor(Mono.Xml.DTDObjectModel,System.String)
extern "C"  void DTDElementAutomata__ctor_m143188097 (DTDElementAutomata_t4145287398 * __this, DTDObjectModel_t281012916 * ___root, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDElementAutomata::get_Name()
extern "C"  String_t* DTDElementAutomata_get_Name_m3413806664 (DTDElementAutomata_t4145287398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDElementAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t2713586350 * DTDElementAutomata_TryStartElement_m938424475 (DTDElementAutomata_t4145287398 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
