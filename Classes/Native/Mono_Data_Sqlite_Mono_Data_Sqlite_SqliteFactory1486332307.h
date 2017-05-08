#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Data.Sqlite.SqliteFactory
struct SqliteFactory_t1486332307;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;

#include "System_Data_System_Data_Common_DbProviderFactory4104482225.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteFactory
struct  SqliteFactory_t1486332307  : public DbProviderFactory_t4104482225
{
public:

public:
};

struct SqliteFactory_t1486332307_StaticFields
{
public:
	// Mono.Data.Sqlite.SqliteFactory Mono.Data.Sqlite.SqliteFactory::Instance
	SqliteFactory_t1486332307 * ___Instance_0;
	// System.Type Mono.Data.Sqlite.SqliteFactory::_dbProviderServicesType
	Type_t * ____dbProviderServicesType_1;
	// System.Object Mono.Data.Sqlite.SqliteFactory::_sqliteServices
	Il2CppObject * ____sqliteServices_2;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(SqliteFactory_t1486332307_StaticFields, ___Instance_0)); }
	inline SqliteFactory_t1486332307 * get_Instance_0() const { return ___Instance_0; }
	inline SqliteFactory_t1486332307 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(SqliteFactory_t1486332307 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_0, value);
	}

	inline static int32_t get_offset_of__dbProviderServicesType_1() { return static_cast<int32_t>(offsetof(SqliteFactory_t1486332307_StaticFields, ____dbProviderServicesType_1)); }
	inline Type_t * get__dbProviderServicesType_1() const { return ____dbProviderServicesType_1; }
	inline Type_t ** get_address_of__dbProviderServicesType_1() { return &____dbProviderServicesType_1; }
	inline void set__dbProviderServicesType_1(Type_t * value)
	{
		____dbProviderServicesType_1 = value;
		Il2CppCodeGenWriteBarrier(&____dbProviderServicesType_1, value);
	}

	inline static int32_t get_offset_of__sqliteServices_2() { return static_cast<int32_t>(offsetof(SqliteFactory_t1486332307_StaticFields, ____sqliteServices_2)); }
	inline Il2CppObject * get__sqliteServices_2() const { return ____sqliteServices_2; }
	inline Il2CppObject ** get_address_of__sqliteServices_2() { return &____sqliteServices_2; }
	inline void set__sqliteServices_2(Il2CppObject * value)
	{
		____sqliteServices_2 = value;
		Il2CppCodeGenWriteBarrier(&____sqliteServices_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
