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

#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SqliteConvert1641943084.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteBase
struct  SQLiteBase_t1818895878  : public SqliteConvert_t1641943084
{
public:

public:
};

struct SQLiteBase_t1818895878_StaticFields
{
public:
	// System.Object Mono.Data.Sqlite.SQLiteBase::_lock
	Il2CppObject * ____lock_13;

public:
	inline static int32_t get_offset_of__lock_13() { return static_cast<int32_t>(offsetof(SQLiteBase_t1818895878_StaticFields, ____lock_13)); }
	inline Il2CppObject * get__lock_13() const { return ____lock_13; }
	inline Il2CppObject ** get_address_of__lock_13() { return &____lock_13; }
	inline void set__lock_13(Il2CppObject * value)
	{
		____lock_13 = value;
		Il2CppCodeGenWriteBarrier(&____lock_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
