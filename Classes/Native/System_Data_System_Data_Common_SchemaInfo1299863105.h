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

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.SchemaInfo
struct  SchemaInfo_t1299863105  : public Il2CppObject
{
public:
	// System.String System.Data.Common.SchemaInfo::columnName
	String_t* ___columnName_0;
	// System.String System.Data.Common.SchemaInfo::dataTypeName
	String_t* ___dataTypeName_1;
	// System.Int32 System.Data.Common.SchemaInfo::ordinal
	int32_t ___ordinal_2;
	// System.Type System.Data.Common.SchemaInfo::fieldType
	Type_t * ___fieldType_3;

public:
	inline static int32_t get_offset_of_columnName_0() { return static_cast<int32_t>(offsetof(SchemaInfo_t1299863105, ___columnName_0)); }
	inline String_t* get_columnName_0() const { return ___columnName_0; }
	inline String_t** get_address_of_columnName_0() { return &___columnName_0; }
	inline void set_columnName_0(String_t* value)
	{
		___columnName_0 = value;
		Il2CppCodeGenWriteBarrier(&___columnName_0, value);
	}

	inline static int32_t get_offset_of_dataTypeName_1() { return static_cast<int32_t>(offsetof(SchemaInfo_t1299863105, ___dataTypeName_1)); }
	inline String_t* get_dataTypeName_1() const { return ___dataTypeName_1; }
	inline String_t** get_address_of_dataTypeName_1() { return &___dataTypeName_1; }
	inline void set_dataTypeName_1(String_t* value)
	{
		___dataTypeName_1 = value;
		Il2CppCodeGenWriteBarrier(&___dataTypeName_1, value);
	}

	inline static int32_t get_offset_of_ordinal_2() { return static_cast<int32_t>(offsetof(SchemaInfo_t1299863105, ___ordinal_2)); }
	inline int32_t get_ordinal_2() const { return ___ordinal_2; }
	inline int32_t* get_address_of_ordinal_2() { return &___ordinal_2; }
	inline void set_ordinal_2(int32_t value)
	{
		___ordinal_2 = value;
	}

	inline static int32_t get_offset_of_fieldType_3() { return static_cast<int32_t>(offsetof(SchemaInfo_t1299863105, ___fieldType_3)); }
	inline Type_t * get_fieldType_3() const { return ___fieldType_3; }
	inline Type_t ** get_address_of_fieldType_3() { return &___fieldType_3; }
	inline void set_fieldType_3(Type_t * value)
	{
		___fieldType_3 = value;
		Il2CppCodeGenWriteBarrier(&___fieldType_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
