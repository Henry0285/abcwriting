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

// System.Data.DelegateConstraintNameChange
struct DelegateConstraintNameChange_t2684863396;
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

// System.Void System.Data.DelegateConstraintNameChange::.ctor(System.Object,System.IntPtr)
extern "C"  void DelegateConstraintNameChange__ctor_m3549884940 (DelegateConstraintNameChange_t2684863396 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DelegateConstraintNameChange::Invoke(System.Object,System.String)
extern "C"  void DelegateConstraintNameChange_Invoke_m961807794 (DelegateConstraintNameChange_t2684863396 * __this, Il2CppObject * ___sender, String_t* ___newName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DelegateConstraintNameChange_t2684863396(Il2CppObject* delegate, Il2CppObject * ___sender, String_t* ___newName);
// System.IAsyncResult System.Data.DelegateConstraintNameChange::BeginInvoke(System.Object,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DelegateConstraintNameChange_BeginInvoke_m2432433805 (DelegateConstraintNameChange_t2684863396 * __this, Il2CppObject * ___sender, String_t* ___newName, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DelegateConstraintNameChange::EndInvoke(System.IAsyncResult)
extern "C"  void DelegateConstraintNameChange_EndInvoke_m3296676274 (DelegateConstraintNameChange_t2684863396 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
