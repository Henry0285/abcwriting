#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.IDbCommand
struct IDbCommand_t3795299841;

#include "System_Data_System_Data_Common_DataAdapter456773293.h"
#include "System_Data_System_Data_CommandBehavior371028736.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbDataAdapter
struct  DbDataAdapter_t3862711131  : public DataAdapter_t456773293
{
public:
	// System.Data.CommandBehavior System.Data.Common.DbDataAdapter::_behavior
	int32_t ____behavior_13;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_selectCommand
	Il2CppObject * ____selectCommand_14;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_updateCommand
	Il2CppObject * ____updateCommand_15;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_deleteCommand
	Il2CppObject * ____deleteCommand_16;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_insertCommand
	Il2CppObject * ____insertCommand_17;

public:
	inline static int32_t get_offset_of__behavior_13() { return static_cast<int32_t>(offsetof(DbDataAdapter_t3862711131, ____behavior_13)); }
	inline int32_t get__behavior_13() const { return ____behavior_13; }
	inline int32_t* get_address_of__behavior_13() { return &____behavior_13; }
	inline void set__behavior_13(int32_t value)
	{
		____behavior_13 = value;
	}

	inline static int32_t get_offset_of__selectCommand_14() { return static_cast<int32_t>(offsetof(DbDataAdapter_t3862711131, ____selectCommand_14)); }
	inline Il2CppObject * get__selectCommand_14() const { return ____selectCommand_14; }
	inline Il2CppObject ** get_address_of__selectCommand_14() { return &____selectCommand_14; }
	inline void set__selectCommand_14(Il2CppObject * value)
	{
		____selectCommand_14 = value;
		Il2CppCodeGenWriteBarrier(&____selectCommand_14, value);
	}

	inline static int32_t get_offset_of__updateCommand_15() { return static_cast<int32_t>(offsetof(DbDataAdapter_t3862711131, ____updateCommand_15)); }
	inline Il2CppObject * get__updateCommand_15() const { return ____updateCommand_15; }
	inline Il2CppObject ** get_address_of__updateCommand_15() { return &____updateCommand_15; }
	inline void set__updateCommand_15(Il2CppObject * value)
	{
		____updateCommand_15 = value;
		Il2CppCodeGenWriteBarrier(&____updateCommand_15, value);
	}

	inline static int32_t get_offset_of__deleteCommand_16() { return static_cast<int32_t>(offsetof(DbDataAdapter_t3862711131, ____deleteCommand_16)); }
	inline Il2CppObject * get__deleteCommand_16() const { return ____deleteCommand_16; }
	inline Il2CppObject ** get_address_of__deleteCommand_16() { return &____deleteCommand_16; }
	inline void set__deleteCommand_16(Il2CppObject * value)
	{
		____deleteCommand_16 = value;
		Il2CppCodeGenWriteBarrier(&____deleteCommand_16, value);
	}

	inline static int32_t get_offset_of__insertCommand_17() { return static_cast<int32_t>(offsetof(DbDataAdapter_t3862711131, ____insertCommand_17)); }
	inline Il2CppObject * get__insertCommand_17() const { return ____insertCommand_17; }
	inline Il2CppObject ** get_address_of__insertCommand_17() { return &____insertCommand_17; }
	inline void set__insertCommand_17(Il2CppObject * value)
	{
		____insertCommand_17 = value;
		Il2CppCodeGenWriteBarrier(&____insertCommand_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
