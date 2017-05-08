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

// JSONObject
struct JSONObject_t1971882247;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t484745624;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t488896535;
// JSONObject/AddJSONConents
struct AddJSONConents_t3727542449;
// JSONObject[]
struct JSONObjectU5BU5D_t2270799614;
// System.String
struct String_t;
// JSONObject/FieldNotFound
struct FieldNotFound_t248802059;
// JSONObject/GetFieldResponse
struct GetFieldResponse_t2438546325;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Collections.IEnumerable
struct IEnumerable_t1471344431;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1336121732;
// System.Text.StringBuilder
struct StringBuilder_t2393427626;
// UnityEngine.WWWForm
struct WWWForm_t986061696;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_JSONObject_Type693074472.h"
#include "AssemblyU2DCSharpU2Dfirstpass_JSONObject_AddJSONCo3727542449.h"
#include "mscorlib_System_String1967731336.h"
#include "AssemblyU2DCSharpU2Dfirstpass_JSONObject1971882247.h"
#include "AssemblyU2DCSharpU2Dfirstpass_JSONObject_FieldNotFo248802059.h"
#include "AssemblyU2DCSharpU2Dfirstpass_JSONObject_GetFieldR2438546325.h"
#include "mscorlib_System_Text_StringBuilder2393427626.h"

// System.Void JSONObject::.ctor(JSONObject/Type)
extern "C"  void JSONObject__ctor_m3572921510 (JSONObject_t1971882247 * __this, int32_t ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Boolean)
extern "C"  void JSONObject__ctor_m2099455527 (JSONObject_t1971882247 * __this, bool ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Single)
extern "C"  void JSONObject__ctor_m3204764989 (JSONObject_t1971882247 * __this, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void JSONObject__ctor_m2422585723 (JSONObject_t1971882247 * __this, Dictionary_2_t484745624 * ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,JSONObject>)
extern "C"  void JSONObject__ctor_m3385912102 (JSONObject_t1971882247 * __this, Dictionary_2_t488896535 * ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(JSONObject/AddJSONConents)
extern "C"  void JSONObject__ctor_m2465201437 (JSONObject_t1971882247 * __this, AddJSONConents_t3727542449 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(JSONObject[])
extern "C"  void JSONObject__ctor_m3296569527 (JSONObject_t1971882247 * __this, JSONObjectU5BU5D_t2270799614* ___objs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor()
extern "C"  void JSONObject__ctor_m2218833806 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.String)
extern "C"  void JSONObject__ctor_m535003064 (JSONObject_t1971882247 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  void JSONObject__ctor_m2243138423 (JSONObject_t1971882247 * __this, String_t* ___str, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.cctor()
extern "C"  void JSONObject__cctor_m1128223947 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_isContainer()
extern "C"  bool JSONObject_get_isContainer_m2971179132 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JSONObject::get_Count()
extern "C"  int32_t JSONObject_get_Count_m3265098784 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JSONObject::get_f()
extern "C"  float JSONObject_get_f_m2513971409 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_nullJO()
extern "C"  JSONObject_t1971882247 * JSONObject_get_nullJO_m928623965 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_obj()
extern "C"  JSONObject_t1971882247 * JSONObject_get_obj_m1428033972 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_arr()
extern "C"  JSONObject_t1971882247 * JSONObject_get_arr_m3127667794 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::StringObject(System.String)
extern "C"  JSONObject_t1971882247 * JSONObject_StringObject_m536719572 (Il2CppObject * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Absorb(JSONObject)
extern "C"  void JSONObject_Absorb_m2114544266 (JSONObject_t1971882247 * __this, JSONObject_t1971882247 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create()
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m3929211220 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(JSONObject/Type)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m2839115232 (Il2CppObject * __this /* static, unused */, int32_t ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Boolean)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m311647169 (Il2CppObject * __this /* static, unused */, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Single)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m3209723715 (Il2CppObject * __this /* static, unused */, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Int32)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m1100244703 (Il2CppObject * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::CreateStringObject(System.String)
extern "C"  JSONObject_t1971882247 * JSONObject_CreateStringObject_m1387837628 (Il2CppObject * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::CreateBakedObject(System.String)
extern "C"  JSONObject_t1971882247 * JSONObject_CreateBakedObject_m3909534024 (Il2CppObject * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.String)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m1104646642 (Il2CppObject * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.String,System.Int32)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m24427913 (Il2CppObject * __this /* static, unused */, String_t* ___val, int32_t ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.String,System.Int32,System.Boolean)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m1723207212 (Il2CppObject * __this /* static, unused */, String_t* ___val, int32_t ___maxDepth, bool ___storeExcessLevels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m2628830417 (Il2CppObject * __this /* static, unused */, String_t* ___val, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(JSONObject/AddJSONConents)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m682933187 (Il2CppObject * __this /* static, unused */, AddJSONConents_t3727542449 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  JSONObject_t1971882247 * JSONObject_Create_m3190450357 (Il2CppObject * __this /* static, unused */, Dictionary_2_t484745624 * ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Parse(System.String)
extern "C"  void JSONObject_Parse_m4038667383 (JSONObject_t1971882247 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Parse(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  void JSONObject_Parse_m32158862 (JSONObject_t1971882247 * __this, String_t* ___str, int32_t ___maxDepth, bool ___storeExcessLevels, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsNumber()
extern "C"  bool JSONObject_get_IsNumber_m632669178 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsNull()
extern "C"  bool JSONObject_get_IsNull_m2948283770 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsString()
extern "C"  bool JSONObject_get_IsString_m3878590566 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsBool()
extern "C"  bool JSONObject_get_IsBool_m1340073173 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsArray()
extern "C"  bool JSONObject_get_IsArray_m1146507746 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsObject()
extern "C"  bool JSONObject_get_IsObject_m1393183916 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Boolean)
extern "C"  void JSONObject_Add_m2030604252 (JSONObject_t1971882247 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Single)
extern "C"  void JSONObject_Add_m3290419010 (JSONObject_t1971882247 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Int32)
extern "C"  void JSONObject_Add_m2036826576 (JSONObject_t1971882247 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.String)
extern "C"  void JSONObject_Add_m492836235 (JSONObject_t1971882247 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(JSONObject/AddJSONConents)
extern "C"  void JSONObject_Add_m4071097688 (JSONObject_t1971882247 * __this, AddJSONConents_t3727542449 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(JSONObject)
extern "C"  void JSONObject_Add_m2474874762 (JSONObject_t1971882247 * __this, JSONObject_t1971882247 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Boolean)
extern "C"  void JSONObject_AddField_m1576819900 (JSONObject_t1971882247 * __this, String_t* ___name, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Single)
extern "C"  void JSONObject_AddField_m2737597678 (JSONObject_t1971882247 * __this, String_t* ___name, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Int32)
extern "C"  void JSONObject_AddField_m1847913364 (JSONObject_t1971882247 * __this, String_t* ___name, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,JSONObject/AddJSONConents)
extern "C"  void JSONObject_AddField_m1174950204 (JSONObject_t1971882247 * __this, String_t* ___name, AddJSONConents_t3727542449 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.String)
extern "C"  void JSONObject_AddField_m1305136679 (JSONObject_t1971882247 * __this, String_t* ___name, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,JSONObject)
extern "C"  void JSONObject_AddField_m1302524246 (JSONObject_t1971882247 * __this, String_t* ___name, JSONObject_t1971882247 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Boolean)
extern "C"  void JSONObject_SetField_m994904533 (JSONObject_t1971882247 * __this, String_t* ___name, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Single)
extern "C"  void JSONObject_SetField_m776874027 (JSONObject_t1971882247 * __this, String_t* ___name, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Int32)
extern "C"  void JSONObject_SetField_m1382612311 (JSONObject_t1971882247 * __this, String_t* ___name, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,JSONObject)
extern "C"  void JSONObject_SetField_m2709314095 (JSONObject_t1971882247 * __this, String_t* ___name, JSONObject_t1971882247 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::RemoveField(System.String)
extern "C"  void JSONObject_RemoveField_m1226873592 (JSONObject_t1971882247 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.Boolean&,System.String)
extern "C"  void JSONObject_GetField_m713221971 (JSONObject_t1971882247 * __this, bool* ___field, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.Boolean&,System.String,JSONObject/FieldNotFound)
extern "C"  void JSONObject_GetField_m3011470432 (JSONObject_t1971882247 * __this, bool* ___field, String_t* ___name, FieldNotFound_t248802059 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.Single&,System.String)
extern "C"  void JSONObject_GetField_m3031111913 (JSONObject_t1971882247 * __this, float* ___field, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.Single&,System.String,JSONObject/FieldNotFound)
extern "C"  void JSONObject_GetField_m589506916 (JSONObject_t1971882247 * __this, float* ___field, String_t* ___name, FieldNotFound_t248802059 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.Int32&,System.String)
extern "C"  void JSONObject_GetField_m4059988113 (JSONObject_t1971882247 * __this, int32_t* ___field, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.Int32&,System.String,JSONObject/FieldNotFound)
extern "C"  void JSONObject_GetField_m2765940172 (JSONObject_t1971882247 * __this, int32_t* ___field, String_t* ___name, FieldNotFound_t248802059 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.UInt32&,System.String)
extern "C"  void JSONObject_GetField_m3843834262 (JSONObject_t1971882247 * __this, uint32_t* ___field, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.UInt32&,System.String,JSONObject/FieldNotFound)
extern "C"  void JSONObject_GetField_m3160813399 (JSONObject_t1971882247 * __this, uint32_t* ___field, String_t* ___name, FieldNotFound_t248802059 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.String&,System.String)
extern "C"  void JSONObject_GetField_m1706872398 (JSONObject_t1971882247 * __this, String_t** ___field, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.String&,System.String,JSONObject/FieldNotFound)
extern "C"  void JSONObject_GetField_m3164092093 (JSONObject_t1971882247 * __this, String_t** ___field, String_t* ___name, FieldNotFound_t248802059 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.String,JSONObject/GetFieldResponse)
extern "C"  void JSONObject_GetField_m2320662011 (JSONObject_t1971882247 * __this, String_t* ___name, GetFieldResponse_t2438546325 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.String,JSONObject/GetFieldResponse,JSONObject/FieldNotFound)
extern "C"  void JSONObject_GetField_m881953590 (JSONObject_t1971882247 * __this, String_t* ___name, GetFieldResponse_t2438546325 * ___response, FieldNotFound_t248802059 * ___fail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::GetField(System.String)
extern "C"  JSONObject_t1971882247 * JSONObject_GetField_m2890738298 (JSONObject_t1971882247 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::HasFields(System.String[])
extern "C"  bool JSONObject_HasFields_m2566276779 (JSONObject_t1971882247 * __this, StringU5BU5D_t3764931161* ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::HasField(System.String)
extern "C"  bool JSONObject_HasField_m4286787708 (JSONObject_t1971882247 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Clear()
extern "C"  void JSONObject_Clear_m4074654805 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Copy()
extern "C"  JSONObject_t1971882247 * JSONObject_Copy_m1092556847 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Merge(JSONObject)
extern "C"  void JSONObject_Merge_m1871178173 (JSONObject_t1971882247 * __this, JSONObject_t1971882247 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::MergeRecur(JSONObject,JSONObject)
extern "C"  void JSONObject_MergeRecur_m1967708379 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___left, JSONObject_t1971882247 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Bake()
extern "C"  void JSONObject_Bake_m3429471729 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::BakeAsync()
extern "C"  Il2CppObject * JSONObject_BakeAsync_m1054124159 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::Print()
extern "C"  String_t* JSONObject_Print_m3889102850 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::Print(System.Boolean)
extern "C"  String_t* JSONObject_Print_m439839387 (JSONObject_t1971882247 * __this, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> JSONObject::PrintAsync()
extern "C"  Il2CppObject* JSONObject_PrintAsync_m55135125 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> JSONObject::PrintAsync(System.Boolean)
extern "C"  Il2CppObject* JSONObject_PrintAsync_m2187380794 (JSONObject_t1971882247 * __this, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::StringifyAsync(System.Int32,System.Text.StringBuilder)
extern "C"  Il2CppObject * JSONObject_StringifyAsync_m52173458 (JSONObject_t1971882247 * __this, int32_t ___depth, StringBuilder_t2393427626 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::StringifyAsync(System.Int32,System.Text.StringBuilder,System.Boolean)
extern "C"  Il2CppObject * JSONObject_StringifyAsync_m2756392147 (JSONObject_t1971882247 * __this, int32_t ___depth, StringBuilder_t2393427626 * ___builder, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Stringify(System.Int32,System.Text.StringBuilder)
extern "C"  void JSONObject_Stringify_m1974377330 (JSONObject_t1971882247 * __this, int32_t ___depth, StringBuilder_t2393427626 * ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Stringify(System.Int32,System.Text.StringBuilder,System.Boolean)
extern "C"  void JSONObject_Stringify_m394345745 (JSONObject_t1971882247 * __this, int32_t ___depth, StringBuilder_t2393427626 * ___builder, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_Item(System.Int32)
extern "C"  JSONObject_t1971882247 * JSONObject_get_Item_m1007985851 (JSONObject_t1971882247 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::set_Item(System.Int32,JSONObject)
extern "C"  void JSONObject_set_Item_m1069161616 (JSONObject_t1971882247 * __this, int32_t ___index, JSONObject_t1971882247 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_Item(System.String)
extern "C"  JSONObject_t1971882247 * JSONObject_get_Item_m223257276 (JSONObject_t1971882247 * __this, String_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::set_Item(System.String,JSONObject)
extern "C"  void JSONObject_set_Item_m3241589931 (JSONObject_t1971882247 * __this, String_t* ___index, JSONObject_t1971882247 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::ToString()
extern "C"  String_t* JSONObject_ToString_m1473866835 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::ToString(System.Boolean)
extern "C"  String_t* JSONObject_ToString_m1025907180 (JSONObject_t1971882247 * __this, bool ___pretty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> JSONObject::ToDictionary()
extern "C"  Dictionary_2_t484745624 * JSONObject_ToDictionary_m2142313491 (JSONObject_t1971882247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWWForm JSONObject::op_Implicit(JSONObject)
extern "C"  WWWForm_t986061696 * JSONObject_op_Implicit_m3631423691 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::op_Implicit(JSONObject)
extern "C"  bool JSONObject_op_Implicit_m2930985192 (Il2CppObject * __this /* static, unused */, JSONObject_t1971882247 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
