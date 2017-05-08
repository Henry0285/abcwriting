#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1685951112;
// System.Collections.Generic.List`1<JSONObject>
struct List_1_t1083253590;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1079102679;
// System.Diagnostics.Stopwatch
struct Stopwatch_t4157940570;

#include "mscorlib_System_Object707969140.h"
#include "AssemblyU2DCSharpU2Dfirstpass_JSONObject_Type693074472.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JSONObject
struct  JSONObject_t1971882247  : public Il2CppObject
{
public:
	// JSONObject/Type JSONObject::type
	int32_t ___type_6;
	// System.Collections.Generic.List`1<JSONObject> JSONObject::list
	List_1_t1083253590 * ___list_7;
	// System.Collections.Generic.List`1<System.String> JSONObject::keys
	List_1_t1079102679 * ___keys_8;
	// System.String JSONObject::str
	String_t* ___str_9;
	// System.Single JSONObject::n
	float ___n_10;
	// System.Boolean JSONObject::b
	bool ___b_11;

public:
	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(JSONObject_t1971882247, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}

	inline static int32_t get_offset_of_list_7() { return static_cast<int32_t>(offsetof(JSONObject_t1971882247, ___list_7)); }
	inline List_1_t1083253590 * get_list_7() const { return ___list_7; }
	inline List_1_t1083253590 ** get_address_of_list_7() { return &___list_7; }
	inline void set_list_7(List_1_t1083253590 * value)
	{
		___list_7 = value;
		Il2CppCodeGenWriteBarrier(&___list_7, value);
	}

	inline static int32_t get_offset_of_keys_8() { return static_cast<int32_t>(offsetof(JSONObject_t1971882247, ___keys_8)); }
	inline List_1_t1079102679 * get_keys_8() const { return ___keys_8; }
	inline List_1_t1079102679 ** get_address_of_keys_8() { return &___keys_8; }
	inline void set_keys_8(List_1_t1079102679 * value)
	{
		___keys_8 = value;
		Il2CppCodeGenWriteBarrier(&___keys_8, value);
	}

	inline static int32_t get_offset_of_str_9() { return static_cast<int32_t>(offsetof(JSONObject_t1971882247, ___str_9)); }
	inline String_t* get_str_9() const { return ___str_9; }
	inline String_t** get_address_of_str_9() { return &___str_9; }
	inline void set_str_9(String_t* value)
	{
		___str_9 = value;
		Il2CppCodeGenWriteBarrier(&___str_9, value);
	}

	inline static int32_t get_offset_of_n_10() { return static_cast<int32_t>(offsetof(JSONObject_t1971882247, ___n_10)); }
	inline float get_n_10() const { return ___n_10; }
	inline float* get_address_of_n_10() { return &___n_10; }
	inline void set_n_10(float value)
	{
		___n_10 = value;
	}

	inline static int32_t get_offset_of_b_11() { return static_cast<int32_t>(offsetof(JSONObject_t1971882247, ___b_11)); }
	inline bool get_b_11() const { return ___b_11; }
	inline bool* get_address_of_b_11() { return &___b_11; }
	inline void set_b_11(bool value)
	{
		___b_11 = value;
	}
};

struct JSONObject_t1971882247_StaticFields
{
public:
	// System.Char[] JSONObject::WHITESPACE
	CharU5BU5D_t1685951112* ___WHITESPACE_5;
	// System.Diagnostics.Stopwatch JSONObject::printWatch
	Stopwatch_t4157940570 * ___printWatch_12;

public:
	inline static int32_t get_offset_of_WHITESPACE_5() { return static_cast<int32_t>(offsetof(JSONObject_t1971882247_StaticFields, ___WHITESPACE_5)); }
	inline CharU5BU5D_t1685951112* get_WHITESPACE_5() const { return ___WHITESPACE_5; }
	inline CharU5BU5D_t1685951112** get_address_of_WHITESPACE_5() { return &___WHITESPACE_5; }
	inline void set_WHITESPACE_5(CharU5BU5D_t1685951112* value)
	{
		___WHITESPACE_5 = value;
		Il2CppCodeGenWriteBarrier(&___WHITESPACE_5, value);
	}

	inline static int32_t get_offset_of_printWatch_12() { return static_cast<int32_t>(offsetof(JSONObject_t1971882247_StaticFields, ___printWatch_12)); }
	inline Stopwatch_t4157940570 * get_printWatch_12() const { return ___printWatch_12; }
	inline Stopwatch_t4157940570 ** get_address_of_printWatch_12() { return &___printWatch_12; }
	inline void set_printWatch_12(Stopwatch_t4157940570 * value)
	{
		___printWatch_12 = value;
		Il2CppCodeGenWriteBarrier(&___printWatch_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
