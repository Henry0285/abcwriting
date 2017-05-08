#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.DTDNode
struct DTDNode_t2942778164;
// Mono.Xml.DictionaryBase
struct DictionaryBase_t702523163;

#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera3684449523.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g17112764.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DictionaryBase/<>c__Iterator3
struct  U3CU3Ec__Iterator3_t1991389048  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>> Mono.Xml.DictionaryBase/<>c__Iterator3::<$s_50>__0
	Enumerator_t3684449523  ___U3CU24s_50U3E__0_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode> Mono.Xml.DictionaryBase/<>c__Iterator3::<p>__1
	KeyValuePair_2_t17112764  ___U3CpU3E__1_1;
	// System.Int32 Mono.Xml.DictionaryBase/<>c__Iterator3::$PC
	int32_t ___U24PC_2;
	// Mono.Xml.DTDNode Mono.Xml.DictionaryBase/<>c__Iterator3::$current
	DTDNode_t2942778164 * ___U24current_3;
	// Mono.Xml.DictionaryBase Mono.Xml.DictionaryBase/<>c__Iterator3::<>f__this
	DictionaryBase_t702523163 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CU24s_50U3E__0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator3_t1991389048, ___U3CU24s_50U3E__0_0)); }
	inline Enumerator_t3684449523  get_U3CU24s_50U3E__0_0() const { return ___U3CU24s_50U3E__0_0; }
	inline Enumerator_t3684449523 * get_address_of_U3CU24s_50U3E__0_0() { return &___U3CU24s_50U3E__0_0; }
	inline void set_U3CU24s_50U3E__0_0(Enumerator_t3684449523  value)
	{
		___U3CU24s_50U3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CpU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator3_t1991389048, ___U3CpU3E__1_1)); }
	inline KeyValuePair_2_t17112764  get_U3CpU3E__1_1() const { return ___U3CpU3E__1_1; }
	inline KeyValuePair_2_t17112764 * get_address_of_U3CpU3E__1_1() { return &___U3CpU3E__1_1; }
	inline void set_U3CpU3E__1_1(KeyValuePair_2_t17112764  value)
	{
		___U3CpU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator3_t1991389048, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator3_t1991389048, ___U24current_3)); }
	inline DTDNode_t2942778164 * get_U24current_3() const { return ___U24current_3; }
	inline DTDNode_t2942778164 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(DTDNode_t2942778164 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator3_t1991389048, ___U3CU3Ef__this_4)); }
	inline DictionaryBase_t702523163 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline DictionaryBase_t702523163 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(DictionaryBase_t702523163 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
