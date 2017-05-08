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

// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t2684800902;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3250505123;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2096988192;
// System.String
struct String_t;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t859292000;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaElement3250505123.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager2096988192.h"
#include "mscorlib_System_String1967731336.h"

// System.Void Mono.Xml.Schema.XsdElementValidationState::.ctor(System.Xml.Schema.XmlSchemaElement,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdElementValidationState__ctor_m969359980 (XsdElementValidationState_t2684800902 * __this, XmlSchemaElement_t3250505123 * ___element, XsdParticleStateManager_t2096988192 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_Name()
extern "C"  String_t* XsdElementValidationState_get_Name_m32489908 (XsdElementValidationState_t2684800902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdElementValidationState::get_NS()
extern "C"  String_t* XsdElementValidationState_get_NS_m2517246752 (XsdElementValidationState_t2684800902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t859292000 * XsdElementValidationState_EvaluateStartElement_m1060481509 (XsdElementValidationState_t2684800902 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdElementValidationState::CheckOccurence(System.Xml.Schema.XmlSchemaElement)
extern "C"  XsdValidationState_t859292000 * XsdElementValidationState_CheckOccurence_m2435312540 (XsdElementValidationState_t2684800902 * __this, XmlSchemaElement_t3250505123 * ___maybeSubstituted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateEndElement()
extern "C"  bool XsdElementValidationState_EvaluateEndElement_m4074825647 (XsdElementValidationState_t2684800902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdElementValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdElementValidationState_EvaluateIsEmptiable_m3453492511 (XsdElementValidationState_t2684800902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
