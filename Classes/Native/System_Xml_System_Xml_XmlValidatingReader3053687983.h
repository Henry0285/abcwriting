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
// System.Xml.XmlTextReader
struct XmlTextReader_t988926421;
// System.Xml.XmlResolver
struct XmlResolver_t2792156615;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t2930300091;
// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t2192513534;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_t494354767;
// System.Text.StringBuilder
struct StringBuilder_t2393427626;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;

#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_EntityHandling3372455228.h"
#include "System_Xml_System_Xml_ValidationType3328172095.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlValidatingReader
struct  XmlValidatingReader_t3053687983  : public XmlReader_t1154388064
{
public:
	// System.Xml.EntityHandling System.Xml.XmlValidatingReader::entityHandling
	int32_t ___entityHandling_3;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::sourceReader
	XmlReader_t1154388064 * ___sourceReader_4;
	// System.Xml.XmlTextReader System.Xml.XmlValidatingReader::xmlTextReader
	XmlTextReader_t988926421 * ___xmlTextReader_5;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::validatingReader
	XmlReader_t1154388064 * ___validatingReader_6;
	// System.Xml.XmlResolver System.Xml.XmlValidatingReader::resolver
	XmlResolver_t2792156615 * ___resolver_7;
	// System.Boolean System.Xml.XmlValidatingReader::resolverSpecified
	bool ___resolverSpecified_8;
	// System.Xml.ValidationType System.Xml.XmlValidatingReader::validationType
	int32_t ___validationType_9;
	// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::schemas
	XmlSchemaCollection_t2930300091 * ___schemas_10;
	// Mono.Xml.DTDValidatingReader System.Xml.XmlValidatingReader::dtdReader
	DTDValidatingReader_t2192513534 * ___dtdReader_11;
	// Mono.Xml.IHasXmlSchemaInfo System.Xml.XmlValidatingReader::schemaInfo
	Il2CppObject * ___schemaInfo_12;
	// System.Text.StringBuilder System.Xml.XmlValidatingReader::storedCharacters
	StringBuilder_t2393427626 * ___storedCharacters_13;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlValidatingReader::ValidationEventHandler
	ValidationEventHandler_t477176618 * ___ValidationEventHandler_14;

public:
	inline static int32_t get_offset_of_entityHandling_3() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t3053687983, ___entityHandling_3)); }
	inline int32_t get_entityHandling_3() const { return ___entityHandling_3; }
	inline int32_t* get_address_of_entityHandling_3() { return &___entityHandling_3; }
	inline void set_entityHandling_3(int32_t value)
	{
		___entityHandling_3 = value;
	}

	inline static int32_t get_offset_of_sourceReader_4() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t3053687983, ___sourceReader_4)); }
	inline XmlReader_t1154388064 * get_sourceReader_4() const { return ___sourceReader_4; }
	inline XmlReader_t1154388064 ** get_address_of_sourceReader_4() { return &___sourceReader_4; }
	inline void set_sourceReader_4(XmlReader_t1154388064 * value)
	{
		___sourceReader_4 = value;
		Il2CppCodeGenWriteBarrier(&___sourceReader_4, value);
	}

	inline static int32_t get_offset_of_xmlTextReader_5() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t3053687983, ___xmlTextReader_5)); }
	inline XmlTextReader_t988926421 * get_xmlTextReader_5() const { return ___xmlTextReader_5; }
	inline XmlTextReader_t988926421 ** get_address_of_xmlTextReader_5() { return &___xmlTextReader_5; }
	inline void set_xmlTextReader_5(XmlTextReader_t988926421 * value)
	{
		___xmlTextReader_5 = value;
		Il2CppCodeGenWriteBarrier(&___xmlTextReader_5, value);
	}

	inline static int32_t get_offset_of_validatingReader_6() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t3053687983, ___validatingReader_6)); }
	inline XmlReader_t1154388064 * get_validatingReader_6() const { return ___validatingReader_6; }
	inline XmlReader_t1154388064 ** get_address_of_validatingReader_6() { return &___validatingReader_6; }
	inline void set_validatingReader_6(XmlReader_t1154388064 * value)
	{
		___validatingReader_6 = value;
		Il2CppCodeGenWriteBarrier(&___validatingReader_6, value);
	}

	inline static int32_t get_offset_of_resolver_7() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t3053687983, ___resolver_7)); }
	inline XmlResolver_t2792156615 * get_resolver_7() const { return ___resolver_7; }
	inline XmlResolver_t2792156615 ** get_address_of_resolver_7() { return &___resolver_7; }
	inline void set_resolver_7(XmlResolver_t2792156615 * value)
	{
		___resolver_7 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_7, value);
	}

	inline static int32_t get_offset_of_resolverSpecified_8() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t3053687983, ___resolverSpecified_8)); }
	inline bool get_resolverSpecified_8() const { return ___resolverSpecified_8; }
	inline bool* get_address_of_resolverSpecified_8() { return &___resolverSpecified_8; }
	inline void set_resolverSpecified_8(bool value)
	{
		___resolverSpecified_8 = value;
	}

	inline static int32_t get_offset_of_validationType_9() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t3053687983, ___validationType_9)); }
	inline int32_t get_validationType_9() const { return ___validationType_9; }
	inline int32_t* get_address_of_validationType_9() { return &___validationType_9; }
	inline void set_validationType_9(int32_t value)
	{
		___validationType_9 = value;
	}

	inline static int32_t get_offset_of_schemas_10() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t3053687983, ___schemas_10)); }
	inline XmlSchemaCollection_t2930300091 * get_schemas_10() const { return ___schemas_10; }
	inline XmlSchemaCollection_t2930300091 ** get_address_of_schemas_10() { return &___schemas_10; }
	inline void set_schemas_10(XmlSchemaCollection_t2930300091 * value)
	{
		___schemas_10 = value;
		Il2CppCodeGenWriteBarrier(&___schemas_10, value);
	}

	inline static int32_t get_offset_of_dtdReader_11() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t3053687983, ___dtdReader_11)); }
	inline DTDValidatingReader_t2192513534 * get_dtdReader_11() const { return ___dtdReader_11; }
	inline DTDValidatingReader_t2192513534 ** get_address_of_dtdReader_11() { return &___dtdReader_11; }
	inline void set_dtdReader_11(DTDValidatingReader_t2192513534 * value)
	{
		___dtdReader_11 = value;
		Il2CppCodeGenWriteBarrier(&___dtdReader_11, value);
	}

	inline static int32_t get_offset_of_schemaInfo_12() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t3053687983, ___schemaInfo_12)); }
	inline Il2CppObject * get_schemaInfo_12() const { return ___schemaInfo_12; }
	inline Il2CppObject ** get_address_of_schemaInfo_12() { return &___schemaInfo_12; }
	inline void set_schemaInfo_12(Il2CppObject * value)
	{
		___schemaInfo_12 = value;
		Il2CppCodeGenWriteBarrier(&___schemaInfo_12, value);
	}

	inline static int32_t get_offset_of_storedCharacters_13() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t3053687983, ___storedCharacters_13)); }
	inline StringBuilder_t2393427626 * get_storedCharacters_13() const { return ___storedCharacters_13; }
	inline StringBuilder_t2393427626 ** get_address_of_storedCharacters_13() { return &___storedCharacters_13; }
	inline void set_storedCharacters_13(StringBuilder_t2393427626 * value)
	{
		___storedCharacters_13 = value;
		Il2CppCodeGenWriteBarrier(&___storedCharacters_13, value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_14() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t3053687983, ___ValidationEventHandler_14)); }
	inline ValidationEventHandler_t477176618 * get_ValidationEventHandler_14() const { return ___ValidationEventHandler_14; }
	inline ValidationEventHandler_t477176618 ** get_address_of_ValidationEventHandler_14() { return &___ValidationEventHandler_14; }
	inline void set_ValidationEventHandler_14(ValidationEventHandler_t477176618 * value)
	{
		___ValidationEventHandler_14 = value;
		Il2CppCodeGenWriteBarrier(&___ValidationEventHandler_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
