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

// ReSizeScreen
struct  ReSizeScreen_t119371640  : public MonoBehaviour_t774292115
{
public:
	// System.Int32 ReSizeScreen::current_width
	int32_t ___current_width_2;
	// System.Int32 ReSizeScreen::current_height
	int32_t ___current_height_3;

public:
	inline static int32_t get_offset_of_current_width_2() { return static_cast<int32_t>(offsetof(ReSizeScreen_t119371640, ___current_width_2)); }
	inline int32_t get_current_width_2() const { return ___current_width_2; }
	inline int32_t* get_address_of_current_width_2() { return &___current_width_2; }
	inline void set_current_width_2(int32_t value)
	{
		___current_width_2 = value;
	}

	inline static int32_t get_offset_of_current_height_3() { return static_cast<int32_t>(offsetof(ReSizeScreen_t119371640, ___current_height_3)); }
	inline int32_t get_current_height_3() const { return ___current_height_3; }
	inline int32_t* get_address_of_current_height_3() { return &___current_height_3; }
	inline void set_current_height_3(int32_t value)
	{
		___current_height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
