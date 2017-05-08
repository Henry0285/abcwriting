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

// System.Security.Permissions.FileDialogPermission
struct FileDialogPermission_t3823369370;
// System.Security.IPermission
struct IPermission_t2506060457;
// System.Security.SecurityElement
struct SecurityElement_t2623103667;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta4033523447.h"
#include "mscorlib_System_Security_Permissions_FileDialogPer2904795586.h"
#include "mscorlib_System_Security_SecurityElement2623103667.h"

// System.Void System.Security.Permissions.FileDialogPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void FileDialogPermission__ctor_m3083270861 (FileDialogPermission_t3823369370 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::.ctor(System.Security.Permissions.FileDialogPermissionAccess)
extern "C"  void FileDialogPermission__ctor_m2955584994 (FileDialogPermission_t3823369370 * __this, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::set_Access(System.Security.Permissions.FileDialogPermissionAccess)
extern "C"  void FileDialogPermission_set_Access_m1617685061 (FileDialogPermission_t3823369370 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Copy()
extern "C"  Il2CppObject * FileDialogPermission_Copy_m2615199319 (FileDialogPermission_t3823369370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileDialogPermission::FromXml(System.Security.SecurityElement)
extern "C"  void FileDialogPermission_FromXml_m2889467600 (FileDialogPermission_t3823369370 * __this, SecurityElement_t2623103667 * ___esd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * FileDialogPermission_Intersect_m4099821700 (FileDialogPermission_t3823369370 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileDialogPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool FileDialogPermission_IsSubsetOf_m4009449174 (FileDialogPermission_t3823369370 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileDialogPermission::IsUnrestricted()
extern "C"  bool FileDialogPermission_IsUnrestricted_m881790096 (FileDialogPermission_t3823369370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.FileDialogPermission::ToXml()
extern "C"  SecurityElement_t2623103667 * FileDialogPermission_ToXml_m2633979114 (FileDialogPermission_t3823369370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileDialogPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * FileDialogPermission_Union_m2691180378 (FileDialogPermission_t3823369370 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileDialogPermission System.Security.Permissions.FileDialogPermission::Cast(System.Security.IPermission)
extern "C"  FileDialogPermission_t3823369370 * FileDialogPermission_Cast_m1552488495 (FileDialogPermission_t3823369370 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
