#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.SortedList`2<System.Object,System.Object>
struct SortedList_2_t1701136325;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedList`2/ListKeys<System.Object,System.Object>
struct  ListKeys_t1537682847  : public Il2CppObject
{
public:
	// System.Collections.Generic.SortedList`2<TKey,TValue> System.Collections.Generic.SortedList`2/ListKeys::host
	SortedList_2_t1701136325 * ___host_0;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(ListKeys_t1537682847, ___host_0)); }
	inline SortedList_2_t1701136325 * get_host_0() const { return ___host_0; }
	inline SortedList_2_t1701136325 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(SortedList_2_t1701136325 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier(&___host_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
