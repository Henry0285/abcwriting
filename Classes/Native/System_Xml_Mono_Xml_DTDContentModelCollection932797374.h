﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDContentModelCollection
struct  DTDContentModelCollection_t932797374  : public Il2CppObject
{
public:
	// System.Collections.ArrayList Mono.Xml.DTDContentModelCollection::contentModel
	ArrayList_t1468494371 * ___contentModel_0;

public:
	inline static int32_t get_offset_of_contentModel_0() { return static_cast<int32_t>(offsetof(DTDContentModelCollection_t932797374, ___contentModel_0)); }
	inline ArrayList_t1468494371 * get_contentModel_0() const { return ___contentModel_0; }
	inline ArrayList_t1468494371 ** get_address_of_contentModel_0() { return &___contentModel_0; }
	inline void set_contentModel_0(ArrayList_t1468494371 * value)
	{
		___contentModel_0 = value;
		Il2CppCodeGenWriteBarrier(&___contentModel_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
