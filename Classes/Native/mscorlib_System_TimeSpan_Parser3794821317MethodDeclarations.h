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

// System.TimeSpan/Parser
struct Parser_t3794821317;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_TimeSpan1834055012.h"

// System.Void System.TimeSpan/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m1286328888 (Parser_t3794821317 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::get_AtEnd()
extern "C"  bool Parser_get_AtEnd_m423885813 (Parser_t3794821317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan/Parser::ParseWhiteSpace()
extern "C"  void Parser_ParseWhiteSpace_m1228053748 (Parser_t3794821317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::ParseSign()
extern "C"  bool Parser_ParseSign_m4205478756 (Parser_t3794821317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan/Parser::ParseInt(System.Boolean)
extern "C"  int32_t Parser_ParseInt_m563549465 (Parser_t3794821317 * __this, bool ___optional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::ParseOptDot()
extern "C"  bool Parser_ParseOptDot_m619162015 (Parser_t3794821317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan/Parser::ParseOptColon()
extern "C"  void Parser_ParseOptColon_m3990869121 (Parser_t3794821317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan/Parser::ParseTicks()
extern "C"  int64_t Parser_ParseTicks_m473963438 (Parser_t3794821317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan/Parser::Execute()
extern "C"  TimeSpan_t1834055012  Parser_Execute_m3322475302 (Parser_t3794821317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
