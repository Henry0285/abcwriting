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

// Mono.Xml.DTDInvalidAutomata
struct DTDInvalidAutomata_t1790235737;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t2713586350;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel281012916.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Xml.DTDInvalidAutomata::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDInvalidAutomata__ctor_m3193134520 (DTDInvalidAutomata_t1790235737 * __this, DTDObjectModel_t281012916 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryEndElement()
extern "C"  DTDAutomata_t2713586350 * DTDInvalidAutomata_TryEndElement_m3030642457 (DTDInvalidAutomata_t1790235737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDInvalidAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t2713586350 * DTDInvalidAutomata_TryStartElement_m3827937640 (DTDInvalidAutomata_t1790235737 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
