#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlElement
struct XmlElement_t2049349347;
// System.Xml.XmlDocument
struct XmlDocument_t3951480190;

#include "System_Xml_System_Xml_XmlNamedNodeMap1479692862.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlAttributeCollection
struct  XmlAttributeCollection_t316354535  : public XmlNamedNodeMap_t1479692862
{
public:
	// System.Xml.XmlElement System.Xml.XmlAttributeCollection::ownerElement
	XmlElement_t2049349347 * ___ownerElement_4;
	// System.Xml.XmlDocument System.Xml.XmlAttributeCollection::ownerDocument
	XmlDocument_t3951480190 * ___ownerDocument_5;

public:
	inline static int32_t get_offset_of_ownerElement_4() { return static_cast<int32_t>(offsetof(XmlAttributeCollection_t316354535, ___ownerElement_4)); }
	inline XmlElement_t2049349347 * get_ownerElement_4() const { return ___ownerElement_4; }
	inline XmlElement_t2049349347 ** get_address_of_ownerElement_4() { return &___ownerElement_4; }
	inline void set_ownerElement_4(XmlElement_t2049349347 * value)
	{
		___ownerElement_4 = value;
		Il2CppCodeGenWriteBarrier(&___ownerElement_4, value);
	}

	inline static int32_t get_offset_of_ownerDocument_5() { return static_cast<int32_t>(offsetof(XmlAttributeCollection_t316354535, ___ownerDocument_5)); }
	inline XmlDocument_t3951480190 * get_ownerDocument_5() const { return ___ownerDocument_5; }
	inline XmlDocument_t3951480190 ** get_address_of_ownerDocument_5() { return &___ownerDocument_5; }
	inline void set_ownerDocument_5(XmlDocument_t3951480190 * value)
	{
		___ownerDocument_5 = value;
		Il2CppCodeGenWriteBarrier(&___ownerDocument_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
