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

// System.WindowsConsoleDriver
struct WindowsConsoleDriver_t1021826401;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ConsoleKeyInfo3769708681.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Handles2043602040.h"
#include "mscorlib_System_ConsoleScreenBufferInfo3706055720.h"
#include "mscorlib_System_InputRecord881243258.h"

// System.Void System.WindowsConsoleDriver::.ctor()
extern "C"  void WindowsConsoleDriver__ctor_m833672153 (WindowsConsoleDriver_t1021826401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.WindowsConsoleDriver::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t3769708681  WindowsConsoleDriver_ReadKey_m2722483337 (WindowsConsoleDriver_t1021826401 * __this, bool ___intercept, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C"  IntPtr_t WindowsConsoleDriver_GetStdHandle_m2228793753 (Il2CppObject * __this /* static, unused */, int32_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C"  bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m1086313578 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, ConsoleScreenBufferInfo_t3706055720 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C"  bool WindowsConsoleDriver_ReadConsoleInput_m3748139698 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, InputRecord_t881243258 * ___record, int32_t ___length, int32_t* ___nread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
