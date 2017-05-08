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

// Mono.Xml.DTDOneOrMoreAutomata
struct DTDOneOrMoreAutomata_t4018478546;
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

// System.Void Mono.Xml.DTDOneOrMoreAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata)
extern "C"  void DTDOneOrMoreAutomata__ctor_m312214869 (DTDOneOrMoreAutomata_t4018478546 * __this, DTDObjectModel_t281012916 * ___root, DTDAutomata_t2713586350 * ___children, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t2713586350 * DTDOneOrMoreAutomata_TryStartElement_m4166394021 (DTDOneOrMoreAutomata_t4018478546 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::TryEndElement()
extern "C"  DTDAutomata_t2713586350 * DTDOneOrMoreAutomata_TryEndElement_m4268414708 (DTDOneOrMoreAutomata_t4018478546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
