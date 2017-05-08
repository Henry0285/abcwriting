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
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "mscorlib_System_Object707969140.h"
#include "System_System_Collections_Generic_SortedList_2_Enu3114451650.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.SortedList`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t684356288  : public Il2CppObject
{
public:
	// System.Collections.Generic.SortedList`2<TKey,TValue> System.Collections.Generic.SortedList`2/Enumerator::host
	SortedList_2_t1701136325 * ___host_0;
	// System.Int32 System.Collections.Generic.SortedList`2/Enumerator::stamp
	int32_t ___stamp_1;
	// System.Int32 System.Collections.Generic.SortedList`2/Enumerator::pos
	int32_t ___pos_2;
	// System.Int32 System.Collections.Generic.SortedList`2/Enumerator::size
	int32_t ___size_3;
	// System.Collections.Generic.SortedList`2/EnumeratorMode<TKey,TValue> System.Collections.Generic.SortedList`2/Enumerator::mode
	int32_t ___mode_4;
	// System.Object System.Collections.Generic.SortedList`2/Enumerator::currentKey
	Il2CppObject * ___currentKey_5;
	// System.Object System.Collections.Generic.SortedList`2/Enumerator::currentValue
	Il2CppObject * ___currentValue_6;
	// System.Boolean System.Collections.Generic.SortedList`2/Enumerator::invalid
	bool ___invalid_7;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(Enumerator_t684356288, ___host_0)); }
	inline SortedList_2_t1701136325 * get_host_0() const { return ___host_0; }
	inline SortedList_2_t1701136325 ** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(SortedList_2_t1701136325 * value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier(&___host_0, value);
	}

	inline static int32_t get_offset_of_stamp_1() { return static_cast<int32_t>(offsetof(Enumerator_t684356288, ___stamp_1)); }
	inline int32_t get_stamp_1() const { return ___stamp_1; }
	inline int32_t* get_address_of_stamp_1() { return &___stamp_1; }
	inline void set_stamp_1(int32_t value)
	{
		___stamp_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(Enumerator_t684356288, ___pos_2)); }
	inline int32_t get_pos_2() const { return ___pos_2; }
	inline int32_t* get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(int32_t value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(Enumerator_t684356288, ___size_3)); }
	inline int32_t get_size_3() const { return ___size_3; }
	inline int32_t* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(int32_t value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(Enumerator_t684356288, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_currentKey_5() { return static_cast<int32_t>(offsetof(Enumerator_t684356288, ___currentKey_5)); }
	inline Il2CppObject * get_currentKey_5() const { return ___currentKey_5; }
	inline Il2CppObject ** get_address_of_currentKey_5() { return &___currentKey_5; }
	inline void set_currentKey_5(Il2CppObject * value)
	{
		___currentKey_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentKey_5, value);
	}

	inline static int32_t get_offset_of_currentValue_6() { return static_cast<int32_t>(offsetof(Enumerator_t684356288, ___currentValue_6)); }
	inline Il2CppObject * get_currentValue_6() const { return ___currentValue_6; }
	inline Il2CppObject ** get_address_of_currentValue_6() { return &___currentValue_6; }
	inline void set_currentValue_6(Il2CppObject * value)
	{
		___currentValue_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentValue_6, value);
	}

	inline static int32_t get_offset_of_invalid_7() { return static_cast<int32_t>(offsetof(Enumerator_t684356288, ___invalid_7)); }
	inline bool get_invalid_7() const { return ___invalid_7; }
	inline bool* get_address_of_invalid_7() { return &___invalid_7; }
	inline void set_invalid_7(bool value)
	{
		___invalid_7 = value;
	}
};

struct Enumerator_t684356288_StaticFields
{
public:
	// System.String System.Collections.Generic.SortedList`2/Enumerator::xstr
	String_t* ___xstr_8;

public:
	inline static int32_t get_offset_of_xstr_8() { return static_cast<int32_t>(offsetof(Enumerator_t684356288_StaticFields, ___xstr_8)); }
	inline String_t* get_xstr_8() const { return ___xstr_8; }
	inline String_t** get_address_of_xstr_8() { return &___xstr_8; }
	inline void set_xstr_8(String_t* value)
	{
		___xstr_8 = value;
		Il2CppCodeGenWriteBarrier(&___xstr_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
