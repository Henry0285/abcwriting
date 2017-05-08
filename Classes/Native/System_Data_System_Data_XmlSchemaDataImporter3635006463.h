#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t2331747099;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1768361183;
// System.Data.DataSet
struct DataSet_t646994783;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t2944277931;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Collections.Hashtable
struct Hashtable_t1312997718;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3250505123;
// System.Data.TableStructure
struct TableStructure_t2365189312;
// System.Data.TableAdapterSchemaInfo
struct TableAdapterSchemaInfo_t3428998803;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t4260152181;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlSchemaDataImporter
struct  XmlSchemaDataImporter_t3635006463  : public Il2CppObject
{
public:
	// System.Data.DataSet System.Data.XmlSchemaDataImporter::dataset
	DataSet_t646994783 * ___dataset_3;
	// System.Boolean System.Data.XmlSchemaDataImporter::forDataSet
	bool ___forDataSet_4;
	// System.Xml.Schema.XmlSchema System.Data.XmlSchemaDataImporter::schema
	XmlSchema_t2944277931 * ___schema_5;
	// System.Collections.ArrayList System.Data.XmlSchemaDataImporter::relations
	ArrayList_t1468494371 * ___relations_6;
	// System.Collections.Hashtable System.Data.XmlSchemaDataImporter::reservedConstraints
	Hashtable_t1312997718 * ___reservedConstraints_7;
	// System.Xml.Schema.XmlSchemaElement System.Data.XmlSchemaDataImporter::datasetElement
	XmlSchemaElement_t3250505123 * ___datasetElement_8;
	// System.Collections.ArrayList System.Data.XmlSchemaDataImporter::topLevelElements
	ArrayList_t1468494371 * ___topLevelElements_9;
	// System.Collections.ArrayList System.Data.XmlSchemaDataImporter::targetElements
	ArrayList_t1468494371 * ___targetElements_10;
	// System.Data.TableStructure System.Data.XmlSchemaDataImporter::currentTable
	TableStructure_t2365189312 * ___currentTable_11;
	// System.Data.TableAdapterSchemaInfo System.Data.XmlSchemaDataImporter::currentAdapter
	TableAdapterSchemaInfo_t3428998803 * ___currentAdapter_12;

public:
	inline static int32_t get_offset_of_dataset_3() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463, ___dataset_3)); }
	inline DataSet_t646994783 * get_dataset_3() const { return ___dataset_3; }
	inline DataSet_t646994783 ** get_address_of_dataset_3() { return &___dataset_3; }
	inline void set_dataset_3(DataSet_t646994783 * value)
	{
		___dataset_3 = value;
		Il2CppCodeGenWriteBarrier(&___dataset_3, value);
	}

	inline static int32_t get_offset_of_forDataSet_4() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463, ___forDataSet_4)); }
	inline bool get_forDataSet_4() const { return ___forDataSet_4; }
	inline bool* get_address_of_forDataSet_4() { return &___forDataSet_4; }
	inline void set_forDataSet_4(bool value)
	{
		___forDataSet_4 = value;
	}

	inline static int32_t get_offset_of_schema_5() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463, ___schema_5)); }
	inline XmlSchema_t2944277931 * get_schema_5() const { return ___schema_5; }
	inline XmlSchema_t2944277931 ** get_address_of_schema_5() { return &___schema_5; }
	inline void set_schema_5(XmlSchema_t2944277931 * value)
	{
		___schema_5 = value;
		Il2CppCodeGenWriteBarrier(&___schema_5, value);
	}

	inline static int32_t get_offset_of_relations_6() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463, ___relations_6)); }
	inline ArrayList_t1468494371 * get_relations_6() const { return ___relations_6; }
	inline ArrayList_t1468494371 ** get_address_of_relations_6() { return &___relations_6; }
	inline void set_relations_6(ArrayList_t1468494371 * value)
	{
		___relations_6 = value;
		Il2CppCodeGenWriteBarrier(&___relations_6, value);
	}

	inline static int32_t get_offset_of_reservedConstraints_7() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463, ___reservedConstraints_7)); }
	inline Hashtable_t1312997718 * get_reservedConstraints_7() const { return ___reservedConstraints_7; }
	inline Hashtable_t1312997718 ** get_address_of_reservedConstraints_7() { return &___reservedConstraints_7; }
	inline void set_reservedConstraints_7(Hashtable_t1312997718 * value)
	{
		___reservedConstraints_7 = value;
		Il2CppCodeGenWriteBarrier(&___reservedConstraints_7, value);
	}

	inline static int32_t get_offset_of_datasetElement_8() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463, ___datasetElement_8)); }
	inline XmlSchemaElement_t3250505123 * get_datasetElement_8() const { return ___datasetElement_8; }
	inline XmlSchemaElement_t3250505123 ** get_address_of_datasetElement_8() { return &___datasetElement_8; }
	inline void set_datasetElement_8(XmlSchemaElement_t3250505123 * value)
	{
		___datasetElement_8 = value;
		Il2CppCodeGenWriteBarrier(&___datasetElement_8, value);
	}

	inline static int32_t get_offset_of_topLevelElements_9() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463, ___topLevelElements_9)); }
	inline ArrayList_t1468494371 * get_topLevelElements_9() const { return ___topLevelElements_9; }
	inline ArrayList_t1468494371 ** get_address_of_topLevelElements_9() { return &___topLevelElements_9; }
	inline void set_topLevelElements_9(ArrayList_t1468494371 * value)
	{
		___topLevelElements_9 = value;
		Il2CppCodeGenWriteBarrier(&___topLevelElements_9, value);
	}

	inline static int32_t get_offset_of_targetElements_10() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463, ___targetElements_10)); }
	inline ArrayList_t1468494371 * get_targetElements_10() const { return ___targetElements_10; }
	inline ArrayList_t1468494371 ** get_address_of_targetElements_10() { return &___targetElements_10; }
	inline void set_targetElements_10(ArrayList_t1468494371 * value)
	{
		___targetElements_10 = value;
		Il2CppCodeGenWriteBarrier(&___targetElements_10, value);
	}

	inline static int32_t get_offset_of_currentTable_11() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463, ___currentTable_11)); }
	inline TableStructure_t2365189312 * get_currentTable_11() const { return ___currentTable_11; }
	inline TableStructure_t2365189312 ** get_address_of_currentTable_11() { return &___currentTable_11; }
	inline void set_currentTable_11(TableStructure_t2365189312 * value)
	{
		___currentTable_11 = value;
		Il2CppCodeGenWriteBarrier(&___currentTable_11, value);
	}

	inline static int32_t get_offset_of_currentAdapter_12() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463, ___currentAdapter_12)); }
	inline TableAdapterSchemaInfo_t3428998803 * get_currentAdapter_12() const { return ___currentAdapter_12; }
	inline TableAdapterSchemaInfo_t3428998803 ** get_address_of_currentAdapter_12() { return &___currentAdapter_12; }
	inline void set_currentAdapter_12(TableAdapterSchemaInfo_t3428998803 * value)
	{
		___currentAdapter_12 = value;
		Il2CppCodeGenWriteBarrier(&___currentAdapter_12, value);
	}
};

struct XmlSchemaDataImporter_t3635006463_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaDatatype System.Data.XmlSchemaDataImporter::schemaIntegerType
	XmlSchemaDatatype_t2331747099 * ___schemaIntegerType_0;
	// System.Xml.Schema.XmlSchemaDatatype System.Data.XmlSchemaDataImporter::schemaDecimalType
	XmlSchemaDatatype_t2331747099 * ___schemaDecimalType_1;
	// System.Xml.Schema.XmlSchemaComplexType System.Data.XmlSchemaDataImporter::schemaAnyType
	XmlSchemaComplexType_t1768361183 * ___schemaAnyType_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Data.XmlSchemaDataImporter::<>f__switch$mapB
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24mapB_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Data.XmlSchemaDataImporter::<>f__switch$mapC
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24mapC_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Data.XmlSchemaDataImporter::<>f__switch$mapD
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24mapD_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Data.XmlSchemaDataImporter::<>f__switch$mapE
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24mapE_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Data.XmlSchemaDataImporter::<>f__switch$mapF
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24mapF_17;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Data.XmlSchemaDataImporter::<>f__switch$map10
	Dictionary_2_t4260152181 * ___U3CU3Ef__switchU24map10_18;

public:
	inline static int32_t get_offset_of_schemaIntegerType_0() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463_StaticFields, ___schemaIntegerType_0)); }
	inline XmlSchemaDatatype_t2331747099 * get_schemaIntegerType_0() const { return ___schemaIntegerType_0; }
	inline XmlSchemaDatatype_t2331747099 ** get_address_of_schemaIntegerType_0() { return &___schemaIntegerType_0; }
	inline void set_schemaIntegerType_0(XmlSchemaDatatype_t2331747099 * value)
	{
		___schemaIntegerType_0 = value;
		Il2CppCodeGenWriteBarrier(&___schemaIntegerType_0, value);
	}

	inline static int32_t get_offset_of_schemaDecimalType_1() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463_StaticFields, ___schemaDecimalType_1)); }
	inline XmlSchemaDatatype_t2331747099 * get_schemaDecimalType_1() const { return ___schemaDecimalType_1; }
	inline XmlSchemaDatatype_t2331747099 ** get_address_of_schemaDecimalType_1() { return &___schemaDecimalType_1; }
	inline void set_schemaDecimalType_1(XmlSchemaDatatype_t2331747099 * value)
	{
		___schemaDecimalType_1 = value;
		Il2CppCodeGenWriteBarrier(&___schemaDecimalType_1, value);
	}

	inline static int32_t get_offset_of_schemaAnyType_2() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463_StaticFields, ___schemaAnyType_2)); }
	inline XmlSchemaComplexType_t1768361183 * get_schemaAnyType_2() const { return ___schemaAnyType_2; }
	inline XmlSchemaComplexType_t1768361183 ** get_address_of_schemaAnyType_2() { return &___schemaAnyType_2; }
	inline void set_schemaAnyType_2(XmlSchemaComplexType_t1768361183 * value)
	{
		___schemaAnyType_2 = value;
		Il2CppCodeGenWriteBarrier(&___schemaAnyType_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_13() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463_StaticFields, ___U3CU3Ef__switchU24mapB_13)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24mapB_13() const { return ___U3CU3Ef__switchU24mapB_13; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24mapB_13() { return &___U3CU3Ef__switchU24mapB_13; }
	inline void set_U3CU3Ef__switchU24mapB_13(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24mapB_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapB_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_14() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463_StaticFields, ___U3CU3Ef__switchU24mapC_14)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24mapC_14() const { return ___U3CU3Ef__switchU24mapC_14; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24mapC_14() { return &___U3CU3Ef__switchU24mapC_14; }
	inline void set_U3CU3Ef__switchU24mapC_14(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24mapC_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapC_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapD_15() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463_StaticFields, ___U3CU3Ef__switchU24mapD_15)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24mapD_15() const { return ___U3CU3Ef__switchU24mapD_15; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24mapD_15() { return &___U3CU3Ef__switchU24mapD_15; }
	inline void set_U3CU3Ef__switchU24mapD_15(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24mapD_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapD_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapE_16() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463_StaticFields, ___U3CU3Ef__switchU24mapE_16)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24mapE_16() const { return ___U3CU3Ef__switchU24mapE_16; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24mapE_16() { return &___U3CU3Ef__switchU24mapE_16; }
	inline void set_U3CU3Ef__switchU24mapE_16(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24mapE_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapE_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_17() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463_StaticFields, ___U3CU3Ef__switchU24mapF_17)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24mapF_17() const { return ___U3CU3Ef__switchU24mapF_17; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24mapF_17() { return &___U3CU3Ef__switchU24mapF_17; }
	inline void set_U3CU3Ef__switchU24mapF_17(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24mapF_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapF_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_18() { return static_cast<int32_t>(offsetof(XmlSchemaDataImporter_t3635006463_StaticFields, ___U3CU3Ef__switchU24map10_18)); }
	inline Dictionary_2_t4260152181 * get_U3CU3Ef__switchU24map10_18() const { return ___U3CU3Ef__switchU24map10_18; }
	inline Dictionary_2_t4260152181 ** get_address_of_U3CU3Ef__switchU24map10_18() { return &___U3CU3Ef__switchU24map10_18; }
	inline void set_U3CU3Ef__switchU24map10_18(Dictionary_2_t4260152181 * value)
	{
		___U3CU3Ef__switchU24map10_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map10_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
