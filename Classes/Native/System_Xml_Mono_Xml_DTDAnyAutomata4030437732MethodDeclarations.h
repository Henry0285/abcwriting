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

// Mono.Xml.DTDAnyAutomata
struct DTDAnyAutomata_t4030437732;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t2713586350;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel281012916.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Xml.DTDAnyAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAnyAutomata__ctor_m1919275235 (DTDAnyAutomata_t4030437732 * __this, DTDObjectModel_t281012916 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryEndElement()
extern "C"  DTDAutomata_t2713586350 * DTDAnyAutomata_TryEndElement_m2419739934 (DTDAnyAutomata_t4030437732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDAnyAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t2713586350 * DTDAnyAutomata_TryStartElement_m2233058479 (DTDAnyAutomata_t4030437732 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDAnyAutomata::get_Emptiable()
extern "C"  bool DTDAnyAutomata_get_Emptiable_m1047480621 (DTDAnyAutomata_t4030437732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
