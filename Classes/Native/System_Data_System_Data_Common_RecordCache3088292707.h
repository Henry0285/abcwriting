#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Stack
struct Stack_t3925292378;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3098821942;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.RecordCache
struct  RecordCache_t3088292707  : public Il2CppObject
{
public:
	// System.Collections.Stack System.Data.Common.RecordCache::_records
	Stack_t3925292378 * ____records_0;
	// System.Int32 System.Data.Common.RecordCache::_nextFreeIndex
	int32_t ____nextFreeIndex_1;
	// System.Int32 System.Data.Common.RecordCache::_currentCapacity
	int32_t ____currentCapacity_2;
	// System.Data.DataTable System.Data.Common.RecordCache::_table
	DataTable_t1931745339 * ____table_3;
	// System.Data.DataRow[] System.Data.Common.RecordCache::_rowsToRecords
	DataRowU5BU5D_t3098821942* ____rowsToRecords_4;

public:
	inline static int32_t get_offset_of__records_0() { return static_cast<int32_t>(offsetof(RecordCache_t3088292707, ____records_0)); }
	inline Stack_t3925292378 * get__records_0() const { return ____records_0; }
	inline Stack_t3925292378 ** get_address_of__records_0() { return &____records_0; }
	inline void set__records_0(Stack_t3925292378 * value)
	{
		____records_0 = value;
		Il2CppCodeGenWriteBarrier(&____records_0, value);
	}

	inline static int32_t get_offset_of__nextFreeIndex_1() { return static_cast<int32_t>(offsetof(RecordCache_t3088292707, ____nextFreeIndex_1)); }
	inline int32_t get__nextFreeIndex_1() const { return ____nextFreeIndex_1; }
	inline int32_t* get_address_of__nextFreeIndex_1() { return &____nextFreeIndex_1; }
	inline void set__nextFreeIndex_1(int32_t value)
	{
		____nextFreeIndex_1 = value;
	}

	inline static int32_t get_offset_of__currentCapacity_2() { return static_cast<int32_t>(offsetof(RecordCache_t3088292707, ____currentCapacity_2)); }
	inline int32_t get__currentCapacity_2() const { return ____currentCapacity_2; }
	inline int32_t* get_address_of__currentCapacity_2() { return &____currentCapacity_2; }
	inline void set__currentCapacity_2(int32_t value)
	{
		____currentCapacity_2 = value;
	}

	inline static int32_t get_offset_of__table_3() { return static_cast<int32_t>(offsetof(RecordCache_t3088292707, ____table_3)); }
	inline DataTable_t1931745339 * get__table_3() const { return ____table_3; }
	inline DataTable_t1931745339 ** get_address_of__table_3() { return &____table_3; }
	inline void set__table_3(DataTable_t1931745339 * value)
	{
		____table_3 = value;
		Il2CppCodeGenWriteBarrier(&____table_3, value);
	}

	inline static int32_t get_offset_of__rowsToRecords_4() { return static_cast<int32_t>(offsetof(RecordCache_t3088292707, ____rowsToRecords_4)); }
	inline DataRowU5BU5D_t3098821942* get__rowsToRecords_4() const { return ____rowsToRecords_4; }
	inline DataRowU5BU5D_t3098821942** get_address_of__rowsToRecords_4() { return &____rowsToRecords_4; }
	inline void set__rowsToRecords_4(DataRowU5BU5D_t3098821942* value)
	{
		____rowsToRecords_4 = value;
		Il2CppCodeGenWriteBarrier(&____rowsToRecords_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
