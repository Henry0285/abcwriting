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

// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t3829102049;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t3238703438;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2096988192;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t859292000;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSequence3238703438.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager2096988192.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Xml.Schema.XsdSequenceValidationState::.ctor(System.Xml.Schema.XmlSchemaSequence,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdSequenceValidationState__ctor_m755636342 (XsdSequenceValidationState_t3829102049 * __this, XmlSchemaSequence_t3238703438 * ___sequence, XsdParticleStateManager_t2096988192 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdSequenceValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t859292000 * XsdSequenceValidationState_EvaluateStartElement_m2324246912 (XsdSequenceValidationState_t3829102049 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateEndElement()
extern "C"  bool XsdSequenceValidationState_EvaluateEndElement_m160952984 (XsdSequenceValidationState_t3829102049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdSequenceValidationState_EvaluateIsEmptiable_m2716179126 (XsdSequenceValidationState_t3829102049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
