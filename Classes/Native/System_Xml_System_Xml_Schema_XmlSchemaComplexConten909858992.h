#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t1893163649;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3000072622;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3333075425;

#include "System_Xml_System_Xml_Schema_XmlSchemaContent1953237900.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaComplexContentRestriction
struct  XmlSchemaComplexContentRestriction_t909858992  : public XmlSchemaContent_t1953237900
{
public:
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexContentRestriction::any
	XmlSchemaAnyAttribute_t1893163649 * ___any_17;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaComplexContentRestriction::attributes
	XmlSchemaObjectCollection_t3000072622 * ___attributes_18;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexContentRestriction::baseTypeName
	XmlQualifiedName_t3059647944 * ___baseTypeName_19;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexContentRestriction::particle
	XmlSchemaParticle_t3333075425 * ___particle_20;

public:
	inline static int32_t get_offset_of_any_17() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContentRestriction_t909858992, ___any_17)); }
	inline XmlSchemaAnyAttribute_t1893163649 * get_any_17() const { return ___any_17; }
	inline XmlSchemaAnyAttribute_t1893163649 ** get_address_of_any_17() { return &___any_17; }
	inline void set_any_17(XmlSchemaAnyAttribute_t1893163649 * value)
	{
		___any_17 = value;
		Il2CppCodeGenWriteBarrier(&___any_17, value);
	}

	inline static int32_t get_offset_of_attributes_18() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContentRestriction_t909858992, ___attributes_18)); }
	inline XmlSchemaObjectCollection_t3000072622 * get_attributes_18() const { return ___attributes_18; }
	inline XmlSchemaObjectCollection_t3000072622 ** get_address_of_attributes_18() { return &___attributes_18; }
	inline void set_attributes_18(XmlSchemaObjectCollection_t3000072622 * value)
	{
		___attributes_18 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_18, value);
	}

	inline static int32_t get_offset_of_baseTypeName_19() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContentRestriction_t909858992, ___baseTypeName_19)); }
	inline XmlQualifiedName_t3059647944 * get_baseTypeName_19() const { return ___baseTypeName_19; }
	inline XmlQualifiedName_t3059647944 ** get_address_of_baseTypeName_19() { return &___baseTypeName_19; }
	inline void set_baseTypeName_19(XmlQualifiedName_t3059647944 * value)
	{
		___baseTypeName_19 = value;
		Il2CppCodeGenWriteBarrier(&___baseTypeName_19, value);
	}

	inline static int32_t get_offset_of_particle_20() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContentRestriction_t909858992, ___particle_20)); }
	inline XmlSchemaParticle_t3333075425 * get_particle_20() const { return ___particle_20; }
	inline XmlSchemaParticle_t3333075425 ** get_address_of_particle_20() { return &___particle_20; }
	inline void set_particle_20(XmlSchemaParticle_t3333075425 * value)
	{
		___particle_20 = value;
		Il2CppCodeGenWriteBarrier(&___particle_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
