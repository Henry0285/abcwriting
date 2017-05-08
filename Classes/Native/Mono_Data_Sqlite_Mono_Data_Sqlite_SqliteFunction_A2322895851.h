#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteFunction/AggregateData
struct  AggregateData_t2322895851  : public Il2CppObject
{
public:
	// System.Int32 Mono.Data.Sqlite.SqliteFunction/AggregateData::_count
	int32_t ____count_0;
	// System.Object Mono.Data.Sqlite.SqliteFunction/AggregateData::_data
	Il2CppObject * ____data_1;

public:
	inline static int32_t get_offset_of__count_0() { return static_cast<int32_t>(offsetof(AggregateData_t2322895851, ____count_0)); }
	inline int32_t get__count_0() const { return ____count_0; }
	inline int32_t* get_address_of__count_0() { return &____count_0; }
	inline void set__count_0(int32_t value)
	{
		____count_0 = value;
	}

	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(AggregateData_t2322895851, ____data_1)); }
	inline Il2CppObject * get__data_1() const { return ____data_1; }
	inline Il2CppObject ** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(Il2CppObject * value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier(&____data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
