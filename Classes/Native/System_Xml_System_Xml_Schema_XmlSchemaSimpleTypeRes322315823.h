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
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3059647944;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3000072622;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Text.RegularExpressions.Regex[]
struct RegexU5BU5D_t2306429723;
// System.Object
struct Il2CppObject;

#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleTypeCo2576959910.h"
#include "mscorlib_System_Decimal173022926.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet1787722659.h"
#include "mscorlib_System_Globalization_NumberStyles579844343.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaSimpleTypeRestriction
struct  XmlSchemaSimpleTypeRestriction_t322315823  : public XmlSchemaSimpleTypeContent_t2576959910
{
public:
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::baseType
	XmlSchemaSimpleType_t2262508413 * ___baseType_17;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeRestriction::baseTypeName
	XmlQualifiedName_t3059647944 * ___baseTypeName_18;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeRestriction::facets
	XmlSchemaObjectCollection_t3000072622 * ___facets_19;
	// System.String[] System.Xml.Schema.XmlSchemaSimpleTypeRestriction::enumarationFacetValues
	StringU5BU5D_t3764931161* ___enumarationFacetValues_20;
	// System.String[] System.Xml.Schema.XmlSchemaSimpleTypeRestriction::patternFacetValues
	StringU5BU5D_t3764931161* ___patternFacetValues_21;
	// System.Text.RegularExpressions.Regex[] System.Xml.Schema.XmlSchemaSimpleTypeRestriction::rexPatterns
	RegexU5BU5D_t2306429723* ___rexPatterns_22;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::lengthFacet
	Decimal_t173022926  ___lengthFacet_23;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::maxLengthFacet
	Decimal_t173022926  ___maxLengthFacet_24;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::minLengthFacet
	Decimal_t173022926  ___minLengthFacet_25;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::fractionDigitsFacet
	Decimal_t173022926  ___fractionDigitsFacet_26;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::totalDigitsFacet
	Decimal_t173022926  ___totalDigitsFacet_27;
	// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::maxInclusiveFacet
	Il2CppObject * ___maxInclusiveFacet_28;
	// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::maxExclusiveFacet
	Il2CppObject * ___maxExclusiveFacet_29;
	// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::minInclusiveFacet
	Il2CppObject * ___minInclusiveFacet_30;
	// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::minExclusiveFacet
	Il2CppObject * ___minExclusiveFacet_31;
	// System.Xml.Schema.XmlSchemaFacet/Facet System.Xml.Schema.XmlSchemaSimpleTypeRestriction::fixedFacets
	int32_t ___fixedFacets_32;

public:
	inline static int32_t get_offset_of_baseType_17() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___baseType_17)); }
	inline XmlSchemaSimpleType_t2262508413 * get_baseType_17() const { return ___baseType_17; }
	inline XmlSchemaSimpleType_t2262508413 ** get_address_of_baseType_17() { return &___baseType_17; }
	inline void set_baseType_17(XmlSchemaSimpleType_t2262508413 * value)
	{
		___baseType_17 = value;
		Il2CppCodeGenWriteBarrier(&___baseType_17, value);
	}

	inline static int32_t get_offset_of_baseTypeName_18() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___baseTypeName_18)); }
	inline XmlQualifiedName_t3059647944 * get_baseTypeName_18() const { return ___baseTypeName_18; }
	inline XmlQualifiedName_t3059647944 ** get_address_of_baseTypeName_18() { return &___baseTypeName_18; }
	inline void set_baseTypeName_18(XmlQualifiedName_t3059647944 * value)
	{
		___baseTypeName_18 = value;
		Il2CppCodeGenWriteBarrier(&___baseTypeName_18, value);
	}

	inline static int32_t get_offset_of_facets_19() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___facets_19)); }
	inline XmlSchemaObjectCollection_t3000072622 * get_facets_19() const { return ___facets_19; }
	inline XmlSchemaObjectCollection_t3000072622 ** get_address_of_facets_19() { return &___facets_19; }
	inline void set_facets_19(XmlSchemaObjectCollection_t3000072622 * value)
	{
		___facets_19 = value;
		Il2CppCodeGenWriteBarrier(&___facets_19, value);
	}

	inline static int32_t get_offset_of_enumarationFacetValues_20() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___enumarationFacetValues_20)); }
	inline StringU5BU5D_t3764931161* get_enumarationFacetValues_20() const { return ___enumarationFacetValues_20; }
	inline StringU5BU5D_t3764931161** get_address_of_enumarationFacetValues_20() { return &___enumarationFacetValues_20; }
	inline void set_enumarationFacetValues_20(StringU5BU5D_t3764931161* value)
	{
		___enumarationFacetValues_20 = value;
		Il2CppCodeGenWriteBarrier(&___enumarationFacetValues_20, value);
	}

	inline static int32_t get_offset_of_patternFacetValues_21() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___patternFacetValues_21)); }
	inline StringU5BU5D_t3764931161* get_patternFacetValues_21() const { return ___patternFacetValues_21; }
	inline StringU5BU5D_t3764931161** get_address_of_patternFacetValues_21() { return &___patternFacetValues_21; }
	inline void set_patternFacetValues_21(StringU5BU5D_t3764931161* value)
	{
		___patternFacetValues_21 = value;
		Il2CppCodeGenWriteBarrier(&___patternFacetValues_21, value);
	}

	inline static int32_t get_offset_of_rexPatterns_22() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___rexPatterns_22)); }
	inline RegexU5BU5D_t2306429723* get_rexPatterns_22() const { return ___rexPatterns_22; }
	inline RegexU5BU5D_t2306429723** get_address_of_rexPatterns_22() { return &___rexPatterns_22; }
	inline void set_rexPatterns_22(RegexU5BU5D_t2306429723* value)
	{
		___rexPatterns_22 = value;
		Il2CppCodeGenWriteBarrier(&___rexPatterns_22, value);
	}

	inline static int32_t get_offset_of_lengthFacet_23() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___lengthFacet_23)); }
	inline Decimal_t173022926  get_lengthFacet_23() const { return ___lengthFacet_23; }
	inline Decimal_t173022926 * get_address_of_lengthFacet_23() { return &___lengthFacet_23; }
	inline void set_lengthFacet_23(Decimal_t173022926  value)
	{
		___lengthFacet_23 = value;
	}

	inline static int32_t get_offset_of_maxLengthFacet_24() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___maxLengthFacet_24)); }
	inline Decimal_t173022926  get_maxLengthFacet_24() const { return ___maxLengthFacet_24; }
	inline Decimal_t173022926 * get_address_of_maxLengthFacet_24() { return &___maxLengthFacet_24; }
	inline void set_maxLengthFacet_24(Decimal_t173022926  value)
	{
		___maxLengthFacet_24 = value;
	}

	inline static int32_t get_offset_of_minLengthFacet_25() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___minLengthFacet_25)); }
	inline Decimal_t173022926  get_minLengthFacet_25() const { return ___minLengthFacet_25; }
	inline Decimal_t173022926 * get_address_of_minLengthFacet_25() { return &___minLengthFacet_25; }
	inline void set_minLengthFacet_25(Decimal_t173022926  value)
	{
		___minLengthFacet_25 = value;
	}

	inline static int32_t get_offset_of_fractionDigitsFacet_26() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___fractionDigitsFacet_26)); }
	inline Decimal_t173022926  get_fractionDigitsFacet_26() const { return ___fractionDigitsFacet_26; }
	inline Decimal_t173022926 * get_address_of_fractionDigitsFacet_26() { return &___fractionDigitsFacet_26; }
	inline void set_fractionDigitsFacet_26(Decimal_t173022926  value)
	{
		___fractionDigitsFacet_26 = value;
	}

	inline static int32_t get_offset_of_totalDigitsFacet_27() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___totalDigitsFacet_27)); }
	inline Decimal_t173022926  get_totalDigitsFacet_27() const { return ___totalDigitsFacet_27; }
	inline Decimal_t173022926 * get_address_of_totalDigitsFacet_27() { return &___totalDigitsFacet_27; }
	inline void set_totalDigitsFacet_27(Decimal_t173022926  value)
	{
		___totalDigitsFacet_27 = value;
	}

	inline static int32_t get_offset_of_maxInclusiveFacet_28() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___maxInclusiveFacet_28)); }
	inline Il2CppObject * get_maxInclusiveFacet_28() const { return ___maxInclusiveFacet_28; }
	inline Il2CppObject ** get_address_of_maxInclusiveFacet_28() { return &___maxInclusiveFacet_28; }
	inline void set_maxInclusiveFacet_28(Il2CppObject * value)
	{
		___maxInclusiveFacet_28 = value;
		Il2CppCodeGenWriteBarrier(&___maxInclusiveFacet_28, value);
	}

	inline static int32_t get_offset_of_maxExclusiveFacet_29() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___maxExclusiveFacet_29)); }
	inline Il2CppObject * get_maxExclusiveFacet_29() const { return ___maxExclusiveFacet_29; }
	inline Il2CppObject ** get_address_of_maxExclusiveFacet_29() { return &___maxExclusiveFacet_29; }
	inline void set_maxExclusiveFacet_29(Il2CppObject * value)
	{
		___maxExclusiveFacet_29 = value;
		Il2CppCodeGenWriteBarrier(&___maxExclusiveFacet_29, value);
	}

	inline static int32_t get_offset_of_minInclusiveFacet_30() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___minInclusiveFacet_30)); }
	inline Il2CppObject * get_minInclusiveFacet_30() const { return ___minInclusiveFacet_30; }
	inline Il2CppObject ** get_address_of_minInclusiveFacet_30() { return &___minInclusiveFacet_30; }
	inline void set_minInclusiveFacet_30(Il2CppObject * value)
	{
		___minInclusiveFacet_30 = value;
		Il2CppCodeGenWriteBarrier(&___minInclusiveFacet_30, value);
	}

	inline static int32_t get_offset_of_minExclusiveFacet_31() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___minExclusiveFacet_31)); }
	inline Il2CppObject * get_minExclusiveFacet_31() const { return ___minExclusiveFacet_31; }
	inline Il2CppObject ** get_address_of_minExclusiveFacet_31() { return &___minExclusiveFacet_31; }
	inline void set_minExclusiveFacet_31(Il2CppObject * value)
	{
		___minExclusiveFacet_31 = value;
		Il2CppCodeGenWriteBarrier(&___minExclusiveFacet_31, value);
	}

	inline static int32_t get_offset_of_fixedFacets_32() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823, ___fixedFacets_32)); }
	inline int32_t get_fixedFacets_32() const { return ___fixedFacets_32; }
	inline int32_t* get_address_of_fixedFacets_32() { return &___fixedFacets_32; }
	inline void set_fixedFacets_32(int32_t value)
	{
		___fixedFacets_32 = value;
	}
};

struct XmlSchemaSimpleTypeRestriction_t322315823_StaticFields
{
public:
	// System.Globalization.NumberStyles System.Xml.Schema.XmlSchemaSimpleTypeRestriction::lengthStyle
	int32_t ___lengthStyle_33;
	// System.Xml.Schema.XmlSchemaFacet/Facet System.Xml.Schema.XmlSchemaSimpleTypeRestriction::listFacets
	int32_t ___listFacets_34;

public:
	inline static int32_t get_offset_of_lengthStyle_33() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823_StaticFields, ___lengthStyle_33)); }
	inline int32_t get_lengthStyle_33() const { return ___lengthStyle_33; }
	inline int32_t* get_address_of_lengthStyle_33() { return &___lengthStyle_33; }
	inline void set_lengthStyle_33(int32_t value)
	{
		___lengthStyle_33 = value;
	}

	inline static int32_t get_offset_of_listFacets_34() { return static_cast<int32_t>(offsetof(XmlSchemaSimpleTypeRestriction_t322315823_StaticFields, ___listFacets_34)); }
	inline int32_t get_listFacets_34() const { return ___listFacets_34; }
	inline int32_t* get_address_of_listFacets_34() { return &___listFacets_34; }
	inline void set_listFacets_34(int32_t value)
	{
		___listFacets_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
