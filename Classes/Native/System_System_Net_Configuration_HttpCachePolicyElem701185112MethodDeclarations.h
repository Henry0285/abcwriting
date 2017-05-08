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

// System.Net.Configuration.HttpCachePolicyElement
struct HttpCachePolicyElement_t701185112;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2870962942;
// System.Xml.XmlReader
struct XmlReader_t1154388064;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1301937485;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader1154388064.h"
#include "System_Configuration_System_Configuration_Configur1301937485.h"

// System.Void System.Net.Configuration.HttpCachePolicyElement::.cctor()
extern "C"  void HttpCachePolicyElement__cctor_m3370385835 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpCachePolicyElement::get_Properties()
extern "C"  ConfigurationPropertyCollection_t2870962942 * HttpCachePolicyElement_get_Properties_m2004762551 (HttpCachePolicyElement_t701185112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern "C"  void HttpCachePolicyElement_DeserializeElement_m1015240658 (HttpCachePolicyElement_t701185112 * __this, XmlReader_t1154388064 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HttpCachePolicyElement::Reset(System.Configuration.ConfigurationElement)
extern "C"  void HttpCachePolicyElement_Reset_m1601856924 (HttpCachePolicyElement_t701185112 * __this, ConfigurationElement_t1301937485 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
