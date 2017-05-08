#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t4013751093;
// System.Xml.XmlDocument
struct XmlDocument_t3951480190;
// System.Xml.XmlNode
struct XmlNode_t2483504525;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t3152778740;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t4260152181;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode
struct  XmlNode_t2483504525  : public Il2CppObject
{
public:
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t3951480190 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t2483504525 * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t3152778740 * ___childNodes_3;

public:
	inline static int32_t get_offset_of_ownerDocument_1() { return static_cast<int32_t>(offsetof(XmlNode_t2483504525, ___ownerDocument_1)); }
	inline XmlDocument_t3951480190 * get_ownerDocument_1() const { return ___ownerDocument_1; }
	inline XmlDocument_t3951480190 ** get_address_of_ownerDocument_1() { return &___ownerDocument_1; }
	inline void set_ownerDocument_1(XmlDocument_t3951480190 * value)
	{
		___ownerDocument_1 = value;
		Il2CppCodeGenWriteBarrier(&___ownerDocument_1, value);
	}

	inline static int32_t get_offset_of_parentNode_2() { return static_cast<int32_t>(offsetof(XmlNode_t2483504525, ___parentNode_2)); }
	inline XmlNode_t2483504525 * get_parentNode_2() const { return ___parentNode_2; }
	inline XmlNode_t2483504525 ** get_address_of_parentNode_2() { return &___parentNode_2; }
	inline void set_parentNode_2(XmlNode_t2483504525 * value)
	{
		___parentNode_2 = value;
		Il2CppCodeGenWriteBarrier(&___parentNode_2, value);
	}

	inline static int32_t get_offset_of_childNodes_3() { return static_cast<int32_t>(offsetof(XmlNode_t2483504525, ___childNodes_3)); }
	inline XmlNodeListChildren_t3152778740 * get_childNodes_3() const { return ___childNodes_3; }
	inline XmlNodeListChildren_t3152778740 ** get_address_of_childNodes_3() { return &___childNodes_3; }
	inline void set_childNodes_3(XmlNodeListChildren_t3152778740 * value)
	{
		___childNodes_3 = value;
		Il2CppCodeGenWriteBarrier(&___childNodes_3, value);
	}
};

struct XmlNode_t2483504525_StaticFields
{
public:
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t4013751093 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map2B
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map2B_4;

public:
	inline static int32_t get_offset_of_emptyList_0() { return static_cast<int32_t>(offsetof(XmlNode_t2483504525_StaticFields, ___emptyList_0)); }
	inline EmptyNodeList_t4013751093 * get_emptyList_0() const { return ___emptyList_0; }
	inline EmptyNodeList_t4013751093 ** get_address_of_emptyList_0() { return &___emptyList_0; }
	inline void set_emptyList_0(EmptyNodeList_t4013751093 * value)
	{
		___emptyList_0 = value;
		Il2CppCodeGenWriteBarrier(&___emptyList_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2B_4() { return static_cast<int32_t>(offsetof(XmlNode_t2483504525_StaticFields, ___U3CU3Ef__switchU24map2B_4)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map2B_4() const { return ___U3CU3Ef__switchU24map2B_4; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map2B_4() { return &___U3CU3Ef__switchU24map2B_4; }
	inline void set_U3CU3Ef__switchU24map2B_4(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map2B_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2B_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
