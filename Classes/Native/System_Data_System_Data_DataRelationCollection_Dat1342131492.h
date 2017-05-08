#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataSet
struct DataSet_t646994783;

#include "System_Data_System_Data_DataRelationCollection3900360787.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataSetRelationCollection
struct  DataSetRelationCollection_t1342131492  : public DataRelationCollection_t3900360787
{
public:
	// System.Data.DataSet System.Data.DataRelationCollection/DataSetRelationCollection::dataSet
	DataSet_t646994783 * ___dataSet_5;

public:
	inline static int32_t get_offset_of_dataSet_5() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t1342131492, ___dataSet_5)); }
	inline DataSet_t646994783 * get_dataSet_5() const { return ___dataSet_5; }
	inline DataSet_t646994783 ** get_address_of_dataSet_5() { return &___dataSet_5; }
	inline void set_dataSet_5(DataSet_t646994783 * value)
	{
		___dataSet_5 = value;
		Il2CppCodeGenWriteBarrier(&___dataSet_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
