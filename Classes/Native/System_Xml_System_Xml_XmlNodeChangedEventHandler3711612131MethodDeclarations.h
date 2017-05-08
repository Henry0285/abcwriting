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

// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t3711612131;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNodeChangedEventArgs
struct XmlNodeChangedEventArgs_t2956548710;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_Xml_System_Xml_XmlNodeChangedEventArgs2956548710.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Xml.XmlNodeChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlNodeChangedEventHandler__ctor_m1132243200 (XmlNodeChangedEventHandler_t3711612131 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeChangedEventHandler::Invoke(System.Object,System.Xml.XmlNodeChangedEventArgs)
extern "C"  void XmlNodeChangedEventHandler_Invoke_m1670226388 (XmlNodeChangedEventHandler_t3711612131 * __this, Il2CppObject * ___sender, XmlNodeChangedEventArgs_t2956548710 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_XmlNodeChangedEventHandler_t3711612131(Il2CppObject* delegate, Il2CppObject * ___sender, XmlNodeChangedEventArgs_t2956548710 * ___e);
// System.IAsyncResult System.Xml.XmlNodeChangedEventHandler::BeginInvoke(System.Object,System.Xml.XmlNodeChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlNodeChangedEventHandler_BeginInvoke_m1032663299 (XmlNodeChangedEventHandler_t3711612131 * __this, Il2CppObject * ___sender, XmlNodeChangedEventArgs_t2956548710 * ___e, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void XmlNodeChangedEventHandler_EndInvoke_m772028002 (XmlNodeChangedEventHandler_t3711612131 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
