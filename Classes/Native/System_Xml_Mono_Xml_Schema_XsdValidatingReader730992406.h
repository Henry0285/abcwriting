#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaAttribute[]
struct XmlSchemaAttributeU5BU5D_t3550501926;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Xml.XmlResolver
struct XmlResolver_t2792156615;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_t494354767;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t1637269184;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t529105423;
// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t4183637434;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2096988192;
// System.Text.StringBuilder
struct StringBuilder_t2393427626;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t477176618;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t4260152181;

#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Xml_System_Xml_ValidationType3328172095.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdValidatingReader
struct  XsdValidatingReader_t730992406  : public XmlReader_t1154388064
{
public:
	// System.Xml.XmlReader Mono.Xml.Schema.XsdValidatingReader::reader
	XmlReader_t1154388064 * ___reader_4;
	// System.Xml.XmlResolver Mono.Xml.Schema.XsdValidatingReader::resolver
	XmlResolver_t2792156615 * ___resolver_5;
	// Mono.Xml.IHasXmlSchemaInfo Mono.Xml.Schema.XsdValidatingReader::sourceReaderSchemaInfo
	Il2CppObject * ___sourceReaderSchemaInfo_6;
	// System.Xml.IXmlLineInfo Mono.Xml.Schema.XsdValidatingReader::readerLineInfo
	Il2CppObject * ___readerLineInfo_7;
	// System.Xml.ValidationType Mono.Xml.Schema.XsdValidatingReader::validationType
	int32_t ___validationType_8;
	// System.Xml.Schema.XmlSchemaSet Mono.Xml.Schema.XsdValidatingReader::schemas
	XmlSchemaSet_t529105423 * ___schemas_9;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::namespaces
	bool ___namespaces_10;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::validationStarted
	bool ___validationStarted_11;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::checkIdentity
	bool ___checkIdentity_12;
	// Mono.Xml.Schema.XsdIDManager Mono.Xml.Schema.XsdValidatingReader::idManager
	XsdIDManager_t4183637434 * ___idManager_13;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::checkKeyConstraints
	bool ___checkKeyConstraints_14;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::keyTables
	ArrayList_t1468494371 * ___keyTables_15;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::currentKeyFieldConsumers
	ArrayList_t1468494371 * ___currentKeyFieldConsumers_16;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::tmpKeyrefPool
	ArrayList_t1468494371 * ___tmpKeyrefPool_17;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::elementQNameStack
	ArrayList_t1468494371 * ___elementQNameStack_18;
	// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidatingReader::state
	XsdParticleStateManager_t2096988192 * ___state_19;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::skipValidationDepth
	int32_t ___skipValidationDepth_20;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::xsiNilDepth
	int32_t ___xsiNilDepth_21;
	// System.Text.StringBuilder Mono.Xml.Schema.XsdValidatingReader::storedCharacters
	StringBuilder_t2393427626 * ___storedCharacters_22;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::shouldValidateCharacters
	bool ___shouldValidateCharacters_23;
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XsdValidatingReader::defaultAttributes
	XmlSchemaAttributeU5BU5D_t3550501926* ___defaultAttributes_24;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::currentDefaultAttribute
	int32_t ___currentDefaultAttribute_25;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::defaultAttributesCache
	ArrayList_t1468494371 * ___defaultAttributesCache_26;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::defaultAttributeConsumed
	bool ___defaultAttributeConsumed_27;
	// System.Object Mono.Xml.Schema.XsdValidatingReader::currentAttrType
	Il2CppObject * ___currentAttrType_28;
	// System.Xml.Schema.ValidationEventHandler Mono.Xml.Schema.XsdValidatingReader::ValidationEventHandler
	ValidationEventHandler_t477176618 * ___ValidationEventHandler_29;

public:
	inline static int32_t get_offset_of_reader_4() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___reader_4)); }
	inline XmlReader_t1154388064 * get_reader_4() const { return ___reader_4; }
	inline XmlReader_t1154388064 ** get_address_of_reader_4() { return &___reader_4; }
	inline void set_reader_4(XmlReader_t1154388064 * value)
	{
		___reader_4 = value;
		Il2CppCodeGenWriteBarrier(&___reader_4, value);
	}

	inline static int32_t get_offset_of_resolver_5() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___resolver_5)); }
	inline XmlResolver_t2792156615 * get_resolver_5() const { return ___resolver_5; }
	inline XmlResolver_t2792156615 ** get_address_of_resolver_5() { return &___resolver_5; }
	inline void set_resolver_5(XmlResolver_t2792156615 * value)
	{
		___resolver_5 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_5, value);
	}

	inline static int32_t get_offset_of_sourceReaderSchemaInfo_6() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___sourceReaderSchemaInfo_6)); }
	inline Il2CppObject * get_sourceReaderSchemaInfo_6() const { return ___sourceReaderSchemaInfo_6; }
	inline Il2CppObject ** get_address_of_sourceReaderSchemaInfo_6() { return &___sourceReaderSchemaInfo_6; }
	inline void set_sourceReaderSchemaInfo_6(Il2CppObject * value)
	{
		___sourceReaderSchemaInfo_6 = value;
		Il2CppCodeGenWriteBarrier(&___sourceReaderSchemaInfo_6, value);
	}

	inline static int32_t get_offset_of_readerLineInfo_7() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___readerLineInfo_7)); }
	inline Il2CppObject * get_readerLineInfo_7() const { return ___readerLineInfo_7; }
	inline Il2CppObject ** get_address_of_readerLineInfo_7() { return &___readerLineInfo_7; }
	inline void set_readerLineInfo_7(Il2CppObject * value)
	{
		___readerLineInfo_7 = value;
		Il2CppCodeGenWriteBarrier(&___readerLineInfo_7, value);
	}

	inline static int32_t get_offset_of_validationType_8() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___validationType_8)); }
	inline int32_t get_validationType_8() const { return ___validationType_8; }
	inline int32_t* get_address_of_validationType_8() { return &___validationType_8; }
	inline void set_validationType_8(int32_t value)
	{
		___validationType_8 = value;
	}

	inline static int32_t get_offset_of_schemas_9() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___schemas_9)); }
	inline XmlSchemaSet_t529105423 * get_schemas_9() const { return ___schemas_9; }
	inline XmlSchemaSet_t529105423 ** get_address_of_schemas_9() { return &___schemas_9; }
	inline void set_schemas_9(XmlSchemaSet_t529105423 * value)
	{
		___schemas_9 = value;
		Il2CppCodeGenWriteBarrier(&___schemas_9, value);
	}

	inline static int32_t get_offset_of_namespaces_10() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___namespaces_10)); }
	inline bool get_namespaces_10() const { return ___namespaces_10; }
	inline bool* get_address_of_namespaces_10() { return &___namespaces_10; }
	inline void set_namespaces_10(bool value)
	{
		___namespaces_10 = value;
	}

	inline static int32_t get_offset_of_validationStarted_11() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___validationStarted_11)); }
	inline bool get_validationStarted_11() const { return ___validationStarted_11; }
	inline bool* get_address_of_validationStarted_11() { return &___validationStarted_11; }
	inline void set_validationStarted_11(bool value)
	{
		___validationStarted_11 = value;
	}

	inline static int32_t get_offset_of_checkIdentity_12() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___checkIdentity_12)); }
	inline bool get_checkIdentity_12() const { return ___checkIdentity_12; }
	inline bool* get_address_of_checkIdentity_12() { return &___checkIdentity_12; }
	inline void set_checkIdentity_12(bool value)
	{
		___checkIdentity_12 = value;
	}

	inline static int32_t get_offset_of_idManager_13() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___idManager_13)); }
	inline XsdIDManager_t4183637434 * get_idManager_13() const { return ___idManager_13; }
	inline XsdIDManager_t4183637434 ** get_address_of_idManager_13() { return &___idManager_13; }
	inline void set_idManager_13(XsdIDManager_t4183637434 * value)
	{
		___idManager_13 = value;
		Il2CppCodeGenWriteBarrier(&___idManager_13, value);
	}

	inline static int32_t get_offset_of_checkKeyConstraints_14() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___checkKeyConstraints_14)); }
	inline bool get_checkKeyConstraints_14() const { return ___checkKeyConstraints_14; }
	inline bool* get_address_of_checkKeyConstraints_14() { return &___checkKeyConstraints_14; }
	inline void set_checkKeyConstraints_14(bool value)
	{
		___checkKeyConstraints_14 = value;
	}

	inline static int32_t get_offset_of_keyTables_15() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___keyTables_15)); }
	inline ArrayList_t1468494371 * get_keyTables_15() const { return ___keyTables_15; }
	inline ArrayList_t1468494371 ** get_address_of_keyTables_15() { return &___keyTables_15; }
	inline void set_keyTables_15(ArrayList_t1468494371 * value)
	{
		___keyTables_15 = value;
		Il2CppCodeGenWriteBarrier(&___keyTables_15, value);
	}

	inline static int32_t get_offset_of_currentKeyFieldConsumers_16() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___currentKeyFieldConsumers_16)); }
	inline ArrayList_t1468494371 * get_currentKeyFieldConsumers_16() const { return ___currentKeyFieldConsumers_16; }
	inline ArrayList_t1468494371 ** get_address_of_currentKeyFieldConsumers_16() { return &___currentKeyFieldConsumers_16; }
	inline void set_currentKeyFieldConsumers_16(ArrayList_t1468494371 * value)
	{
		___currentKeyFieldConsumers_16 = value;
		Il2CppCodeGenWriteBarrier(&___currentKeyFieldConsumers_16, value);
	}

	inline static int32_t get_offset_of_tmpKeyrefPool_17() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___tmpKeyrefPool_17)); }
	inline ArrayList_t1468494371 * get_tmpKeyrefPool_17() const { return ___tmpKeyrefPool_17; }
	inline ArrayList_t1468494371 ** get_address_of_tmpKeyrefPool_17() { return &___tmpKeyrefPool_17; }
	inline void set_tmpKeyrefPool_17(ArrayList_t1468494371 * value)
	{
		___tmpKeyrefPool_17 = value;
		Il2CppCodeGenWriteBarrier(&___tmpKeyrefPool_17, value);
	}

	inline static int32_t get_offset_of_elementQNameStack_18() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___elementQNameStack_18)); }
	inline ArrayList_t1468494371 * get_elementQNameStack_18() const { return ___elementQNameStack_18; }
	inline ArrayList_t1468494371 ** get_address_of_elementQNameStack_18() { return &___elementQNameStack_18; }
	inline void set_elementQNameStack_18(ArrayList_t1468494371 * value)
	{
		___elementQNameStack_18 = value;
		Il2CppCodeGenWriteBarrier(&___elementQNameStack_18, value);
	}

	inline static int32_t get_offset_of_state_19() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___state_19)); }
	inline XsdParticleStateManager_t2096988192 * get_state_19() const { return ___state_19; }
	inline XsdParticleStateManager_t2096988192 ** get_address_of_state_19() { return &___state_19; }
	inline void set_state_19(XsdParticleStateManager_t2096988192 * value)
	{
		___state_19 = value;
		Il2CppCodeGenWriteBarrier(&___state_19, value);
	}

	inline static int32_t get_offset_of_skipValidationDepth_20() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___skipValidationDepth_20)); }
	inline int32_t get_skipValidationDepth_20() const { return ___skipValidationDepth_20; }
	inline int32_t* get_address_of_skipValidationDepth_20() { return &___skipValidationDepth_20; }
	inline void set_skipValidationDepth_20(int32_t value)
	{
		___skipValidationDepth_20 = value;
	}

	inline static int32_t get_offset_of_xsiNilDepth_21() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___xsiNilDepth_21)); }
	inline int32_t get_xsiNilDepth_21() const { return ___xsiNilDepth_21; }
	inline int32_t* get_address_of_xsiNilDepth_21() { return &___xsiNilDepth_21; }
	inline void set_xsiNilDepth_21(int32_t value)
	{
		___xsiNilDepth_21 = value;
	}

	inline static int32_t get_offset_of_storedCharacters_22() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___storedCharacters_22)); }
	inline StringBuilder_t2393427626 * get_storedCharacters_22() const { return ___storedCharacters_22; }
	inline StringBuilder_t2393427626 ** get_address_of_storedCharacters_22() { return &___storedCharacters_22; }
	inline void set_storedCharacters_22(StringBuilder_t2393427626 * value)
	{
		___storedCharacters_22 = value;
		Il2CppCodeGenWriteBarrier(&___storedCharacters_22, value);
	}

	inline static int32_t get_offset_of_shouldValidateCharacters_23() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___shouldValidateCharacters_23)); }
	inline bool get_shouldValidateCharacters_23() const { return ___shouldValidateCharacters_23; }
	inline bool* get_address_of_shouldValidateCharacters_23() { return &___shouldValidateCharacters_23; }
	inline void set_shouldValidateCharacters_23(bool value)
	{
		___shouldValidateCharacters_23 = value;
	}

	inline static int32_t get_offset_of_defaultAttributes_24() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___defaultAttributes_24)); }
	inline XmlSchemaAttributeU5BU5D_t3550501926* get_defaultAttributes_24() const { return ___defaultAttributes_24; }
	inline XmlSchemaAttributeU5BU5D_t3550501926** get_address_of_defaultAttributes_24() { return &___defaultAttributes_24; }
	inline void set_defaultAttributes_24(XmlSchemaAttributeU5BU5D_t3550501926* value)
	{
		___defaultAttributes_24 = value;
		Il2CppCodeGenWriteBarrier(&___defaultAttributes_24, value);
	}

	inline static int32_t get_offset_of_currentDefaultAttribute_25() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___currentDefaultAttribute_25)); }
	inline int32_t get_currentDefaultAttribute_25() const { return ___currentDefaultAttribute_25; }
	inline int32_t* get_address_of_currentDefaultAttribute_25() { return &___currentDefaultAttribute_25; }
	inline void set_currentDefaultAttribute_25(int32_t value)
	{
		___currentDefaultAttribute_25 = value;
	}

	inline static int32_t get_offset_of_defaultAttributesCache_26() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___defaultAttributesCache_26)); }
	inline ArrayList_t1468494371 * get_defaultAttributesCache_26() const { return ___defaultAttributesCache_26; }
	inline ArrayList_t1468494371 ** get_address_of_defaultAttributesCache_26() { return &___defaultAttributesCache_26; }
	inline void set_defaultAttributesCache_26(ArrayList_t1468494371 * value)
	{
		___defaultAttributesCache_26 = value;
		Il2CppCodeGenWriteBarrier(&___defaultAttributesCache_26, value);
	}

	inline static int32_t get_offset_of_defaultAttributeConsumed_27() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___defaultAttributeConsumed_27)); }
	inline bool get_defaultAttributeConsumed_27() const { return ___defaultAttributeConsumed_27; }
	inline bool* get_address_of_defaultAttributeConsumed_27() { return &___defaultAttributeConsumed_27; }
	inline void set_defaultAttributeConsumed_27(bool value)
	{
		___defaultAttributeConsumed_27 = value;
	}

	inline static int32_t get_offset_of_currentAttrType_28() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___currentAttrType_28)); }
	inline Il2CppObject * get_currentAttrType_28() const { return ___currentAttrType_28; }
	inline Il2CppObject ** get_address_of_currentAttrType_28() { return &___currentAttrType_28; }
	inline void set_currentAttrType_28(Il2CppObject * value)
	{
		___currentAttrType_28 = value;
		Il2CppCodeGenWriteBarrier(&___currentAttrType_28, value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_29() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406, ___ValidationEventHandler_29)); }
	inline ValidationEventHandler_t477176618 * get_ValidationEventHandler_29() const { return ___ValidationEventHandler_29; }
	inline ValidationEventHandler_t477176618 ** get_address_of_ValidationEventHandler_29() { return &___ValidationEventHandler_29; }
	inline void set_ValidationEventHandler_29(ValidationEventHandler_t477176618 * value)
	{
		___ValidationEventHandler_29 = value;
		Il2CppCodeGenWriteBarrier(&___ValidationEventHandler_29, value);
	}
};

struct XsdValidatingReader_t730992406_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XsdValidatingReader::emptyAttributeArray
	XmlSchemaAttributeU5BU5D_t3550501926* ___emptyAttributeArray_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map3
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map3_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map4
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map4_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map5
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map5_32;

public:
	inline static int32_t get_offset_of_emptyAttributeArray_3() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406_StaticFields, ___emptyAttributeArray_3)); }
	inline XmlSchemaAttributeU5BU5D_t3550501926* get_emptyAttributeArray_3() const { return ___emptyAttributeArray_3; }
	inline XmlSchemaAttributeU5BU5D_t3550501926** get_address_of_emptyAttributeArray_3() { return &___emptyAttributeArray_3; }
	inline void set_emptyAttributeArray_3(XmlSchemaAttributeU5BU5D_t3550501926* value)
	{
		___emptyAttributeArray_3 = value;
		Il2CppCodeGenWriteBarrier(&___emptyAttributeArray_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_30() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406_StaticFields, ___U3CU3Ef__switchU24map3_30)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map3_30() const { return ___U3CU3Ef__switchU24map3_30; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map3_30() { return &___U3CU3Ef__switchU24map3_30; }
	inline void set_U3CU3Ef__switchU24map3_30(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map3_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map3_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_31() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406_StaticFields, ___U3CU3Ef__switchU24map4_31)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map4_31() const { return ___U3CU3Ef__switchU24map4_31; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map4_31() { return &___U3CU3Ef__switchU24map4_31; }
	inline void set_U3CU3Ef__switchU24map4_31(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map4_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map4_31, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_32() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t730992406_StaticFields, ___U3CU3Ef__switchU24map5_32)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map5_32() const { return ___U3CU3Ef__switchU24map5_32; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map5_32() { return &___U3CU3Ef__switchU24map5_32; }
	inline void set_U3CU3Ef__switchU24map5_32(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map5_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map5_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
