﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Collections.Hashtable
struct Hashtable_t1312997718;

#include "mscorlib_System_MarshalByRefObject3870530982.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataTableMappingCollection
struct  DataTableMappingCollection_t845819338  : public MarshalByRefObject_t3870530982
{
public:
	// System.Collections.ArrayList System.Data.Common.DataTableMappingCollection::mappings
	ArrayList_t1468494371 * ___mappings_1;
	// System.Collections.Hashtable System.Data.Common.DataTableMappingCollection::sourceTables
	Hashtable_t1312997718 * ___sourceTables_2;
	// System.Collections.Hashtable System.Data.Common.DataTableMappingCollection::dataSetTables
	Hashtable_t1312997718 * ___dataSetTables_3;

public:
	inline static int32_t get_offset_of_mappings_1() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t845819338, ___mappings_1)); }
	inline ArrayList_t1468494371 * get_mappings_1() const { return ___mappings_1; }
	inline ArrayList_t1468494371 ** get_address_of_mappings_1() { return &___mappings_1; }
	inline void set_mappings_1(ArrayList_t1468494371 * value)
	{
		___mappings_1 = value;
		Il2CppCodeGenWriteBarrier(&___mappings_1, value);
	}

	inline static int32_t get_offset_of_sourceTables_2() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t845819338, ___sourceTables_2)); }
	inline Hashtable_t1312997718 * get_sourceTables_2() const { return ___sourceTables_2; }
	inline Hashtable_t1312997718 ** get_address_of_sourceTables_2() { return &___sourceTables_2; }
	inline void set_sourceTables_2(Hashtable_t1312997718 * value)
	{
		___sourceTables_2 = value;
		Il2CppCodeGenWriteBarrier(&___sourceTables_2, value);
	}

	inline static int32_t get_offset_of_dataSetTables_3() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t845819338, ___dataSetTables_3)); }
	inline Hashtable_t1312997718 * get_dataSetTables_3() const { return ___dataSetTables_3; }
	inline Hashtable_t1312997718 ** get_address_of_dataSetTables_3() { return &___dataSetTables_3; }
	inline void set_dataSetTables_3(Hashtable_t1312997718 * value)
	{
		___dataSetTables_3 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetTables_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
