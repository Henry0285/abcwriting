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

// MessageBox
struct MessageBox_t3037865152;
// System.EventHandler
struct EventHandler_t1189809773;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler1189809773.h"
#include "mscorlib_System_String1967731336.h"
#include "AssemblyU2DCSharp_MsgType509922807.h"

// System.Void MessageBox::.ctor()
extern "C"  void MessageBox__ctor_m3958048221 (MessageBox_t3037865152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBox::.cctor()
extern "C"  void MessageBox__cctor_m871176634 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBox::add_OnCloseMsgBox(System.EventHandler)
extern "C"  void MessageBox_add_OnCloseMsgBox_m1439522423 (Il2CppObject * __this /* static, unused */, EventHandler_t1189809773 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBox::remove_OnCloseMsgBox(System.EventHandler)
extern "C"  void MessageBox_remove_OnCloseMsgBox_m2828866998 (Il2CppObject * __this /* static, unused */, EventHandler_t1189809773 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBox::Start()
extern "C"  void MessageBox_Start_m317211533 (MessageBox_t3037865152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBox::Show(System.String,MsgType,System.String)
extern "C"  void MessageBox_Show_m1790738539 (Il2CppObject * __this /* static, unused */, String_t* ___message, int32_t ___msgType, String_t* ___msgID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBox::MsgBoxOnYes()
extern "C"  void MessageBox_MsgBoxOnYes_m2005164447 (MessageBox_t3037865152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBox::MsgBoxOnNo()
extern "C"  void MessageBox_MsgBoxOnNo_m1089678497 (MessageBox_t3037865152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBox::MsgBoxOnCancel()
extern "C"  void MessageBox_MsgBoxOnCancel_m4275374846 (MessageBox_t3037865152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
