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

// ConfigXmlTextReader
struct ConfigXmlTextReader_t3212066157;
// System.IO.Stream
struct Stream_t2768948945;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t657369457;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_IO_TextReader657369457.h"

// System.Void ConfigXmlTextReader::.ctor(System.IO.Stream,System.String)
extern "C"  void ConfigXmlTextReader__ctor_m965728314 (ConfigXmlTextReader_t3212066157 * __this, Stream_t2768948945 * ___s, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigXmlTextReader::.ctor(System.IO.TextReader,System.String)
extern "C"  void ConfigXmlTextReader__ctor_m2778808542 (ConfigXmlTextReader_t3212066157 * __this, TextReader_t657369457 * ___input, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ConfigXmlTextReader::get_Filename()
extern "C"  String_t* ConfigXmlTextReader_get_Filename_m3902945538 (ConfigXmlTextReader_t3212066157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
