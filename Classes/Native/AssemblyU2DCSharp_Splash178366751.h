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
// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Splash
struct  Splash_t178366751  : public MonoBehaviour_t774292115
{
public:
	// System.Boolean Splash::m_bCreated
	bool ___m_bCreated_2;
	// UnityEngine.Transform Splash::canvas
	Transform_t224878301 * ___canvas_3;
	// UnityEngine.Transform Splash::message_box
	Transform_t224878301 * ___message_box_4;
	// UnityEngine.Transform Splash::loading
	Transform_t224878301 * ___loading_5;
	// UnityEngine.Transform Splash::music_box
	Transform_t224878301 * ___music_box_6;
	// UnityEngine.GameObject Splash::resize_screen
	GameObject_t1366199518 * ___resize_screen_7;

public:
	inline static int32_t get_offset_of_m_bCreated_2() { return static_cast<int32_t>(offsetof(Splash_t178366751, ___m_bCreated_2)); }
	inline bool get_m_bCreated_2() const { return ___m_bCreated_2; }
	inline bool* get_address_of_m_bCreated_2() { return &___m_bCreated_2; }
	inline void set_m_bCreated_2(bool value)
	{
		___m_bCreated_2 = value;
	}

	inline static int32_t get_offset_of_canvas_3() { return static_cast<int32_t>(offsetof(Splash_t178366751, ___canvas_3)); }
	inline Transform_t224878301 * get_canvas_3() const { return ___canvas_3; }
	inline Transform_t224878301 ** get_address_of_canvas_3() { return &___canvas_3; }
	inline void set_canvas_3(Transform_t224878301 * value)
	{
		___canvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_3, value);
	}

	inline static int32_t get_offset_of_message_box_4() { return static_cast<int32_t>(offsetof(Splash_t178366751, ___message_box_4)); }
	inline Transform_t224878301 * get_message_box_4() const { return ___message_box_4; }
	inline Transform_t224878301 ** get_address_of_message_box_4() { return &___message_box_4; }
	inline void set_message_box_4(Transform_t224878301 * value)
	{
		___message_box_4 = value;
		Il2CppCodeGenWriteBarrier(&___message_box_4, value);
	}

	inline static int32_t get_offset_of_loading_5() { return static_cast<int32_t>(offsetof(Splash_t178366751, ___loading_5)); }
	inline Transform_t224878301 * get_loading_5() const { return ___loading_5; }
	inline Transform_t224878301 ** get_address_of_loading_5() { return &___loading_5; }
	inline void set_loading_5(Transform_t224878301 * value)
	{
		___loading_5 = value;
		Il2CppCodeGenWriteBarrier(&___loading_5, value);
	}

	inline static int32_t get_offset_of_music_box_6() { return static_cast<int32_t>(offsetof(Splash_t178366751, ___music_box_6)); }
	inline Transform_t224878301 * get_music_box_6() const { return ___music_box_6; }
	inline Transform_t224878301 ** get_address_of_music_box_6() { return &___music_box_6; }
	inline void set_music_box_6(Transform_t224878301 * value)
	{
		___music_box_6 = value;
		Il2CppCodeGenWriteBarrier(&___music_box_6, value);
	}

	inline static int32_t get_offset_of_resize_screen_7() { return static_cast<int32_t>(offsetof(Splash_t178366751, ___resize_screen_7)); }
	inline GameObject_t1366199518 * get_resize_screen_7() const { return ___resize_screen_7; }
	inline GameObject_t1366199518 ** get_address_of_resize_screen_7() { return &___resize_screen_7; }
	inline void set_resize_screen_7(GameObject_t1366199518 * value)
	{
		___resize_screen_7 = value;
		Il2CppCodeGenWriteBarrier(&___resize_screen_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
