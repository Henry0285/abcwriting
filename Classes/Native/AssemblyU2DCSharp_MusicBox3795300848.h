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
// UnityEngine.AudioSource
struct AudioSource_t585923902;
// UnityEngine.UI.Slider
struct Slider_t3374729198;
// UnityEngine.Sprite
struct Sprite_t1118776648;
// UnityEngine.UI.Image
struct Image_t2058862956;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicBox
struct  MusicBox_t3795300848  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.AudioSource MusicBox::bgMusic
	AudioSource_t585923902 * ___bgMusic_3;
	// UnityEngine.UI.Slider MusicBox::sliderMusic
	Slider_t3374729198 * ___sliderMusic_4;
	// UnityEngine.UI.Slider MusicBox::sliderSound
	Slider_t3374729198 * ___sliderSound_5;
	// UnityEngine.Sprite MusicBox::sound
	Sprite_t1118776648 * ___sound_6;
	// UnityEngine.Sprite MusicBox::unSound
	Sprite_t1118776648 * ___unSound_7;
	// UnityEngine.UI.Image MusicBox::imgMusic
	Image_t2058862956 * ___imgMusic_8;
	// UnityEngine.UI.Image MusicBox::imgSound
	Image_t2058862956 * ___imgSound_9;

public:
	inline static int32_t get_offset_of_bgMusic_3() { return static_cast<int32_t>(offsetof(MusicBox_t3795300848, ___bgMusic_3)); }
	inline AudioSource_t585923902 * get_bgMusic_3() const { return ___bgMusic_3; }
	inline AudioSource_t585923902 ** get_address_of_bgMusic_3() { return &___bgMusic_3; }
	inline void set_bgMusic_3(AudioSource_t585923902 * value)
	{
		___bgMusic_3 = value;
		Il2CppCodeGenWriteBarrier(&___bgMusic_3, value);
	}

	inline static int32_t get_offset_of_sliderMusic_4() { return static_cast<int32_t>(offsetof(MusicBox_t3795300848, ___sliderMusic_4)); }
	inline Slider_t3374729198 * get_sliderMusic_4() const { return ___sliderMusic_4; }
	inline Slider_t3374729198 ** get_address_of_sliderMusic_4() { return &___sliderMusic_4; }
	inline void set_sliderMusic_4(Slider_t3374729198 * value)
	{
		___sliderMusic_4 = value;
		Il2CppCodeGenWriteBarrier(&___sliderMusic_4, value);
	}

	inline static int32_t get_offset_of_sliderSound_5() { return static_cast<int32_t>(offsetof(MusicBox_t3795300848, ___sliderSound_5)); }
	inline Slider_t3374729198 * get_sliderSound_5() const { return ___sliderSound_5; }
	inline Slider_t3374729198 ** get_address_of_sliderSound_5() { return &___sliderSound_5; }
	inline void set_sliderSound_5(Slider_t3374729198 * value)
	{
		___sliderSound_5 = value;
		Il2CppCodeGenWriteBarrier(&___sliderSound_5, value);
	}

	inline static int32_t get_offset_of_sound_6() { return static_cast<int32_t>(offsetof(MusicBox_t3795300848, ___sound_6)); }
	inline Sprite_t1118776648 * get_sound_6() const { return ___sound_6; }
	inline Sprite_t1118776648 ** get_address_of_sound_6() { return &___sound_6; }
	inline void set_sound_6(Sprite_t1118776648 * value)
	{
		___sound_6 = value;
		Il2CppCodeGenWriteBarrier(&___sound_6, value);
	}

	inline static int32_t get_offset_of_unSound_7() { return static_cast<int32_t>(offsetof(MusicBox_t3795300848, ___unSound_7)); }
	inline Sprite_t1118776648 * get_unSound_7() const { return ___unSound_7; }
	inline Sprite_t1118776648 ** get_address_of_unSound_7() { return &___unSound_7; }
	inline void set_unSound_7(Sprite_t1118776648 * value)
	{
		___unSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___unSound_7, value);
	}

	inline static int32_t get_offset_of_imgMusic_8() { return static_cast<int32_t>(offsetof(MusicBox_t3795300848, ___imgMusic_8)); }
	inline Image_t2058862956 * get_imgMusic_8() const { return ___imgMusic_8; }
	inline Image_t2058862956 ** get_address_of_imgMusic_8() { return &___imgMusic_8; }
	inline void set_imgMusic_8(Image_t2058862956 * value)
	{
		___imgMusic_8 = value;
		Il2CppCodeGenWriteBarrier(&___imgMusic_8, value);
	}

	inline static int32_t get_offset_of_imgSound_9() { return static_cast<int32_t>(offsetof(MusicBox_t3795300848, ___imgSound_9)); }
	inline Image_t2058862956 * get_imgSound_9() const { return ___imgSound_9; }
	inline Image_t2058862956 ** get_address_of_imgSound_9() { return &___imgSound_9; }
	inline void set_imgSound_9(Image_t2058862956 * value)
	{
		___imgSound_9 = value;
		Il2CppCodeGenWriteBarrier(&___imgSound_9, value);
	}
};

struct MusicBox_t3795300848_StaticFields
{
public:
	// UnityEngine.Transform MusicBox::m_UIBox
	Transform_t224878301 * ___m_UIBox_2;

public:
	inline static int32_t get_offset_of_m_UIBox_2() { return static_cast<int32_t>(offsetof(MusicBox_t3795300848_StaticFields, ___m_UIBox_2)); }
	inline Transform_t224878301 * get_m_UIBox_2() const { return ___m_UIBox_2; }
	inline Transform_t224878301 ** get_address_of_m_UIBox_2() { return &___m_UIBox_2; }
	inline void set_m_UIBox_2(Transform_t224878301 * value)
	{
		___m_UIBox_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_UIBox_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
