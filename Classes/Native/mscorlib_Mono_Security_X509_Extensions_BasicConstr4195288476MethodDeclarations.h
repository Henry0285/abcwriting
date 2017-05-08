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

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct BasicConstraintsExtension_t4195288476;
// Mono.Security.X509.X509Extension
struct X509Extension_t1746250420;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_X509_X509Extension1746250420.h"

// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void BasicConstraintsExtension__ctor_m638599386 (BasicConstraintsExtension_t4195288476 * __this, X509Extension_t1746250420 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::Decode()
extern "C"  void BasicConstraintsExtension_Decode_m3256531868 (BasicConstraintsExtension_t4195288476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::Encode()
extern "C"  void BasicConstraintsExtension_Encode_m284186068 (BasicConstraintsExtension_t4195288476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::get_CertificateAuthority()
extern "C"  bool BasicConstraintsExtension_get_CertificateAuthority_m1200458139 (BasicConstraintsExtension_t4195288476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.BasicConstraintsExtension::ToString()
extern "C"  String_t* BasicConstraintsExtension_ToString_m3012041325 (BasicConstraintsExtension_t4195288476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;