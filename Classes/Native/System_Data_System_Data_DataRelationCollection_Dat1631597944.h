#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataTable
struct DataTable_t1931745339;

#include "System_Data_System_Data_DataRelationCollection3900360787.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataTableRelationCollection
struct  DataTableRelationCollection_t1631597944  : public DataRelationCollection_t3900360787
{
public:
	// System.Data.DataTable System.Data.DataRelationCollection/DataTableRelationCollection::dataTable
	DataTable_t1931745339 * ___dataTable_5;

public:
	inline static int32_t get_offset_of_dataTable_5() { return static_cast<int32_t>(offsetof(DataTableRelationCollection_t1631597944, ___dataTable_5)); }
	inline DataTable_t1931745339 * get_dataTable_5() const { return ___dataTable_5; }
	inline DataTable_t1931745339 ** get_address_of_dataTable_5() { return &___dataTable_5; }
	inline void set_dataTable_5(DataTable_t1931745339 * value)
	{
		___dataTable_5 = value;
		Il2CppCodeGenWriteBarrier(&___dataTable_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
