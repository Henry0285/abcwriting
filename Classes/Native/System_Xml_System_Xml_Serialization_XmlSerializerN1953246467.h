﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Specialized.ListDictionary
struct ListDictionary_t3722401323;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializerNamespaces
struct  XmlSerializerNamespaces_t1953246467  : public Il2CppObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Xml.Serialization.XmlSerializerNamespaces::namespaces
	ListDictionary_t3722401323 * ___namespaces_0;

public:
	inline static int32_t get_offset_of_namespaces_0() { return static_cast<int32_t>(offsetof(XmlSerializerNamespaces_t1953246467, ___namespaces_0)); }
	inline ListDictionary_t3722401323 * get_namespaces_0() const { return ___namespaces_0; }
	inline ListDictionary_t3722401323 ** get_address_of_namespaces_0() { return &___namespaces_0; }
	inline void set_namespaces_0(ListDictionary_t3722401323 * value)
	{
		___namespaces_0 = value;
		Il2CppCodeGenWriteBarrier(&___namespaces_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
