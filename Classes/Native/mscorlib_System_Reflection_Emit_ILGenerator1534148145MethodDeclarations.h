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

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1534148145;
// System.Reflection.Module
struct Module_t2520131484;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t3949125329;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t1584466501;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2856386896;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t2442356668;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Module2520131484.h"
#include "mscorlib_System_Reflection_MemberInfo1952312350.h"
#include "mscorlib_System_Reflection_Emit_OpCode3005284773.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Reflection_Emit_Label2766254729.h"
#include "mscorlib_System_Reflection_ConstructorInfo2856386896.h"
#include "mscorlib_System_Reflection_FieldInfo3183186664.h"
#include "mscorlib_System_Reflection_Emit_LocalBuilder1584466501.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator1534148145.h"

// System.Void System.Reflection.Emit.ILGenerator::.ctor(System.Reflection.Module,System.Reflection.Emit.TokenGenerator,System.Int32)
extern "C"  void ILGenerator__ctor_m3365621387 (ILGenerator_t1534148145 * __this, Module_t2520131484 * ___m, Il2CppObject * ___token_gen, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::.cctor()
extern "C"  void ILGenerator__cctor_m3943061018 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::add_token_fixup(System.Reflection.MemberInfo)
extern "C"  void ILGenerator_add_token_fixup_m3261621911 (ILGenerator_t1534148145 * __this, MemberInfo_t * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::make_room(System.Int32)
extern "C"  void ILGenerator_make_room_m373147874 (ILGenerator_t1534148145 * __this, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::emit_int(System.Int32)
extern "C"  void ILGenerator_emit_int_m1061022647 (ILGenerator_t1534148145 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::ll_emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_ll_emit_m2087647272 (ILGenerator_t1534148145 * __this, OpCode_t3005284773  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::target_len(System.Reflection.Emit.OpCode)
extern "C"  int32_t ILGenerator_target_len_m1964456727 (Il2CppObject * __this /* static, unused */, OpCode_t3005284773  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type)
extern "C"  LocalBuilder_t1584466501 * ILGenerator_DeclareLocal_m2024612863 (ILGenerator_t1534148145 * __this, Type_t * ___localType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type,System.Boolean)
extern "C"  LocalBuilder_t1584466501 * ILGenerator_DeclareLocal_m2758488526 (ILGenerator_t1534148145 * __this, Type_t * ___localType, bool ___pinned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.Label System.Reflection.Emit.ILGenerator::DefineLabel()
extern "C"  Label_t2766254729  ILGenerator_DefineLabel_m1064918102 (ILGenerator_t1534148145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_Emit_m531109645 (ILGenerator_t1534148145 * __this, OpCode_t3005284773  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Byte)
extern "C"  void ILGenerator_Emit_m716320246 (ILGenerator_t1534148145 * __this, OpCode_t3005284773  ___opcode, uint8_t ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.ConstructorInfo)
extern "C"  void ILGenerator_Emit_m116557729 (ILGenerator_t1534148145 * __this, OpCode_t3005284773  ___opcode, ConstructorInfo_t2856386896 * ___con, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.FieldInfo)
extern "C"  void ILGenerator_Emit_m2714420963 (ILGenerator_t1534148145 * __this, OpCode_t3005284773  ___opcode, FieldInfo_t * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Int32)
extern "C"  void ILGenerator_Emit_m243800782 (ILGenerator_t1534148145 * __this, OpCode_t3005284773  ___opcode, int32_t ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Int64)
extern "C"  void ILGenerator_Emit_m1050369935 (ILGenerator_t1534148145 * __this, OpCode_t3005284773  ___opcode, int64_t ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.Label)
extern "C"  void ILGenerator_Emit_m2474021108 (ILGenerator_t1534148145 * __this, OpCode_t3005284773  ___opcode, Label_t2766254729  ___label, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.LocalBuilder)
extern "C"  void ILGenerator_Emit_m4076099962 (ILGenerator_t1534148145 * __this, OpCode_t3005284773  ___opcode, LocalBuilder_t1584466501 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo)
extern "C"  void ILGenerator_Emit_m149869034 (ILGenerator_t1534148145 * __this, OpCode_t3005284773  ___opcode, MethodInfo_t * ___meth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Int32)
extern "C"  void ILGenerator_Emit_m2782317915 (ILGenerator_t1534148145 * __this, OpCode_t3005284773  ___opcode, MethodInfo_t * ___method, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.String)
extern "C"  void ILGenerator_Emit_m4163373327 (ILGenerator_t1534148145 * __this, OpCode_t3005284773  ___opcode, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type)
extern "C"  void ILGenerator_Emit_m145986960 (ILGenerator_t1534148145 * __this, OpCode_t3005284773  ___opcode, Type_t * ___cls, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[])
extern "C"  void ILGenerator_EmitCall_m2105676417 (ILGenerator_t1534148145 * __this, OpCode_t3005284773  ___opcode, MethodInfo_t * ___methodInfo, TypeU5BU5D_t2442356668* ___optionalParameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::MarkLabel(System.Reflection.Emit.Label)
extern "C"  void ILGenerator_MarkLabel_m3560445835 (ILGenerator_t1534148145 * __this, Label_t2766254729  ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::label_fixup()
extern "C"  void ILGenerator_label_fixup_m1325994348 (ILGenerator_t1534148145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::Mono_GetCurrentOffset(System.Reflection.Emit.ILGenerator)
extern "C"  int32_t ILGenerator_Mono_GetCurrentOffset_m3553856682 (Il2CppObject * __this /* static, unused */, ILGenerator_t1534148145 * ___ig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
