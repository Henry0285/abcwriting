#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler
struct EventHandler_t1189809773;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimEvents
struct  AnimEvents_t375589348  : public MonoBehaviour_t774292115
{
public:

public:
};

struct AnimEvents_t375589348_StaticFields
{
public:
	// System.EventHandler AnimEvents::OnFinishAnim
	EventHandler_t1189809773 * ___OnFinishAnim_2;

public:
	inline static int32_t get_offset_of_OnFinishAnim_2() { return static_cast<int32_t>(offsetof(AnimEvents_t375589348_StaticFields, ___OnFinishAnim_2)); }
	inline EventHandler_t1189809773 * get_OnFinishAnim_2() const { return ___OnFinishAnim_2; }
	inline EventHandler_t1189809773 ** get_address_of_OnFinishAnim_2() { return &___OnFinishAnim_2; }
	inline void set_OnFinishAnim_2(EventHandler_t1189809773 * value)
	{
		___OnFinishAnim_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnFinishAnim_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
