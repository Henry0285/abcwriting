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
// System.Type
struct Type_t;

#include "mscorlib_System_Attribute1145342165.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_FunctionType3305955189.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteFunctionAttribute
struct  SqliteFunctionAttribute_t2783242921  : public Attribute_t1145342165
{
public:
	// System.String Mono.Data.Sqlite.SqliteFunctionAttribute::_name
	String_t* ____name_0;
	// System.Int32 Mono.Data.Sqlite.SqliteFunctionAttribute::_arguments
	int32_t ____arguments_1;
	// Mono.Data.Sqlite.FunctionType Mono.Data.Sqlite.SqliteFunctionAttribute::_functionType
	int32_t ____functionType_2;
	// System.Type Mono.Data.Sqlite.SqliteFunctionAttribute::_instanceType
	Type_t * ____instanceType_3;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(SqliteFunctionAttribute_t2783242921, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier(&____name_0, value);
	}

	inline static int32_t get_offset_of__arguments_1() { return static_cast<int32_t>(offsetof(SqliteFunctionAttribute_t2783242921, ____arguments_1)); }
	inline int32_t get__arguments_1() const { return ____arguments_1; }
	inline int32_t* get_address_of__arguments_1() { return &____arguments_1; }
	inline void set__arguments_1(int32_t value)
	{
		____arguments_1 = value;
	}

	inline static int32_t get_offset_of__functionType_2() { return static_cast<int32_t>(offsetof(SqliteFunctionAttribute_t2783242921, ____functionType_2)); }
	inline int32_t get__functionType_2() const { return ____functionType_2; }
	inline int32_t* get_address_of__functionType_2() { return &____functionType_2; }
	inline void set__functionType_2(int32_t value)
	{
		____functionType_2 = value;
	}

	inline static int32_t get_offset_of__instanceType_3() { return static_cast<int32_t>(offsetof(SqliteFunctionAttribute_t2783242921, ____instanceType_3)); }
	inline Type_t * get__instanceType_3() const { return ____instanceType_3; }
	inline Type_t ** get_address_of__instanceType_3() { return &____instanceType_3; }
	inline void set__instanceType_3(Type_t * value)
	{
		____instanceType_3 = value;
		Il2CppCodeGenWriteBarrier(&____instanceType_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
