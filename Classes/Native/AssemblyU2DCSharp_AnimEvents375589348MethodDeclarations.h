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

// AnimEvents
struct AnimEvents_t375589348;
// System.EventHandler
struct EventHandler_t1189809773;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler1189809773.h"
#include "mscorlib_System_String1967731336.h"

// System.Void AnimEvents::.ctor()
extern "C"  void AnimEvents__ctor_m3739557711 (AnimEvents_t375589348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimEvents::.cctor()
extern "C"  void AnimEvents__cctor_m192496478 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimEvents::add_OnFinishAnim(System.EventHandler)
extern "C"  void AnimEvents_add_OnFinishAnim_m1410482175 (Il2CppObject * __this /* static, unused */, EventHandler_t1189809773 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimEvents::remove_OnFinishAnim(System.EventHandler)
extern "C"  void AnimEvents_remove_OnFinishAnim_m469787154 (Il2CppObject * __this /* static, unused */, EventHandler_t1189809773 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimEvents::OnAnimFinish(System.String)
extern "C"  void AnimEvents_OnAnimFinish_m537825294 (AnimEvents_t375589348 * __this, String_t* ___anim_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimEvents::OnAutoHide(System.String)
extern "C"  void AnimEvents_OnAutoHide_m2789669303 (AnimEvents_t375589348 * __this, String_t* ___anim_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AnimEvents::OnAutoHideParent(System.Int32)
extern "C"  void AnimEvents_OnAutoHideParent_m456245208 (AnimEvents_t375589348 * __this, int32_t ___uplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
