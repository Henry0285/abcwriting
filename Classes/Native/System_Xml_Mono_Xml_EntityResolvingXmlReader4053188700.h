#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t4053188700;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Xml.XmlParserContext
struct XmlParserContext_t2532808825;
// System.Xml.XmlResolver
struct XmlResolver_t2792156615;

#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_EntityHandling3372455228.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.EntityResolvingXmlReader
struct  EntityResolvingXmlReader_t4053188700  : public XmlReader_t1154388064
{
public:
	// Mono.Xml.EntityResolvingXmlReader Mono.Xml.EntityResolvingXmlReader::entity
	EntityResolvingXmlReader_t4053188700 * ___entity_3;
	// System.Xml.XmlReader Mono.Xml.EntityResolvingXmlReader::source
	XmlReader_t1154388064 * ___source_4;
	// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::context
	XmlParserContext_t2532808825 * ___context_5;
	// System.Xml.XmlResolver Mono.Xml.EntityResolvingXmlReader::resolver
	XmlResolver_t2792156615 * ___resolver_6;
	// System.Xml.EntityHandling Mono.Xml.EntityResolvingXmlReader::entity_handling
	int32_t ___entity_handling_7;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::entity_inside_attr
	bool ___entity_inside_attr_8;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::inside_attr
	bool ___inside_attr_9;
	// System.Boolean Mono.Xml.EntityResolvingXmlReader::do_resolve
	bool ___do_resolve_10;

public:
	inline static int32_t get_offset_of_entity_3() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4053188700, ___entity_3)); }
	inline EntityResolvingXmlReader_t4053188700 * get_entity_3() const { return ___entity_3; }
	inline EntityResolvingXmlReader_t4053188700 ** get_address_of_entity_3() { return &___entity_3; }
	inline void set_entity_3(EntityResolvingXmlReader_t4053188700 * value)
	{
		___entity_3 = value;
		Il2CppCodeGenWriteBarrier(&___entity_3, value);
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4053188700, ___source_4)); }
	inline XmlReader_t1154388064 * get_source_4() const { return ___source_4; }
	inline XmlReader_t1154388064 ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(XmlReader_t1154388064 * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier(&___source_4, value);
	}

	inline static int32_t get_offset_of_context_5() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4053188700, ___context_5)); }
	inline XmlParserContext_t2532808825 * get_context_5() const { return ___context_5; }
	inline XmlParserContext_t2532808825 ** get_address_of_context_5() { return &___context_5; }
	inline void set_context_5(XmlParserContext_t2532808825 * value)
	{
		___context_5 = value;
		Il2CppCodeGenWriteBarrier(&___context_5, value);
	}

	inline static int32_t get_offset_of_resolver_6() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4053188700, ___resolver_6)); }
	inline XmlResolver_t2792156615 * get_resolver_6() const { return ___resolver_6; }
	inline XmlResolver_t2792156615 ** get_address_of_resolver_6() { return &___resolver_6; }
	inline void set_resolver_6(XmlResolver_t2792156615 * value)
	{
		___resolver_6 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_6, value);
	}

	inline static int32_t get_offset_of_entity_handling_7() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4053188700, ___entity_handling_7)); }
	inline int32_t get_entity_handling_7() const { return ___entity_handling_7; }
	inline int32_t* get_address_of_entity_handling_7() { return &___entity_handling_7; }
	inline void set_entity_handling_7(int32_t value)
	{
		___entity_handling_7 = value;
	}

	inline static int32_t get_offset_of_entity_inside_attr_8() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4053188700, ___entity_inside_attr_8)); }
	inline bool get_entity_inside_attr_8() const { return ___entity_inside_attr_8; }
	inline bool* get_address_of_entity_inside_attr_8() { return &___entity_inside_attr_8; }
	inline void set_entity_inside_attr_8(bool value)
	{
		___entity_inside_attr_8 = value;
	}

	inline static int32_t get_offset_of_inside_attr_9() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4053188700, ___inside_attr_9)); }
	inline bool get_inside_attr_9() const { return ___inside_attr_9; }
	inline bool* get_address_of_inside_attr_9() { return &___inside_attr_9; }
	inline void set_inside_attr_9(bool value)
	{
		___inside_attr_9 = value;
	}

	inline static int32_t get_offset_of_do_resolve_10() { return static_cast<int32_t>(offsetof(EntityResolvingXmlReader_t4053188700, ___do_resolve_10)); }
	inline bool get_do_resolve_10() const { return ___do_resolve_10; }
	inline bool* get_address_of_do_resolve_10() { return &___do_resolve_10; }
	inline void set_do_resolve_10(bool value)
	{
		___do_resolve_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
