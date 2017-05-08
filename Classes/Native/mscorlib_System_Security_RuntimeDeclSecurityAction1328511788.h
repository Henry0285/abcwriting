#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4028081426.h"
#include "mscorlib_System_Security_RuntimeDeclSecurityEntry1423461327.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityActions
struct  RuntimeDeclSecurityActions_t1328511788 
{
public:
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::cas
	RuntimeDeclSecurityEntry_t1423461327  ___cas_0;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::noncas
	RuntimeDeclSecurityEntry_t1423461327  ___noncas_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::choice
	RuntimeDeclSecurityEntry_t1423461327  ___choice_2;

public:
	inline static int32_t get_offset_of_cas_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t1328511788, ___cas_0)); }
	inline RuntimeDeclSecurityEntry_t1423461327  get_cas_0() const { return ___cas_0; }
	inline RuntimeDeclSecurityEntry_t1423461327 * get_address_of_cas_0() { return &___cas_0; }
	inline void set_cas_0(RuntimeDeclSecurityEntry_t1423461327  value)
	{
		___cas_0 = value;
	}

	inline static int32_t get_offset_of_noncas_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t1328511788, ___noncas_1)); }
	inline RuntimeDeclSecurityEntry_t1423461327  get_noncas_1() const { return ___noncas_1; }
	inline RuntimeDeclSecurityEntry_t1423461327 * get_address_of_noncas_1() { return &___noncas_1; }
	inline void set_noncas_1(RuntimeDeclSecurityEntry_t1423461327  value)
	{
		___noncas_1 = value;
	}

	inline static int32_t get_offset_of_choice_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t1328511788, ___choice_2)); }
	inline RuntimeDeclSecurityEntry_t1423461327  get_choice_2() const { return ___choice_2; }
	inline RuntimeDeclSecurityEntry_t1423461327 * get_address_of_choice_2() { return &___choice_2; }
	inline void set_choice_2(RuntimeDeclSecurityEntry_t1423461327  value)
	{
		___choice_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Security.RuntimeDeclSecurityActions
struct RuntimeDeclSecurityActions_t1328511788_marshaled_pinvoke
{
	RuntimeDeclSecurityEntry_t1423461327_marshaled_pinvoke ___cas_0;
	RuntimeDeclSecurityEntry_t1423461327_marshaled_pinvoke ___noncas_1;
	RuntimeDeclSecurityEntry_t1423461327_marshaled_pinvoke ___choice_2;
};
// Native definition for marshalling of: System.Security.RuntimeDeclSecurityActions
struct RuntimeDeclSecurityActions_t1328511788_marshaled_com
{
	RuntimeDeclSecurityEntry_t1423461327_marshaled_com ___cas_0;
	RuntimeDeclSecurityEntry_t1423461327_marshaled_com ___noncas_1;
	RuntimeDeclSecurityEntry_t1423461327_marshaled_com ___choice_2;
};
