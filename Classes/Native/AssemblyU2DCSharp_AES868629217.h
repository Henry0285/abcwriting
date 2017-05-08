#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AES
struct  AES_t868629217  : public Il2CppObject
{
public:

public:
};

struct AES_t868629217_StaticFields
{
public:
	// System.Byte[] AES::rijnKey
	ByteU5BU5D_t3835026402* ___rijnKey_0;
	// System.Byte[] AES::rijnIV
	ByteU5BU5D_t3835026402* ___rijnIV_1;

public:
	inline static int32_t get_offset_of_rijnKey_0() { return static_cast<int32_t>(offsetof(AES_t868629217_StaticFields, ___rijnKey_0)); }
	inline ByteU5BU5D_t3835026402* get_rijnKey_0() const { return ___rijnKey_0; }
	inline ByteU5BU5D_t3835026402** get_address_of_rijnKey_0() { return &___rijnKey_0; }
	inline void set_rijnKey_0(ByteU5BU5D_t3835026402* value)
	{
		___rijnKey_0 = value;
		Il2CppCodeGenWriteBarrier(&___rijnKey_0, value);
	}

	inline static int32_t get_offset_of_rijnIV_1() { return static_cast<int32_t>(offsetof(AES_t868629217_StaticFields, ___rijnIV_1)); }
	inline ByteU5BU5D_t3835026402* get_rijnIV_1() const { return ___rijnIV_1; }
	inline ByteU5BU5D_t3835026402** get_address_of_rijnIV_1() { return &___rijnIV_1; }
	inline void set_rijnIV_1(ByteU5BU5D_t3835026402* value)
	{
		___rijnIV_1 = value;
		Il2CppCodeGenWriteBarrier(&___rijnIV_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
