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

// System.Security.Policy.Publisher
struct Publisher_t3076774703;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1429855556;
// System.Security.IPermission
struct IPermission_t2506060457;
// System.Security.Policy.Evidence
struct Evidence_t435860;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1429855556.h"
#include "mscorlib_System_Security_Policy_Evidence435860.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Security.Policy.Publisher::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void Publisher__ctor_m3549979789 (Publisher_t3076774703 * __this, X509Certificate_t1429855556 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Policy.Publisher::get_Certificate()
extern "C"  X509Certificate_t1429855556 * Publisher_get_Certificate_m4004368138 (Publisher_t3076774703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Policy.Publisher::CreateIdentityPermission(System.Security.Policy.Evidence)
extern "C"  Il2CppObject * Publisher_CreateIdentityPermission_m2077653796 (Publisher_t3076774703 * __this, Evidence_t435860 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Publisher::Equals(System.Object)
extern "C"  bool Publisher_Equals_m3479361812 (Publisher_t3076774703 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Publisher::GetHashCode()
extern "C"  int32_t Publisher_GetHashCode_m2136416680 (Publisher_t3076774703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Publisher::ToString()
extern "C"  String_t* Publisher_ToString_m108058556 (Publisher_t3076774703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
