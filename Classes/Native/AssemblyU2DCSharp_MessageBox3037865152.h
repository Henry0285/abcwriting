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

// MessageBox
struct  MessageBox_t3037865152  : public MonoBehaviour_t774292115
{
public:

public:
};

struct MessageBox_t3037865152_StaticFields
{
public:
	// UnityEngine.Transform MessageBox::m_UIBox
	Transform_t224878301 * ___m_UIBox_2;
	// System.String MessageBox::m_sMessageID
	String_t* ___m_sMessageID_3;
	// System.EventHandler MessageBox::OnCloseMsgBox
	EventHandler_t1189809773 * ___OnCloseMsgBox_4;

public:
	inline static int32_t get_offset_of_m_UIBox_2() { return static_cast<int32_t>(offsetof(MessageBox_t3037865152_StaticFields, ___m_UIBox_2)); }
	inline Transform_t224878301 * get_m_UIBox_2() const { return ___m_UIBox_2; }
	inline Transform_t224878301 ** get_address_of_m_UIBox_2() { return &___m_UIBox_2; }
	inline void set_m_UIBox_2(Transform_t224878301 * value)
	{
		___m_UIBox_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_UIBox_2, value);
	}

	inline static int32_t get_offset_of_m_sMessageID_3() { return static_cast<int32_t>(offsetof(MessageBox_t3037865152_StaticFields, ___m_sMessageID_3)); }
	inline String_t* get_m_sMessageID_3() const { return ___m_sMessageID_3; }
	inline String_t** get_address_of_m_sMessageID_3() { return &___m_sMessageID_3; }
	inline void set_m_sMessageID_3(String_t* value)
	{
		___m_sMessageID_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_sMessageID_3, value);
	}

	inline static int32_t get_offset_of_OnCloseMsgBox_4() { return static_cast<int32_t>(offsetof(MessageBox_t3037865152_StaticFields, ___OnCloseMsgBox_4)); }
	inline EventHandler_t1189809773 * get_OnCloseMsgBox_4() const { return ___OnCloseMsgBox_4; }
	inline EventHandler_t1189809773 ** get_address_of_OnCloseMsgBox_4() { return &___OnCloseMsgBox_4; }
	inline void set_OnCloseMsgBox_4(EventHandler_t1189809773 * value)
	{
		___OnCloseMsgBox_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnCloseMsgBox_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
