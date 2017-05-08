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
// System.Data.DataColumnCollection
struct DataColumnCollection_t2212631745;
// System.Data.ConstraintCollection
struct ConstraintCollection_t571689508;
// System.String
struct String_t;
// System.Data.PropertyCollection
struct PropertyCollection_t1951657822;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.Data.DataRelationCollection
struct DataRelationCollection_t3900360787;
// System.Data.UniqueConstraint
struct UniqueConstraint_t2586895203;
// System.Data.DataRowCollection
struct DataRowCollection_t851321131;
// System.ComponentModel.ISite
struct ISite_t3358050495;
// System.Data.DataRowBuilder
struct DataRowBuilder_t1178000844;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Data.Common.RecordCache
struct RecordCache_t3088292707;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3334205439;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t2781139492;
// System.Text.RegularExpressions.Regex
struct Regex_t272817006;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3098821942;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t1744847757;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t4233303943;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t471806853;

#include "System_System_ComponentModel_MarshalByValueComponen624418364.h"
#include "System_Data_System_Data_SerializationFormat2164474910.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTable
struct  DataTable_t1931745339  : public MarshalByValueComponent_t624418364
{
public:
	// System.Data.DataSet System.Data.DataTable::dataSet
	DataSet_t646994783 * ___dataSet_3;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_4;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t2212631745 * ____columnCollection_5;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_t571689508 * ____constraintCollection_6;
	// System.String System.Data.DataTable::_displayExpression
	String_t* ____displayExpression_7;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_t1951657822 * ____extendedProperties_8;
	// System.Globalization.CultureInfo System.Data.DataTable::_locale
	CultureInfo_t634113868 * ____locale_9;
	// System.Int32 System.Data.DataTable::_minimumCapacity
	int32_t ____minimumCapacity_10;
	// System.String System.Data.DataTable::_nameSpace
	String_t* ____nameSpace_11;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelations
	DataRelationCollection_t3900360787 * ____childRelations_12;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelations
	DataRelationCollection_t3900360787 * ____parentRelations_13;
	// System.String System.Data.DataTable::_prefix
	String_t* ____prefix_14;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKeyConstraint
	UniqueConstraint_t2586895203 * ____primaryKeyConstraint_15;
	// System.Data.DataRowCollection System.Data.DataTable::_rows
	DataRowCollection_t851321131 * ____rows_16;
	// System.ComponentModel.ISite System.Data.DataTable::_site
	Il2CppObject * ____site_17;
	// System.String System.Data.DataTable::_tableName
	String_t* ____tableName_18;
	// System.Boolean System.Data.DataTable::_duringDataLoad
	bool ____duringDataLoad_19;
	// System.Boolean System.Data.DataTable::_nullConstraintViolationDuringDataLoad
	bool ____nullConstraintViolationDuringDataLoad_20;
	// System.Boolean System.Data.DataTable::dataSetPrevEnforceConstraints
	bool ___dataSetPrevEnforceConstraints_21;
	// System.Boolean System.Data.DataTable::enforceConstraints
	bool ___enforceConstraints_22;
	// System.Data.DataRowBuilder System.Data.DataTable::_rowBuilder
	DataRowBuilder_t1178000844 * ____rowBuilder_23;
	// System.Collections.ArrayList System.Data.DataTable::_indexes
	ArrayList_t1468494371 * ____indexes_24;
	// System.Data.Common.RecordCache System.Data.DataTable::_recordCache
	RecordCache_t3088292707 * ____recordCache_25;
	// System.Int32 System.Data.DataTable::_defaultValuesRowIndex
	int32_t ____defaultValuesRowIndex_26;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_27;
	// System.Boolean System.Data.DataTable::_virginCaseSensitive
	bool ____virginCaseSensitive_28;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorsCache
	PropertyDescriptorCollection_t3334205439 * ____propertyDescriptorsCache_29;
	// System.Data.DataColumn[] System.Data.DataTable::_latestPrimaryKeyCols
	DataColumnU5BU5D_t2781139492* ____latestPrimaryKeyCols_32;
	// System.Data.DataRow[] System.Data.DataTable::empty_rows
	DataRowU5BU5D_t3098821942* ___empty_rows_33;
	// System.Boolean System.Data.DataTable::tableInitialized
	bool ___tableInitialized_34;
	// System.Data.SerializationFormat System.Data.DataTable::remotingFormat
	int32_t ___remotingFormat_35;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanged
	DataColumnChangeEventHandler_t1744847757 * ___ColumnChanged_36;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanging
	DataColumnChangeEventHandler_t1744847757 * ___ColumnChanging_37;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanged
	DataRowChangeEventHandler_t4233303943 * ___RowChanged_38;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanging
	DataRowChangeEventHandler_t4233303943 * ___RowChanging_39;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleted
	DataRowChangeEventHandler_t4233303943 * ___RowDeleted_40;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleting
	DataRowChangeEventHandler_t4233303943 * ___RowDeleting_41;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::TableNewRow
	DataTableNewRowEventHandler_t471806853 * ___TableNewRow_42;

public:
	inline static int32_t get_offset_of_dataSet_3() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ___dataSet_3)); }
	inline DataSet_t646994783 * get_dataSet_3() const { return ___dataSet_3; }
	inline DataSet_t646994783 ** get_address_of_dataSet_3() { return &___dataSet_3; }
	inline void set_dataSet_3(DataSet_t646994783 * value)
	{
		___dataSet_3 = value;
		Il2CppCodeGenWriteBarrier(&___dataSet_3, value);
	}

	inline static int32_t get_offset_of__caseSensitive_4() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____caseSensitive_4)); }
	inline bool get__caseSensitive_4() const { return ____caseSensitive_4; }
	inline bool* get_address_of__caseSensitive_4() { return &____caseSensitive_4; }
	inline void set__caseSensitive_4(bool value)
	{
		____caseSensitive_4 = value;
	}

	inline static int32_t get_offset_of__columnCollection_5() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____columnCollection_5)); }
	inline DataColumnCollection_t2212631745 * get__columnCollection_5() const { return ____columnCollection_5; }
	inline DataColumnCollection_t2212631745 ** get_address_of__columnCollection_5() { return &____columnCollection_5; }
	inline void set__columnCollection_5(DataColumnCollection_t2212631745 * value)
	{
		____columnCollection_5 = value;
		Il2CppCodeGenWriteBarrier(&____columnCollection_5, value);
	}

	inline static int32_t get_offset_of__constraintCollection_6() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____constraintCollection_6)); }
	inline ConstraintCollection_t571689508 * get__constraintCollection_6() const { return ____constraintCollection_6; }
	inline ConstraintCollection_t571689508 ** get_address_of__constraintCollection_6() { return &____constraintCollection_6; }
	inline void set__constraintCollection_6(ConstraintCollection_t571689508 * value)
	{
		____constraintCollection_6 = value;
		Il2CppCodeGenWriteBarrier(&____constraintCollection_6, value);
	}

	inline static int32_t get_offset_of__displayExpression_7() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____displayExpression_7)); }
	inline String_t* get__displayExpression_7() const { return ____displayExpression_7; }
	inline String_t** get_address_of__displayExpression_7() { return &____displayExpression_7; }
	inline void set__displayExpression_7(String_t* value)
	{
		____displayExpression_7 = value;
		Il2CppCodeGenWriteBarrier(&____displayExpression_7, value);
	}

	inline static int32_t get_offset_of__extendedProperties_8() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____extendedProperties_8)); }
	inline PropertyCollection_t1951657822 * get__extendedProperties_8() const { return ____extendedProperties_8; }
	inline PropertyCollection_t1951657822 ** get_address_of__extendedProperties_8() { return &____extendedProperties_8; }
	inline void set__extendedProperties_8(PropertyCollection_t1951657822 * value)
	{
		____extendedProperties_8 = value;
		Il2CppCodeGenWriteBarrier(&____extendedProperties_8, value);
	}

	inline static int32_t get_offset_of__locale_9() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____locale_9)); }
	inline CultureInfo_t634113868 * get__locale_9() const { return ____locale_9; }
	inline CultureInfo_t634113868 ** get_address_of__locale_9() { return &____locale_9; }
	inline void set__locale_9(CultureInfo_t634113868 * value)
	{
		____locale_9 = value;
		Il2CppCodeGenWriteBarrier(&____locale_9, value);
	}

	inline static int32_t get_offset_of__minimumCapacity_10() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____minimumCapacity_10)); }
	inline int32_t get__minimumCapacity_10() const { return ____minimumCapacity_10; }
	inline int32_t* get_address_of__minimumCapacity_10() { return &____minimumCapacity_10; }
	inline void set__minimumCapacity_10(int32_t value)
	{
		____minimumCapacity_10 = value;
	}

	inline static int32_t get_offset_of__nameSpace_11() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____nameSpace_11)); }
	inline String_t* get__nameSpace_11() const { return ____nameSpace_11; }
	inline String_t** get_address_of__nameSpace_11() { return &____nameSpace_11; }
	inline void set__nameSpace_11(String_t* value)
	{
		____nameSpace_11 = value;
		Il2CppCodeGenWriteBarrier(&____nameSpace_11, value);
	}

	inline static int32_t get_offset_of__childRelations_12() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____childRelations_12)); }
	inline DataRelationCollection_t3900360787 * get__childRelations_12() const { return ____childRelations_12; }
	inline DataRelationCollection_t3900360787 ** get_address_of__childRelations_12() { return &____childRelations_12; }
	inline void set__childRelations_12(DataRelationCollection_t3900360787 * value)
	{
		____childRelations_12 = value;
		Il2CppCodeGenWriteBarrier(&____childRelations_12, value);
	}

	inline static int32_t get_offset_of__parentRelations_13() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____parentRelations_13)); }
	inline DataRelationCollection_t3900360787 * get__parentRelations_13() const { return ____parentRelations_13; }
	inline DataRelationCollection_t3900360787 ** get_address_of__parentRelations_13() { return &____parentRelations_13; }
	inline void set__parentRelations_13(DataRelationCollection_t3900360787 * value)
	{
		____parentRelations_13 = value;
		Il2CppCodeGenWriteBarrier(&____parentRelations_13, value);
	}

	inline static int32_t get_offset_of__prefix_14() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____prefix_14)); }
	inline String_t* get__prefix_14() const { return ____prefix_14; }
	inline String_t** get_address_of__prefix_14() { return &____prefix_14; }
	inline void set__prefix_14(String_t* value)
	{
		____prefix_14 = value;
		Il2CppCodeGenWriteBarrier(&____prefix_14, value);
	}

	inline static int32_t get_offset_of__primaryKeyConstraint_15() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____primaryKeyConstraint_15)); }
	inline UniqueConstraint_t2586895203 * get__primaryKeyConstraint_15() const { return ____primaryKeyConstraint_15; }
	inline UniqueConstraint_t2586895203 ** get_address_of__primaryKeyConstraint_15() { return &____primaryKeyConstraint_15; }
	inline void set__primaryKeyConstraint_15(UniqueConstraint_t2586895203 * value)
	{
		____primaryKeyConstraint_15 = value;
		Il2CppCodeGenWriteBarrier(&____primaryKeyConstraint_15, value);
	}

	inline static int32_t get_offset_of__rows_16() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____rows_16)); }
	inline DataRowCollection_t851321131 * get__rows_16() const { return ____rows_16; }
	inline DataRowCollection_t851321131 ** get_address_of__rows_16() { return &____rows_16; }
	inline void set__rows_16(DataRowCollection_t851321131 * value)
	{
		____rows_16 = value;
		Il2CppCodeGenWriteBarrier(&____rows_16, value);
	}

	inline static int32_t get_offset_of__site_17() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____site_17)); }
	inline Il2CppObject * get__site_17() const { return ____site_17; }
	inline Il2CppObject ** get_address_of__site_17() { return &____site_17; }
	inline void set__site_17(Il2CppObject * value)
	{
		____site_17 = value;
		Il2CppCodeGenWriteBarrier(&____site_17, value);
	}

	inline static int32_t get_offset_of__tableName_18() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____tableName_18)); }
	inline String_t* get__tableName_18() const { return ____tableName_18; }
	inline String_t** get_address_of__tableName_18() { return &____tableName_18; }
	inline void set__tableName_18(String_t* value)
	{
		____tableName_18 = value;
		Il2CppCodeGenWriteBarrier(&____tableName_18, value);
	}

	inline static int32_t get_offset_of__duringDataLoad_19() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____duringDataLoad_19)); }
	inline bool get__duringDataLoad_19() const { return ____duringDataLoad_19; }
	inline bool* get_address_of__duringDataLoad_19() { return &____duringDataLoad_19; }
	inline void set__duringDataLoad_19(bool value)
	{
		____duringDataLoad_19 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolationDuringDataLoad_20() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____nullConstraintViolationDuringDataLoad_20)); }
	inline bool get__nullConstraintViolationDuringDataLoad_20() const { return ____nullConstraintViolationDuringDataLoad_20; }
	inline bool* get_address_of__nullConstraintViolationDuringDataLoad_20() { return &____nullConstraintViolationDuringDataLoad_20; }
	inline void set__nullConstraintViolationDuringDataLoad_20(bool value)
	{
		____nullConstraintViolationDuringDataLoad_20 = value;
	}

	inline static int32_t get_offset_of_dataSetPrevEnforceConstraints_21() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ___dataSetPrevEnforceConstraints_21)); }
	inline bool get_dataSetPrevEnforceConstraints_21() const { return ___dataSetPrevEnforceConstraints_21; }
	inline bool* get_address_of_dataSetPrevEnforceConstraints_21() { return &___dataSetPrevEnforceConstraints_21; }
	inline void set_dataSetPrevEnforceConstraints_21(bool value)
	{
		___dataSetPrevEnforceConstraints_21 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_22() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ___enforceConstraints_22)); }
	inline bool get_enforceConstraints_22() const { return ___enforceConstraints_22; }
	inline bool* get_address_of_enforceConstraints_22() { return &___enforceConstraints_22; }
	inline void set_enforceConstraints_22(bool value)
	{
		___enforceConstraints_22 = value;
	}

	inline static int32_t get_offset_of__rowBuilder_23() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____rowBuilder_23)); }
	inline DataRowBuilder_t1178000844 * get__rowBuilder_23() const { return ____rowBuilder_23; }
	inline DataRowBuilder_t1178000844 ** get_address_of__rowBuilder_23() { return &____rowBuilder_23; }
	inline void set__rowBuilder_23(DataRowBuilder_t1178000844 * value)
	{
		____rowBuilder_23 = value;
		Il2CppCodeGenWriteBarrier(&____rowBuilder_23, value);
	}

	inline static int32_t get_offset_of__indexes_24() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____indexes_24)); }
	inline ArrayList_t1468494371 * get__indexes_24() const { return ____indexes_24; }
	inline ArrayList_t1468494371 ** get_address_of__indexes_24() { return &____indexes_24; }
	inline void set__indexes_24(ArrayList_t1468494371 * value)
	{
		____indexes_24 = value;
		Il2CppCodeGenWriteBarrier(&____indexes_24, value);
	}

	inline static int32_t get_offset_of__recordCache_25() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____recordCache_25)); }
	inline RecordCache_t3088292707 * get__recordCache_25() const { return ____recordCache_25; }
	inline RecordCache_t3088292707 ** get_address_of__recordCache_25() { return &____recordCache_25; }
	inline void set__recordCache_25(RecordCache_t3088292707 * value)
	{
		____recordCache_25 = value;
		Il2CppCodeGenWriteBarrier(&____recordCache_25, value);
	}

	inline static int32_t get_offset_of__defaultValuesRowIndex_26() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____defaultValuesRowIndex_26)); }
	inline int32_t get__defaultValuesRowIndex_26() const { return ____defaultValuesRowIndex_26; }
	inline int32_t* get_address_of__defaultValuesRowIndex_26() { return &____defaultValuesRowIndex_26; }
	inline void set__defaultValuesRowIndex_26(int32_t value)
	{
		____defaultValuesRowIndex_26 = value;
	}

	inline static int32_t get_offset_of_fInitInProgress_27() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ___fInitInProgress_27)); }
	inline bool get_fInitInProgress_27() const { return ___fInitInProgress_27; }
	inline bool* get_address_of_fInitInProgress_27() { return &___fInitInProgress_27; }
	inline void set_fInitInProgress_27(bool value)
	{
		___fInitInProgress_27 = value;
	}

	inline static int32_t get_offset_of__virginCaseSensitive_28() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____virginCaseSensitive_28)); }
	inline bool get__virginCaseSensitive_28() const { return ____virginCaseSensitive_28; }
	inline bool* get_address_of__virginCaseSensitive_28() { return &____virginCaseSensitive_28; }
	inline void set__virginCaseSensitive_28(bool value)
	{
		____virginCaseSensitive_28 = value;
	}

	inline static int32_t get_offset_of__propertyDescriptorsCache_29() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____propertyDescriptorsCache_29)); }
	inline PropertyDescriptorCollection_t3334205439 * get__propertyDescriptorsCache_29() const { return ____propertyDescriptorsCache_29; }
	inline PropertyDescriptorCollection_t3334205439 ** get_address_of__propertyDescriptorsCache_29() { return &____propertyDescriptorsCache_29; }
	inline void set__propertyDescriptorsCache_29(PropertyDescriptorCollection_t3334205439 * value)
	{
		____propertyDescriptorsCache_29 = value;
		Il2CppCodeGenWriteBarrier(&____propertyDescriptorsCache_29, value);
	}

	inline static int32_t get_offset_of__latestPrimaryKeyCols_32() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ____latestPrimaryKeyCols_32)); }
	inline DataColumnU5BU5D_t2781139492* get__latestPrimaryKeyCols_32() const { return ____latestPrimaryKeyCols_32; }
	inline DataColumnU5BU5D_t2781139492** get_address_of__latestPrimaryKeyCols_32() { return &____latestPrimaryKeyCols_32; }
	inline void set__latestPrimaryKeyCols_32(DataColumnU5BU5D_t2781139492* value)
	{
		____latestPrimaryKeyCols_32 = value;
		Il2CppCodeGenWriteBarrier(&____latestPrimaryKeyCols_32, value);
	}

	inline static int32_t get_offset_of_empty_rows_33() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ___empty_rows_33)); }
	inline DataRowU5BU5D_t3098821942* get_empty_rows_33() const { return ___empty_rows_33; }
	inline DataRowU5BU5D_t3098821942** get_address_of_empty_rows_33() { return &___empty_rows_33; }
	inline void set_empty_rows_33(DataRowU5BU5D_t3098821942* value)
	{
		___empty_rows_33 = value;
		Il2CppCodeGenWriteBarrier(&___empty_rows_33, value);
	}

	inline static int32_t get_offset_of_tableInitialized_34() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ___tableInitialized_34)); }
	inline bool get_tableInitialized_34() const { return ___tableInitialized_34; }
	inline bool* get_address_of_tableInitialized_34() { return &___tableInitialized_34; }
	inline void set_tableInitialized_34(bool value)
	{
		___tableInitialized_34 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_35() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ___remotingFormat_35)); }
	inline int32_t get_remotingFormat_35() const { return ___remotingFormat_35; }
	inline int32_t* get_address_of_remotingFormat_35() { return &___remotingFormat_35; }
	inline void set_remotingFormat_35(int32_t value)
	{
		___remotingFormat_35 = value;
	}

	inline static int32_t get_offset_of_ColumnChanged_36() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ___ColumnChanged_36)); }
	inline DataColumnChangeEventHandler_t1744847757 * get_ColumnChanged_36() const { return ___ColumnChanged_36; }
	inline DataColumnChangeEventHandler_t1744847757 ** get_address_of_ColumnChanged_36() { return &___ColumnChanged_36; }
	inline void set_ColumnChanged_36(DataColumnChangeEventHandler_t1744847757 * value)
	{
		___ColumnChanged_36 = value;
		Il2CppCodeGenWriteBarrier(&___ColumnChanged_36, value);
	}

	inline static int32_t get_offset_of_ColumnChanging_37() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ___ColumnChanging_37)); }
	inline DataColumnChangeEventHandler_t1744847757 * get_ColumnChanging_37() const { return ___ColumnChanging_37; }
	inline DataColumnChangeEventHandler_t1744847757 ** get_address_of_ColumnChanging_37() { return &___ColumnChanging_37; }
	inline void set_ColumnChanging_37(DataColumnChangeEventHandler_t1744847757 * value)
	{
		___ColumnChanging_37 = value;
		Il2CppCodeGenWriteBarrier(&___ColumnChanging_37, value);
	}

	inline static int32_t get_offset_of_RowChanged_38() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ___RowChanged_38)); }
	inline DataRowChangeEventHandler_t4233303943 * get_RowChanged_38() const { return ___RowChanged_38; }
	inline DataRowChangeEventHandler_t4233303943 ** get_address_of_RowChanged_38() { return &___RowChanged_38; }
	inline void set_RowChanged_38(DataRowChangeEventHandler_t4233303943 * value)
	{
		___RowChanged_38 = value;
		Il2CppCodeGenWriteBarrier(&___RowChanged_38, value);
	}

	inline static int32_t get_offset_of_RowChanging_39() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ___RowChanging_39)); }
	inline DataRowChangeEventHandler_t4233303943 * get_RowChanging_39() const { return ___RowChanging_39; }
	inline DataRowChangeEventHandler_t4233303943 ** get_address_of_RowChanging_39() { return &___RowChanging_39; }
	inline void set_RowChanging_39(DataRowChangeEventHandler_t4233303943 * value)
	{
		___RowChanging_39 = value;
		Il2CppCodeGenWriteBarrier(&___RowChanging_39, value);
	}

	inline static int32_t get_offset_of_RowDeleted_40() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ___RowDeleted_40)); }
	inline DataRowChangeEventHandler_t4233303943 * get_RowDeleted_40() const { return ___RowDeleted_40; }
	inline DataRowChangeEventHandler_t4233303943 ** get_address_of_RowDeleted_40() { return &___RowDeleted_40; }
	inline void set_RowDeleted_40(DataRowChangeEventHandler_t4233303943 * value)
	{
		___RowDeleted_40 = value;
		Il2CppCodeGenWriteBarrier(&___RowDeleted_40, value);
	}

	inline static int32_t get_offset_of_RowDeleting_41() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ___RowDeleting_41)); }
	inline DataRowChangeEventHandler_t4233303943 * get_RowDeleting_41() const { return ___RowDeleting_41; }
	inline DataRowChangeEventHandler_t4233303943 ** get_address_of_RowDeleting_41() { return &___RowDeleting_41; }
	inline void set_RowDeleting_41(DataRowChangeEventHandler_t4233303943 * value)
	{
		___RowDeleting_41 = value;
		Il2CppCodeGenWriteBarrier(&___RowDeleting_41, value);
	}

	inline static int32_t get_offset_of_TableNewRow_42() { return static_cast<int32_t>(offsetof(DataTable_t1931745339, ___TableNewRow_42)); }
	inline DataTableNewRowEventHandler_t471806853 * get_TableNewRow_42() const { return ___TableNewRow_42; }
	inline DataTableNewRowEventHandler_t471806853 ** get_address_of_TableNewRow_42() { return &___TableNewRow_42; }
	inline void set_TableNewRow_42(DataTableNewRowEventHandler_t471806853 * value)
	{
		___TableNewRow_42 = value;
		Il2CppCodeGenWriteBarrier(&___TableNewRow_42, value);
	}
};

struct DataTable_t1931745339_StaticFields
{
public:
	// System.Data.DataColumn[] System.Data.DataTable::_emptyColumnArray
	DataColumnU5BU5D_t2781139492* ____emptyColumnArray_30;
	// System.Text.RegularExpressions.Regex System.Data.DataTable::SortRegex
	Regex_t272817006 * ___SortRegex_31;

public:
	inline static int32_t get_offset_of__emptyColumnArray_30() { return static_cast<int32_t>(offsetof(DataTable_t1931745339_StaticFields, ____emptyColumnArray_30)); }
	inline DataColumnU5BU5D_t2781139492* get__emptyColumnArray_30() const { return ____emptyColumnArray_30; }
	inline DataColumnU5BU5D_t2781139492** get_address_of__emptyColumnArray_30() { return &____emptyColumnArray_30; }
	inline void set__emptyColumnArray_30(DataColumnU5BU5D_t2781139492* value)
	{
		____emptyColumnArray_30 = value;
		Il2CppCodeGenWriteBarrier(&____emptyColumnArray_30, value);
	}

	inline static int32_t get_offset_of_SortRegex_31() { return static_cast<int32_t>(offsetof(DataTable_t1931745339_StaticFields, ___SortRegex_31)); }
	inline Regex_t272817006 * get_SortRegex_31() const { return ___SortRegex_31; }
	inline Regex_t272817006 ** get_address_of_SortRegex_31() { return &___SortRegex_31; }
	inline void set_SortRegex_31(Regex_t272817006 * value)
	{
		___SortRegex_31 = value;
		Il2CppCodeGenWriteBarrier(&___SortRegex_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
