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
// System.Collections.ArrayList
struct ArrayList_t1468494371;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/SignerInfo
struct  SignerInfo_t3333122010  : public Il2CppObject
{
public:
	// System.Byte Mono.Security.PKCS7/SignerInfo::version
	uint8_t ___version_0;
	// System.String Mono.Security.PKCS7/SignerInfo::hashAlgorithm
	String_t* ___hashAlgorithm_1;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::authenticatedAttributes
	ArrayList_t1468494371 * ___authenticatedAttributes_2;
	// System.Collections.ArrayList Mono.Security.PKCS7/SignerInfo::unauthenticatedAttributes
	ArrayList_t1468494371 * ___unauthenticatedAttributes_3;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::signature
	ByteU5BU5D_t3835026402* ___signature_4;
	// System.String Mono.Security.PKCS7/SignerInfo::issuer
	String_t* ___issuer_5;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::serial
	ByteU5BU5D_t3835026402* ___serial_6;
	// System.Byte[] Mono.Security.PKCS7/SignerInfo::ski
	ByteU5BU5D_t3835026402* ___ski_7;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(SignerInfo_t3333122010, ___version_0)); }
	inline uint8_t get_version_0() const { return ___version_0; }
	inline uint8_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint8_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_hashAlgorithm_1() { return static_cast<int32_t>(offsetof(SignerInfo_t3333122010, ___hashAlgorithm_1)); }
	inline String_t* get_hashAlgorithm_1() const { return ___hashAlgorithm_1; }
	inline String_t** get_address_of_hashAlgorithm_1() { return &___hashAlgorithm_1; }
	inline void set_hashAlgorithm_1(String_t* value)
	{
		___hashAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier(&___hashAlgorithm_1, value);
	}

	inline static int32_t get_offset_of_authenticatedAttributes_2() { return static_cast<int32_t>(offsetof(SignerInfo_t3333122010, ___authenticatedAttributes_2)); }
	inline ArrayList_t1468494371 * get_authenticatedAttributes_2() const { return ___authenticatedAttributes_2; }
	inline ArrayList_t1468494371 ** get_address_of_authenticatedAttributes_2() { return &___authenticatedAttributes_2; }
	inline void set_authenticatedAttributes_2(ArrayList_t1468494371 * value)
	{
		___authenticatedAttributes_2 = value;
		Il2CppCodeGenWriteBarrier(&___authenticatedAttributes_2, value);
	}

	inline static int32_t get_offset_of_unauthenticatedAttributes_3() { return static_cast<int32_t>(offsetof(SignerInfo_t3333122010, ___unauthenticatedAttributes_3)); }
	inline ArrayList_t1468494371 * get_unauthenticatedAttributes_3() const { return ___unauthenticatedAttributes_3; }
	inline ArrayList_t1468494371 ** get_address_of_unauthenticatedAttributes_3() { return &___unauthenticatedAttributes_3; }
	inline void set_unauthenticatedAttributes_3(ArrayList_t1468494371 * value)
	{
		___unauthenticatedAttributes_3 = value;
		Il2CppCodeGenWriteBarrier(&___unauthenticatedAttributes_3, value);
	}

	inline static int32_t get_offset_of_signature_4() { return static_cast<int32_t>(offsetof(SignerInfo_t3333122010, ___signature_4)); }
	inline ByteU5BU5D_t3835026402* get_signature_4() const { return ___signature_4; }
	inline ByteU5BU5D_t3835026402** get_address_of_signature_4() { return &___signature_4; }
	inline void set_signature_4(ByteU5BU5D_t3835026402* value)
	{
		___signature_4 = value;
		Il2CppCodeGenWriteBarrier(&___signature_4, value);
	}

	inline static int32_t get_offset_of_issuer_5() { return static_cast<int32_t>(offsetof(SignerInfo_t3333122010, ___issuer_5)); }
	inline String_t* get_issuer_5() const { return ___issuer_5; }
	inline String_t** get_address_of_issuer_5() { return &___issuer_5; }
	inline void set_issuer_5(String_t* value)
	{
		___issuer_5 = value;
		Il2CppCodeGenWriteBarrier(&___issuer_5, value);
	}

	inline static int32_t get_offset_of_serial_6() { return static_cast<int32_t>(offsetof(SignerInfo_t3333122010, ___serial_6)); }
	inline ByteU5BU5D_t3835026402* get_serial_6() const { return ___serial_6; }
	inline ByteU5BU5D_t3835026402** get_address_of_serial_6() { return &___serial_6; }
	inline void set_serial_6(ByteU5BU5D_t3835026402* value)
	{
		___serial_6 = value;
		Il2CppCodeGenWriteBarrier(&___serial_6, value);
	}

	inline static int32_t get_offset_of_ski_7() { return static_cast<int32_t>(offsetof(SignerInfo_t3333122010, ___ski_7)); }
	inline ByteU5BU5D_t3835026402* get_ski_7() const { return ___ski_7; }
	inline ByteU5BU5D_t3835026402** get_address_of_ski_7() { return &___ski_7; }
	inline void set_ski_7(ByteU5BU5D_t3835026402* value)
	{
		___ski_7 = value;
		Il2CppCodeGenWriteBarrier(&___ski_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
