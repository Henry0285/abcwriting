#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.LineRenderer
struct LineRenderer_t1167044862;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t3871956436;
// UnityEngine.Transform
struct Transform_t224878301;
// UnityEngine.Material
struct Material_t2197338622;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t3631216940;
// System.Collections.Generic.List`1<InGame/BaseLine>
struct List_1_t2660424208;
// System.Collections.Generic.Dictionary`2<System.String,InGame/BasePoint[]>
struct Dictionary_2_t3311775490;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"
#include "UnityEngine_UnityEngine_Color2250949164.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InGame
struct  InGame_t1325013883  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.LineRenderer InGame::line
	LineRenderer_t1167044862 * ___line_2;
	// System.Boolean InGame::isMousePressed
	bool ___isMousePressed_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> InGame::pointsList
	List_1_t3871956436 * ___pointsList_4;
	// UnityEngine.Vector3 InGame::mousePos
	Vector3_t465617797  ___mousePos_5;
	// UnityEngine.Transform InGame::canvas
	Transform_t224878301 * ___canvas_6;
	// UnityEngine.Material InGame::dot
	Material_t2197338622 * ___dot_7;
	// UnityEngine.GameObject InGame::baseDot
	GameObject_t1366199518 * ___baseDot_8;
	// UnityEngine.Transform InGame::m_oWritingPanel
	Transform_t224878301 * ___m_oWritingPanel_9;
	// UnityEngine.Transform InGame::m_oWritingZone
	Transform_t224878301 * ___m_oWritingZone_10;
	// UnityEngine.Rect InGame::m_rWritingZone
	Rect_t2553848979  ___m_rWritingZone_11;
	// System.Collections.Generic.List`1<UnityEngine.Transform> InGame::m_oDotList
	List_1_t3631216940 * ___m_oDotList_12;
	// System.Collections.Generic.List`1<InGame/BaseLine> InGame::m_oLineList
	List_1_t2660424208 * ___m_oLineList_13;
	// UnityEngine.Color InGame::m_tCurrentColor
	Color_t2250949164  ___m_tCurrentColor_14;
	// UnityEngine.Transform InGame::m_oEndDot
	Transform_t224878301 * ___m_oEndDot_15;
	// System.Collections.Generic.Dictionary`2<System.String,InGame/BasePoint[]> InGame::m_pLetters
	Dictionary_2_t3311775490 * ___m_pLetters_16;

public:
	inline static int32_t get_offset_of_line_2() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___line_2)); }
	inline LineRenderer_t1167044862 * get_line_2() const { return ___line_2; }
	inline LineRenderer_t1167044862 ** get_address_of_line_2() { return &___line_2; }
	inline void set_line_2(LineRenderer_t1167044862 * value)
	{
		___line_2 = value;
		Il2CppCodeGenWriteBarrier(&___line_2, value);
	}

	inline static int32_t get_offset_of_isMousePressed_3() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___isMousePressed_3)); }
	inline bool get_isMousePressed_3() const { return ___isMousePressed_3; }
	inline bool* get_address_of_isMousePressed_3() { return &___isMousePressed_3; }
	inline void set_isMousePressed_3(bool value)
	{
		___isMousePressed_3 = value;
	}

	inline static int32_t get_offset_of_pointsList_4() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___pointsList_4)); }
	inline List_1_t3871956436 * get_pointsList_4() const { return ___pointsList_4; }
	inline List_1_t3871956436 ** get_address_of_pointsList_4() { return &___pointsList_4; }
	inline void set_pointsList_4(List_1_t3871956436 * value)
	{
		___pointsList_4 = value;
		Il2CppCodeGenWriteBarrier(&___pointsList_4, value);
	}

	inline static int32_t get_offset_of_mousePos_5() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___mousePos_5)); }
	inline Vector3_t465617797  get_mousePos_5() const { return ___mousePos_5; }
	inline Vector3_t465617797 * get_address_of_mousePos_5() { return &___mousePos_5; }
	inline void set_mousePos_5(Vector3_t465617797  value)
	{
		___mousePos_5 = value;
	}

	inline static int32_t get_offset_of_canvas_6() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___canvas_6)); }
	inline Transform_t224878301 * get_canvas_6() const { return ___canvas_6; }
	inline Transform_t224878301 ** get_address_of_canvas_6() { return &___canvas_6; }
	inline void set_canvas_6(Transform_t224878301 * value)
	{
		___canvas_6 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_6, value);
	}

	inline static int32_t get_offset_of_dot_7() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___dot_7)); }
	inline Material_t2197338622 * get_dot_7() const { return ___dot_7; }
	inline Material_t2197338622 ** get_address_of_dot_7() { return &___dot_7; }
	inline void set_dot_7(Material_t2197338622 * value)
	{
		___dot_7 = value;
		Il2CppCodeGenWriteBarrier(&___dot_7, value);
	}

	inline static int32_t get_offset_of_baseDot_8() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___baseDot_8)); }
	inline GameObject_t1366199518 * get_baseDot_8() const { return ___baseDot_8; }
	inline GameObject_t1366199518 ** get_address_of_baseDot_8() { return &___baseDot_8; }
	inline void set_baseDot_8(GameObject_t1366199518 * value)
	{
		___baseDot_8 = value;
		Il2CppCodeGenWriteBarrier(&___baseDot_8, value);
	}

	inline static int32_t get_offset_of_m_oWritingPanel_9() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___m_oWritingPanel_9)); }
	inline Transform_t224878301 * get_m_oWritingPanel_9() const { return ___m_oWritingPanel_9; }
	inline Transform_t224878301 ** get_address_of_m_oWritingPanel_9() { return &___m_oWritingPanel_9; }
	inline void set_m_oWritingPanel_9(Transform_t224878301 * value)
	{
		___m_oWritingPanel_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_oWritingPanel_9, value);
	}

	inline static int32_t get_offset_of_m_oWritingZone_10() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___m_oWritingZone_10)); }
	inline Transform_t224878301 * get_m_oWritingZone_10() const { return ___m_oWritingZone_10; }
	inline Transform_t224878301 ** get_address_of_m_oWritingZone_10() { return &___m_oWritingZone_10; }
	inline void set_m_oWritingZone_10(Transform_t224878301 * value)
	{
		___m_oWritingZone_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_oWritingZone_10, value);
	}

	inline static int32_t get_offset_of_m_rWritingZone_11() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___m_rWritingZone_11)); }
	inline Rect_t2553848979  get_m_rWritingZone_11() const { return ___m_rWritingZone_11; }
	inline Rect_t2553848979 * get_address_of_m_rWritingZone_11() { return &___m_rWritingZone_11; }
	inline void set_m_rWritingZone_11(Rect_t2553848979  value)
	{
		___m_rWritingZone_11 = value;
	}

	inline static int32_t get_offset_of_m_oDotList_12() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___m_oDotList_12)); }
	inline List_1_t3631216940 * get_m_oDotList_12() const { return ___m_oDotList_12; }
	inline List_1_t3631216940 ** get_address_of_m_oDotList_12() { return &___m_oDotList_12; }
	inline void set_m_oDotList_12(List_1_t3631216940 * value)
	{
		___m_oDotList_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_oDotList_12, value);
	}

	inline static int32_t get_offset_of_m_oLineList_13() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___m_oLineList_13)); }
	inline List_1_t2660424208 * get_m_oLineList_13() const { return ___m_oLineList_13; }
	inline List_1_t2660424208 ** get_address_of_m_oLineList_13() { return &___m_oLineList_13; }
	inline void set_m_oLineList_13(List_1_t2660424208 * value)
	{
		___m_oLineList_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_oLineList_13, value);
	}

	inline static int32_t get_offset_of_m_tCurrentColor_14() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___m_tCurrentColor_14)); }
	inline Color_t2250949164  get_m_tCurrentColor_14() const { return ___m_tCurrentColor_14; }
	inline Color_t2250949164 * get_address_of_m_tCurrentColor_14() { return &___m_tCurrentColor_14; }
	inline void set_m_tCurrentColor_14(Color_t2250949164  value)
	{
		___m_tCurrentColor_14 = value;
	}

	inline static int32_t get_offset_of_m_oEndDot_15() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___m_oEndDot_15)); }
	inline Transform_t224878301 * get_m_oEndDot_15() const { return ___m_oEndDot_15; }
	inline Transform_t224878301 ** get_address_of_m_oEndDot_15() { return &___m_oEndDot_15; }
	inline void set_m_oEndDot_15(Transform_t224878301 * value)
	{
		___m_oEndDot_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_oEndDot_15, value);
	}

	inline static int32_t get_offset_of_m_pLetters_16() { return static_cast<int32_t>(offsetof(InGame_t1325013883, ___m_pLetters_16)); }
	inline Dictionary_2_t3311775490 * get_m_pLetters_16() const { return ___m_pLetters_16; }
	inline Dictionary_2_t3311775490 ** get_address_of_m_pLetters_16() { return &___m_pLetters_16; }
	inline void set_m_pLetters_16(Dictionary_2_t3311775490 * value)
	{
		___m_pLetters_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_pLetters_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
