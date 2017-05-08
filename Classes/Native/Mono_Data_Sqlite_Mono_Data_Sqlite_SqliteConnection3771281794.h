#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<System.WeakReference>
struct Queue_1_t2849883920;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Data.Sqlite.SqliteConnectionPool/Pool
struct  Pool_t3771281794  : public Il2CppObject
{
public:
	// System.Collections.Generic.Queue`1<System.WeakReference> Mono.Data.Sqlite.SqliteConnectionPool/Pool::Queue
	Queue_1_t2849883920 * ___Queue_0;
	// System.Int32 Mono.Data.Sqlite.SqliteConnectionPool/Pool::PoolVersion
	int32_t ___PoolVersion_1;
	// System.Int32 Mono.Data.Sqlite.SqliteConnectionPool/Pool::MaxPoolSize
	int32_t ___MaxPoolSize_2;

public:
	inline static int32_t get_offset_of_Queue_0() { return static_cast<int32_t>(offsetof(Pool_t3771281794, ___Queue_0)); }
	inline Queue_1_t2849883920 * get_Queue_0() const { return ___Queue_0; }
	inline Queue_1_t2849883920 ** get_address_of_Queue_0() { return &___Queue_0; }
	inline void set_Queue_0(Queue_1_t2849883920 * value)
	{
		___Queue_0 = value;
		Il2CppCodeGenWriteBarrier(&___Queue_0, value);
	}

	inline static int32_t get_offset_of_PoolVersion_1() { return static_cast<int32_t>(offsetof(Pool_t3771281794, ___PoolVersion_1)); }
	inline int32_t get_PoolVersion_1() const { return ___PoolVersion_1; }
	inline int32_t* get_address_of_PoolVersion_1() { return &___PoolVersion_1; }
	inline void set_PoolVersion_1(int32_t value)
	{
		___PoolVersion_1 = value;
	}

	inline static int32_t get_offset_of_MaxPoolSize_2() { return static_cast<int32_t>(offsetof(Pool_t3771281794, ___MaxPoolSize_2)); }
	inline int32_t get_MaxPoolSize_2() const { return ___MaxPoolSize_2; }
	inline int32_t* get_address_of_MaxPoolSize_2() { return &___MaxPoolSize_2; }
	inline void set_MaxPoolSize_2(int32_t value)
	{
		___MaxPoolSize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
