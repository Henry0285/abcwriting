#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.SortedList`2<System.String,Mono.Data.Sqlite.SqliteConnectionPool/Pool>
struct SortedList_2_t602404847;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteConnectionPool
struct  SqliteConnectionPool_t2288531699  : public Il2CppObject
{
public:

public:
};

struct SqliteConnectionPool_t2288531699_StaticFields
{
public:
	// System.Collections.Generic.SortedList`2<System.String,Mono.Data.Sqlite.SqliteConnectionPool/Pool> Mono.Data.Sqlite.SqliteConnectionPool::_connections
	SortedList_2_t602404847 * ____connections_0;
	// System.Int32 Mono.Data.Sqlite.SqliteConnectionPool::_poolVersion
	int32_t ____poolVersion_1;

public:
	inline static int32_t get_offset_of__connections_0() { return static_cast<int32_t>(offsetof(SqliteConnectionPool_t2288531699_StaticFields, ____connections_0)); }
	inline SortedList_2_t602404847 * get__connections_0() const { return ____connections_0; }
	inline SortedList_2_t602404847 ** get_address_of__connections_0() { return &____connections_0; }
	inline void set__connections_0(SortedList_2_t602404847 * value)
	{
		____connections_0 = value;
		Il2CppCodeGenWriteBarrier(&____connections_0, value);
	}

	inline static int32_t get_offset_of__poolVersion_1() { return static_cast<int32_t>(offsetof(SqliteConnectionPool_t2288531699_StaticFields, ____poolVersion_1)); }
	inline int32_t get__poolVersion_1() const { return ____poolVersion_1; }
	inline int32_t* get_address_of__poolVersion_1() { return &____poolVersion_1; }
	inline void set__poolVersion_1(int32_t value)
	{
		____poolVersion_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
