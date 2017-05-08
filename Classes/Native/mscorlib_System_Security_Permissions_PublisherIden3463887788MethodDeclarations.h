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

// System.Security.Permissions.PublisherIdentityPermission
struct PublisherIdentityPermission_t3463887788;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1429855556;
// System.Security.IPermission
struct IPermission_t2506060457;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta4033523447.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1429855556.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"

// System.Void System.Security.Permissions.PublisherIdentityPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void PublisherIdentityPermission__ctor_m1174888927 (PublisherIdentityPermission_t3463887788 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void PublisherIdentityPermission__ctor_m435220366 (PublisherIdentityPermission_t3463887788 * __this, X509Certificate_t1429855556 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::set_Certificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void PublisherIdentityPermission_set_Certificate_m100160646 (PublisherIdentityPermission_t3463887788 * __this, X509Certificate_t1429855556 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Copy()
extern "C"  Il2CppObject * PublisherIdentityPermission_Copy_m3766843129 (PublisherIdentityPermission_t3463887788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.PublisherIdentityPermission::FromXml(System.Security.SecurityElement)
extern "C"  void PublisherIdentityPermission_FromXml_m139421428 (PublisherIdentityPermission_t3463887788 * __this, SecurityElement_t2623103667 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * PublisherIdentityPermission_Intersect_m3376511044 (PublisherIdentityPermission_t3463887788 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.PublisherIdentityPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool PublisherIdentityPermission_IsSubsetOf_m980694822 (PublisherIdentityPermission_t3463887788 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.PublisherIdentityPermission::ToXml()
extern "C"  SecurityElement_t2623103667 * PublisherIdentityPermission_ToXml_m2190757646 (PublisherIdentityPermission_t3463887788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.PublisherIdentityPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * PublisherIdentityPermission_Union_m3545501270 (PublisherIdentityPermission_t3463887788 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.PublisherIdentityPermission System.Security.Permissions.PublisherIdentityPermission::Cast(System.Security.IPermission)
extern "C"  PublisherIdentityPermission_t3463887788 * PublisherIdentityPermission_Cast_m2553252527 (PublisherIdentityPermission_t3463887788 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
