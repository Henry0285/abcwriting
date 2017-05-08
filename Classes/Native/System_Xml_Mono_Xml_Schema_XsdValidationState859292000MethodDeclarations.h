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

// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t859292000;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2096988192;
// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t222942285;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager2096988192.h"

// System.Void Mono.Xml.Schema.XsdValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdValidationState__ctor_m3748866993 (XsdValidationState_t859292000 * __this, XsdParticleStateManager_t2096988192 * ___manager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationState::.cctor()
extern "C"  void XsdValidationState__cctor_m753307188 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdInvalidValidationState Mono.Xml.Schema.XsdValidationState::get_Invalid()
extern "C"  XsdInvalidValidationState_t222942285 * XsdValidationState_get_Invalid_m3029872895 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidationState::get_Manager()
extern "C"  XsdParticleStateManager_t2096988192 * XsdValidationState_get_Manager_m1767755816 (XsdValidationState_t859292000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidationState::get_Occured()
extern "C"  int32_t XsdValidationState_get_Occured_m3417247117 (XsdValidationState_t859292000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidationState::get_OccuredInternal()
extern "C"  int32_t XsdValidationState_get_OccuredInternal_m3856333804 (XsdValidationState_t859292000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationState::set_OccuredInternal(System.Int32)
extern "C"  void XsdValidationState_set_OccuredInternal_m3734887957 (XsdValidationState_t859292000 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
