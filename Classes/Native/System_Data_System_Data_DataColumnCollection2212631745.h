﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t1312997718;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Data.DataTable
struct DataTable_t1931745339;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t1537071935;

#include "System_Data_System_Data_InternalDataCollectionBase1127348851.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnCollection
struct  DataColumnCollection_t2212631745  : public InternalDataCollectionBase_t1127348851
{
public:
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnNameCount
	Hashtable_t1312997718 * ___columnNameCount_2;
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnFromName
	Hashtable_t1312997718 * ___columnFromName_3;
	// System.Collections.ArrayList System.Data.DataColumnCollection::autoIncrement
	ArrayList_t1468494371 * ___autoIncrement_4;
	// System.Int32 System.Data.DataColumnCollection::defaultColumnIndex
	int32_t ___defaultColumnIndex_5;
	// System.Data.DataTable System.Data.DataColumnCollection::parentTable
	DataTable_t1931745339 * ___parentTable_6;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanged
	CollectionChangeEventHandler_t1537071935 * ___CollectionChanged_9;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionMetaDataChanged
	CollectionChangeEventHandler_t1537071935 * ___CollectionMetaDataChanged_10;

public:
	inline static int32_t get_offset_of_columnNameCount_2() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2212631745, ___columnNameCount_2)); }
	inline Hashtable_t1312997718 * get_columnNameCount_2() const { return ___columnNameCount_2; }
	inline Hashtable_t1312997718 ** get_address_of_columnNameCount_2() { return &___columnNameCount_2; }
	inline void set_columnNameCount_2(Hashtable_t1312997718 * value)
	{
		___columnNameCount_2 = value;
		Il2CppCodeGenWriteBarrier(&___columnNameCount_2, value);
	}

	inline static int32_t get_offset_of_columnFromName_3() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2212631745, ___columnFromName_3)); }
	inline Hashtable_t1312997718 * get_columnFromName_3() const { return ___columnFromName_3; }
	inline Hashtable_t1312997718 ** get_address_of_columnFromName_3() { return &___columnFromName_3; }
	inline void set_columnFromName_3(Hashtable_t1312997718 * value)
	{
		___columnFromName_3 = value;
		Il2CppCodeGenWriteBarrier(&___columnFromName_3, value);
	}

	inline static int32_t get_offset_of_autoIncrement_4() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2212631745, ___autoIncrement_4)); }
	inline ArrayList_t1468494371 * get_autoIncrement_4() const { return ___autoIncrement_4; }
	inline ArrayList_t1468494371 ** get_address_of_autoIncrement_4() { return &___autoIncrement_4; }
	inline void set_autoIncrement_4(ArrayList_t1468494371 * value)
	{
		___autoIncrement_4 = value;
		Il2CppCodeGenWriteBarrier(&___autoIncrement_4, value);
	}

	inline static int32_t get_offset_of_defaultColumnIndex_5() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2212631745, ___defaultColumnIndex_5)); }
	inline int32_t get_defaultColumnIndex_5() const { return ___defaultColumnIndex_5; }
	inline int32_t* get_address_of_defaultColumnIndex_5() { return &___defaultColumnIndex_5; }
	inline void set_defaultColumnIndex_5(int32_t value)
	{
		___defaultColumnIndex_5 = value;
	}

	inline static int32_t get_offset_of_parentTable_6() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2212631745, ___parentTable_6)); }
	inline DataTable_t1931745339 * get_parentTable_6() const { return ___parentTable_6; }
	inline DataTable_t1931745339 ** get_address_of_parentTable_6() { return &___parentTable_6; }
	inline void set_parentTable_6(DataTable_t1931745339 * value)
	{
		___parentTable_6 = value;
		Il2CppCodeGenWriteBarrier(&___parentTable_6, value);
	}

	inline static int32_t get_offset_of_CollectionChanged_9() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2212631745, ___CollectionChanged_9)); }
	inline CollectionChangeEventHandler_t1537071935 * get_CollectionChanged_9() const { return ___CollectionChanged_9; }
	inline CollectionChangeEventHandler_t1537071935 ** get_address_of_CollectionChanged_9() { return &___CollectionChanged_9; }
	inline void set_CollectionChanged_9(CollectionChangeEventHandler_t1537071935 * value)
	{
		___CollectionChanged_9 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionChanged_9, value);
	}

	inline static int32_t get_offset_of_CollectionMetaDataChanged_10() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2212631745, ___CollectionMetaDataChanged_10)); }
	inline CollectionChangeEventHandler_t1537071935 * get_CollectionMetaDataChanged_10() const { return ___CollectionMetaDataChanged_10; }
	inline CollectionChangeEventHandler_t1537071935 ** get_address_of_CollectionMetaDataChanged_10() { return &___CollectionMetaDataChanged_10; }
	inline void set_CollectionMetaDataChanged_10(CollectionChangeEventHandler_t1537071935 * value)
	{
		___CollectionMetaDataChanged_10 = value;
		Il2CppCodeGenWriteBarrier(&___CollectionMetaDataChanged_10, value);
	}
};

struct DataColumnCollection_t2212631745_StaticFields
{
public:
	// System.String System.Data.DataColumnCollection::ColumnPrefix
	String_t* ___ColumnPrefix_7;
	// System.String[] System.Data.DataColumnCollection::TenColumns
	StringU5BU5D_t3764931161* ___TenColumns_8;

public:
	inline static int32_t get_offset_of_ColumnPrefix_7() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2212631745_StaticFields, ___ColumnPrefix_7)); }
	inline String_t* get_ColumnPrefix_7() const { return ___ColumnPrefix_7; }
	inline String_t** get_address_of_ColumnPrefix_7() { return &___ColumnPrefix_7; }
	inline void set_ColumnPrefix_7(String_t* value)
	{
		___ColumnPrefix_7 = value;
		Il2CppCodeGenWriteBarrier(&___ColumnPrefix_7, value);
	}

	inline static int32_t get_offset_of_TenColumns_8() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2212631745_StaticFields, ___TenColumns_8)); }
	inline StringU5BU5D_t3764931161* get_TenColumns_8() const { return ___TenColumns_8; }
	inline StringU5BU5D_t3764931161** get_address_of_TenColumns_8() { return &___TenColumns_8; }
	inline void set_TenColumns_8(StringU5BU5D_t3764931161* value)
	{
		___TenColumns_8 = value;
		Il2CppCodeGenWriteBarrier(&___TenColumns_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
