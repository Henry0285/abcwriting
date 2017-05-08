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

// System.Net.CookieContainer
struct CookieContainer_t3355710705;
// System.Net.Cookie
struct Cookie_t149545334;
// System.String
struct String_t;
// System.Uri
struct Uri_t3338506287;
// System.Net.CookieCollection
struct CookieCollection_t1981042914;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Cookie149545334.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Uri3338506287.h"

// System.Void System.Net.CookieContainer::.ctor()
extern "C"  void CookieContainer__ctor_m2232515219 (CookieContainer_t3355710705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::AddCookie(System.Net.Cookie)
extern "C"  void CookieContainer_AddCookie_m2988233116 (CookieContainer_t3355710705 * __this, Cookie_t149545334 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::CountDomain(System.String)
extern "C"  int32_t CookieContainer_CountDomain_m1088970898 (CookieContainer_t3355710705 * __this, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::RemoveOldest(System.String)
extern "C"  void CookieContainer_RemoveOldest_m2278733834 (CookieContainer_t3355710705 * __this, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::CheckExpiration()
extern "C"  void CookieContainer_CheckExpiration_m1872209538 (CookieContainer_t3355710705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Cook(System.Uri,System.Net.Cookie)
extern "C"  void CookieContainer_Cook_m4063584936 (CookieContainer_t3355710705 * __this, Uri_t3338506287 * ___uri, Cookie_t149545334 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Uri,System.Net.Cookie)
extern "C"  void CookieContainer_Add_m1442357673 (CookieContainer_t3355710705 * __this, Uri_t3338506287 * ___uri, Cookie_t149545334 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieContainer::GetCookieHeader(System.Uri)
extern "C"  String_t* CookieContainer_GetCookieHeader_m3789169220 (CookieContainer_t3355710705 * __this, Uri_t3338506287 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::CheckDomain(System.String,System.String,System.Boolean)
extern "C"  bool CookieContainer_CheckDomain_m3129371454 (Il2CppObject * __this /* static, unused */, String_t* ___domain, String_t* ___host, bool ___exact, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.CookieContainer::GetCookies(System.Uri)
extern "C"  CookieCollection_t1981042914 * CookieContainer_GetCookies_m781592810 (CookieContainer_t3355710705 * __this, Uri_t3338506287 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::IsNullOrEmpty(System.String)
extern "C"  bool CookieContainer_IsNullOrEmpty_m212241700 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
