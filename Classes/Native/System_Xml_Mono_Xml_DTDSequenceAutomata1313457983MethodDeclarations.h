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

// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t1313457983;
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

// System.Void Mono.Xml.DTDSequenceAutomata::.ctor(Mono.Xml.DTDObjectModel,Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  void DTDSequenceAutomata__ctor_m1055308478 (DTDSequenceAutomata_t1313457983 * __this, DTDObjectModel_t281012916 * ___root, DTDAutomata_t2713586350 * ___left, DTDAutomata_t2713586350 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryStartElement(System.String)
extern "C"  DTDAutomata_t2713586350 * DTDSequenceAutomata_TryStartElement_m1495651420 (DTDSequenceAutomata_t1313457983 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::TryEndElement()
extern "C"  DTDAutomata_t2713586350 * DTDSequenceAutomata_TryEndElement_m3618194279 (DTDSequenceAutomata_t1313457983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDSequenceAutomata::get_Emptiable()
extern "C"  bool DTDSequenceAutomata_get_Emptiable_m2655948974 (DTDSequenceAutomata_t1313457983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
