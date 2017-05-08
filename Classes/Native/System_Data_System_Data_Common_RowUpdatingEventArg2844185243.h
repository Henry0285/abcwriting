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
// System.Data.IDbCommand
struct IDbCommand_t3795299841;
// System.Exception
struct Exception_t1145979430;

#include "mscorlib_System_EventArgs591428026.h"
#include "System_Data_System_Data_StatementType1932463478.h"
#include "System_Data_System_Data_UpdateStatus42023486.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.RowUpdatingEventArgs
struct  RowUpdatingEventArgs_t2844185243  : public EventArgs_t591428026
{
public:
	// System.Data.DataRow System.Data.Common.RowUpdatingEventArgs::dataRow
	DataRow_t3422932271 * ___dataRow_1;
	// System.Data.IDbCommand System.Data.Common.RowUpdatingEventArgs::command
	Il2CppObject * ___command_2;
	// System.Data.StatementType System.Data.Common.RowUpdatingEventArgs::statementType
	int32_t ___statementType_3;
	// System.Data.UpdateStatus System.Data.Common.RowUpdatingEventArgs::status
	int32_t ___status_4;
	// System.Exception System.Data.Common.RowUpdatingEventArgs::errors
	Exception_t1145979430 * ___errors_5;

public:
	inline static int32_t get_offset_of_dataRow_1() { return static_cast<int32_t>(offsetof(RowUpdatingEventArgs_t2844185243, ___dataRow_1)); }
	inline DataRow_t3422932271 * get_dataRow_1() const { return ___dataRow_1; }
	inline DataRow_t3422932271 ** get_address_of_dataRow_1() { return &___dataRow_1; }
	inline void set_dataRow_1(DataRow_t3422932271 * value)
	{
		___dataRow_1 = value;
		Il2CppCodeGenWriteBarrier(&___dataRow_1, value);
	}

	inline static int32_t get_offset_of_command_2() { return static_cast<int32_t>(offsetof(RowUpdatingEventArgs_t2844185243, ___command_2)); }
	inline Il2CppObject * get_command_2() const { return ___command_2; }
	inline Il2CppObject ** get_address_of_command_2() { return &___command_2; }
	inline void set_command_2(Il2CppObject * value)
	{
		___command_2 = value;
		Il2CppCodeGenWriteBarrier(&___command_2, value);
	}

	inline static int32_t get_offset_of_statementType_3() { return static_cast<int32_t>(offsetof(RowUpdatingEventArgs_t2844185243, ___statementType_3)); }
	inline int32_t get_statementType_3() const { return ___statementType_3; }
	inline int32_t* get_address_of_statementType_3() { return &___statementType_3; }
	inline void set_statementType_3(int32_t value)
	{
		___statementType_3 = value;
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(RowUpdatingEventArgs_t2844185243, ___status_4)); }
	inline int32_t get_status_4() const { return ___status_4; }
	inline int32_t* get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(int32_t value)
	{
		___status_4 = value;
	}

	inline static int32_t get_offset_of_errors_5() { return static_cast<int32_t>(offsetof(RowUpdatingEventArgs_t2844185243, ___errors_5)); }
	inline Exception_t1145979430 * get_errors_5() const { return ___errors_5; }
	inline Exception_t1145979430 ** get_address_of_errors_5() { return &___errors_5; }
	inline void set_errors_5(Exception_t1145979430 * value)
	{
		___errors_5 = value;
		Il2CppCodeGenWriteBarrier(&___errors_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
