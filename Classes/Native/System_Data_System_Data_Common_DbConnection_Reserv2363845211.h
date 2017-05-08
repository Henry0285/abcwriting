#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t3764931161;
// System.Data.DataTable
struct DataTable_t1931745339;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbConnection/ReservedWords
struct  ReservedWords_t2363845211  : public Il2CppObject
{
public:

public:
};

struct ReservedWords_t2363845211_StaticFields
{
public:
	// System.String[] System.Data.Common.DbConnection/ReservedWords::reservedWords
	StringU5BU5D_t3764931161* ___reservedWords_0;
	// System.Data.DataTable System.Data.Common.DbConnection/ReservedWords::instance
	DataTable_t1931745339 * ___instance_1;

public:
	inline static int32_t get_offset_of_reservedWords_0() { return static_cast<int32_t>(offsetof(ReservedWords_t2363845211_StaticFields, ___reservedWords_0)); }
	inline StringU5BU5D_t3764931161* get_reservedWords_0() const { return ___reservedWords_0; }
	inline StringU5BU5D_t3764931161** get_address_of_reservedWords_0() { return &___reservedWords_0; }
	inline void set_reservedWords_0(StringU5BU5D_t3764931161* value)
	{
		___reservedWords_0 = value;
		Il2CppCodeGenWriteBarrier(&___reservedWords_0, value);
	}

	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(ReservedWords_t2363845211_StaticFields, ___instance_1)); }
	inline DataTable_t1931745339 * get_instance_1() const { return ___instance_1; }
	inline DataTable_t1931745339 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(DataTable_t1931745339 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier(&___instance_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
