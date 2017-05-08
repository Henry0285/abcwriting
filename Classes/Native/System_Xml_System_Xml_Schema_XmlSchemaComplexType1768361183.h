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
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t2095492222;
// System.Xml.Schema.XmlSchemaContentModel
struct XmlSchemaContentModel_t1295461037;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3333075425;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1768361183;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;

#include "System_Xml_System_Xml_Schema_XmlSchemaType2397441035.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe1943985395.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentType2181579932.h"
#include "mscorlib_System_Guid756539922.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaComplexType
struct  XmlSchemaComplexType_t1768361183  : public XmlSchemaType_t2397441035
{
public:
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexType::anyAttribute
	XmlSchemaAnyAttribute_t1893163649 * ___anyAttribute_28;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaComplexType::attributes
	XmlSchemaObjectCollection_t3000072622 * ___attributes_29;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaComplexType::attributeUses
	XmlSchemaObjectTable_t2095492222 * ___attributeUses_30;
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexType::attributeWildcard
	XmlSchemaAnyAttribute_t1893163649 * ___attributeWildcard_31;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaComplexType::block
	int32_t ___block_32;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaComplexType::blockResolved
	int32_t ___blockResolved_33;
	// System.Xml.Schema.XmlSchemaContentModel System.Xml.Schema.XmlSchemaComplexType::contentModel
	XmlSchemaContentModel_t1295461037 * ___contentModel_34;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexType::validatableParticle
	XmlSchemaParticle_t3333075425 * ___validatableParticle_35;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexType::contentTypeParticle
	XmlSchemaParticle_t3333075425 * ___contentTypeParticle_36;
	// System.Boolean System.Xml.Schema.XmlSchemaComplexType::isAbstract
	bool ___isAbstract_37;
	// System.Boolean System.Xml.Schema.XmlSchemaComplexType::isMixed
	bool ___isMixed_38;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexType::particle
	XmlSchemaParticle_t3333075425 * ___particle_39;
	// System.Xml.Schema.XmlSchemaContentType System.Xml.Schema.XmlSchemaComplexType::resolvedContentType
	int32_t ___resolvedContentType_40;
	// System.Boolean System.Xml.Schema.XmlSchemaComplexType::ValidatedIsAbstract
	bool ___ValidatedIsAbstract_41;
	// System.Guid System.Xml.Schema.XmlSchemaComplexType::CollectProcessId
	Guid_t756539922  ___CollectProcessId_44;

public:
	inline static int32_t get_offset_of_anyAttribute_28() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___anyAttribute_28)); }
	inline XmlSchemaAnyAttribute_t1893163649 * get_anyAttribute_28() const { return ___anyAttribute_28; }
	inline XmlSchemaAnyAttribute_t1893163649 ** get_address_of_anyAttribute_28() { return &___anyAttribute_28; }
	inline void set_anyAttribute_28(XmlSchemaAnyAttribute_t1893163649 * value)
	{
		___anyAttribute_28 = value;
		Il2CppCodeGenWriteBarrier(&___anyAttribute_28, value);
	}

	inline static int32_t get_offset_of_attributes_29() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___attributes_29)); }
	inline XmlSchemaObjectCollection_t3000072622 * get_attributes_29() const { return ___attributes_29; }
	inline XmlSchemaObjectCollection_t3000072622 ** get_address_of_attributes_29() { return &___attributes_29; }
	inline void set_attributes_29(XmlSchemaObjectCollection_t3000072622 * value)
	{
		___attributes_29 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_29, value);
	}

	inline static int32_t get_offset_of_attributeUses_30() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___attributeUses_30)); }
	inline XmlSchemaObjectTable_t2095492222 * get_attributeUses_30() const { return ___attributeUses_30; }
	inline XmlSchemaObjectTable_t2095492222 ** get_address_of_attributeUses_30() { return &___attributeUses_30; }
	inline void set_attributeUses_30(XmlSchemaObjectTable_t2095492222 * value)
	{
		___attributeUses_30 = value;
		Il2CppCodeGenWriteBarrier(&___attributeUses_30, value);
	}

	inline static int32_t get_offset_of_attributeWildcard_31() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___attributeWildcard_31)); }
	inline XmlSchemaAnyAttribute_t1893163649 * get_attributeWildcard_31() const { return ___attributeWildcard_31; }
	inline XmlSchemaAnyAttribute_t1893163649 ** get_address_of_attributeWildcard_31() { return &___attributeWildcard_31; }
	inline void set_attributeWildcard_31(XmlSchemaAnyAttribute_t1893163649 * value)
	{
		___attributeWildcard_31 = value;
		Il2CppCodeGenWriteBarrier(&___attributeWildcard_31, value);
	}

	inline static int32_t get_offset_of_block_32() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___block_32)); }
	inline int32_t get_block_32() const { return ___block_32; }
	inline int32_t* get_address_of_block_32() { return &___block_32; }
	inline void set_block_32(int32_t value)
	{
		___block_32 = value;
	}

	inline static int32_t get_offset_of_blockResolved_33() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___blockResolved_33)); }
	inline int32_t get_blockResolved_33() const { return ___blockResolved_33; }
	inline int32_t* get_address_of_blockResolved_33() { return &___blockResolved_33; }
	inline void set_blockResolved_33(int32_t value)
	{
		___blockResolved_33 = value;
	}

	inline static int32_t get_offset_of_contentModel_34() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___contentModel_34)); }
	inline XmlSchemaContentModel_t1295461037 * get_contentModel_34() const { return ___contentModel_34; }
	inline XmlSchemaContentModel_t1295461037 ** get_address_of_contentModel_34() { return &___contentModel_34; }
	inline void set_contentModel_34(XmlSchemaContentModel_t1295461037 * value)
	{
		___contentModel_34 = value;
		Il2CppCodeGenWriteBarrier(&___contentModel_34, value);
	}

	inline static int32_t get_offset_of_validatableParticle_35() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___validatableParticle_35)); }
	inline XmlSchemaParticle_t3333075425 * get_validatableParticle_35() const { return ___validatableParticle_35; }
	inline XmlSchemaParticle_t3333075425 ** get_address_of_validatableParticle_35() { return &___validatableParticle_35; }
	inline void set_validatableParticle_35(XmlSchemaParticle_t3333075425 * value)
	{
		___validatableParticle_35 = value;
		Il2CppCodeGenWriteBarrier(&___validatableParticle_35, value);
	}

	inline static int32_t get_offset_of_contentTypeParticle_36() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___contentTypeParticle_36)); }
	inline XmlSchemaParticle_t3333075425 * get_contentTypeParticle_36() const { return ___contentTypeParticle_36; }
	inline XmlSchemaParticle_t3333075425 ** get_address_of_contentTypeParticle_36() { return &___contentTypeParticle_36; }
	inline void set_contentTypeParticle_36(XmlSchemaParticle_t3333075425 * value)
	{
		___contentTypeParticle_36 = value;
		Il2CppCodeGenWriteBarrier(&___contentTypeParticle_36, value);
	}

	inline static int32_t get_offset_of_isAbstract_37() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___isAbstract_37)); }
	inline bool get_isAbstract_37() const { return ___isAbstract_37; }
	inline bool* get_address_of_isAbstract_37() { return &___isAbstract_37; }
	inline void set_isAbstract_37(bool value)
	{
		___isAbstract_37 = value;
	}

	inline static int32_t get_offset_of_isMixed_38() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___isMixed_38)); }
	inline bool get_isMixed_38() const { return ___isMixed_38; }
	inline bool* get_address_of_isMixed_38() { return &___isMixed_38; }
	inline void set_isMixed_38(bool value)
	{
		___isMixed_38 = value;
	}

	inline static int32_t get_offset_of_particle_39() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___particle_39)); }
	inline XmlSchemaParticle_t3333075425 * get_particle_39() const { return ___particle_39; }
	inline XmlSchemaParticle_t3333075425 ** get_address_of_particle_39() { return &___particle_39; }
	inline void set_particle_39(XmlSchemaParticle_t3333075425 * value)
	{
		___particle_39 = value;
		Il2CppCodeGenWriteBarrier(&___particle_39, value);
	}

	inline static int32_t get_offset_of_resolvedContentType_40() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___resolvedContentType_40)); }
	inline int32_t get_resolvedContentType_40() const { return ___resolvedContentType_40; }
	inline int32_t* get_address_of_resolvedContentType_40() { return &___resolvedContentType_40; }
	inline void set_resolvedContentType_40(int32_t value)
	{
		___resolvedContentType_40 = value;
	}

	inline static int32_t get_offset_of_ValidatedIsAbstract_41() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___ValidatedIsAbstract_41)); }
	inline bool get_ValidatedIsAbstract_41() const { return ___ValidatedIsAbstract_41; }
	inline bool* get_address_of_ValidatedIsAbstract_41() { return &___ValidatedIsAbstract_41; }
	inline void set_ValidatedIsAbstract_41(bool value)
	{
		___ValidatedIsAbstract_41 = value;
	}

	inline static int32_t get_offset_of_CollectProcessId_44() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183, ___CollectProcessId_44)); }
	inline Guid_t756539922  get_CollectProcessId_44() const { return ___CollectProcessId_44; }
	inline Guid_t756539922 * get_address_of_CollectProcessId_44() { return &___CollectProcessId_44; }
	inline void set_CollectProcessId_44(Guid_t756539922  value)
	{
		___CollectProcessId_44 = value;
	}
};

struct XmlSchemaComplexType_t1768361183_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaComplexType System.Xml.Schema.XmlSchemaComplexType::anyType
	XmlSchemaComplexType_t1768361183 * ___anyType_42;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexType::AnyTypeName
	XmlQualifiedName_t3059647944 * ___AnyTypeName_43;

public:
	inline static int32_t get_offset_of_anyType_42() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183_StaticFields, ___anyType_42)); }
	inline XmlSchemaComplexType_t1768361183 * get_anyType_42() const { return ___anyType_42; }
	inline XmlSchemaComplexType_t1768361183 ** get_address_of_anyType_42() { return &___anyType_42; }
	inline void set_anyType_42(XmlSchemaComplexType_t1768361183 * value)
	{
		___anyType_42 = value;
		Il2CppCodeGenWriteBarrier(&___anyType_42, value);
	}

	inline static int32_t get_offset_of_AnyTypeName_43() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t1768361183_StaticFields, ___AnyTypeName_43)); }
	inline XmlQualifiedName_t3059647944 * get_AnyTypeName_43() const { return ___AnyTypeName_43; }
	inline XmlQualifiedName_t3059647944 ** get_address_of_AnyTypeName_43() { return &___AnyTypeName_43; }
	inline void set_AnyTypeName_43(XmlQualifiedName_t3059647944 * value)
	{
		___AnyTypeName_43 = value;
		Il2CppCodeGenWriteBarrier(&___AnyTypeName_43, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
