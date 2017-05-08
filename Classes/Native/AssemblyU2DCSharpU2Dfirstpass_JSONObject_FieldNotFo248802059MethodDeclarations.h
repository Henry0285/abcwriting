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

// JSONObject/FieldNotFound
struct FieldNotFound_t248802059;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void JSONObject/FieldNotFound::.ctor(System.Object,System.IntPtr)
extern "C"  void FieldNotFound__ctor_m1500725734 (FieldNotFound_t248802059 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject/FieldNotFound::Invoke(System.String)
extern "C"  void FieldNotFound_Invoke_m677615214 (FieldNotFound_t248802059 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FieldNotFound_t248802059(Il2CppObject* delegate, String_t* ___name);
// System.IAsyncResult JSONObject/FieldNotFound::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FieldNotFound_BeginInvoke_m3313113739 (FieldNotFound_t248802059 * __this, String_t* ___name, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject/FieldNotFound::EndInvoke(System.IAsyncResult)
extern "C"  void FieldNotFound_EndInvoke_m804539840 (FieldNotFound_t248802059 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
