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

// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t3221852302;
// System.Object
struct Il2CppObject;
// System.Text.RegularExpressions.RxInterpreter
struct RxInterpreter_t3718842327;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_System_Text_RegularExpressions_RxInterprete3718842327.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Text.RegularExpressions.EvalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EvalDelegate__ctor_m3422733786 (EvalDelegate_t3221852302 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.EvalDelegate::Invoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&)
extern "C"  bool EvalDelegate_Invoke_m3288130003 (EvalDelegate_t3221852302 * __this, RxInterpreter_t3718842327 * ___interp, int32_t ___strpos, int32_t* ___strpos_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_EvalDelegate_t3221852302(Il2CppObject* delegate, RxInterpreter_t3718842327 * ___interp, int32_t ___strpos, int32_t* ___strpos_result);
// System.IAsyncResult System.Text.RegularExpressions.EvalDelegate::BeginInvoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EvalDelegate_BeginInvoke_m78339244 (EvalDelegate_t3221852302 * __this, RxInterpreter_t3718842327 * ___interp, int32_t ___strpos, int32_t* ___strpos_result, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.EvalDelegate::EndInvoke(System.Int32&,System.IAsyncResult)
extern "C"  bool EvalDelegate_EndInvoke_m1449671387 (EvalDelegate_t3221852302 * __this, int32_t* ___strpos_result, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
