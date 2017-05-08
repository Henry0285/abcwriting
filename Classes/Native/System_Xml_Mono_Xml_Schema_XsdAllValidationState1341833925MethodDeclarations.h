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

// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t1341833925;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t1248472696;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2096988192;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t859292000;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAll1248472696.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager2096988192.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Xml.Schema.XsdAllValidationState::.ctor(System.Xml.Schema.XmlSchemaAll,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdAllValidationState__ctor_m376057198 (XsdAllValidationState_t1341833925 * __this, XmlSchemaAll_t1248472696 * ___all, XsdParticleStateManager_t2096988192 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAllValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t859292000 * XsdAllValidationState_EvaluateStartElement_m1619497380 (XsdAllValidationState_t1341833925 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateEndElement()
extern "C"  bool XsdAllValidationState_EvaluateEndElement_m13945418 (XsdAllValidationState_t1341833925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdAllValidationState_EvaluateIsEmptiable_m3169904448 (XsdAllValidationState_t1341833925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
