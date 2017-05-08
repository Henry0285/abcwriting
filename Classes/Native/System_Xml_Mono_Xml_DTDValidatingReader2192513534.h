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
// System.Xml.XmlTextReader
struct XmlTextReader_t988926421;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t3053687983;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;
// System.Xml.XmlResolver
struct XmlResolver_t2792156615;
// System.String
struct String_t;
// Mono.Xml.DTDValidatingReader/AttributeSlot[]
struct AttributeSlotU5BU5D_t2414126713;
// System.Collections.Stack
struct Stack_t3925292378;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t2713586350;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t3654972885;
// System.Text.StringBuilder
struct StringBuilder_t2393427626;
// System.Char[]
struct CharU5BU5D_t1685951112;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t4260152181;

#include "System_Xml_System_Xml_XmlReader1154388064.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDValidatingReader
struct  DTDValidatingReader_t2192513534  : public XmlReader_t1154388064
{
public:
	// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::reader
	EntityResolvingXmlReader_t4053188700 * ___reader_3;
	// System.Xml.XmlTextReader Mono.Xml.DTDValidatingReader::sourceTextReader
	XmlTextReader_t988926421 * ___sourceTextReader_4;
	// System.Xml.XmlValidatingReader Mono.Xml.DTDValidatingReader::validatingReader
	XmlValidatingReader_t3053687983 * ___validatingReader_5;
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::dtd
	DTDObjectModel_t281012916 * ___dtd_6;
	// System.Xml.XmlResolver Mono.Xml.DTDValidatingReader::resolver
	XmlResolver_t2792156615 * ___resolver_7;
	// System.String Mono.Xml.DTDValidatingReader::currentElement
	String_t* ___currentElement_8;
	// Mono.Xml.DTDValidatingReader/AttributeSlot[] Mono.Xml.DTDValidatingReader::attributes
	AttributeSlotU5BU5D_t2414126713* ___attributes_9;
	// System.Int32 Mono.Xml.DTDValidatingReader::attributeCount
	int32_t ___attributeCount_10;
	// System.Int32 Mono.Xml.DTDValidatingReader::currentAttribute
	int32_t ___currentAttribute_11;
	// System.Boolean Mono.Xml.DTDValidatingReader::consumedAttribute
	bool ___consumedAttribute_12;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::elementStack
	Stack_t3925292378 * ___elementStack_13;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::automataStack
	Stack_t3925292378 * ___automataStack_14;
	// System.Boolean Mono.Xml.DTDValidatingReader::popScope
	bool ___popScope_15;
	// System.Boolean Mono.Xml.DTDValidatingReader::isStandalone
	bool ___isStandalone_16;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::currentAutomata
	DTDAutomata_t2713586350 * ___currentAutomata_17;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::previousAutomata
	DTDAutomata_t2713586350 * ___previousAutomata_18;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::idList
	ArrayList_t1468494371 * ___idList_19;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::missingIDReferences
	ArrayList_t1468494371 * ___missingIDReferences_20;
	// System.Xml.XmlNamespaceManager Mono.Xml.DTDValidatingReader::nsmgr
	XmlNamespaceManager_t3654972885 * ___nsmgr_21;
	// System.String Mono.Xml.DTDValidatingReader::currentTextValue
	String_t* ___currentTextValue_22;
	// System.String Mono.Xml.DTDValidatingReader::constructingTextValue
	String_t* ___constructingTextValue_23;
	// System.Boolean Mono.Xml.DTDValidatingReader::shouldResetCurrentTextValue
	bool ___shouldResetCurrentTextValue_24;
	// System.Boolean Mono.Xml.DTDValidatingReader::isSignificantWhitespace
	bool ___isSignificantWhitespace_25;
	// System.Boolean Mono.Xml.DTDValidatingReader::isWhitespace
	bool ___isWhitespace_26;
	// System.Boolean Mono.Xml.DTDValidatingReader::isText
	bool ___isText_27;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::attributeValueEntityStack
	Stack_t3925292378 * ___attributeValueEntityStack_28;
	// System.Text.StringBuilder Mono.Xml.DTDValidatingReader::valueBuilder
	StringBuilder_t2393427626 * ___valueBuilder_29;
	// System.Char[] Mono.Xml.DTDValidatingReader::whitespaceChars
	CharU5BU5D_t1685951112* ___whitespaceChars_30;

public:
	inline static int32_t get_offset_of_reader_3() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___reader_3)); }
	inline EntityResolvingXmlReader_t4053188700 * get_reader_3() const { return ___reader_3; }
	inline EntityResolvingXmlReader_t4053188700 ** get_address_of_reader_3() { return &___reader_3; }
	inline void set_reader_3(EntityResolvingXmlReader_t4053188700 * value)
	{
		___reader_3 = value;
		Il2CppCodeGenWriteBarrier(&___reader_3, value);
	}

	inline static int32_t get_offset_of_sourceTextReader_4() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___sourceTextReader_4)); }
	inline XmlTextReader_t988926421 * get_sourceTextReader_4() const { return ___sourceTextReader_4; }
	inline XmlTextReader_t988926421 ** get_address_of_sourceTextReader_4() { return &___sourceTextReader_4; }
	inline void set_sourceTextReader_4(XmlTextReader_t988926421 * value)
	{
		___sourceTextReader_4 = value;
		Il2CppCodeGenWriteBarrier(&___sourceTextReader_4, value);
	}

	inline static int32_t get_offset_of_validatingReader_5() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___validatingReader_5)); }
	inline XmlValidatingReader_t3053687983 * get_validatingReader_5() const { return ___validatingReader_5; }
	inline XmlValidatingReader_t3053687983 ** get_address_of_validatingReader_5() { return &___validatingReader_5; }
	inline void set_validatingReader_5(XmlValidatingReader_t3053687983 * value)
	{
		___validatingReader_5 = value;
		Il2CppCodeGenWriteBarrier(&___validatingReader_5, value);
	}

	inline static int32_t get_offset_of_dtd_6() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___dtd_6)); }
	inline DTDObjectModel_t281012916 * get_dtd_6() const { return ___dtd_6; }
	inline DTDObjectModel_t281012916 ** get_address_of_dtd_6() { return &___dtd_6; }
	inline void set_dtd_6(DTDObjectModel_t281012916 * value)
	{
		___dtd_6 = value;
		Il2CppCodeGenWriteBarrier(&___dtd_6, value);
	}

	inline static int32_t get_offset_of_resolver_7() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___resolver_7)); }
	inline XmlResolver_t2792156615 * get_resolver_7() const { return ___resolver_7; }
	inline XmlResolver_t2792156615 ** get_address_of_resolver_7() { return &___resolver_7; }
	inline void set_resolver_7(XmlResolver_t2792156615 * value)
	{
		___resolver_7 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_7, value);
	}

	inline static int32_t get_offset_of_currentElement_8() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___currentElement_8)); }
	inline String_t* get_currentElement_8() const { return ___currentElement_8; }
	inline String_t** get_address_of_currentElement_8() { return &___currentElement_8; }
	inline void set_currentElement_8(String_t* value)
	{
		___currentElement_8 = value;
		Il2CppCodeGenWriteBarrier(&___currentElement_8, value);
	}

	inline static int32_t get_offset_of_attributes_9() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___attributes_9)); }
	inline AttributeSlotU5BU5D_t2414126713* get_attributes_9() const { return ___attributes_9; }
	inline AttributeSlotU5BU5D_t2414126713** get_address_of_attributes_9() { return &___attributes_9; }
	inline void set_attributes_9(AttributeSlotU5BU5D_t2414126713* value)
	{
		___attributes_9 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_9, value);
	}

	inline static int32_t get_offset_of_attributeCount_10() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___attributeCount_10)); }
	inline int32_t get_attributeCount_10() const { return ___attributeCount_10; }
	inline int32_t* get_address_of_attributeCount_10() { return &___attributeCount_10; }
	inline void set_attributeCount_10(int32_t value)
	{
		___attributeCount_10 = value;
	}

	inline static int32_t get_offset_of_currentAttribute_11() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___currentAttribute_11)); }
	inline int32_t get_currentAttribute_11() const { return ___currentAttribute_11; }
	inline int32_t* get_address_of_currentAttribute_11() { return &___currentAttribute_11; }
	inline void set_currentAttribute_11(int32_t value)
	{
		___currentAttribute_11 = value;
	}

	inline static int32_t get_offset_of_consumedAttribute_12() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___consumedAttribute_12)); }
	inline bool get_consumedAttribute_12() const { return ___consumedAttribute_12; }
	inline bool* get_address_of_consumedAttribute_12() { return &___consumedAttribute_12; }
	inline void set_consumedAttribute_12(bool value)
	{
		___consumedAttribute_12 = value;
	}

	inline static int32_t get_offset_of_elementStack_13() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___elementStack_13)); }
	inline Stack_t3925292378 * get_elementStack_13() const { return ___elementStack_13; }
	inline Stack_t3925292378 ** get_address_of_elementStack_13() { return &___elementStack_13; }
	inline void set_elementStack_13(Stack_t3925292378 * value)
	{
		___elementStack_13 = value;
		Il2CppCodeGenWriteBarrier(&___elementStack_13, value);
	}

	inline static int32_t get_offset_of_automataStack_14() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___automataStack_14)); }
	inline Stack_t3925292378 * get_automataStack_14() const { return ___automataStack_14; }
	inline Stack_t3925292378 ** get_address_of_automataStack_14() { return &___automataStack_14; }
	inline void set_automataStack_14(Stack_t3925292378 * value)
	{
		___automataStack_14 = value;
		Il2CppCodeGenWriteBarrier(&___automataStack_14, value);
	}

	inline static int32_t get_offset_of_popScope_15() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___popScope_15)); }
	inline bool get_popScope_15() const { return ___popScope_15; }
	inline bool* get_address_of_popScope_15() { return &___popScope_15; }
	inline void set_popScope_15(bool value)
	{
		___popScope_15 = value;
	}

	inline static int32_t get_offset_of_isStandalone_16() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___isStandalone_16)); }
	inline bool get_isStandalone_16() const { return ___isStandalone_16; }
	inline bool* get_address_of_isStandalone_16() { return &___isStandalone_16; }
	inline void set_isStandalone_16(bool value)
	{
		___isStandalone_16 = value;
	}

	inline static int32_t get_offset_of_currentAutomata_17() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___currentAutomata_17)); }
	inline DTDAutomata_t2713586350 * get_currentAutomata_17() const { return ___currentAutomata_17; }
	inline DTDAutomata_t2713586350 ** get_address_of_currentAutomata_17() { return &___currentAutomata_17; }
	inline void set_currentAutomata_17(DTDAutomata_t2713586350 * value)
	{
		___currentAutomata_17 = value;
		Il2CppCodeGenWriteBarrier(&___currentAutomata_17, value);
	}

	inline static int32_t get_offset_of_previousAutomata_18() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___previousAutomata_18)); }
	inline DTDAutomata_t2713586350 * get_previousAutomata_18() const { return ___previousAutomata_18; }
	inline DTDAutomata_t2713586350 ** get_address_of_previousAutomata_18() { return &___previousAutomata_18; }
	inline void set_previousAutomata_18(DTDAutomata_t2713586350 * value)
	{
		___previousAutomata_18 = value;
		Il2CppCodeGenWriteBarrier(&___previousAutomata_18, value);
	}

	inline static int32_t get_offset_of_idList_19() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___idList_19)); }
	inline ArrayList_t1468494371 * get_idList_19() const { return ___idList_19; }
	inline ArrayList_t1468494371 ** get_address_of_idList_19() { return &___idList_19; }
	inline void set_idList_19(ArrayList_t1468494371 * value)
	{
		___idList_19 = value;
		Il2CppCodeGenWriteBarrier(&___idList_19, value);
	}

	inline static int32_t get_offset_of_missingIDReferences_20() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___missingIDReferences_20)); }
	inline ArrayList_t1468494371 * get_missingIDReferences_20() const { return ___missingIDReferences_20; }
	inline ArrayList_t1468494371 ** get_address_of_missingIDReferences_20() { return &___missingIDReferences_20; }
	inline void set_missingIDReferences_20(ArrayList_t1468494371 * value)
	{
		___missingIDReferences_20 = value;
		Il2CppCodeGenWriteBarrier(&___missingIDReferences_20, value);
	}

	inline static int32_t get_offset_of_nsmgr_21() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___nsmgr_21)); }
	inline XmlNamespaceManager_t3654972885 * get_nsmgr_21() const { return ___nsmgr_21; }
	inline XmlNamespaceManager_t3654972885 ** get_address_of_nsmgr_21() { return &___nsmgr_21; }
	inline void set_nsmgr_21(XmlNamespaceManager_t3654972885 * value)
	{
		___nsmgr_21 = value;
		Il2CppCodeGenWriteBarrier(&___nsmgr_21, value);
	}

	inline static int32_t get_offset_of_currentTextValue_22() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___currentTextValue_22)); }
	inline String_t* get_currentTextValue_22() const { return ___currentTextValue_22; }
	inline String_t** get_address_of_currentTextValue_22() { return &___currentTextValue_22; }
	inline void set_currentTextValue_22(String_t* value)
	{
		___currentTextValue_22 = value;
		Il2CppCodeGenWriteBarrier(&___currentTextValue_22, value);
	}

	inline static int32_t get_offset_of_constructingTextValue_23() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___constructingTextValue_23)); }
	inline String_t* get_constructingTextValue_23() const { return ___constructingTextValue_23; }
	inline String_t** get_address_of_constructingTextValue_23() { return &___constructingTextValue_23; }
	inline void set_constructingTextValue_23(String_t* value)
	{
		___constructingTextValue_23 = value;
		Il2CppCodeGenWriteBarrier(&___constructingTextValue_23, value);
	}

	inline static int32_t get_offset_of_shouldResetCurrentTextValue_24() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___shouldResetCurrentTextValue_24)); }
	inline bool get_shouldResetCurrentTextValue_24() const { return ___shouldResetCurrentTextValue_24; }
	inline bool* get_address_of_shouldResetCurrentTextValue_24() { return &___shouldResetCurrentTextValue_24; }
	inline void set_shouldResetCurrentTextValue_24(bool value)
	{
		___shouldResetCurrentTextValue_24 = value;
	}

	inline static int32_t get_offset_of_isSignificantWhitespace_25() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___isSignificantWhitespace_25)); }
	inline bool get_isSignificantWhitespace_25() const { return ___isSignificantWhitespace_25; }
	inline bool* get_address_of_isSignificantWhitespace_25() { return &___isSignificantWhitespace_25; }
	inline void set_isSignificantWhitespace_25(bool value)
	{
		___isSignificantWhitespace_25 = value;
	}

	inline static int32_t get_offset_of_isWhitespace_26() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___isWhitespace_26)); }
	inline bool get_isWhitespace_26() const { return ___isWhitespace_26; }
	inline bool* get_address_of_isWhitespace_26() { return &___isWhitespace_26; }
	inline void set_isWhitespace_26(bool value)
	{
		___isWhitespace_26 = value;
	}

	inline static int32_t get_offset_of_isText_27() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___isText_27)); }
	inline bool get_isText_27() const { return ___isText_27; }
	inline bool* get_address_of_isText_27() { return &___isText_27; }
	inline void set_isText_27(bool value)
	{
		___isText_27 = value;
	}

	inline static int32_t get_offset_of_attributeValueEntityStack_28() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___attributeValueEntityStack_28)); }
	inline Stack_t3925292378 * get_attributeValueEntityStack_28() const { return ___attributeValueEntityStack_28; }
	inline Stack_t3925292378 ** get_address_of_attributeValueEntityStack_28() { return &___attributeValueEntityStack_28; }
	inline void set_attributeValueEntityStack_28(Stack_t3925292378 * value)
	{
		___attributeValueEntityStack_28 = value;
		Il2CppCodeGenWriteBarrier(&___attributeValueEntityStack_28, value);
	}

	inline static int32_t get_offset_of_valueBuilder_29() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___valueBuilder_29)); }
	inline StringBuilder_t2393427626 * get_valueBuilder_29() const { return ___valueBuilder_29; }
	inline StringBuilder_t2393427626 ** get_address_of_valueBuilder_29() { return &___valueBuilder_29; }
	inline void set_valueBuilder_29(StringBuilder_t2393427626 * value)
	{
		___valueBuilder_29 = value;
		Il2CppCodeGenWriteBarrier(&___valueBuilder_29, value);
	}

	inline static int32_t get_offset_of_whitespaceChars_30() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534, ___whitespaceChars_30)); }
	inline CharU5BU5D_t1685951112* get_whitespaceChars_30() const { return ___whitespaceChars_30; }
	inline CharU5BU5D_t1685951112** get_address_of_whitespaceChars_30() { return &___whitespaceChars_30; }
	inline void set_whitespaceChars_30(CharU5BU5D_t1685951112* value)
	{
		___whitespaceChars_30 = value;
		Il2CppCodeGenWriteBarrier(&___whitespaceChars_30, value);
	}
};

struct DTDValidatingReader_t2192513534_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.DTDValidatingReader::<>f__switch$map2A
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map2A_31;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2A_31() { return static_cast<int32_t>(offsetof(DTDValidatingReader_t2192513534_StaticFields, ___U3CU3Ef__switchU24map2A_31)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map2A_31() const { return ___U3CU3Ef__switchU24map2A_31; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map2A_31() { return &___U3CU3Ef__switchU24map2A_31; }
	inline void set_U3CU3Ef__switchU24map2A_31(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map2A_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2A_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
