#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3000072622;

#include "System_Xml_System_Xml_Schema_XmlSchemaObject1566397180.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAnnotation
struct  XmlSchemaAnnotation_t991420294  : public XmlSchemaObject_t1566397180
{
public:
	// System.String System.Xml.Schema.XmlSchemaAnnotation::id
	String_t* ___id_13;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAnnotation::items
	XmlSchemaObjectCollection_t3000072622 * ___items_14;

public:
	inline static int32_t get_offset_of_id_13() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotation_t991420294, ___id_13)); }
	inline String_t* get_id_13() const { return ___id_13; }
	inline String_t** get_address_of_id_13() { return &___id_13; }
	inline void set_id_13(String_t* value)
	{
		___id_13 = value;
		Il2CppCodeGenWriteBarrier(&___id_13, value);
	}

	inline static int32_t get_offset_of_items_14() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotation_t991420294, ___items_14)); }
	inline XmlSchemaObjectCollection_t3000072622 * get_items_14() const { return ___items_14; }
	inline XmlSchemaObjectCollection_t3000072622 ** get_address_of_items_14() { return &___items_14; }
	inline void set_items_14(XmlSchemaObjectCollection_t3000072622 * value)
	{
		___items_14 = value;
		Il2CppCodeGenWriteBarrier(&___items_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
