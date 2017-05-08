#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t224878301;
// System.String
struct String_t;
// System.EventHandler
struct EventHandler_t1189809773;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Loading
struct  Loading_t2871513552  : public MonoBehaviour_t774292115
{
public:

public:
};

struct Loading_t2871513552_StaticFields
{
public:
	// UnityEngine.Transform Loading::m_UIBox
	Transform_t224878301 * ___m_UIBox_2;
	// System.Single Loading::m_timeout
	float ___m_timeout_3;
	// System.String Loading::m_task
	String_t* ___m_task_4;
	// System.EventHandler Loading::OnLoadingTimeout
	EventHandler_t1189809773 * ___OnLoadingTimeout_5;

public:
	inline static int32_t get_offset_of_m_UIBox_2() { return static_cast<int32_t>(offsetof(Loading_t2871513552_StaticFields, ___m_UIBox_2)); }
	inline Transform_t224878301 * get_m_UIBox_2() const { return ___m_UIBox_2; }
	inline Transform_t224878301 ** get_address_of_m_UIBox_2() { return &___m_UIBox_2; }
	inline void set_m_UIBox_2(Transform_t224878301 * value)
	{
		___m_UIBox_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_UIBox_2, value);
	}

	inline static int32_t get_offset_of_m_timeout_3() { return static_cast<int32_t>(offsetof(Loading_t2871513552_StaticFields, ___m_timeout_3)); }
	inline float get_m_timeout_3() const { return ___m_timeout_3; }
	inline float* get_address_of_m_timeout_3() { return &___m_timeout_3; }
	inline void set_m_timeout_3(float value)
	{
		___m_timeout_3 = value;
	}

	inline static int32_t get_offset_of_m_task_4() { return static_cast<int32_t>(offsetof(Loading_t2871513552_StaticFields, ___m_task_4)); }
	inline String_t* get_m_task_4() const { return ___m_task_4; }
	inline String_t** get_address_of_m_task_4() { return &___m_task_4; }
	inline void set_m_task_4(String_t* value)
	{
		___m_task_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_task_4, value);
	}

	inline static int32_t get_offset_of_OnLoadingTimeout_5() { return static_cast<int32_t>(offsetof(Loading_t2871513552_StaticFields, ___OnLoadingTimeout_5)); }
	inline EventHandler_t1189809773 * get_OnLoadingTimeout_5() const { return ___OnLoadingTimeout_5; }
	inline EventHandler_t1189809773 ** get_address_of_OnLoadingTimeout_5() { return &___OnLoadingTimeout_5; }
	inline void set_OnLoadingTimeout_5(EventHandler_t1189809773 * value)
	{
		___OnLoadingTimeout_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoadingTimeout_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
