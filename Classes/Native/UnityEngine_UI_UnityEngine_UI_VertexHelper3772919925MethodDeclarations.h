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

// UnityEngine.UI.VertexHelper
struct VertexHelper_t3772919925;
// UnityEngine.Mesh
struct Mesh_t940710334;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t506811400;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t599299988;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t559541940;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh940710334.h"
#include "UnityEngine_UnityEngine_UIVertex1487928645.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_Color322763012723.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_Vector4465617796.h"

// System.Void UnityEngine.UI.VertexHelper::.ctor()
extern "C"  void VertexHelper__ctor_m732625615 (VertexHelper_t3772919925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.ctor(UnityEngine.Mesh)
extern "C"  void VertexHelper__ctor_m1386464415 (VertexHelper_t3772919925 * __this, Mesh_t940710334 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.cctor()
extern "C"  void VertexHelper__cctor_m1150948588 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Clear()
extern "C"  void VertexHelper_Clear_m648714328 (VertexHelper_t3772919925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
extern "C"  int32_t VertexHelper_get_currentVertCount_m1723889923 (VertexHelper_t3772919925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentIndexCount()
extern "C"  int32_t VertexHelper_get_currentIndexCount_m136081244 (VertexHelper_t3772919925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
extern "C"  void VertexHelper_PopulateUIVertex_m1570922497 (VertexHelper_t3772919925 * __this, UIVertex_t1487928645 * ___vertex, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
extern "C"  void VertexHelper_SetUIVertex_m2397401947 (VertexHelper_t3772919925 * __this, UIVertex_t1487928645  ___vertex, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::FillMesh(UnityEngine.Mesh)
extern "C"  void VertexHelper_FillMesh_m1891350547 (VertexHelper_t3772919925 * __this, Mesh_t940710334 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Dispose()
extern "C"  void VertexHelper_Dispose_m2847257624 (VertexHelper_t3772919925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Vector4)
extern "C"  void VertexHelper_AddVert_m4073901784 (VertexHelper_t3772919925 * __this, Vector3_t465617797  ___position, Color32_t2763012723  ___color, Vector2_t465617798  ___uv0, Vector2_t465617798  ___uv1, Vector3_t465617797  ___normal, Vector4_t465617796  ___tangent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2)
extern "C"  void VertexHelper_AddVert_m2953034489 (VertexHelper_t3772919925 * __this, Vector3_t465617797  ___position, Color32_t2763012723  ___color, Vector2_t465617798  ___uv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.UIVertex)
extern "C"  void VertexHelper_AddVert_m3290455716 (VertexHelper_t3772919925 * __this, UIVertex_t1487928645  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
extern "C"  void VertexHelper_AddTriangle_m3666051761 (VertexHelper_t3772919925 * __this, int32_t ___idx0, int32_t ___idx1, int32_t ___idx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
extern "C"  void VertexHelper_AddUIVertexQuad_m280792808 (VertexHelper_t3772919925 * __this, UIVertexU5BU5D_t506811400* ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void VertexHelper_AddUIVertexStream_m3599763288 (VertexHelper_t3772919925 * __this, List_1_t599299988 * ___verts, List_1_t559541940 * ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void VertexHelper_AddUIVertexTriangleStream_m4009409241 (VertexHelper_t3772919925 * __this, List_1_t599299988 * ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void VertexHelper_GetUIVertexStream_m3849188814 (VertexHelper_t3772919925 * __this, List_1_t599299988 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
