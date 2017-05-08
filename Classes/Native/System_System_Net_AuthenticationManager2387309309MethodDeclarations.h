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

// System.Net.Authorization
struct Authorization_t295650665;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t1478397231;
// System.Net.ICredentials
struct ICredentials_t833078195;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "System_System_Net_WebRequest1478397231.h"

// System.Void System.Net.AuthenticationManager::.cctor()
extern "C"  void AuthenticationManager__cctor_m910519704 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::EnsureModules()
extern "C"  void AuthenticationManager_EnsureModules_m3945964554 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t295650665 * AuthenticationManager_Authenticate_m1203560882 (Il2CppObject * __this /* static, unused */, String_t* ___challenge, WebRequest_t1478397231 * ___request, Il2CppObject * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t295650665 * AuthenticationManager_DoAuthenticate_m2946889617 (Il2CppObject * __this /* static, unused */, String_t* ___challenge, WebRequest_t1478397231 * ___request, Il2CppObject * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t295650665 * AuthenticationManager_PreAuthenticate_m1303957643 (Il2CppObject * __this /* static, unused */, WebRequest_t1478397231 * ___request, Il2CppObject * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
