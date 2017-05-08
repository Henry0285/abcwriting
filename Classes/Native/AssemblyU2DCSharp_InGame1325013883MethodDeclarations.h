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

// InGame
struct InGame_t1325013883;
// UnityEngine.Transform
struct Transform_t224878301;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t591428026;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_EventArgs591428026.h"

// System.Void InGame::.ctor()
extern "C"  void InGame__ctor_m2088514572 (InGame_t1325013883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGame::Start()
extern "C"  void InGame_Start_m2672438664 (InGame_t1325013883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGame::Update()
extern "C"  void InGame_Update_m1327138651 (InGame_t1325013883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGame::SetupLetters()
extern "C"  void InGame_SetupLetters_m2779255192 (InGame_t1325013883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGame::CreateLine()
extern "C"  void InGame_CreateLine_m2972294688 (InGame_t1325013883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InGame::IsInsideWritingZone(UnityEngine.Vector3)
extern "C"  bool InGame_IsInsideWritingZone_m27734223 (InGame_t1325013883 * __this, Vector3_t465617797  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform InGame::DrawDot(UnityEngine.Vector3)
extern "C"  Transform_t224878301 * InGame_DrawDot_m114801308 (InGame_t1325013883 * __this, Vector3_t465617797  ___tPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGame::ClearDots()
extern "C"  void InGame_ClearDots_m3961020087 (InGame_t1325013883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InGame::OnFinishAnim(System.Object,System.EventArgs)
extern "C"  void InGame_OnFinishAnim_m2580764013 (InGame_t1325013883 * __this, Il2CppObject * ___message, EventArgs_t591428026 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
