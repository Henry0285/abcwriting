﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1429855556;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Publisher
struct  Publisher_t3076774703  : public Il2CppObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Policy.Publisher::m_cert
	X509Certificate_t1429855556 * ___m_cert_0;

public:
	inline static int32_t get_offset_of_m_cert_0() { return static_cast<int32_t>(offsetof(Publisher_t3076774703, ___m_cert_0)); }
	inline X509Certificate_t1429855556 * get_m_cert_0() const { return ___m_cert_0; }
	inline X509Certificate_t1429855556 ** get_address_of_m_cert_0() { return &___m_cert_0; }
	inline void set_m_cert_0(X509Certificate_t1429855556 * value)
	{
		___m_cert_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_cert_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
