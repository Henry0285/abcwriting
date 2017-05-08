#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;

#include "System_System_ComponentModel_PropertyDescriptor3424853503.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnPropertyDescriptor
struct  DataColumnPropertyDescriptor_t53657477  : public PropertyDescriptor_t3424853503
{
public:
	// System.Boolean System.Data.DataColumnPropertyDescriptor::readOnly
	bool ___readOnly_3;
	// System.Type System.Data.DataColumnPropertyDescriptor::componentType
	Type_t * ___componentType_4;
	// System.Type System.Data.DataColumnPropertyDescriptor::propertyType
	Type_t * ___propertyType_5;
	// System.Boolean System.Data.DataColumnPropertyDescriptor::browsable
	bool ___browsable_6;
	// System.Int32 System.Data.DataColumnPropertyDescriptor::columnIndex
	int32_t ___columnIndex_7;

public:
	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t53657477, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}

	inline static int32_t get_offset_of_componentType_4() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t53657477, ___componentType_4)); }
	inline Type_t * get_componentType_4() const { return ___componentType_4; }
	inline Type_t ** get_address_of_componentType_4() { return &___componentType_4; }
	inline void set_componentType_4(Type_t * value)
	{
		___componentType_4 = value;
		Il2CppCodeGenWriteBarrier(&___componentType_4, value);
	}

	inline static int32_t get_offset_of_propertyType_5() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t53657477, ___propertyType_5)); }
	inline Type_t * get_propertyType_5() const { return ___propertyType_5; }
	inline Type_t ** get_address_of_propertyType_5() { return &___propertyType_5; }
	inline void set_propertyType_5(Type_t * value)
	{
		___propertyType_5 = value;
		Il2CppCodeGenWriteBarrier(&___propertyType_5, value);
	}

	inline static int32_t get_offset_of_browsable_6() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t53657477, ___browsable_6)); }
	inline bool get_browsable_6() const { return ___browsable_6; }
	inline bool* get_address_of_browsable_6() { return &___browsable_6; }
	inline void set_browsable_6(bool value)
	{
		___browsable_6 = value;
	}

	inline static int32_t get_offset_of_columnIndex_7() { return static_cast<int32_t>(offsetof(DataColumnPropertyDescriptor_t53657477, ___columnIndex_7)); }
	inline int32_t get_columnIndex_7() const { return ___columnIndex_7; }
	inline int32_t* get_address_of_columnIndex_7() { return &___columnIndex_7; }
	inline void set_columnIndex_7(int32_t value)
	{
		___columnIndex_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
