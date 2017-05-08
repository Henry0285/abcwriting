#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyBub
struct  DestroyBub_t1387223933  : public MonoBehaviour_t774292115
{
public:
	// System.Single DestroyBub::stateTime
	float ___stateTime_2;
	// System.Single DestroyBub::LIVE
	float ___LIVE_3;

public:
	inline static int32_t get_offset_of_stateTime_2() { return static_cast<int32_t>(offsetof(DestroyBub_t1387223933, ___stateTime_2)); }
	inline float get_stateTime_2() const { return ___stateTime_2; }
	inline float* get_address_of_stateTime_2() { return &___stateTime_2; }
	inline void set_stateTime_2(float value)
	{
		___stateTime_2 = value;
	}

	inline static int32_t get_offset_of_LIVE_3() { return static_cast<int32_t>(offsetof(DestroyBub_t1387223933, ___LIVE_3)); }
	inline float get_LIVE_3() const { return ___LIVE_3; }
	inline float* get_address_of_LIVE_3() { return &___LIVE_3; }
	inline void set_LIVE_3(float value)
	{
		___LIVE_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
