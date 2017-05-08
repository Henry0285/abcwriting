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

// Mono.Xml.Schema.XsdAppendedValidationState
struct XsdAppendedValidationState_t793086701;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2096988192;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t859292000;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager2096988192.h"
#include "System_Xml_Mono_Xml_Schema_XsdValidationState859292000.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Xml.Schema.XsdAppendedValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager,Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C"  void XsdAppendedValidationState__ctor_m1581076540 (XsdAppendedValidationState_t793086701 * __this, XsdParticleStateManager_t2096988192 * ___manager, XsdValidationState_t859292000 * ___head, XsdValidationState_t859292000 * ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t859292000 * XsdAppendedValidationState_EvaluateStartElement_m872242020 (XsdAppendedValidationState_t793086701 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateEndElement()
extern "C"  bool XsdAppendedValidationState_EvaluateEndElement_m1016635352 (XsdAppendedValidationState_t793086701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdAppendedValidationState_EvaluateIsEmptiable_m2682718990 (XsdAppendedValidationState_t793086701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
