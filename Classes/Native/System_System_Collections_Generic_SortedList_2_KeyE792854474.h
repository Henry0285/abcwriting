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

#include "mscorlib_System_ValueType4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedList`2/KeyEnumerator<System.Object,System.Object>
struct  KeyEnumerator_t792854474 
{
public:
	// System.Collections.Generic.SortedList`2<TKey,TValue> System.Collections.Generic.SortedList`2/KeyEnumerator::l
	SortedList_2_t1701136325 * ___l_0;
	// System.Int32 System.Collections.Generic.SortedList`2/KeyEnumerator::idx
	int32_t ___idx_1;
	// System.Int32 System.Collections.Generic.SortedList`2/KeyEnumerator::ver
	int32_t ___ver_2;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(KeyEnumerator_t792854474, ___l_0)); }
	inline SortedList_2_t1701136325 * get_l_0() const { return ___l_0; }
	inline SortedList_2_t1701136325 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(SortedList_2_t1701136325 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier(&___l_0, value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(KeyEnumerator_t792854474, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(KeyEnumerator_t792854474, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
