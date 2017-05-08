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

// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t222942285;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2096988192;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t859292000;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager2096988192.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Xml.Schema.XsdInvalidValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdInvalidValidationState__ctor_m4106430974 (XsdInvalidValidationState_t222942285 * __this, XsdParticleStateManager_t2096988192 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdInvalidValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t859292000 * XsdInvalidValidationState_EvaluateStartElement_m1966840380 (XsdInvalidValidationState_t222942285 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdInvalidValidationState::EvaluateEndElement()
extern "C"  bool XsdInvalidValidationState_EvaluateEndElement_m3326960086 (XsdInvalidValidationState_t222942285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdInvalidValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdInvalidValidationState_EvaluateIsEmptiable_m3877227020 (XsdInvalidValidationState_t222942285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
