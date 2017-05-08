#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataRow
struct DataRow_t3422932271;

#include "mscorlib_System_EventArgs591428026.h"
#include "System_Data_System_Data_DataRowAction1490589201.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowChangeEventArgs
struct  DataRowChangeEventArgs_t1049210364  : public EventArgs_t591428026
{
public:
	// System.Data.DataRow System.Data.DataRowChangeEventArgs::row
	DataRow_t3422932271 * ___row_1;
	// System.Data.DataRowAction System.Data.DataRowChangeEventArgs::action
	int32_t ___action_2;

public:
	inline static int32_t get_offset_of_row_1() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t1049210364, ___row_1)); }
	inline DataRow_t3422932271 * get_row_1() const { return ___row_1; }
	inline DataRow_t3422932271 ** get_address_of_row_1() { return &___row_1; }
	inline void set_row_1(DataRow_t3422932271 * value)
	{
		___row_1 = value;
		Il2CppCodeGenWriteBarrier(&___row_1, value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t1049210364, ___action_2)); }
	inline int32_t get_action_2() const { return ___action_2; }
	inline int32_t* get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(int32_t value)
	{
		___action_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
