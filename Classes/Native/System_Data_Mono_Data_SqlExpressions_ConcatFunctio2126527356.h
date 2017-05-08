#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Data.SqlExpressions.IExpression
struct IExpression_t2381878085;

#include "System_Data_Mono_Data_SqlExpressions_StringFunction295817989.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.SqlExpressions.ConcatFunction
struct  ConcatFunction_t2126527356  : public StringFunction_t295817989
{
public:
	// Mono.Data.SqlExpressions.IExpression Mono.Data.SqlExpressions.ConcatFunction::_add
	Il2CppObject * ____add_1;

public:
	inline static int32_t get_offset_of__add_1() { return static_cast<int32_t>(offsetof(ConcatFunction_t2126527356, ____add_1)); }
	inline Il2CppObject * get__add_1() const { return ____add_1; }
	inline Il2CppObject ** get_address_of__add_1() { return &____add_1; }
	inline void set__add_1(Il2CppObject * value)
	{
		____add_1 = value;
		Il2CppCodeGenWriteBarrier(&____add_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
