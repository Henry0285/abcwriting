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

// System.String
struct String_t;
// System.IO.FileStream
struct FileStream_t4109615879;
// System.IO.StreamReader
struct StreamReader_t3810211700;
// System.Text.Encoding
struct Encoding_t2125916575;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_IO_FileAttributes1304440100.h"
#include "mscorlib_System_IO_FileMode638157444.h"
#include "mscorlib_System_Text_Encoding2125916575.h"

// System.Void System.IO.File::Copy(System.String,System.String)
extern "C"  void File_Copy_m3404668382 (Il2CppObject * __this /* static, unused */, String_t* ___sourceFileName, String_t* ___destFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
extern "C"  void File_Copy_m1439309123 (Il2CppObject * __this /* static, unused */, String_t* ___sourceFileName, String_t* ___destFileName, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Delete(System.String)
extern "C"  void File_Delete_m2115477556 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C"  bool File_Exists_m1685968367 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileAttributes System.IO.File::GetAttributes(System.String)
extern "C"  int32_t File_GetAttributes_m633222855 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C"  FileStream_t4109615879 * File_Open_m1543461971 (Il2CppObject * __this /* static, unused */, String_t* ___path, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C"  FileStream_t4109615879 * File_OpenRead_m132329087 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C"  StreamReader_t3810211700 * File_OpenText_m4058508963 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String)
extern "C"  String_t* File_ReadAllText_m1018286608 (Il2CppObject * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String,System.Text.Encoding)
extern "C"  String_t* File_ReadAllText_m1182037563 (Il2CppObject * __this /* static, unused */, String_t* ___path, Encoding_t2125916575 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
