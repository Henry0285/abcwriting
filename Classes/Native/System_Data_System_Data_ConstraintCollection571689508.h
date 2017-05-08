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
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t1537071935;

#include "System_Data_System_Data_InternalDataCollectionBase1127348851.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintCollection
struct  ConstraintCollection_t571689508  : public InternalDataCollectionBase_t1127348851
{
public:
	// System.Data.DataTable System.Data.ConstraintCollection::table
	DataTable_t1931745339 * ___table_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.ConstraintCollection::CollectionChanged
	CollectionChangeEventHandler_t1537071935 * ___CollectionChanged_3;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(ConstraintCollection_t571689508, ___table_2)); }
	inline DataTable_t1931745339 * get_table_2() const { return ___table_2; }
	inline DataTable_t1931745339 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t1931745339 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier(&___table_2, value);
	}

	inline static int32_t get_offset_of_CollectionChanged_3() { return static_cast<int32_t>(offsetof(ConstraintCollection_t571689508, ___CollectionChanged_3)); }
	inline CollectionChangeEventHandler_t1537071935 * get_CollectionChanged_3() const { return ___CollectionChanged_3; }
	inline CollectionChangeEventHandler_t1537071935 ** get_address_of_CollectionChanged_3() { return &___CollectionChanged_3; }
	inline void set_CollectionChanged_3(CollectionChangeEventHandler_t1537071935 * value)
	{
		___CollectionChanged_3 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionChanged_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
