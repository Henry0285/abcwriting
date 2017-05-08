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
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Exception
struct Exception_t1145979430;

#include "mscorlib_System_EventArgs591428026.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.FillErrorEventArgs
struct  FillErrorEventArgs_t577193385  : public EventArgs_t591428026
{
public:
	// System.Data.DataTable System.Data.FillErrorEventArgs::data_table
	DataTable_t1931745339 * ___data_table_1;
	// System.Object[] System.Data.FillErrorEventArgs::values
	ObjectU5BU5D_t3632007997* ___values_2;
	// System.Exception System.Data.FillErrorEventArgs::errors
	Exception_t1145979430 * ___errors_3;
	// System.Boolean System.Data.FillErrorEventArgs::f_continue
	bool ___f_continue_4;

public:
	inline static int32_t get_offset_of_data_table_1() { return static_cast<int32_t>(offsetof(FillErrorEventArgs_t577193385, ___data_table_1)); }
	inline DataTable_t1931745339 * get_data_table_1() const { return ___data_table_1; }
	inline DataTable_t1931745339 ** get_address_of_data_table_1() { return &___data_table_1; }
	inline void set_data_table_1(DataTable_t1931745339 * value)
	{
		___data_table_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_table_1, value);
	}

	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(FillErrorEventArgs_t577193385, ___values_2)); }
	inline ObjectU5BU5D_t3632007997* get_values_2() const { return ___values_2; }
	inline ObjectU5BU5D_t3632007997** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(ObjectU5BU5D_t3632007997* value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier(&___values_2, value);
	}

	inline static int32_t get_offset_of_errors_3() { return static_cast<int32_t>(offsetof(FillErrorEventArgs_t577193385, ___errors_3)); }
	inline Exception_t1145979430 * get_errors_3() const { return ___errors_3; }
	inline Exception_t1145979430 ** get_address_of_errors_3() { return &___errors_3; }
	inline void set_errors_3(Exception_t1145979430 * value)
	{
		___errors_3 = value;
		Il2CppCodeGenWriteBarrier(&___errors_3, value);
	}

	inline static int32_t get_offset_of_f_continue_4() { return static_cast<int32_t>(offsetof(FillErrorEventArgs_t577193385, ___f_continue_4)); }
	inline bool get_f_continue_4() const { return ___f_continue_4; }
	inline bool* get_address_of_f_continue_4() { return &___f_continue_4; }
	inline void set_f_continue_4(bool value)
	{
		___f_continue_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
