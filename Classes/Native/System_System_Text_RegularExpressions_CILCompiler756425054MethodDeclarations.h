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

// System.Text.RegularExpressions.CILCompiler
struct CILCompiler_t756425054;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1917986501;
// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t86757711;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1534148145;
// System.Text.RegularExpressions.CILCompiler/Frame
struct Frame_t2426536275;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"
#include "System_System_Text_RegularExpressions_OpFlags337278977.h"
#include "System_System_Text_RegularExpressions_RxOp4205778246.h"
#include "mscorlib_System_Reflection_Emit_Label2766254729.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator1534148145.h"
#include "mscorlib_System_Reflection_Emit_DynamicMethod86757711.h"
#include "System_System_Text_RegularExpressions_CILCompiler_2426536275.h"

// System.Void System.Text.RegularExpressions.CILCompiler::.ctor()
extern "C"  void CILCompiler__ctor_m1943222730 (CILCompiler_t756425054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::.cctor()
extern "C"  void CILCompiler__cctor_m1915253001 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.CILCompiler::System.Text.RegularExpressions.ICompiler.GetMachineFactory()
extern "C"  Il2CppObject * CILCompiler_System_Text_RegularExpressions_ICompiler_GetMachineFactory_m3210535296 (CILCompiler_t756425054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::GetEvalMethod(System.Byte[],System.Int32)
extern "C"  DynamicMethod_t86757711 * CILCompiler_GetEvalMethod_m1126867179 (CILCompiler_t756425054 * __this, ByteU5BU5D_t3835026402* ___program, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::GetMethod(System.Type,System.String,System.Reflection.MethodInfo&)
extern "C"  MethodInfo_t * CILCompiler_GetMethod_m3502884031 (CILCompiler_t756425054 * __this, Type_t * ___t, String_t* ___name, MethodInfo_t ** ___cached, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Text.RegularExpressions.CILCompiler::GetMethod(System.String,System.Reflection.MethodInfo&)
extern "C"  MethodInfo_t * CILCompiler_GetMethod_m1377558790 (CILCompiler_t756425054 * __this, String_t* ___name, MethodInfo_t ** ___cached, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::ReadInt(System.Byte[],System.Int32)
extern "C"  int32_t CILCompiler_ReadInt_m3815668907 (CILCompiler_t756425054 * __this, ByteU5BU5D_t3835026402* ___code, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.CILCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  uint16_t CILCompiler_MakeFlags_m151487305 (Il2CppObject * __this /* static, unused */, bool ___negate, bool ___ignore, bool ___reverse, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitGenericOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitGenericOp_m15790949 (CILCompiler_t756425054 * __this, uint8_t ___op, bool ___negate, bool ___ignore, bool ___reverse, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOp_m2019674495 (CILCompiler_t756425054 * __this, uint8_t ___op, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOpIgnoreReverse_m1764908920 (CILCompiler_t756425054 * __this, uint8_t ___op, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CILCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void CILCompiler_EmitOpNegateReverse_m1803025076 (CILCompiler_t756425054 * __this, uint8_t ___op, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::CreateEvalMethod(System.Byte[],System.Int32)
extern "C"  DynamicMethod_t86757711 * CILCompiler_CreateEvalMethod_m815146809 (CILCompiler_t756425054 * __this, ByteU5BU5D_t3835026402* ___program, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::ReadShort(System.Byte[],System.Int32)
extern "C"  int32_t CILCompiler_ReadShort_m2390075746 (CILCompiler_t756425054 * __this, ByteU5BU5D_t3835026402* ___program, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.Label System.Text.RegularExpressions.CILCompiler::CreateLabelForPC(System.Reflection.Emit.ILGenerator,System.Int32)
extern "C"  Label_t2766254729  CILCompiler_CreateLabelForPC_m2792596940 (CILCompiler_t756425054 * __this, ILGenerator_t1534148145 * ___ilgen, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CILCompiler::GetILOffset(System.Reflection.Emit.ILGenerator)
extern "C"  int32_t CILCompiler_GetILOffset_m1903661437 (CILCompiler_t756425054 * __this, ILGenerator_t1534148145 * ___ilgen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.DynamicMethod System.Text.RegularExpressions.CILCompiler::EmitEvalMethodBody(System.Reflection.Emit.DynamicMethod,System.Reflection.Emit.ILGenerator,System.Text.RegularExpressions.CILCompiler/Frame,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C"  DynamicMethod_t86757711 * CILCompiler_EmitEvalMethodBody_m2233958002 (CILCompiler_t756425054 * __this, DynamicMethod_t86757711 * ___m, ILGenerator_t1534148145 * ___ilgen, Frame_t2426536275 * ___frame, ByteU5BU5D_t3835026402* ___program, int32_t ___pc, int32_t ___end_pc, bool ___one_op, bool ___no_bump, int32_t* ___out_pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
