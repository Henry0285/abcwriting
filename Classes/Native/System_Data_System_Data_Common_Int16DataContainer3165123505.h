﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int16[]
struct Int16U5BU5D_t1488321186;

#include "System_Data_System_Data_Common_DataContainer245809077.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Int16DataContainer
struct  Int16DataContainer_t3165123505  : public DataContainer_t245809077
{
public:
	// System.Int16[] System.Data.Common.Int16DataContainer::_values
	Int16U5BU5D_t1488321186* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(Int16DataContainer_t3165123505, ____values_3)); }
	inline Int16U5BU5D_t1488321186* get__values_3() const { return ____values_3; }
	inline Int16U5BU5D_t1488321186** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(Int16U5BU5D_t1488321186* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
