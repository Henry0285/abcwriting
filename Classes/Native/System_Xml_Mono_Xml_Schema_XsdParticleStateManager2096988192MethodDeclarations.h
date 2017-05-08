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

// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2096988192;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t859292000;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1566397180;
// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t2684800902;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3250505123;
// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t3829102049;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t3238703438;
// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t636856607;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t3245067494;
// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t1341833925;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t1248472696;
// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t2070463002;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t2364217941;
// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t4291905643;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProces706549897.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject1566397180.h"
#include "System_Xml_Mono_Xml_Schema_XsdValidationState859292000.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaElement3250505123.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSequence3238703438.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaChoice3245067494.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAll1248472696.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny2364217941.h"

// System.Void Mono.Xml.Schema.XsdParticleStateManager::.ctor()
extern "C"  void XsdParticleStateManager__ctor_m2539252931 (XsdParticleStateManager_t2096988192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdParticleStateManager::get_ProcessContents()
extern "C"  int32_t XsdParticleStateManager_get_ProcessContents_m3269794617 (XsdParticleStateManager_t2096988192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PushContext()
extern "C"  void XsdParticleStateManager_PushContext_m2773125792 (XsdParticleStateManager_t2096988192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PopContext()
extern "C"  void XsdParticleStateManager_PopContext_m3641816743 (XsdParticleStateManager_t2096988192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::SetProcessContents(System.Xml.Schema.XmlSchemaContentProcessing)
extern "C"  void XsdParticleStateManager_SetProcessContents_m1075346173 (XsdParticleStateManager_t2096988192 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::Create(System.Xml.Schema.XmlSchemaObject)
extern "C"  XsdValidationState_t859292000 * XsdParticleStateManager_Create_m2387283472 (XsdParticleStateManager_t2096988192 * __this, XmlSchemaObject_t1566397180 * ___xsobj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::MakeSequence(Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C"  XsdValidationState_t859292000 * XsdParticleStateManager_MakeSequence_m3327915519 (XsdParticleStateManager_t2096988192 * __this, XsdValidationState_t859292000 * ___head, XsdValidationState_t859292000 * ___rest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdElementValidationState Mono.Xml.Schema.XsdParticleStateManager::AddElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  XsdElementValidationState_t2684800902 * XsdParticleStateManager_AddElement_m2444051694 (XsdParticleStateManager_t2096988192 * __this, XmlSchemaElement_t3250505123 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdSequenceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddSequence(System.Xml.Schema.XmlSchemaSequence)
extern "C"  XsdSequenceValidationState_t3829102049 * XsdParticleStateManager_AddSequence_m1663841407 (XsdParticleStateManager_t2096988192 * __this, XmlSchemaSequence_t3238703438 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdChoiceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddChoice(System.Xml.Schema.XmlSchemaChoice)
extern "C"  XsdChoiceValidationState_t636856607 * XsdParticleStateManager_AddChoice_m1005712687 (XsdParticleStateManager_t2096988192 * __this, XmlSchemaChoice_t3245067494 * ___choice, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAllValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAll(System.Xml.Schema.XmlSchemaAll)
extern "C"  XsdAllValidationState_t1341833925 * XsdParticleStateManager_AddAll_m2378030737 (XsdParticleStateManager_t2096988192 * __this, XmlSchemaAll_t1248472696 * ___all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAny(System.Xml.Schema.XmlSchemaAny)
extern "C"  XsdAnyValidationState_t2070463002 * XsdParticleStateManager_AddAny_m1034656764 (XsdParticleStateManager_t2096988192 * __this, XmlSchemaAny_t2364217941 * ___any, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdEmptyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddEmpty()
extern "C"  XsdEmptyValidationState_t4291905643 * XsdParticleStateManager_AddEmpty_m3168339139 (XsdParticleStateManager_t2096988192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
