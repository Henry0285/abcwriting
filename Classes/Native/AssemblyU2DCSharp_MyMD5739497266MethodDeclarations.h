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

// MyMD5
struct MyMD5_t739497266;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void MyMD5::.ctor()
extern "C"  void MyMD5__ctor_m1076862467 (MyMD5_t739497266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] MyMD5::encryptData(System.String)
extern "C"  ByteU5BU5D_t3835026402* MyMD5_encryptData_m1057579378 (Il2CppObject * __this /* static, unused */, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MyMD5::md5(System.String)
extern "C"  String_t* MyMD5_md5_m1226389350 (Il2CppObject * __this /* static, unused */, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
