﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_RxInterpreter735098419.h"

// System.Int32 System.Text.RegularExpressions.RxInterpreter/IntStack::Pop()
extern "C"  int32_t IntStack_Pop_m826678072 (IntStack_t735098420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter/IntStack::Push(System.Int32)
extern "C"  void IntStack_Push_m3055438622 (IntStack_t735098420 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter/IntStack::get_Count()
extern "C"  int32_t IntStack_get_Count_m802107183 (IntStack_t735098420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter/IntStack::set_Count(System.Int32)
extern "C"  void IntStack_set_Count_m2202504642 (IntStack_t735098420 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct IntStack_t735098420;
struct IntStack_t735098420_marshaled_pinvoke;

extern "C" void IntStack_t735098420_marshal_pinvoke(const IntStack_t735098420& unmarshaled, IntStack_t735098420_marshaled_pinvoke& marshaled);
extern "C" void IntStack_t735098420_marshal_pinvoke_back(const IntStack_t735098420_marshaled_pinvoke& marshaled, IntStack_t735098420& unmarshaled);
extern "C" void IntStack_t735098420_marshal_pinvoke_cleanup(IntStack_t735098420_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct IntStack_t735098420;
struct IntStack_t735098420_marshaled_com;

extern "C" void IntStack_t735098420_marshal_com(const IntStack_t735098420& unmarshaled, IntStack_t735098420_marshaled_com& marshaled);
extern "C" void IntStack_t735098420_marshal_com_back(const IntStack_t735098420_marshaled_com& marshaled, IntStack_t735098420& unmarshaled);
extern "C" void IntStack_t735098420_marshal_com_cleanup(IntStack_t735098420_marshaled_com& marshaled);
