#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.StringWriter
struct StringWriter_t1632897591;
// System.Text.StringBuilder
struct StringBuilder_t2393427626;
// System.IFormatProvider
struct IFormatProvider_t3206534394;
// System.Text.Encoding
struct Encoding_t2125916575;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1685951112;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder2393427626.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.IO.StringWriter::.ctor()
extern "C"  void StringWriter__ctor_m59456937 (StringWriter_t1632897591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
extern "C"  void StringWriter__ctor_m1896773521 (StringWriter_t1632897591 * __this, StringBuilder_t2393427626 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
extern "C"  void StringWriter__ctor_m2262370389 (StringWriter_t1632897591 * __this, StringBuilder_t2393427626 * ___sb, Il2CppObject * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.StringWriter::get_Encoding()
extern "C"  Encoding_t2125916575 * StringWriter_get_Encoding_m140088475 (StringWriter_t1632897591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Close()
extern "C"  void StringWriter_Close_m3864090879 (StringWriter_t1632897591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Dispose(System.Boolean)
extern "C"  void StringWriter_Dispose_m3703936621 (StringWriter_t1632897591 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.IO.StringWriter::GetStringBuilder()
extern "C"  StringBuilder_t2393427626 * StringWriter_GetStringBuilder_m1930930052 (StringWriter_t1632897591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringWriter::ToString()
extern "C"  String_t* StringWriter_ToString_m2783694016 (StringWriter_t1632897591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char)
extern "C"  void StringWriter_Write_m4119283327 (StringWriter_t1632897591 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.String)
extern "C"  void StringWriter_Write_m3641447140 (StringWriter_t1632897591 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void StringWriter_Write_m2596694237 (StringWriter_t1632897591 * __this, CharU5BU5D_t1685951112* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
