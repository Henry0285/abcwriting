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

// System.IO.CStreamWriter
struct CStreamWriter_t995404595;
// System.IO.Stream
struct Stream_t2768948945;
// System.Text.Encoding
struct Encoding_t2125916575;
// System.Char[]
struct CharU5BU5D_t1685951112;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "mscorlib_System_Text_Encoding2125916575.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.IO.CStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void CStreamWriter__ctor_m4239814955 (CStreamWriter_t995404595 * __this, Stream_t2768948945 * ___stream, Encoding_t2125916575 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void CStreamWriter_Write_m3468285691 (CStreamWriter_t995404595 * __this, CharU5BU5D_t1685951112* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char)
extern "C"  void CStreamWriter_Write_m3213359241 (CStreamWriter_t995404595 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteString(System.String)
extern "C"  void CStreamWriter_InternalWriteString_m2976066110 (CStreamWriter_t995404595 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteChar(System.Char)
extern "C"  void CStreamWriter_InternalWriteChar_m1578570558 (CStreamWriter_t995404595 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::InternalWriteChars(System.Char[],System.Int32)
extern "C"  void CStreamWriter_InternalWriteChars_m2564613996 (CStreamWriter_t995404595 * __this, CharU5BU5D_t1685951112* ___buffer, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.Char[])
extern "C"  void CStreamWriter_Write_m2969837959 (CStreamWriter_t995404595 * __this, CharU5BU5D_t1685951112* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.CStreamWriter::Write(System.String)
extern "C"  void CStreamWriter_Write_m1803684744 (CStreamWriter_t995404595 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
