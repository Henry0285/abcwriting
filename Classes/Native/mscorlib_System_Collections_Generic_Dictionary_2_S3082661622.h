﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1107957721.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct  ShimEnumerator_t3082661622  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ShimEnumerator::host_enumerator
	Enumerator_t1107957722  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(ShimEnumerator_t3082661622, ___host_enumerator_0)); }
	inline Enumerator_t1107957722  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t1107957722 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t1107957722  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
