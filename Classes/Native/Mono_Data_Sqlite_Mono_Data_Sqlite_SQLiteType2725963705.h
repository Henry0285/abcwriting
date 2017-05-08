#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_DbType824390233.h"
#include "Mono_Data_Sqlite_Mono_Data_Sqlite_TypeAffinity422422069.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLiteType
struct  SQLiteType_t2725963705  : public Il2CppObject
{
public:
	// System.Data.DbType Mono.Data.Sqlite.SQLiteType::Type
	int32_t ___Type_0;
	// Mono.Data.Sqlite.TypeAffinity Mono.Data.Sqlite.SQLiteType::Affinity
	int32_t ___Affinity_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(SQLiteType_t2725963705, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Affinity_1() { return static_cast<int32_t>(offsetof(SQLiteType_t2725963705, ___Affinity_1)); }
	inline int32_t get_Affinity_1() const { return ___Affinity_1; }
	inline int32_t* get_address_of_Affinity_1() { return &___Affinity_1; }
	inline void set_Affinity_1(int32_t value)
	{
		___Affinity_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
