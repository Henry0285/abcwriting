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

// System.Xml.XmlResolver
struct XmlResolver_t2792156615;
// System.Uri
struct Uri_t3338506287;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri3338506287.h"
#include "mscorlib_System_String1967731336.h"

// System.Void System.Xml.XmlResolver::.ctor()
extern "C"  void XmlResolver__ctor_m976831612 (XmlResolver_t2792156615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t3338506287 * XmlResolver_ResolveUri_m1553678733 (XmlResolver_t2792156615 * __this, Uri_t3338506287 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
extern "C"  String_t* XmlResolver_EscapeRelativeUriBody_m989061286 (XmlResolver_t2792156615 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
