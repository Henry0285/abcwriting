#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t2262508413;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1387769087;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3250505123;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t2397441035;

#include "mscorlib_System_Object707969140.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaValidity281590353.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaInfo
struct  XmlSchemaInfo_t2693321035  : public Il2CppObject
{
public:
	// System.Boolean System.Xml.Schema.XmlSchemaInfo::isDefault
	bool ___isDefault_0;
	// System.Boolean System.Xml.Schema.XmlSchemaInfo::isNil
	bool ___isNil_1;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaInfo::memberType
	XmlSchemaSimpleType_t2262508413 * ___memberType_2;
	// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchemaInfo::attr
	XmlSchemaAttribute_t1387769087 * ___attr_3;
	// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchemaInfo::elem
	XmlSchemaElement_t3250505123 * ___elem_4;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaInfo::type
	XmlSchemaType_t2397441035 * ___type_5;
	// System.Xml.Schema.XmlSchemaValidity System.Xml.Schema.XmlSchemaInfo::validity
	int32_t ___validity_6;

public:
	inline static int32_t get_offset_of_isDefault_0() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_t2693321035, ___isDefault_0)); }
	inline bool get_isDefault_0() const { return ___isDefault_0; }
	inline bool* get_address_of_isDefault_0() { return &___isDefault_0; }
	inline void set_isDefault_0(bool value)
	{
		___isDefault_0 = value;
	}

	inline static int32_t get_offset_of_isNil_1() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_t2693321035, ___isNil_1)); }
	inline bool get_isNil_1() const { return ___isNil_1; }
	inline bool* get_address_of_isNil_1() { return &___isNil_1; }
	inline void set_isNil_1(bool value)
	{
		___isNil_1 = value;
	}

	inline static int32_t get_offset_of_memberType_2() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_t2693321035, ___memberType_2)); }
	inline XmlSchemaSimpleType_t2262508413 * get_memberType_2() const { return ___memberType_2; }
	inline XmlSchemaSimpleType_t2262508413 ** get_address_of_memberType_2() { return &___memberType_2; }
	inline void set_memberType_2(XmlSchemaSimpleType_t2262508413 * value)
	{
		___memberType_2 = value;
		Il2CppCodeGenWriteBarrier(&___memberType_2, value);
	}

	inline static int32_t get_offset_of_attr_3() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_t2693321035, ___attr_3)); }
	inline XmlSchemaAttribute_t1387769087 * get_attr_3() const { return ___attr_3; }
	inline XmlSchemaAttribute_t1387769087 ** get_address_of_attr_3() { return &___attr_3; }
	inline void set_attr_3(XmlSchemaAttribute_t1387769087 * value)
	{
		___attr_3 = value;
		Il2CppCodeGenWriteBarrier(&___attr_3, value);
	}

	inline static int32_t get_offset_of_elem_4() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_t2693321035, ___elem_4)); }
	inline XmlSchemaElement_t3250505123 * get_elem_4() const { return ___elem_4; }
	inline XmlSchemaElement_t3250505123 ** get_address_of_elem_4() { return &___elem_4; }
	inline void set_elem_4(XmlSchemaElement_t3250505123 * value)
	{
		___elem_4 = value;
		Il2CppCodeGenWriteBarrier(&___elem_4, value);
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_t2693321035, ___type_5)); }
	inline XmlSchemaType_t2397441035 * get_type_5() const { return ___type_5; }
	inline XmlSchemaType_t2397441035 ** get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(XmlSchemaType_t2397441035 * value)
	{
		___type_5 = value;
		Il2CppCodeGenWriteBarrier(&___type_5, value);
	}

	inline static int32_t get_offset_of_validity_6() { return static_cast<int32_t>(offsetof(XmlSchemaInfo_t2693321035, ___validity_6)); }
	inline int32_t get_validity_6() const { return ___validity_6; }
	inline int32_t* get_address_of_validity_6() { return &___validity_6; }
	inline void set_validity_6(int32_t value)
	{
		___validity_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
