﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;

#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated850747579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAttributeGroupRef
struct  XmlSchemaAttributeGroupRef_t2225460159  : public XmlSchemaAnnotated_t850747579
{
public:
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttributeGroupRef::refName
	XmlQualifiedName_t3059647944 * ___refName_16;

public:
	inline static int32_t get_offset_of_refName_16() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroupRef_t2225460159, ___refName_16)); }
	inline XmlQualifiedName_t3059647944 * get_refName_16() const { return ___refName_16; }
	inline XmlQualifiedName_t3059647944 ** get_address_of_refName_16() { return &___refName_16; }
	inline void set_refName_16(XmlQualifiedName_t3059647944 * value)
	{
		___refName_16 = value;
		Il2CppCodeGenWriteBarrier(&___refName_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
