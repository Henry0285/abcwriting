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

// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t3265934451;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t2713586350;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel281012916.h"
#include "System_Xml_Mono_Xml_DTDAutomata2713586350.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Xml.DTDChoiceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  void DTDChoiceAutomata__ctor_m910036128 (DTDChoiceAutomata_t3265934451 * __this, DTDObjectModel_t281012916 * ___root, DTDAutomata_t2713586350 * ___left, DTDAutomata_t2713586350 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t2713586350 * DTDChoiceAutomata_TryStartElement_m935543754 (DTDChoiceAutomata_t3265934451 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::TryEndElement()
extern "C"  DTDAutomata_t2713586350 * DTDChoiceAutomata_TryEndElement_m2966112383 (DTDChoiceAutomata_t3265934451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDChoiceAutomata::get_Emptiable()
extern "C"  bool DTDChoiceAutomata_get_Emptiable_m3702499064 (DTDChoiceAutomata_t3265934451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
