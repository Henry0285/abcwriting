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

// System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler
struct ElementHandler_t2923367288;
// System.Object
struct Il2CppObject;
// System.Collections.IDictionary
struct IDictionary_t2734775517;
// System.Xml.XmlNode
struct XmlNode_t2483504525;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "System_Xml_System_Xml_XmlNode2483504525.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ElementHandler__ctor_m3192990496 (ElementHandler_t2923367288 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::Invoke(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void ElementHandler_Invoke_m1885447928 (ElementHandler_t2923367288 * __this, Il2CppObject * ___d, XmlNode_t2483504525 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ElementHandler_t2923367288(Il2CppObject* delegate, Il2CppObject * ___d, XmlNode_t2483504525 * ___node);
// System.IAsyncResult System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::BeginInvoke(System.Collections.IDictionary,System.Xml.XmlNode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ElementHandler_BeginInvoke_m3057129389 (ElementHandler_t2923367288 * __this, Il2CppObject * ___d, XmlNode_t2483504525 * ___node, AsyncCallback_t889871978 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ElementHandler_EndInvoke_m2941971906 (ElementHandler_t2923367288 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
