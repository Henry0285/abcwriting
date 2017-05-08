#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t1248472696;
// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "System_Xml_Mono_Xml_Schema_XsdValidationState859292000.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdAllValidationState
struct  XsdAllValidationState_t1341833925  : public XsdValidationState_t859292000
{
public:
	// System.Xml.Schema.XmlSchemaAll Mono.Xml.Schema.XsdAllValidationState::all
	XmlSchemaAll_t1248472696 * ___all_3;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdAllValidationState::consumed
	ArrayList_t1468494371 * ___consumed_4;

public:
	inline static int32_t get_offset_of_all_3() { return static_cast<int32_t>(offsetof(XsdAllValidationState_t1341833925, ___all_3)); }
	inline XmlSchemaAll_t1248472696 * get_all_3() const { return ___all_3; }
	inline XmlSchemaAll_t1248472696 ** get_address_of_all_3() { return &___all_3; }
	inline void set_all_3(XmlSchemaAll_t1248472696 * value)
	{
		___all_3 = value;
		Il2CppCodeGenWriteBarrier(&___all_3, value);
	}

	inline static int32_t get_offset_of_consumed_4() { return static_cast<int32_t>(offsetof(XsdAllValidationState_t1341833925, ___consumed_4)); }
	inline ArrayList_t1468494371 * get_consumed_4() const { return ___consumed_4; }
	inline ArrayList_t1468494371 ** get_address_of_consumed_4() { return &___consumed_4; }
	inline void set_consumed_4(ArrayList_t1468494371 * value)
	{
		___consumed_4 = value;
		Il2CppCodeGenWriteBarrier(&___consumed_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
