﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Boolean[]
struct BooleanU5BU5D_t2235910900;

#include "mscorlib_System_Security_CodeAccessPermission738670945.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SiteIdentityPermission
struct  SiteIdentityPermission_t1229169433  : public CodeAccessPermission_t738670945
{
public:
	// System.String System.Security.Permissions.SiteIdentityPermission::_site
	String_t* ____site_0;

public:
	inline static int32_t get_offset_of__site_0() { return static_cast<int32_t>(offsetof(SiteIdentityPermission_t1229169433, ____site_0)); }
	inline String_t* get__site_0() const { return ____site_0; }
	inline String_t** get_address_of__site_0() { return &____site_0; }
	inline void set__site_0(String_t* value)
	{
		____site_0 = value;
		Il2CppCodeGenWriteBarrier(&____site_0, value);
	}
};

struct SiteIdentityPermission_t1229169433_StaticFields
{
public:
	// System.Boolean[] System.Security.Permissions.SiteIdentityPermission::valid
	BooleanU5BU5D_t2235910900* ___valid_1;

public:
	inline static int32_t get_offset_of_valid_1() { return static_cast<int32_t>(offsetof(SiteIdentityPermission_t1229169433_StaticFields, ___valid_1)); }
	inline BooleanU5BU5D_t2235910900* get_valid_1() const { return ___valid_1; }
	inline BooleanU5BU5D_t2235910900** get_address_of_valid_1() { return &___valid_1; }
	inline void set_valid_1(BooleanU5BU5D_t2235910900* value)
	{
		___valid_1 = value;
		Il2CppCodeGenWriteBarrier(&___valid_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
