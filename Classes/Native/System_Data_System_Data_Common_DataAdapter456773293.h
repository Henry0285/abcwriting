#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.Common.DataTableMappingCollection
struct DataTableMappingCollection_t845819338;
// System.Data.FillErrorEventHandler
struct FillErrorEventHandler_t1710923108;

#include "System_System_ComponentModel_Component3731065100.h"
#include "System_Data_System_Data_MissingMappingAction3124835611.h"
#include "System_Data_System_Data_MissingSchemaAction1278884340.h"
#include "System_Data_System_Data_LoadOption3289795846.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataAdapter
struct  DataAdapter_t456773293  : public Component_t3731065100
{
public:
	// System.Boolean System.Data.Common.DataAdapter::acceptChangesDuringFill
	bool ___acceptChangesDuringFill_4;
	// System.Boolean System.Data.Common.DataAdapter::continueUpdateOnError
	bool ___continueUpdateOnError_5;
	// System.Data.MissingMappingAction System.Data.Common.DataAdapter::missingMappingAction
	int32_t ___missingMappingAction_6;
	// System.Data.MissingSchemaAction System.Data.Common.DataAdapter::missingSchemaAction
	int32_t ___missingSchemaAction_7;
	// System.Data.Common.DataTableMappingCollection System.Data.Common.DataAdapter::tableMappings
	DataTableMappingCollection_t845819338 * ___tableMappings_8;
	// System.Boolean System.Data.Common.DataAdapter::acceptChangesDuringUpdate
	bool ___acceptChangesDuringUpdate_9;
	// System.Data.LoadOption System.Data.Common.DataAdapter::fillLoadOption
	int32_t ___fillLoadOption_10;
	// System.Boolean System.Data.Common.DataAdapter::returnProviderSpecificTypes
	bool ___returnProviderSpecificTypes_11;
	// System.Data.FillErrorEventHandler System.Data.Common.DataAdapter::FillError
	FillErrorEventHandler_t1710923108 * ___FillError_12;

public:
	inline static int32_t get_offset_of_acceptChangesDuringFill_4() { return static_cast<int32_t>(offsetof(DataAdapter_t456773293, ___acceptChangesDuringFill_4)); }
	inline bool get_acceptChangesDuringFill_4() const { return ___acceptChangesDuringFill_4; }
	inline bool* get_address_of_acceptChangesDuringFill_4() { return &___acceptChangesDuringFill_4; }
	inline void set_acceptChangesDuringFill_4(bool value)
	{
		___acceptChangesDuringFill_4 = value;
	}

	inline static int32_t get_offset_of_continueUpdateOnError_5() { return static_cast<int32_t>(offsetof(DataAdapter_t456773293, ___continueUpdateOnError_5)); }
	inline bool get_continueUpdateOnError_5() const { return ___continueUpdateOnError_5; }
	inline bool* get_address_of_continueUpdateOnError_5() { return &___continueUpdateOnError_5; }
	inline void set_continueUpdateOnError_5(bool value)
	{
		___continueUpdateOnError_5 = value;
	}

	inline static int32_t get_offset_of_missingMappingAction_6() { return static_cast<int32_t>(offsetof(DataAdapter_t456773293, ___missingMappingAction_6)); }
	inline int32_t get_missingMappingAction_6() const { return ___missingMappingAction_6; }
	inline int32_t* get_address_of_missingMappingAction_6() { return &___missingMappingAction_6; }
	inline void set_missingMappingAction_6(int32_t value)
	{
		___missingMappingAction_6 = value;
	}

	inline static int32_t get_offset_of_missingSchemaAction_7() { return static_cast<int32_t>(offsetof(DataAdapter_t456773293, ___missingSchemaAction_7)); }
	inline int32_t get_missingSchemaAction_7() const { return ___missingSchemaAction_7; }
	inline int32_t* get_address_of_missingSchemaAction_7() { return &___missingSchemaAction_7; }
	inline void set_missingSchemaAction_7(int32_t value)
	{
		___missingSchemaAction_7 = value;
	}

	inline static int32_t get_offset_of_tableMappings_8() { return static_cast<int32_t>(offsetof(DataAdapter_t456773293, ___tableMappings_8)); }
	inline DataTableMappingCollection_t845819338 * get_tableMappings_8() const { return ___tableMappings_8; }
	inline DataTableMappingCollection_t845819338 ** get_address_of_tableMappings_8() { return &___tableMappings_8; }
	inline void set_tableMappings_8(DataTableMappingCollection_t845819338 * value)
	{
		___tableMappings_8 = value;
		Il2CppCodeGenWriteBarrier(&___tableMappings_8, value);
	}

	inline static int32_t get_offset_of_acceptChangesDuringUpdate_9() { return static_cast<int32_t>(offsetof(DataAdapter_t456773293, ___acceptChangesDuringUpdate_9)); }
	inline bool get_acceptChangesDuringUpdate_9() const { return ___acceptChangesDuringUpdate_9; }
	inline bool* get_address_of_acceptChangesDuringUpdate_9() { return &___acceptChangesDuringUpdate_9; }
	inline void set_acceptChangesDuringUpdate_9(bool value)
	{
		___acceptChangesDuringUpdate_9 = value;
	}

	inline static int32_t get_offset_of_fillLoadOption_10() { return static_cast<int32_t>(offsetof(DataAdapter_t456773293, ___fillLoadOption_10)); }
	inline int32_t get_fillLoadOption_10() const { return ___fillLoadOption_10; }
	inline int32_t* get_address_of_fillLoadOption_10() { return &___fillLoadOption_10; }
	inline void set_fillLoadOption_10(int32_t value)
	{
		___fillLoadOption_10 = value;
	}

	inline static int32_t get_offset_of_returnProviderSpecificTypes_11() { return static_cast<int32_t>(offsetof(DataAdapter_t456773293, ___returnProviderSpecificTypes_11)); }
	inline bool get_returnProviderSpecificTypes_11() const { return ___returnProviderSpecificTypes_11; }
	inline bool* get_address_of_returnProviderSpecificTypes_11() { return &___returnProviderSpecificTypes_11; }
	inline void set_returnProviderSpecificTypes_11(bool value)
	{
		___returnProviderSpecificTypes_11 = value;
	}

	inline static int32_t get_offset_of_FillError_12() { return static_cast<int32_t>(offsetof(DataAdapter_t456773293, ___FillError_12)); }
	inline FillErrorEventHandler_t1710923108 * get_FillError_12() const { return ___FillError_12; }
	inline FillErrorEventHandler_t1710923108 ** get_address_of_FillError_12() { return &___FillError_12; }
	inline void set_FillError_12(FillErrorEventHandler_t1710923108 * value)
	{
		___FillError_12 = value;
		Il2CppCodeGenWriteBarrier(&___FillError_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
