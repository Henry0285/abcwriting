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

#include "mscorlib_System_ValueType4028081426.h"
#include "System_Data_System_Data_DbType824390233.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteTypeNames
struct  SQLiteTypeNames_t623835509 
{
public:
	// System.String Mono.Data.Sqlite.SQLiteTypeNames::typeName
	String_t* ___typeName_0;
	// System.Data.DbType Mono.Data.Sqlite.SQLiteTypeNames::dataType
	int32_t ___dataType_1;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(SQLiteTypeNames_t623835509, ___typeName_0)); }
	inline String_t* get_typeName_0() const { return ___typeName_0; }
	inline String_t** get_address_of_typeName_0() { return &___typeName_0; }
	inline void set_typeName_0(String_t* value)
	{
		___typeName_0 = value;
		Il2CppCodeGenWriteBarrier(&___typeName_0, value);
	}

	inline static int32_t get_offset_of_dataType_1() { return static_cast<int32_t>(offsetof(SQLiteTypeNames_t623835509, ___dataType_1)); }
	inline int32_t get_dataType_1() const { return ___dataType_1; }
	inline int32_t* get_address_of_dataType_1() { return &___dataType_1; }
	inline void set_dataType_1(int32_t value)
	{
		___dataType_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Mono.Data.Sqlite.SQLiteTypeNames
struct SQLiteTypeNames_t623835509_marshaled_pinvoke
{
	char* ___typeName_0;
	int32_t ___dataType_1;
};
// Native definition for marshalling of: Mono.Data.Sqlite.SQLiteTypeNames
struct SQLiteTypeNames_t623835509_marshaled_com
{
	uint16_t* ___typeName_0;
	int32_t ___dataType_1;
};
