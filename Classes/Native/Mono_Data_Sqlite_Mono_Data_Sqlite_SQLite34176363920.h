#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Data.Sqlite.SqliteConnectionHandle
struct SqliteConnectionHandle_t1221216963;
// System.String
struct String_t;
// Mono.Data.Sqlite.SqliteFunction[]
struct SqliteFunctionU5BU5D_t696207912;

#include "Mono_Data_Sqlite_Mono_Data_Sqlite_SQLiteBase1818895878.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SQLite3
struct  SQLite3_t4176363920  : public SQLiteBase_t1818895878
{
public:
	// Mono.Data.Sqlite.SqliteConnectionHandle Mono.Data.Sqlite.SQLite3::_sql
	SqliteConnectionHandle_t1221216963 * ____sql_14;
	// System.String Mono.Data.Sqlite.SQLite3::_fileName
	String_t* ____fileName_15;
	// System.Boolean Mono.Data.Sqlite.SQLite3::_usePool
	bool ____usePool_16;
	// System.Int32 Mono.Data.Sqlite.SQLite3::_poolVersion
	int32_t ____poolVersion_17;
	// System.Boolean Mono.Data.Sqlite.SQLite3::_buildingSchema
	bool ____buildingSchema_18;
	// Mono.Data.Sqlite.SqliteFunction[] Mono.Data.Sqlite.SQLite3::_functionsArray
	SqliteFunctionU5BU5D_t696207912* ____functionsArray_19;

public:
	inline static int32_t get_offset_of__sql_14() { return static_cast<int32_t>(offsetof(SQLite3_t4176363920, ____sql_14)); }
	inline SqliteConnectionHandle_t1221216963 * get__sql_14() const { return ____sql_14; }
	inline SqliteConnectionHandle_t1221216963 ** get_address_of__sql_14() { return &____sql_14; }
	inline void set__sql_14(SqliteConnectionHandle_t1221216963 * value)
	{
		____sql_14 = value;
		Il2CppCodeGenWriteBarrier(&____sql_14, value);
	}

	inline static int32_t get_offset_of__fileName_15() { return static_cast<int32_t>(offsetof(SQLite3_t4176363920, ____fileName_15)); }
	inline String_t* get__fileName_15() const { return ____fileName_15; }
	inline String_t** get_address_of__fileName_15() { return &____fileName_15; }
	inline void set__fileName_15(String_t* value)
	{
		____fileName_15 = value;
		Il2CppCodeGenWriteBarrier(&____fileName_15, value);
	}

	inline static int32_t get_offset_of__usePool_16() { return static_cast<int32_t>(offsetof(SQLite3_t4176363920, ____usePool_16)); }
	inline bool get__usePool_16() const { return ____usePool_16; }
	inline bool* get_address_of__usePool_16() { return &____usePool_16; }
	inline void set__usePool_16(bool value)
	{
		____usePool_16 = value;
	}

	inline static int32_t get_offset_of__poolVersion_17() { return static_cast<int32_t>(offsetof(SQLite3_t4176363920, ____poolVersion_17)); }
	inline int32_t get__poolVersion_17() const { return ____poolVersion_17; }
	inline int32_t* get_address_of__poolVersion_17() { return &____poolVersion_17; }
	inline void set__poolVersion_17(int32_t value)
	{
		____poolVersion_17 = value;
	}

	inline static int32_t get_offset_of__buildingSchema_18() { return static_cast<int32_t>(offsetof(SQLite3_t4176363920, ____buildingSchema_18)); }
	inline bool get__buildingSchema_18() const { return ____buildingSchema_18; }
	inline bool* get_address_of__buildingSchema_18() { return &____buildingSchema_18; }
	inline void set__buildingSchema_18(bool value)
	{
		____buildingSchema_18 = value;
	}

	inline static int32_t get_offset_of__functionsArray_19() { return static_cast<int32_t>(offsetof(SQLite3_t4176363920, ____functionsArray_19)); }
	inline SqliteFunctionU5BU5D_t696207912* get__functionsArray_19() const { return ____functionsArray_19; }
	inline SqliteFunctionU5BU5D_t696207912** get_address_of__functionsArray_19() { return &____functionsArray_19; }
	inline void set__functionsArray_19(SqliteFunctionU5BU5D_t696207912* value)
	{
		____functionsArray_19 = value;
		Il2CppCodeGenWriteBarrier(&____functionsArray_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
