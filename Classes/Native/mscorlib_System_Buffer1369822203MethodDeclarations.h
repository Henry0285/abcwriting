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

// System.Array
struct Il2CppArray;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array4136897760.h"

// System.Int32 System.Buffer::ByteLength(System.Array)
extern "C"  int32_t Buffer_ByteLength_m2561508581 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Buffer_BlockCopy_m1586717258 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___src, int32_t ___srcOffset, Il2CppArray * ___dst, int32_t ___dstOffset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Buffer::ByteLengthInternal(System.Array)
extern "C"  int32_t Buffer_ByteLengthInternal_m2613416786 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Buffer::BlockCopyInternal(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  bool Buffer_BlockCopyInternal_m2627156229 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___src, int32_t ___src_offset, Il2CppArray * ___dest, int32_t ___dest_offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
