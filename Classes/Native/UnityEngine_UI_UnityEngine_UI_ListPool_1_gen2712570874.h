﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct ObjectPool_1_t4106212282;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<System.Int32>>
struct UnityAction_1_t411320003;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ListPool`1<System.Int32>
struct  ListPool_1_t2712570874  : public Il2CppObject
{
public:

public:
};

struct ListPool_1_t2712570874_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::s_ListPool
	ObjectPool_1_t4106212282 * ___s_ListPool_0;
	// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<T>> UnityEngine.UI.ListPool`1::<>f__am$cache1
	UnityAction_1_t411320003 * ___U3CU3Ef__amU24cache1_1;

public:
	inline static int32_t get_offset_of_s_ListPool_0() { return static_cast<int32_t>(offsetof(ListPool_1_t2712570874_StaticFields, ___s_ListPool_0)); }
	inline ObjectPool_1_t4106212282 * get_s_ListPool_0() const { return ___s_ListPool_0; }
	inline ObjectPool_1_t4106212282 ** get_address_of_s_ListPool_0() { return &___s_ListPool_0; }
	inline void set_s_ListPool_0(ObjectPool_1_t4106212282 * value)
	{
		___s_ListPool_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_ListPool_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_1() { return static_cast<int32_t>(offsetof(ListPool_1_t2712570874_StaticFields, ___U3CU3Ef__amU24cache1_1)); }
	inline UnityAction_1_t411320003 * get_U3CU3Ef__amU24cache1_1() const { return ___U3CU3Ef__amU24cache1_1; }
	inline UnityAction_1_t411320003 ** get_address_of_U3CU3Ef__amU24cache1_1() { return &___U3CU3Ef__amU24cache1_1; }
	inline void set_U3CU3Ef__amU24cache1_1(UnityAction_1_t411320003 * value)
	{
		___U3CU3Ef__amU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
