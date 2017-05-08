#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;

#include "System_Xml_System_Xml_XmlReader1154388064.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaReader
struct  XmlSchemaReader_t1531349100  : public XmlReader_t1154388064
{
public:
	// System.Xml.XmlReader System.Xml.Schema.XmlSchemaReader::reader
	XmlReader_t1154388064 * ___reader_3;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaReader::handler
	ValidationEventHandler_t477176618 * ___handler_4;
	// System.Boolean System.Xml.Schema.XmlSchemaReader::hasLineInfo
	bool ___hasLineInfo_5;

public:
	inline static int32_t get_offset_of_reader_3() { return static_cast<int32_t>(offsetof(XmlSchemaReader_t1531349100, ___reader_3)); }
	inline XmlReader_t1154388064 * get_reader_3() const { return ___reader_3; }
	inline XmlReader_t1154388064 ** get_address_of_reader_3() { return &___reader_3; }
	inline void set_reader_3(XmlReader_t1154388064 * value)
	{
		___reader_3 = value;
		Il2CppCodeGenWriteBarrier(&___reader_3, value);
	}

	inline static int32_t get_offset_of_handler_4() { return static_cast<int32_t>(offsetof(XmlSchemaReader_t1531349100, ___handler_4)); }
	inline ValidationEventHandler_t477176618 * get_handler_4() const { return ___handler_4; }
	inline ValidationEventHandler_t477176618 ** get_address_of_handler_4() { return &___handler_4; }
	inline void set_handler_4(ValidationEventHandler_t477176618 * value)
	{
		___handler_4 = value;
		Il2CppCodeGenWriteBarrier(&___handler_4, value);
	}

	inline static int32_t get_offset_of_hasLineInfo_5() { return static_cast<int32_t>(offsetof(XmlSchemaReader_t1531349100, ___hasLineInfo_5)); }
	inline bool get_hasLineInfo_5() const { return ___hasLineInfo_5; }
	inline bool* get_address_of_hasLineInfo_5() { return &___hasLineInfo_5; }
	inline void set_hasLineInfo_5(bool value)
	{
		___hasLineInfo_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
