﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t2262508413;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Object
struct Il2CppObject;

#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleTypeCo2576959910.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaSimpleTypeList
struct  XmlSchemaSimpleTypeList_t2235626845  : public XmlSchemaSimpleTypeContent_t2576959910
{
public:
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeList::itemType
	XmlSchemaSimpleType_t2262508413 * ___itemType_17;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeList::itemTypeName
	XmlQualifiedName_t3059647944 * ___itemTypeName_18;
	// System.Object System.Xml.Schema.XmlSchemaSimpleTypeList::validatedListItemType
	Il2CppObject * ___validatedListItemType_19;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeList::validatedListItemSchemaType
	XmlSchemaSimpleType_t2262508413 * ___validatedListItemSchemaType_20;

public:
	inline static int32_t get_offset_of_itemType_17() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeList_t2235626845, ___itemType_17)); }
	inline XmlSchemaSimpleType_t2262508413 * get_itemType_17() const { return ___itemType_17; }
	inline XmlSchemaSimpleType_t2262508413 ** get_address_of_itemType_17() { return &___itemType_17; }
	inline void set_itemType_17(XmlSchemaSimpleType_t2262508413 * value)
	{
		___itemType_17 = value;
		Il2CppCodeGenWriteBarrier(&___itemType_17, value);
	}

	inline static int32_t get_offset_of_itemTypeName_18() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeList_t2235626845, ___itemTypeName_18)); }
	inline XmlQualifiedName_t3059647944 * get_itemTypeName_18() const { return ___itemTypeName_18; }
	inline XmlQualifiedName_t3059647944 ** get_address_of_itemTypeName_18() { return &___itemTypeName_18; }
	inline void set_itemTypeName_18(XmlQualifiedName_t3059647944 * value)
	{
		___itemTypeName_18 = value;
		Il2CppCodeGenWriteBarrier(&___itemTypeName_18, value);
	}

	inline static int32_t get_offset_of_validatedListItemType_19() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeList_t2235626845, ___validatedListItemType_19)); }
	inline Il2CppObject * get_validatedListItemType_19() const { return ___validatedListItemType_19; }
	inline Il2CppObject ** get_address_of_validatedListItemType_19() { return &___validatedListItemType_19; }
	inline void set_validatedListItemType_19(Il2CppObject * value)
	{
		___validatedListItemType_19 = value;
		Il2CppCodeGenWriteBarrier(&___validatedListItemType_19, value);
	}

	inline static int32_t get_offset_of_validatedListItemSchemaType_20() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeList_t2235626845, ___validatedListItemSchemaType_20)); }
	inline XmlSchemaSimpleType_t2262508413 * get_validatedListItemSchemaType_20() const { return ___validatedListItemSchemaType_20; }
	inline XmlSchemaSimpleType_t2262508413 ** get_address_of_validatedListItemSchemaType_20() { return &___validatedListItemSchemaType_20; }
	inline void set_validatedListItemSchemaType_20(XmlSchemaSimpleType_t2262508413 * value)
	{
		___validatedListItemSchemaType_20 = value;
		Il2CppCodeGenWriteBarrier(&___validatedListItemSchemaType_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
