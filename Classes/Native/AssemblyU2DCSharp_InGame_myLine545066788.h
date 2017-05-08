#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4028081426.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InGame/myLine
struct  myLine_t545066788 
{
public:
	// UnityEngine.Vector3 InGame/myLine::StartPoint
	Vector3_t465617797  ___StartPoint_0;
	// UnityEngine.Vector3 InGame/myLine::EndPoint
	Vector3_t465617797  ___EndPoint_1;

public:
	inline static int32_t get_offset_of_StartPoint_0() { return static_cast<int32_t>(offsetof(myLine_t545066788, ___StartPoint_0)); }
	inline Vector3_t465617797  get_StartPoint_0() const { return ___StartPoint_0; }
	inline Vector3_t465617797 * get_address_of_StartPoint_0() { return &___StartPoint_0; }
	inline void set_StartPoint_0(Vector3_t465617797  value)
	{
		___StartPoint_0 = value;
	}

	inline static int32_t get_offset_of_EndPoint_1() { return static_cast<int32_t>(offsetof(myLine_t545066788, ___EndPoint_1)); }
	inline Vector3_t465617797  get_EndPoint_1() const { return ___EndPoint_1; }
	inline Vector3_t465617797 * get_address_of_EndPoint_1() { return &___EndPoint_1; }
	inline void set_EndPoint_1(Vector3_t465617797  value)
	{
		___EndPoint_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: InGame/myLine
struct myLine_t545066788_marshaled_pinvoke
{
	Vector3_t465617797_marshaled_pinvoke ___StartPoint_0;
	Vector3_t465617797_marshaled_pinvoke ___EndPoint_1;
};
// Native definition for marshalling of: InGame/myLine
struct myLine_t545066788_marshaled_com
{
	Vector3_t465617797_marshaled_com ___StartPoint_0;
	Vector3_t465617797_marshaled_com ___EndPoint_1;
};
