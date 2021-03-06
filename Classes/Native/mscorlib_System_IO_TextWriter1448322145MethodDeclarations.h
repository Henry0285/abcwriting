﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.TextWriter
struct TextWriter_t1448322145;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1685951112;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter1448322145.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.IO.TextWriter::.ctor()
extern "C"  void TextWriter__ctor_m2225796097 (TextWriter_t1448322145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
extern "C"  void TextWriter__cctor_m4047845042 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextWriter::get_NewLine()
extern "C"  String_t* TextWriter_get_NewLine_m2459857399 (TextWriter_t1448322145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
extern "C"  void TextWriter_Close_m1193327819 (TextWriter_t1448322145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
extern "C"  void TextWriter_Dispose_m4285181317 (TextWriter_t1448322145 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
extern "C"  void TextWriter_Dispose_m700634098 (TextWriter_t1448322145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
extern "C"  void TextWriter_Flush_m2049245553 (TextWriter_t1448322145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
extern "C"  TextWriter_t1448322145 * TextWriter_Synchronized_m1237756643 (Il2CppObject * __this /* static, unused */, TextWriter_t1448322145 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
extern "C"  void TextWriter_Write_m641273755 (TextWriter_t1448322145 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
extern "C"  void TextWriter_Write_m3202446297 (TextWriter_t1448322145 * __this, CharU5BU5D_t1685951112* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
extern "C"  void TextWriter_Write_m576684782 (TextWriter_t1448322145 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object)
extern "C"  void TextWriter_Write_m2354498908 (TextWriter_t1448322145 * __this, String_t* ___format, Il2CppObject * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object[])
extern "C"  void TextWriter_Write_m362200944 (TextWriter_t1448322145 * __this, String_t* ___format, ObjectU5BU5D_t3632007997* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void TextWriter_Write_m3244403173 (TextWriter_t1448322145 * __this, CharU5BU5D_t1685951112* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object,System.Object)
extern "C"  void TextWriter_Write_m3807416046 (TextWriter_t1448322145 * __this, String_t* ___format, Il2CppObject * ___arg0, Il2CppObject * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String,System.Object,System.Object,System.Object)
extern "C"  void TextWriter_Write_m4123154780 (TextWriter_t1448322145 * __this, String_t* ___format, Il2CppObject * ___arg0, Il2CppObject * ___arg1, Il2CppObject * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
extern "C"  void TextWriter_WriteLine_m116198862 (TextWriter_t1448322145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
extern "C"  void TextWriter_WriteLine_m1754475888 (TextWriter_t1448322145 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object)
extern "C"  void TextWriter_WriteLine_m4183081714 (TextWriter_t1448322145 * __this, String_t* ___format, Il2CppObject * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object[])
extern "C"  void TextWriter_WriteLine_m932123802 (TextWriter_t1448322145 * __this, String_t* ___format, ObjectU5BU5D_t3632007997* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object,System.Object)
extern "C"  void TextWriter_WriteLine_m4002581872 (TextWriter_t1448322145 * __this, String_t* ___format, Il2CppObject * ___arg0, Il2CppObject * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String,System.Object,System.Object,System.Object)
extern "C"  void TextWriter_WriteLine_m2588418802 (TextWriter_t1448322145 * __this, String_t* ___format, Il2CppObject * ___arg0, Il2CppObject * ___arg1, Il2CppObject * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
