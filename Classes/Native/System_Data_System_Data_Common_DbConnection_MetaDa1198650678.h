#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.Common.DbConnection/ColumnInfo[]
struct ColumnInfoU5BU5D_t3850757655;
// System.Object[][]
struct ObjectU5BU5DU5BU5D_t1456224048;
// System.Data.DataTable
struct DataTable_t1931745339;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbConnection/MetaDataCollections
struct  MetaDataCollections_t1198650678  : public Il2CppObject
{
public:

public:
};

struct MetaDataCollections_t1198650678_StaticFields
{
public:
	// System.Data.Common.DbConnection/ColumnInfo[] System.Data.Common.DbConnection/MetaDataCollections::columns
	ColumnInfoU5BU5D_t3850757655* ___columns_0;
	// System.Object[][] System.Data.Common.DbConnection/MetaDataCollections::rows
	ObjectU5BU5DU5BU5D_t1456224048* ___rows_1;
	// System.Data.DataTable System.Data.Common.DbConnection/MetaDataCollections::instance
	DataTable_t1931745339 * ___instance_2;

public:
	inline static int32_t get_offset_of_columns_0() { return static_cast<int32_t>(offsetof(MetaDataCollections_t1198650678_StaticFields, ___columns_0)); }
	inline ColumnInfoU5BU5D_t3850757655* get_columns_0() const { return ___columns_0; }
	inline ColumnInfoU5BU5D_t3850757655** get_address_of_columns_0() { return &___columns_0; }
	inline void set_columns_0(ColumnInfoU5BU5D_t3850757655* value)
	{
		___columns_0 = value;
		Il2CppCodeGenWriteBarrier(&___columns_0, value);
	}

	inline static int32_t get_offset_of_rows_1() { return static_cast<int32_t>(offsetof(MetaDataCollections_t1198650678_StaticFields, ___rows_1)); }
	inline ObjectU5BU5DU5BU5D_t1456224048* get_rows_1() const { return ___rows_1; }
	inline ObjectU5BU5DU5BU5D_t1456224048** get_address_of_rows_1() { return &___rows_1; }
	inline void set_rows_1(ObjectU5BU5DU5BU5D_t1456224048* value)
	{
		___rows_1 = value;
		Il2CppCodeGenWriteBarrier(&___rows_1, value);
	}

	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MetaDataCollections_t1198650678_StaticFields, ___instance_2)); }
	inline DataTable_t1931745339 * get_instance_2() const { return ___instance_2; }
	inline DataTable_t1931745339 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(DataTable_t1931745339 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
