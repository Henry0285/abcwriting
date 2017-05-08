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

// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t1817984508;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// Mono.Xml.DTDChoiceAutomata
struct DTDChoiceAutomata_t3265934451;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t2713586350;
// Mono.Xml.DTDSequenceAutomata
struct DTDSequenceAutomata_t1313457983;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel281012916.h"
#include "System_Xml_Mono_Xml_DTDAutomata2713586350.h"

// System.Void Mono.Xml.DTDAutomataFactory::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAutomataFactory__ctor_m708083521 (DTDAutomataFactory_t1817984508 * __this, DTDObjectModel_t281012916 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDChoiceAutomata Mono.Xml.DTDAutomataFactory::Choice(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDChoiceAutomata_t3265934451 * DTDAutomataFactory_Choice_m3232052724 (DTDAutomataFactory_t1817984508 * __this, DTDAutomata_t2713586350 * ___left, DTDAutomata_t2713586350 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDSequenceAutomata Mono.Xml.DTDAutomataFactory::Sequence(Mono.Xml.DTDAutomata,Mono.Xml.DTDAutomata)
extern "C"  DTDSequenceAutomata_t1313457983 * DTDAutomataFactory_Sequence_m967538580 (DTDAutomataFactory_t1817984508 * __this, DTDAutomata_t2713586350 * ___left, DTDAutomata_t2713586350 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
