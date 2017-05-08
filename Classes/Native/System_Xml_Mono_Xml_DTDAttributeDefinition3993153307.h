﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t2331747099;
// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "System_Xml_Mono_Xml_DTDNode2942778164.h"
#include "System_Xml_Mono_Xml_DTDAttributeOccurenceType2471931239.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDAttributeDefinition
struct  DTDAttributeDefinition_t3993153307  : public DTDNode_t2942778164
{
public:
	// System.String Mono.Xml.DTDAttributeDefinition::name
	String_t* ___name_5;
	// System.Xml.Schema.XmlSchemaDatatype Mono.Xml.DTDAttributeDefinition::datatype
	XmlSchemaDatatype_t2331747099 * ___datatype_6;
	// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::enumeratedLiterals
	ArrayList_t1468494371 * ___enumeratedLiterals_7;
	// System.String Mono.Xml.DTDAttributeDefinition::unresolvedDefault
	String_t* ___unresolvedDefault_8;
	// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::enumeratedNotations
	ArrayList_t1468494371 * ___enumeratedNotations_9;
	// Mono.Xml.DTDAttributeOccurenceType Mono.Xml.DTDAttributeDefinition::occurenceType
	int32_t ___occurenceType_10;
	// System.String Mono.Xml.DTDAttributeDefinition::resolvedDefaultValue
	String_t* ___resolvedDefaultValue_11;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(DTDAttributeDefinition_t3993153307, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier(&___name_5, value);
	}

	inline static int32_t get_offset_of_datatype_6() { return static_cast<int32_t>(offsetof(DTDAttributeDefinition_t3993153307, ___datatype_6)); }
	inline XmlSchemaDatatype_t2331747099 * get_datatype_6() const { return ___datatype_6; }
	inline XmlSchemaDatatype_t2331747099 ** get_address_of_datatype_6() { return &___datatype_6; }
	inline void set_datatype_6(XmlSchemaDatatype_t2331747099 * value)
	{
		___datatype_6 = value;
		Il2CppCodeGenWriteBarrier(&___datatype_6, value);
	}

	inline static int32_t get_offset_of_enumeratedLiterals_7() { return static_cast<int32_t>(offsetof(DTDAttributeDefinition_t3993153307, ___enumeratedLiterals_7)); }
	inline ArrayList_t1468494371 * get_enumeratedLiterals_7() const { return ___enumeratedLiterals_7; }
	inline ArrayList_t1468494371 ** get_address_of_enumeratedLiterals_7() { return &___enumeratedLiterals_7; }
	inline void set_enumeratedLiterals_7(ArrayList_t1468494371 * value)
	{
		___enumeratedLiterals_7 = value;
		Il2CppCodeGenWriteBarrier(&___enumeratedLiterals_7, value);
	}

	inline static int32_t get_offset_of_unresolvedDefault_8() { return static_cast<int32_t>(offsetof(DTDAttributeDefinition_t3993153307, ___unresolvedDefault_8)); }
	inline String_t* get_unresolvedDefault_8() const { return ___unresolvedDefault_8; }
	inline String_t** get_address_of_unresolvedDefault_8() { return &___unresolvedDefault_8; }
	inline void set_unresolvedDefault_8(String_t* value)
	{
		___unresolvedDefault_8 = value;
		Il2CppCodeGenWriteBarrier(&___unresolvedDefault_8, value);
	}

	inline static int32_t get_offset_of_enumeratedNotations_9() { return static_cast<int32_t>(offsetof(DTDAttributeDefinition_t3993153307, ___enumeratedNotations_9)); }
	inline ArrayList_t1468494371 * get_enumeratedNotations_9() const { return ___enumeratedNotations_9; }
	inline ArrayList_t1468494371 ** get_address_of_enumeratedNotations_9() { return &___enumeratedNotations_9; }
	inline void set_enumeratedNotations_9(ArrayList_t1468494371 * value)
	{
		___enumeratedNotations_9 = value;
		Il2CppCodeGenWriteBarrier(&___enumeratedNotations_9, value);
	}

	inline static int32_t get_offset_of_occurenceType_10() { return static_cast<int32_t>(offsetof(DTDAttributeDefinition_t3993153307, ___occurenceType_10)); }
	inline int32_t get_occurenceType_10() const { return ___occurenceType_10; }
	inline int32_t* get_address_of_occurenceType_10() { return &___occurenceType_10; }
	inline void set_occurenceType_10(int32_t value)
	{
		___occurenceType_10 = value;
	}

	inline static int32_t get_offset_of_resolvedDefaultValue_11() { return static_cast<int32_t>(offsetof(DTDAttributeDefinition_t3993153307, ___resolvedDefaultValue_11)); }
	inline String_t* get_resolvedDefaultValue_11() const { return ___resolvedDefaultValue_11; }
	inline String_t** get_address_of_resolvedDefaultValue_11() { return &___resolvedDefaultValue_11; }
	inline void set_resolvedDefaultValue_11(String_t* value)
	{
		___resolvedDefaultValue_11 = value;
		Il2CppCodeGenWriteBarrier(&___resolvedDefaultValue_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif