#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t3871956436;
// UnityEngine.LineRenderer
struct LineRenderer_t1167044862;

#include "mscorlib_System_ValueType4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InGame/BaseLine
struct  BaseLine_t3549052865 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> InGame/BaseLine::m_lPoints
	List_1_t3871956436 * ___m_lPoints_0;
	// UnityEngine.LineRenderer InGame/BaseLine::m_tLine
	LineRenderer_t1167044862 * ___m_tLine_1;

public:
	inline static int32_t get_offset_of_m_lPoints_0() { return static_cast<int32_t>(offsetof(BaseLine_t3549052865, ___m_lPoints_0)); }
	inline List_1_t3871956436 * get_m_lPoints_0() const { return ___m_lPoints_0; }
	inline List_1_t3871956436 ** get_address_of_m_lPoints_0() { return &___m_lPoints_0; }
	inline void set_m_lPoints_0(List_1_t3871956436 * value)
	{
		___m_lPoints_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_lPoints_0, value);
	}

	inline static int32_t get_offset_of_m_tLine_1() { return static_cast<int32_t>(offsetof(BaseLine_t3549052865, ___m_tLine_1)); }
	inline LineRenderer_t1167044862 * get_m_tLine_1() const { return ___m_tLine_1; }
	inline LineRenderer_t1167044862 ** get_address_of_m_tLine_1() { return &___m_tLine_1; }
	inline void set_m_tLine_1(LineRenderer_t1167044862 * value)
	{
		___m_tLine_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_tLine_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
