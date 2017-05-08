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
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t2915398427;

#include "System_Data_System_Data_InternalDataCollectionBase1127348851.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowCollection
struct  DataRowCollection_t851321131  : public InternalDataCollectionBase_t1127348851
{
public:
	// System.Data.DataTable System.Data.DataRowCollection::table
	DataTable_t1931745339 * ___table_2;
	// System.ComponentModel.ListChangedEventHandler System.Data.DataRowCollection::ListChanged
	ListChangedEventHandler_t2915398427 * ___ListChanged_3;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(DataRowCollection_t851321131, ___table_2)); }
	inline DataTable_t1931745339 * get_table_2() const { return ___table_2; }
	inline DataTable_t1931745339 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t1931745339 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier(&___table_2, value);
	}

	inline static int32_t get_offset_of_ListChanged_3() { return static_cast<int32_t>(offsetof(DataRowCollection_t851321131, ___ListChanged_3)); }
	inline ListChangedEventHandler_t2915398427 * get_ListChanged_3() const { return ___ListChanged_3; }
	inline ListChangedEventHandler_t2915398427 ** get_address_of_ListChanged_3() { return &___ListChanged_3; }
	inline void set_ListChanged_3(ListChangedEventHandler_t2915398427 * value)
	{
		___ListChanged_3 = value;
		Il2CppCodeGenWriteBarrier(&___ListChanged_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
