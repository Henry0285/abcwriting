#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t281012916;

#include "System_Xml_Mono_Xml_DictionaryBase702523163.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDCollectionBase
struct  DTDCollectionBase_t1429383929  : public DictionaryBase_t702523163
{
public:
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDCollectionBase::root
	DTDObjectModel_t281012916 * ___root_5;

public:
	inline static int32_t get_offset_of_root_5() { return static_cast<int32_t>(offsetof(DTDCollectionBase_t1429383929, ___root_5)); }
	inline DTDObjectModel_t281012916 * get_root_5() const { return ___root_5; }
	inline DTDObjectModel_t281012916 ** get_address_of_root_5() { return &___root_5; }
	inline void set_root_5(DTDObjectModel_t281012916 * value)
	{
		___root_5 = value;
		Il2CppCodeGenWriteBarrier(&___root_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
