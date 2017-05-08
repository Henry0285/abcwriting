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

// System.Text.RegularExpressions.RxCompiler
struct RxCompiler_t2299880014;
// System.Text.RegularExpressions.LinkRef
struct LinkRef_t3499842314;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1917986501;
// System.Collections.BitArray
struct BitArray_t1153580258;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_RxOp4205778246.h"
#include "System_System_Text_RegularExpressions_LinkRef3499842314.h"
#include "mscorlib_System_Globalization_UnicodeCategory2914296859.h"
#include "System_System_Text_RegularExpressions_Category2881134471.h"
#include "mscorlib_System_Collections_BitArray1153580258.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Text_RegularExpressions_Position1067463710.h"

// System.Void System.Text.RegularExpressions.RxCompiler::.ctor()
extern "C"  void RxCompiler__ctor_m2592327580 (RxCompiler_t2299880014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::MakeRoom(System.Int32)
extern "C"  void RxCompiler_MakeRoom_m462463302 (RxCompiler_t2299880014 * __this, int32_t ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Byte)
extern "C"  void RxCompiler_Emit_m1429737796 (RxCompiler_t2299880014 * __this, uint8_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Text.RegularExpressions.RxOp)
extern "C"  void RxCompiler_Emit_m2803112275 (RxCompiler_t2299880014 * __this, uint8_t ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.UInt16)
extern "C"  void RxCompiler_Emit_m320471761 (RxCompiler_t2299880014 * __this, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Int32)
extern "C"  void RxCompiler_Emit_m1572297820 (RxCompiler_t2299880014 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_BeginLink_m2897669665 (RxCompiler_t2299880014 * __this, LinkRef_t3499842314 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitLink_m1843845055 (RxCompiler_t2299880014 * __this, LinkRef_t3499842314 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.RxCompiler::GetMachineFactory()
extern "C"  Il2CppObject * RxCompiler_GetMachineFactory_m898299723 (RxCompiler_t2299880014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitFalse()
extern "C"  void RxCompiler_EmitFalse_m2150238026 (RxCompiler_t2299880014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitTrue()
extern "C"  void RxCompiler_EmitTrue_m208911561 (RxCompiler_t2299880014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitOp_m2170757811 (RxCompiler_t2299880014 * __this, uint8_t ___op, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitOpIgnoreReverse_m2916010466 (RxCompiler_t2299880014 * __this, uint8_t ___op, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitOpNegateReverse_m2394443942 (RxCompiler_t2299880014 * __this, uint8_t ___op, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitCharacter_m331160236 (RxCompiler_t2299880014 * __this, uint16_t ___c, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitUniCat(System.Globalization.UnicodeCategory,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitUniCat_m3750780004 (RxCompiler_t2299880014 * __this, int32_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCatGeneral(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitCatGeneral_m538424866 (RxCompiler_t2299880014 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitCategory_m1774655050 (RxCompiler_t2299880014 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitNotCategory_m1566852611 (RxCompiler_t2299880014 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitRange_m3284246947 (RxCompiler_t2299880014 * __this, uint16_t ___lo, uint16_t ___hi, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitSet_m2171567683 (RxCompiler_t2299880014 * __this, uint16_t ___lo, BitArray_t1153580258 * ___set, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitString_m3770896224 (RxCompiler_t2299880014 * __this, String_t* ___str, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern "C"  void RxCompiler_EmitPosition_m2763301240 (RxCompiler_t2299880014 * __this, uint16_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpen(System.Int32)
extern "C"  void RxCompiler_EmitOpen_m1788951640 (RxCompiler_t2299880014 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitClose(System.Int32)
extern "C"  void RxCompiler_EmitClose_m3137615108 (RxCompiler_t2299880014 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitBalanceStart_m3492232572 (RxCompiler_t2299880014 * __this, int32_t ___gid, int32_t ___balance, bool ___capture, LinkRef_t3499842314 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBalance()
extern "C"  void RxCompiler_EmitBalance_m1872916693 (RxCompiler_t2299880014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern "C"  void RxCompiler_EmitReference_m3488579965 (RxCompiler_t2299880014 * __this, int32_t ___gid, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitIfDefined_m2744798462 (RxCompiler_t2299880014 * __this, int32_t ___gid, LinkRef_t3499842314 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitSub_m2508051691 (RxCompiler_t2299880014 * __this, LinkRef_t3499842314 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitTest_m1407545509 (RxCompiler_t2299880014 * __this, LinkRef_t3499842314 * ___yes, LinkRef_t3499842314 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitBranch_m3125228475 (RxCompiler_t2299880014 * __this, LinkRef_t3499842314 * ___next, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitJump_m2160254825 (RxCompiler_t2299880014 * __this, LinkRef_t3499842314 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitIn_m83847174 (RxCompiler_t2299880014 * __this, LinkRef_t3499842314 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitRepeat_m902163687 (RxCompiler_t2299880014 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t3499842314 * ___until, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitUntil_m1911759225 (RxCompiler_t2299880014 * __this, LinkRef_t3499842314 * ___repeat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern "C"  void RxCompiler_EmitInfo_m3976688582 (RxCompiler_t2299880014 * __this, int32_t ___count, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitFastRepeat_m1552329531 (RxCompiler_t2299880014 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t3499842314 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_EmitAnchor_m4140657390 (RxCompiler_t2299880014 * __this, bool ___reverse, int32_t ___offset, LinkRef_t3499842314 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBranchEnd()
extern "C"  void RxCompiler_EmitBranchEnd_m533273236 (RxCompiler_t2299880014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::EmitAlternationEnd()
extern "C"  void RxCompiler_EmitAlternationEnd_m1851557113 (RxCompiler_t2299880014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.RxCompiler::NewLink()
extern "C"  LinkRef_t3499842314 * RxCompiler_NewLink_m3625689445 (RxCompiler_t2299880014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern "C"  void RxCompiler_ResolveLink_m4159533520 (RxCompiler_t2299880014 * __this, LinkRef_t3499842314 * ___link, const MethodInfo* method) IL2CPP_METHOD_ATTR;
