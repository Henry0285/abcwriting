#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_EventArgs591428026.h"
#include "System_Data_System_Data_ConnectionState1356093486.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.StateChangeEventArgs
struct  StateChangeEventArgs_t1835024549  : public EventArgs_t591428026
{
public:
	// System.Data.ConnectionState System.Data.StateChangeEventArgs::originalState
	int32_t ___originalState_1;
	// System.Data.ConnectionState System.Data.StateChangeEventArgs::currentState
	int32_t ___currentState_2;

public:
	inline static int32_t get_offset_of_originalState_1() { return static_cast<int32_t>(offsetof(StateChangeEventArgs_t1835024549, ___originalState_1)); }
	inline int32_t get_originalState_1() const { return ___originalState_1; }
	inline int32_t* get_address_of_originalState_1() { return &___originalState_1; }
	inline void set_originalState_1(int32_t value)
	{
		___originalState_1 = value;
	}

	inline static int32_t get_offset_of_currentState_2() { return static_cast<int32_t>(offsetof(StateChangeEventArgs_t1835024549, ___currentState_2)); }
	inline int32_t get_currentState_2() const { return ___currentState_2; }
	inline int32_t* get_address_of_currentState_2() { return &___currentState_2; }
	inline void set_currentState_2(int32_t value)
	{
		___currentState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
