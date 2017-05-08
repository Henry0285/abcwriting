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

// System.Configuration.ElementInformation
struct ElementInformation_t2520418441;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1301937485;
// System.Configuration.PropertyInformation
struct PropertyInformation_t1898546440;
// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t573184122;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur1301937485.h"
#include "System_Configuration_System_Configuration_Property1898546440.h"
#include "System_Configuration_System_Configuration_ElementI2520418441.h"

// System.Void System.Configuration.ElementInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.PropertyInformation)
extern "C"  void ElementInformation__ctor_m815008552 (ElementInformation_t2520418441 * __this, ConfigurationElement_t1301937485 * ___owner, PropertyInformation_t1898546440 * ___propertyInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::get_Properties()
extern "C"  PropertyInformationCollection_t573184122 * ElementInformation_get_Properties_m1533763968 (ElementInformation_t2520418441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ElementInformation::Reset(System.Configuration.ElementInformation)
extern "C"  void ElementInformation_Reset_m3203551617 (ElementInformation_t2520418441 * __this, ElementInformation_t2520418441 * ___parentInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
