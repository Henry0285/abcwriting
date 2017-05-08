#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_TimeSpan1834055012.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Transactions.TransactionManager
struct  TransactionManager_t4160690197  : public Il2CppObject
{
public:

public:
};

struct TransactionManager_t4160690197_StaticFields
{
public:
	// System.TimeSpan System.Transactions.TransactionManager::defaultTimeout
	TimeSpan_t1834055012  ___defaultTimeout_0;
	// System.TimeSpan System.Transactions.TransactionManager::maxTimeout
	TimeSpan_t1834055012  ___maxTimeout_1;

public:
	inline static int32_t get_offset_of_defaultTimeout_0() { return static_cast<int32_t>(offsetof(TransactionManager_t4160690197_StaticFields, ___defaultTimeout_0)); }
	inline TimeSpan_t1834055012  get_defaultTimeout_0() const { return ___defaultTimeout_0; }
	inline TimeSpan_t1834055012 * get_address_of_defaultTimeout_0() { return &___defaultTimeout_0; }
	inline void set_defaultTimeout_0(TimeSpan_t1834055012  value)
	{
		___defaultTimeout_0 = value;
	}

	inline static int32_t get_offset_of_maxTimeout_1() { return static_cast<int32_t>(offsetof(TransactionManager_t4160690197_StaticFields, ___maxTimeout_1)); }
	inline TimeSpan_t1834055012  get_maxTimeout_1() const { return ___maxTimeout_1; }
	inline TimeSpan_t1834055012 * get_address_of_maxTimeout_1() { return &___maxTimeout_1; }
	inline void set_maxTimeout_1(TimeSpan_t1834055012  value)
	{
		___maxTimeout_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
