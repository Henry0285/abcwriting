#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlInputStream
struct XmlInputStream_t437688047;
// System.Xml.XmlException
struct XmlException_t1578947676;

#include "System_Xml_System_Xml_NonBlockingStreamReader2870272759.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlStreamReader
struct  XmlStreamReader_t2884815324  : public NonBlockingStreamReader_t2870272759
{
public:
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t437688047 * ___input_13;

public:
	inline static int32_t get_offset_of_input_13() { return static_cast<int32_t>(offsetof(XmlStreamReader_t2884815324, ___input_13)); }
	inline XmlInputStream_t437688047 * get_input_13() const { return ___input_13; }
	inline XmlInputStream_t437688047 ** get_address_of_input_13() { return &___input_13; }
	inline void set_input_13(XmlInputStream_t437688047 * value)
	{
		___input_13 = value;
		Il2CppCodeGenWriteBarrier(&___input_13, value);
	}
};

struct XmlStreamReader_t2884815324_StaticFields
{
public:
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t1578947676 * ___invalidDataException_14;

public:
	inline static int32_t get_offset_of_invalidDataException_14() { return static_cast<int32_t>(offsetof(XmlStreamReader_t2884815324_StaticFields, ___invalidDataException_14)); }
	inline XmlException_t1578947676 * get_invalidDataException_14() const { return ___invalidDataException_14; }
	inline XmlException_t1578947676 ** get_address_of_invalidDataException_14() { return &___invalidDataException_14; }
	inline void set_invalidDataException_14(XmlException_t1578947676 * value)
	{
		___invalidDataException_14 = value;
		Il2CppCodeGenWriteBarrier(&___invalidDataException_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
