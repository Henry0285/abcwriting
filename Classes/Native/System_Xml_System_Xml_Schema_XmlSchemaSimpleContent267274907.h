﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t1893163649;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3000072622;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;

#include "System_Xml_System_Xml_Schema_XmlSchemaContent1953237900.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaSimpleContentExtension
struct  XmlSchemaSimpleContentExtension_t267274907  : public XmlSchemaContent_t1953237900
{
public:
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaSimpleContentExtension::any
	XmlSchemaAnyAttribute_t1893163649 * ___any_17;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleContentExtension::attributes
	XmlSchemaObjectCollection_t3000072622 * ___attributes_18;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::baseTypeName
	XmlQualifiedName_t3059647944 * ___baseTypeName_19;

public:
	inline static int32_t get_offset_of_any_17() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContentExtension_t267274907, ___any_17)); }
	inline XmlSchemaAnyAttribute_t1893163649 * get_any_17() const { return ___any_17; }
	inline XmlSchemaAnyAttribute_t1893163649 ** get_address_of_any_17() { return &___any_17; }
	inline void set_any_17(XmlSchemaAnyAttribute_t1893163649 * value)
	{
		___any_17 = value;
		Il2CppCodeGenWriteBarrier(&___any_17, value);
	}

	inline static int32_t get_offset_of_attributes_18() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContentExtension_t267274907, ___attributes_18)); }
	inline XmlSchemaObjectCollection_t3000072622 * get_attributes_18() const { return ___attributes_18; }
	inline XmlSchemaObjectCollection_t3000072622 ** get_address_of_attributes_18() { return &___attributes_18; }
	inline void set_attributes_18(XmlSchemaObjectCollection_t3000072622 * value)
	{
		___attributes_18 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_18, value);
	}

	inline static int32_t get_offset_of_baseTypeName_19() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleContentExtension_t267274907, ___baseTypeName_19)); }
	inline XmlQualifiedName_t3059647944 * get_baseTypeName_19() const { return ___baseTypeName_19; }
	inline XmlQualifiedName_t3059647944 ** get_address_of_baseTypeName_19() { return &___baseTypeName_19; }
	inline void set_baseTypeName_19(XmlQualifiedName_t3059647944 * value)
	{
		___baseTypeName_19 = value;
		Il2CppCodeGenWriteBarrier(&___baseTypeName_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
