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

// System.IConsoleDriver
struct IConsoleDriver_t3537036475;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_ConsoleKeyInfo3769708681.h"
#include "mscorlib_System_IntPtr3076297692.h"

// System.Void System.ConsoleDriver::.cctor()
extern "C"  void ConsoleDriver__cctor_m3210423937 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateNullConsoleDriver()
extern "C" IL2CPP_NO_INLINE Il2CppObject * ConsoleDriver_CreateNullConsoleDriver_m130230204 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateWindowsConsoleDriver()
extern "C" IL2CPP_NO_INLINE Il2CppObject * ConsoleDriver_CreateWindowsConsoleDriver_m4061710778 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateTermInfoDriver(System.String)
extern "C" IL2CPP_NO_INLINE Il2CppObject * ConsoleDriver_CreateTermInfoDriver_m1211556 (Il2CppObject * __this /* static, unused */, String_t* ___term, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.ConsoleDriver::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t3769708681  ConsoleDriver_ReadKey_m215964444 (Il2CppObject * __this /* static, unused */, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::get_IsConsole()
extern "C"  bool ConsoleDriver_get_IsConsole_m3752387090 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::Isatty(System.IntPtr)
extern "C"  bool ConsoleDriver_Isatty_m3787505770 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ConsoleDriver::InternalKeyAvailable(System.Int32)
extern "C"  int32_t ConsoleDriver_InternalKeyAvailable_m3372678948 (Il2CppObject * __this /* static, unused */, int32_t ___ms_timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::TtySetup(System.String,System.String,System.Byte[]&,System.Int32*&)
extern "C"  bool ConsoleDriver_TtySetup_m2722934590 (Il2CppObject * __this /* static, unused */, String_t* ___keypadXmit, String_t* ___teardown, ByteU5BU5D_t3835026402** ___control_characters, int32_t** ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::SetEcho(System.Boolean)
extern "C"  bool ConsoleDriver_SetEcho_m588612080 (Il2CppObject * __this /* static, unused */, bool ___wantEcho, const MethodInfo* method) IL2CPP_METHOD_ATTR;
