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

// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t2070463002;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t2364217941;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2096988192;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t859292000;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny2364217941.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager2096988192.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Xml.Schema.XsdAnyValidationState::.ctor(System.Xml.Schema.XmlSchemaAny,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdAnyValidationState__ctor_m693705372 (XsdAnyValidationState_t2070463002 * __this, XmlSchemaAny_t2364217941 * ___any, XsdParticleStateManager_t2096988192 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAnyValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t859292000 * XsdAnyValidationState_EvaluateStartElement_m1292989721 (XsdAnyValidationState_t2070463002 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::MatchesNamespace(System.String)
extern "C"  bool XsdAnyValidationState_MatchesNamespace_m1751182017 (XsdAnyValidationState_t2070463002 * __this, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::EvaluateEndElement()
extern "C"  bool XsdAnyValidationState_EvaluateEndElement_m1308123907 (XsdAnyValidationState_t2070463002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnyValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdAnyValidationState_EvaluateIsEmptiable_m385604139 (XsdAnyValidationState_t2070463002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
