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

// System.Text.RegularExpressions.RxInterpreterFactory
struct RxInterpreterFactory_t2832192033;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t3221852302;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1421636219;
// System.Collections.IDictionary
struct IDictionary_t2734775517;
// System.String[]
struct StringU5BU5D_t3764931161;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_EvalDelegate3221852302.h"

// System.Void System.Text.RegularExpressions.RxInterpreterFactory::.ctor(System.Byte[],System.Text.RegularExpressions.EvalDelegate)
extern "C"  void RxInterpreterFactory__ctor_m3798563300 (RxInterpreterFactory_t2832192033 * __this, ByteU5BU5D_t3835026402* ___program, EvalDelegate_t3221852302 * ___eval_del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.RxInterpreterFactory::NewInstance()
extern "C"  Il2CppObject * RxInterpreterFactory_NewInstance_m966578390 (RxInterpreterFactory_t2832192033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreterFactory::get_GroupCount()
extern "C"  int32_t RxInterpreterFactory_get_GroupCount_m3722650644 (RxInterpreterFactory_t2832192033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreterFactory::get_Gap()
extern "C"  int32_t RxInterpreterFactory_get_Gap_m983922640 (RxInterpreterFactory_t2832192033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_Gap(System.Int32)
extern "C"  void RxInterpreterFactory_set_Gap_m2161225047 (RxInterpreterFactory_t2832192033 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Text.RegularExpressions.RxInterpreterFactory::get_Mapping()
extern "C"  Il2CppObject * RxInterpreterFactory_get_Mapping_m3503533494 (RxInterpreterFactory_t2832192033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_Mapping(System.Collections.IDictionary)
extern "C"  void RxInterpreterFactory_set_Mapping_m2444762633 (RxInterpreterFactory_t2832192033 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.RxInterpreterFactory::get_NamesMapping()
extern "C"  StringU5BU5D_t3764931161* RxInterpreterFactory_get_NamesMapping_m1956209739 (RxInterpreterFactory_t2832192033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_NamesMapping(System.String[])
extern "C"  void RxInterpreterFactory_set_NamesMapping_m3516445546 (RxInterpreterFactory_t2832192033 * __this, StringU5BU5D_t3764931161* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
