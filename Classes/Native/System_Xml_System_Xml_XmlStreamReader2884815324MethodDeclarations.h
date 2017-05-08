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

// System.Xml.XmlStreamReader
struct XmlStreamReader_t2884815324;
// System.Xml.XmlInputStream
struct XmlInputStream_t437688047;
// System.IO.Stream
struct Stream_t2768948945;
// System.Char[]
struct CharU5BU5D_t1685951112;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlInputStream437688047.h"
#include "mscorlib_System_IO_Stream2768948945.h"

// System.Void System.Xml.XmlStreamReader::.ctor(System.Xml.XmlInputStream)
extern "C"  void XmlStreamReader__ctor_m1774999454 (XmlStreamReader_t2884815324 * __this, XmlInputStream_t437688047 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::.ctor(System.IO.Stream)
extern "C"  void XmlStreamReader__ctor_m180296020 (XmlStreamReader_t2884815324 * __this, Stream_t2768948945 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::.cctor()
extern "C"  void XmlStreamReader__cctor_m2112518874 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::Close()
extern "C"  void XmlStreamReader_Close_m2848123827 (XmlStreamReader_t2884815324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t XmlStreamReader_Read_m3157282800 (XmlStreamReader_t2884815324 * __this, CharU5BU5D_t1685951112* ___dest_buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::Dispose(System.Boolean)
extern "C"  void XmlStreamReader_Dispose_m3256843505 (XmlStreamReader_t2884815324 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
