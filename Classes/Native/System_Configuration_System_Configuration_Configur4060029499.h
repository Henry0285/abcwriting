﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t2448051756;

#include "mscorlib_System_Attribute1145342165.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationValidatorAttribute
struct  ConfigurationValidatorAttribute_t4060029499  : public Attribute_t1145342165
{
public:
	// System.Type System.Configuration.ConfigurationValidatorAttribute::validatorType
	Type_t * ___validatorType_0;
	// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationValidatorAttribute::instance
	ConfigurationValidatorBase_t2448051756 * ___instance_1;

public:
	inline static int32_t get_offset_of_validatorType_0() { return static_cast<int32_t>(offsetof(ConfigurationValidatorAttribute_t4060029499, ___validatorType_0)); }
	inline Type_t * get_validatorType_0() const { return ___validatorType_0; }
	inline Type_t ** get_address_of_validatorType_0() { return &___validatorType_0; }
	inline void set_validatorType_0(Type_t * value)
	{
		___validatorType_0 = value;
		Il2CppCodeGenWriteBarrier(&___validatorType_0, value);
	}

	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(ConfigurationValidatorAttribute_t4060029499, ___instance_1)); }
	inline ConfigurationValidatorBase_t2448051756 * get_instance_1() const { return ___instance_1; }
	inline ConfigurationValidatorBase_t2448051756 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(ConfigurationValidatorBase_t2448051756 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier(&___instance_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
