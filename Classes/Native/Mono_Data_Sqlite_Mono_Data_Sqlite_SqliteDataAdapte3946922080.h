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

#include "System_Data_System_Data_Common_DbDataAdapter3862711131.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteDataAdapter
struct  SqliteDataAdapter_t3946922080  : public DbDataAdapter_t3862711131
{
public:

public:
};

struct SqliteDataAdapter_t3946922080_StaticFields
{
public:
	// System.Object Mono.Data.Sqlite.SqliteDataAdapter::_updatingEventPH
	Il2CppObject * ____updatingEventPH_18;
	// System.Object Mono.Data.Sqlite.SqliteDataAdapter::_updatedEventPH
	Il2CppObject * ____updatedEventPH_19;

public:
	inline static int32_t get_offset_of__updatingEventPH_18() { return static_cast<int32_t>(offsetof(SqliteDataAdapter_t3946922080_StaticFields, ____updatingEventPH_18)); }
	inline Il2CppObject * get__updatingEventPH_18() const { return ____updatingEventPH_18; }
	inline Il2CppObject ** get_address_of__updatingEventPH_18() { return &____updatingEventPH_18; }
	inline void set__updatingEventPH_18(Il2CppObject * value)
	{
		____updatingEventPH_18 = value;
		Il2CppCodeGenWriteBarrier(&____updatingEventPH_18, value);
	}

	inline static int32_t get_offset_of__updatedEventPH_19() { return static_cast<int32_t>(offsetof(SqliteDataAdapter_t3946922080_StaticFields, ____updatedEventPH_19)); }
	inline Il2CppObject * get__updatedEventPH_19() const { return ____updatedEventPH_19; }
	inline Il2CppObject ** get_address_of__updatedEventPH_19() { return &____updatedEventPH_19; }
	inline void set__updatedEventPH_19(Il2CppObject * value)
	{
		____updatedEventPH_19 = value;
		Il2CppCodeGenWriteBarrier(&____updatedEventPH_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
