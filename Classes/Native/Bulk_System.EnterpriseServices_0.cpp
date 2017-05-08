#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.EnterpriseServices.ApplicationIDAttribute
struct ApplicationIDAttribute_t1791991495;
// System.String
struct String_t;
// System.EnterpriseServices.ApplicationNameAttribute
struct ApplicationNameAttribute_t2355000505;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array4136897760.h"
#include "System_EnterpriseServices_U3CModuleU3E3783534214.h"
#include "System_EnterpriseServices_U3CModuleU3E3783534214MethodDeclarations.h"
#include "System_EnterpriseServices_System_EnterpriseService1791991495.h"
#include "System_EnterpriseServices_System_EnterpriseService1791991495MethodDeclarations.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Void2799814243.h"
#include "mscorlib_System_Attribute1145342165MethodDeclarations.h"
#include "mscorlib_System_Guid756539922MethodDeclarations.h"
#include "mscorlib_System_Guid756539922.h"
#include "System_EnterpriseServices_System_EnterpriseService2355000505.h"
#include "System_EnterpriseServices_System_EnterpriseService2355000505MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.EnterpriseServices.ApplicationIDAttribute::.ctor(System.String)
extern "C"  void ApplicationIDAttribute__ctor_m2524567988 (ApplicationIDAttribute_t1791991495 * __this, String_t* ___guid, const MethodInfo* method)
{
	{
		Attribute__ctor_m1730479323(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___guid;
		Guid_t756539922  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Guid__ctor_m2599802704(&L_1, L_0, /*hidden argument*/NULL);
		__this->set_guid_0(L_1);
		return;
	}
}
// System.Void System.EnterpriseServices.ApplicationNameAttribute::.ctor(System.String)
extern "C"  void ApplicationNameAttribute__ctor_m3402247142 (ApplicationNameAttribute_t2355000505 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Attribute__ctor_m1730479323(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->set_name_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
