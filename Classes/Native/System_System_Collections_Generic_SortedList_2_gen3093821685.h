#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t2940600241;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_t4060515597;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedList`2<System.String,System.String>
struct  SortedList_2_t3093821685  : public Il2CppObject
{
public:
	// System.Int32 System.Collections.Generic.SortedList`2::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Generic.SortedList`2::modificationCount
	int32_t ___modificationCount_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Generic.SortedList`2::table
	KeyValuePair_2U5BU5D_t2940600241* ___table_3;
	// System.Collections.Generic.IComparer`1<TKey> System.Collections.Generic.SortedList`2::comparer
	Il2CppObject* ___comparer_4;
	// System.Int32 System.Collections.Generic.SortedList`2::defaultCapacity
	int32_t ___defaultCapacity_5;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(SortedList_2_t3093821685, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(SortedList_2_t3093821685, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_table_3() { return static_cast<int32_t>(offsetof(SortedList_2_t3093821685, ___table_3)); }
	inline KeyValuePair_2U5BU5D_t2940600241* get_table_3() const { return ___table_3; }
	inline KeyValuePair_2U5BU5D_t2940600241** get_address_of_table_3() { return &___table_3; }
	inline void set_table_3(KeyValuePair_2U5BU5D_t2940600241* value)
	{
		___table_3 = value;
		Il2CppCodeGenWriteBarrier(&___table_3, value);
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_2_t3093821685, ___comparer_4)); }
	inline Il2CppObject* get_comparer_4() const { return ___comparer_4; }
	inline Il2CppObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(Il2CppObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier(&___comparer_4, value);
	}

	inline static int32_t get_offset_of_defaultCapacity_5() { return static_cast<int32_t>(offsetof(SortedList_2_t3093821685, ___defaultCapacity_5)); }
	inline int32_t get_defaultCapacity_5() const { return ___defaultCapacity_5; }
	inline int32_t* get_address_of_defaultCapacity_5() { return &___defaultCapacity_5; }
	inline void set_defaultCapacity_5(int32_t value)
	{
		___defaultCapacity_5 = value;
	}
};

struct SortedList_2_t3093821685_StaticFields
{
public:
	// System.Int32 System.Collections.Generic.SortedList`2::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;

public:
	inline static int32_t get_offset_of_INITIAL_SIZE_0() { return static_cast<int32_t>(offsetof(SortedList_2_t3093821685_StaticFields, ___INITIAL_SIZE_0)); }
	inline int32_t get_INITIAL_SIZE_0() const { return ___INITIAL_SIZE_0; }
	inline int32_t* get_address_of_INITIAL_SIZE_0() { return &___INITIAL_SIZE_0; }
	inline void set_INITIAL_SIZE_0(int32_t value)
	{
		___INITIAL_SIZE_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
