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

// System.Security.Cryptography.RijndaelManagedTransform
struct RijndaelManagedTransform_t747097857;
// System.Security.Cryptography.Rijndael
struct Rijndael_t2458293998;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_Rijndael2458293998.h"

// System.Void System.Security.Cryptography.RijndaelManagedTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void RijndaelManagedTransform__ctor_m4034988746 (RijndaelManagedTransform_t747097857 * __this, Rijndael_t2458293998 * ___algo, bool ___encryption, ByteU5BU5D_t3835026402* ___key, ByteU5BU5D_t3835026402* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManagedTransform::System.IDisposable.Dispose()
extern "C"  void RijndaelManagedTransform_System_IDisposable_Dispose_m677512972 (RijndaelManagedTransform_t747097857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RijndaelManagedTransform::get_CanTransformMultipleBlocks()
extern "C"  bool RijndaelManagedTransform_get_CanTransformMultipleBlocks_m3651273004 (RijndaelManagedTransform_t747097857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RijndaelManagedTransform::get_CanReuseTransform()
extern "C"  bool RijndaelManagedTransform_get_CanReuseTransform_m3735256596 (RijndaelManagedTransform_t747097857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::get_InputBlockSize()
extern "C"  int32_t RijndaelManagedTransform_get_InputBlockSize_m1643208480 (RijndaelManagedTransform_t747097857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::get_OutputBlockSize()
extern "C"  int32_t RijndaelManagedTransform_get_OutputBlockSize_m2948293357 (RijndaelManagedTransform_t747097857 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t RijndaelManagedTransform_TransformBlock_m2558865851 (RijndaelManagedTransform_t747097857 * __this, ByteU5BU5D_t3835026402* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t3835026402* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3835026402* RijndaelManagedTransform_TransformFinalBlock_m3663752599 (RijndaelManagedTransform_t747097857 * __this, ByteU5BU5D_t3835026402* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
