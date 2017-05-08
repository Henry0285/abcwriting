#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t1685951112;
// System.IFormatProvider
struct IFormatProvider_t3206534394;
// System.IO.TextWriter
struct TextWriter_t1448322145;

#include "mscorlib_System_MarshalByRefObject3870530982.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t1448322145  : public MarshalByRefObject_t3870530982
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t1685951112* ___CoreNewLine_1;
	// System.IFormatProvider System.IO.TextWriter::internalFormatProvider
	Il2CppObject * ___internalFormatProvider_2;

public:
	inline static int32_t get_offset_of_CoreNewLine_1() { return static_cast<int32_t>(offsetof(TextWriter_t1448322145, ___CoreNewLine_1)); }
	inline CharU5BU5D_t1685951112* get_CoreNewLine_1() const { return ___CoreNewLine_1; }
	inline CharU5BU5D_t1685951112** get_address_of_CoreNewLine_1() { return &___CoreNewLine_1; }
	inline void set_CoreNewLine_1(CharU5BU5D_t1685951112* value)
	{
		___CoreNewLine_1 = value;
		Il2CppCodeGenWriteBarrier(&___CoreNewLine_1, value);
	}

	inline static int32_t get_offset_of_internalFormatProvider_2() { return static_cast<int32_t>(offsetof(TextWriter_t1448322145, ___internalFormatProvider_2)); }
	inline Il2CppObject * get_internalFormatProvider_2() const { return ___internalFormatProvider_2; }
	inline Il2CppObject ** get_address_of_internalFormatProvider_2() { return &___internalFormatProvider_2; }
	inline void set_internalFormatProvider_2(Il2CppObject * value)
	{
		___internalFormatProvider_2 = value;
		Il2CppCodeGenWriteBarrier(&___internalFormatProvider_2, value);
	}
};

struct TextWriter_t1448322145_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t1448322145 * ___Null_3;

public:
	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextWriter_t1448322145_StaticFields, ___Null_3)); }
	inline TextWriter_t1448322145 * get_Null_3() const { return ___Null_3; }
	inline TextWriter_t1448322145 ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextWriter_t1448322145 * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier(&___Null_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
