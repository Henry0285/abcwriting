﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3000072622;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t3440695740;
// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t2917705191;

#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated850747579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaIdentityConstraint
struct  XmlSchemaIdentityConstraint_t890085650  : public XmlSchemaAnnotated_t850747579
{
public:
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaIdentityConstraint::fields
	XmlSchemaObjectCollection_t3000072622 * ___fields_16;
	// System.String System.Xml.Schema.XmlSchemaIdentityConstraint::name
	String_t* ___name_17;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaIdentityConstraint::qName
	XmlQualifiedName_t3059647944 * ___qName_18;
	// System.Xml.Schema.XmlSchemaXPath System.Xml.Schema.XmlSchemaIdentityConstraint::selector
	XmlSchemaXPath_t3440695740 * ___selector_19;
	// Mono.Xml.Schema.XsdIdentitySelector System.Xml.Schema.XmlSchemaIdentityConstraint::compiledSelector
	XsdIdentitySelector_t2917705191 * ___compiledSelector_20;

public:
	inline static int32_t get_offset_of_fields_16() { return static_cast<int32_t>(offsetof(XmlSchemaIdentityConstraint_t890085650, ___fields_16)); }
	inline XmlSchemaObjectCollection_t3000072622 * get_fields_16() const { return ___fields_16; }
	inline XmlSchemaObjectCollection_t3000072622 ** get_address_of_fields_16() { return &___fields_16; }
	inline void set_fields_16(XmlSchemaObjectCollection_t3000072622 * value)
	{
		___fields_16 = value;
		Il2CppCodeGenWriteBarrier(&___fields_16, value);
	}

	inline static int32_t get_offset_of_name_17() { return static_cast<int32_t>(offsetof(XmlSchemaIdentityConstraint_t890085650, ___name_17)); }
	inline String_t* get_name_17() const { return ___name_17; }
	inline String_t** get_address_of_name_17() { return &___name_17; }
	inline void set_name_17(String_t* value)
	{
		___name_17 = value;
		Il2CppCodeGenWriteBarrier(&___name_17, value);
	}

	inline static int32_t get_offset_of_qName_18() { return static_cast<int32_t>(offsetof(XmlSchemaIdentityConstraint_t890085650, ___qName_18)); }
	inline XmlQualifiedName_t3059647944 * get_qName_18() const { return ___qName_18; }
	inline XmlQualifiedName_t3059647944 ** get_address_of_qName_18() { return &___qName_18; }
	inline void set_qName_18(XmlQualifiedName_t3059647944 * value)
	{
		___qName_18 = value;
		Il2CppCodeGenWriteBarrier(&___qName_18, value);
	}

	inline static int32_t get_offset_of_selector_19() { return static_cast<int32_t>(offsetof(XmlSchemaIdentityConstraint_t890085650, ___selector_19)); }
	inline XmlSchemaXPath_t3440695740 * get_selector_19() const { return ___selector_19; }
	inline XmlSchemaXPath_t3440695740 ** get_address_of_selector_19() { return &___selector_19; }
	inline void set_selector_19(XmlSchemaXPath_t3440695740 * value)
	{
		___selector_19 = value;
		Il2CppCodeGenWriteBarrier(&___selector_19, value);
	}

	inline static int32_t get_offset_of_compiledSelector_20() { return static_cast<int32_t>(offsetof(XmlSchemaIdentityConstraint_t890085650, ___compiledSelector_20)); }
	inline XsdIdentitySelector_t2917705191 * get_compiledSelector_20() const { return ___compiledSelector_20; }
	inline XsdIdentitySelector_t2917705191 ** get_address_of_compiledSelector_20() { return &___compiledSelector_20; }
	inline void set_compiledSelector_20(XsdIdentitySelector_t2917705191 * value)
	{
		___compiledSelector_20 = value;
		Il2CppCodeGenWriteBarrier(&___compiledSelector_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
