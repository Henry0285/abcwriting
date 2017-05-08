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

// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t636856607;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t3245067494;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2096988192;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t859292000;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaChoice3245067494.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager2096988192.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Xml.Schema.XsdChoiceValidationState::.ctor(System.Xml.Schema.XmlSchemaChoice,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdChoiceValidationState__ctor_m3518997558 (XsdChoiceValidationState_t636856607 * __this, XmlSchemaChoice_t3245067494 * ___choice, XsdParticleStateManager_t2096988192 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdChoiceValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t859292000 * XsdChoiceValidationState_EvaluateStartElement_m3636118166 (XsdChoiceValidationState_t636856607 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::EvaluateEndElement()
extern "C"  bool XsdChoiceValidationState_EvaluateEndElement_m2171531230 (XsdChoiceValidationState_t636856607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdChoiceValidationState_EvaluateIsEmptiable_m1353277504 (XsdChoiceValidationState_t636856607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
