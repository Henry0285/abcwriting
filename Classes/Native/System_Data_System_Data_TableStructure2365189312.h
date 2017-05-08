#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataTable
struct DataTable_t1931745339;
// System.Collections.Hashtable
struct Hashtable_t1312997718;
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Data.DataColumn
struct DataColumn_t1080745049;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.TableStructure
struct  TableStructure_t2365189312  : public Il2CppObject
{
public:
	// System.Data.DataTable System.Data.TableStructure::Table
	DataTable_t1931745339 * ___Table_0;
	// System.Collections.Hashtable System.Data.TableStructure::OrdinalColumns
	Hashtable_t1312997718 * ___OrdinalColumns_1;
	// System.Collections.ArrayList System.Data.TableStructure::NonOrdinalColumns
	ArrayList_t1468494371 * ___NonOrdinalColumns_2;
	// System.Data.DataColumn System.Data.TableStructure::PrimaryKey
	DataColumn_t1080745049 * ___PrimaryKey_3;

public:
	inline static int32_t get_offset_of_Table_0() { return static_cast<int32_t>(offsetof(TableStructure_t2365189312, ___Table_0)); }
	inline DataTable_t1931745339 * get_Table_0() const { return ___Table_0; }
	inline DataTable_t1931745339 ** get_address_of_Table_0() { return &___Table_0; }
	inline void set_Table_0(DataTable_t1931745339 * value)
	{
		___Table_0 = value;
		Il2CppCodeGenWriteBarrier(&___Table_0, value);
	}

	inline static int32_t get_offset_of_OrdinalColumns_1() { return static_cast<int32_t>(offsetof(TableStructure_t2365189312, ___OrdinalColumns_1)); }
	inline Hashtable_t1312997718 * get_OrdinalColumns_1() const { return ___OrdinalColumns_1; }
	inline Hashtable_t1312997718 ** get_address_of_OrdinalColumns_1() { return &___OrdinalColumns_1; }
	inline void set_OrdinalColumns_1(Hashtable_t1312997718 * value)
	{
		___OrdinalColumns_1 = value;
		Il2CppCodeGenWriteBarrier(&___OrdinalColumns_1, value);
	}

	inline static int32_t get_offset_of_NonOrdinalColumns_2() { return static_cast<int32_t>(offsetof(TableStructure_t2365189312, ___NonOrdinalColumns_2)); }
	inline ArrayList_t1468494371 * get_NonOrdinalColumns_2() const { return ___NonOrdinalColumns_2; }
	inline ArrayList_t1468494371 ** get_address_of_NonOrdinalColumns_2() { return &___NonOrdinalColumns_2; }
	inline void set_NonOrdinalColumns_2(ArrayList_t1468494371 * value)
	{
		___NonOrdinalColumns_2 = value;
		Il2CppCodeGenWriteBarrier(&___NonOrdinalColumns_2, value);
	}

	inline static int32_t get_offset_of_PrimaryKey_3() { return static_cast<int32_t>(offsetof(TableStructure_t2365189312, ___PrimaryKey_3)); }
	inline DataColumn_t1080745049 * get_PrimaryKey_3() const { return ___PrimaryKey_3; }
	inline DataColumn_t1080745049 ** get_address_of_PrimaryKey_3() { return &___PrimaryKey_3; }
	inline void set_PrimaryKey_3(DataColumn_t1080745049 * value)
	{
		___PrimaryKey_3 = value;
		Il2CppCodeGenWriteBarrier(&___PrimaryKey_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
