#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataSet
struct DataSet_t646994783;
// System.Xml.XmlDocument
struct XmlDocument_t3951480190;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Data.TableMappingCollection
struct TableMappingCollection_t440988401;
// System.Data.RelationStructureCollection
struct RelationStructureCollection_t4052480210;

#include "mscorlib_System_Object707969140.h"
#include "System_Data_System_Data_XmlReadMode1968640897.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlDataInferenceLoader
struct  XmlDataInferenceLoader_t151107508  : public Il2CppObject
{
public:
	// System.Data.DataSet System.Data.XmlDataInferenceLoader::dataset
	DataSet_t646994783 * ___dataset_0;
	// System.Xml.XmlDocument System.Data.XmlDataInferenceLoader::document
	XmlDocument_t3951480190 * ___document_1;
	// System.Data.XmlReadMode System.Data.XmlDataInferenceLoader::mode
	int32_t ___mode_2;
	// System.Collections.ArrayList System.Data.XmlDataInferenceLoader::ignoredNamespaces
	ArrayList_t1468494371 * ___ignoredNamespaces_3;
	// System.Data.TableMappingCollection System.Data.XmlDataInferenceLoader::tables
	TableMappingCollection_t440988401 * ___tables_4;
	// System.Data.RelationStructureCollection System.Data.XmlDataInferenceLoader::relations
	RelationStructureCollection_t4052480210 * ___relations_5;

public:
	inline static int32_t get_offset_of_dataset_0() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t151107508, ___dataset_0)); }
	inline DataSet_t646994783 * get_dataset_0() const { return ___dataset_0; }
	inline DataSet_t646994783 ** get_address_of_dataset_0() { return &___dataset_0; }
	inline void set_dataset_0(DataSet_t646994783 * value)
	{
		___dataset_0 = value;
		Il2CppCodeGenWriteBarrier(&___dataset_0, value);
	}

	inline static int32_t get_offset_of_document_1() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t151107508, ___document_1)); }
	inline XmlDocument_t3951480190 * get_document_1() const { return ___document_1; }
	inline XmlDocument_t3951480190 ** get_address_of_document_1() { return &___document_1; }
	inline void set_document_1(XmlDocument_t3951480190 * value)
	{
		___document_1 = value;
		Il2CppCodeGenWriteBarrier(&___document_1, value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t151107508, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_ignoredNamespaces_3() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t151107508, ___ignoredNamespaces_3)); }
	inline ArrayList_t1468494371 * get_ignoredNamespaces_3() const { return ___ignoredNamespaces_3; }
	inline ArrayList_t1468494371 ** get_address_of_ignoredNamespaces_3() { return &___ignoredNamespaces_3; }
	inline void set_ignoredNamespaces_3(ArrayList_t1468494371 * value)
	{
		___ignoredNamespaces_3 = value;
		Il2CppCodeGenWriteBarrier(&___ignoredNamespaces_3, value);
	}

	inline static int32_t get_offset_of_tables_4() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t151107508, ___tables_4)); }
	inline TableMappingCollection_t440988401 * get_tables_4() const { return ___tables_4; }
	inline TableMappingCollection_t440988401 ** get_address_of_tables_4() { return &___tables_4; }
	inline void set_tables_4(TableMappingCollection_t440988401 * value)
	{
		___tables_4 = value;
		Il2CppCodeGenWriteBarrier(&___tables_4, value);
	}

	inline static int32_t get_offset_of_relations_5() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t151107508, ___relations_5)); }
	inline RelationStructureCollection_t4052480210 * get_relations_5() const { return ___relations_5; }
	inline RelationStructureCollection_t4052480210 ** get_address_of_relations_5() { return &___relations_5; }
	inline void set_relations_5(RelationStructureCollection_t4052480210 * value)
	{
		___relations_5 = value;
		Il2CppCodeGenWriteBarrier(&___relations_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
