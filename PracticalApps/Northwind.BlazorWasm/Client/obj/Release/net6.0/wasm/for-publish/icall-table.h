#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
190,
197,
198,
199,
200,
201,
202,
203,
204,
205,
208,
209,
371,
372,
374,
403,
404,
405,
425,
426,
427,
428,
429,
520,
521,
522,
525,
570,
571,
572,
575,
577,
579,
581,
586,
594,
595,
596,
597,
598,
599,
600,
601,
602,
603,
604,
605,
606,
607,
608,
609,
610,
611,
612,
614,
615,
616,
617,
618,
619,
620,
621,
717,
718,
719,
720,
721,
722,
723,
724,
725,
726,
727,
728,
729,
730,
731,
732,
733,
734,
735,
736,
737,
738,
739,
740,
741,
877,
878,
886,
889,
891,
897,
898,
900,
901,
905,
907,
909,
910,
911,
912,
914,
915,
916,
919,
920,
923,
924,
925,
1000,
1001,
1003,
1011,
1012,
1013,
1014,
1015,
1019,
1020,
1021,
1022,
1023,
1024,
1026,
1027,
1028,
1030,
1031,
1033,
1037,
1038,
1039,
1312,
1532,
1533,
8515,
8516,
8518,
8519,
8520,
8521,
8522,
8523,
8525,
8527,
8529,
8530,
8531,
8539,
8541,
8545,
8546,
8548,
8550,
8552,
8565,
8574,
8575,
8577,
8578,
8579,
8580,
8581,
8583,
8585,
9623,
9627,
9629,
9630,
9631,
9632,
9711,
9712,
9713,
9714,
9735,
9736,
9737,
9738,
9740,
9742,
9784,
9835,
9838,
9848,
9849,
9850,
9851,
10261,
10262,
10267,
10268,
10320,
10321,
10322,
10349,
10355,
10362,
10372,
10376,
10468,
10478,
10479,
10492,
10493,
10494,
10495,
10496,
10497,
10498,
10505,
10521,
10542,
10543,
10552,
10554,
10561,
10562,
10565,
10567,
10572,
10578,
10579,
10586,
10588,
10598,
10601,
10602,
10603,
10614,
10626,
10632,
10633,
10634,
10636,
10637,
10647,
10666,
10688,
10689,
10690,
10691,
10692,
10709,
10716,
10747,
10748,
11265,
11266,
11349,
11430,
11693,
11694,
11703,
11704,
11705,
11711,
11789,
11964,
11965,
12650,
13908,
13927,
13934,
13935,
13937,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
float ves_icall_System_Math_Abs_single (float);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
int ves_icall_System_Math_ILogB (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
int ves_icall_System_MathF_ILogB (float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetInterfaceMapData_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Decrement_Long (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 190,
ves_icall_System_Array_InternalCreate,
// token 197,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 198,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 199,
ves_icall_System_Array_CanChangePrimitive,
// token 200,
ves_icall_System_Array_FastCopy_raw,
// token 201,
ves_icall_System_Array_GetLength_raw,
// token 202,
ves_icall_System_Array_GetLowerBound_raw,
// token 203,
ves_icall_System_Array_GetGenericValue_icall,
// token 204,
ves_icall_System_Array_GetValueImpl_raw,
// token 205,
ves_icall_System_Array_SetGenericValue_icall,
// token 208,
ves_icall_System_Array_SetValueImpl_raw,
// token 209,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 371,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 372,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 374,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 403,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 404,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 405,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 425,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 426,
ves_icall_System_Enum_ToObject_raw,
// token 427,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 428,
ves_icall_System_Enum_get_underlying_type_raw,
// token 429,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 520,
ves_icall_System_Environment_get_ProcessorCount,
// token 521,
ves_icall_System_Environment_get_TickCount,
// token 522,
ves_icall_System_Environment_get_TickCount64,
// token 525,
ves_icall_System_Environment_FailFast_raw,
// token 570,
ves_icall_System_GC_GetCollectionCount,
// token 571,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 572,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 575,
ves_icall_System_GC_SuppressFinalize_raw,
// token 577,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 579,
ves_icall_System_GC_GetGCMemoryInfo,
// token 581,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 586,
ves_icall_System_Object_MemberwiseClone_raw,
// token 594,
ves_icall_System_Math_Abs_double,
// token 595,
ves_icall_System_Math_Abs_single,
// token 596,
ves_icall_System_Math_Acos,
// token 597,
ves_icall_System_Math_Acosh,
// token 598,
ves_icall_System_Math_Asin,
// token 599,
ves_icall_System_Math_Asinh,
// token 600,
ves_icall_System_Math_Atan,
// token 601,
ves_icall_System_Math_Atan2,
// token 602,
ves_icall_System_Math_Atanh,
// token 603,
ves_icall_System_Math_Cbrt,
// token 604,
ves_icall_System_Math_Ceiling,
// token 605,
ves_icall_System_Math_Cos,
// token 606,
ves_icall_System_Math_Cosh,
// token 607,
ves_icall_System_Math_Exp,
// token 608,
ves_icall_System_Math_Floor,
// token 609,
ves_icall_System_Math_Log,
// token 610,
ves_icall_System_Math_Log10,
// token 611,
ves_icall_System_Math_Pow,
// token 612,
ves_icall_System_Math_Sin,
// token 614,
ves_icall_System_Math_Sinh,
// token 615,
ves_icall_System_Math_Sqrt,
// token 616,
ves_icall_System_Math_Tan,
// token 617,
ves_icall_System_Math_Tanh,
// token 618,
ves_icall_System_Math_FusedMultiplyAdd,
// token 619,
ves_icall_System_Math_ILogB,
// token 620,
ves_icall_System_Math_Log2,
// token 621,
ves_icall_System_Math_ModF,
// token 717,
ves_icall_System_MathF_Acos,
// token 718,
ves_icall_System_MathF_Acosh,
// token 719,
ves_icall_System_MathF_Asin,
// token 720,
ves_icall_System_MathF_Asinh,
// token 721,
ves_icall_System_MathF_Atan,
// token 722,
ves_icall_System_MathF_Atan2,
// token 723,
ves_icall_System_MathF_Atanh,
// token 724,
ves_icall_System_MathF_Cbrt,
// token 725,
ves_icall_System_MathF_Ceiling,
// token 726,
ves_icall_System_MathF_Cos,
// token 727,
ves_icall_System_MathF_Cosh,
// token 728,
ves_icall_System_MathF_Exp,
// token 729,
ves_icall_System_MathF_Floor,
// token 730,
ves_icall_System_MathF_Log,
// token 731,
ves_icall_System_MathF_Log10,
// token 732,
ves_icall_System_MathF_Pow,
// token 733,
ves_icall_System_MathF_Sin,
// token 734,
ves_icall_System_MathF_Sinh,
// token 735,
ves_icall_System_MathF_Sqrt,
// token 736,
ves_icall_System_MathF_Tan,
// token 737,
ves_icall_System_MathF_Tanh,
// token 738,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 739,
ves_icall_System_MathF_ILogB,
// token 740,
ves_icall_System_MathF_Log2,
// token 741,
ves_icall_System_MathF_ModF,
// token 877,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 878,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 886,
ves_icall_RuntimeType_make_array_type_raw,
// token 889,
ves_icall_RuntimeType_make_byref_type_raw,
// token 891,
ves_icall_RuntimeType_MakePointerType_raw,
// token 897,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 898,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 900,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 901,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 905,
ves_icall_RuntimeType_GetInterfaceMapData_raw,
// token 907,
ves_icall_RuntimeType_GetPacking_raw,
// token 909,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 910,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 911,
ves_icall_System_RuntimeType_getFullName_raw,
// token 912,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 914,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 915,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 916,
ves_icall_RuntimeType_GetFields_native_raw,
// token 919,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 920,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 923,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 924,
ves_icall_RuntimeType_get_Name_raw,
// token 925,
ves_icall_RuntimeType_get_Namespace_raw,
// token 1000,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 1001,
ves_icall_reflection_get_token_raw,
// token 1003,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1011,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 1012,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 1013,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1014,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1015,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1019,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1020,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1021,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1022,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1023,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 1024,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1026,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1027,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 1028,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1030,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 1031,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1033,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1037,
ves_icall_System_String_FastAllocateString_raw,
// token 1038,
ves_icall_System_String_InternalIsInterned_raw,
// token 1039,
ves_icall_System_String_InternalIntern_raw,
// token 1312,
ves_icall_System_Type_internal_from_handle_raw,
// token 1532,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1533,
ves_icall_System_ValueType_Equals_raw,
// token 8515,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8516,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8518,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8519,
ves_icall_System_Threading_Interlocked_Decrement_Long,
// token 8520,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8521,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8522,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8523,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8525,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8527,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8529,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 8530,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8531,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 8539,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8541,
mono_monitor_exit_icall_raw,
// token 8545,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 8546,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8548,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8550,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8552,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8565,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 8574,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8575,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8577,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8578,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8579,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8580,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8581,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8583,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8585,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9623,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9627,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9629,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9630,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9631,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9632,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9711,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9712,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9713,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9714,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9735,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9736,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9737,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9738,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 9740,
ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw,
// token 9742,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 9784,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9835,
mono_object_hash_icall_raw,
// token 9838,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9848,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9849,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9850,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 9851,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 10261,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 10262,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 10267,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 10268,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 10320,
mono_digest_get_public_token,
// token 10321,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 10322,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 10349,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 10355,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 10362,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 10372,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 10376,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 10468,
ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw,
// token 10478,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 10479,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 10492,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 10493,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 10494,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 10495,
ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw,
// token 10496,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 10497,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10498,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 10505,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10521,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10542,
ves_icall_reflection_get_token_raw,
// token 10543,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 10552,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 10554,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10561,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10562,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10565,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 10567,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10572,
ves_icall_reflection_get_token_raw,
// token 10578,
ves_icall_get_method_info_raw,
// token 10579,
ves_icall_get_method_attributes,
// token 10586,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10588,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10598,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10601,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10602,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10603,
ves_icall_reflection_get_token_raw,
// token 10614,
ves_icall_InternalInvoke_raw,
// token 10626,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10632,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10633,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10634,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10636,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10637,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10647,
ves_icall_InternalInvoke_raw,
// token 10666,
ves_icall_reflection_get_token_raw,
// token 10688,
ves_icall_reflection_get_token_raw,
// token 10689,
ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw,
// token 10690,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 10691,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 10692,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10709,
ves_icall_reflection_get_token_raw,
// token 10716,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10747,
ves_icall_reflection_get_token_raw,
// token 10748,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 11265,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 11266,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 11349,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 11430,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11693,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11694,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11703,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11704,
ves_icall_ModuleBuilder_getToken_raw,
// token 11705,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11711,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11789,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11964,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11965,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 12650,
ves_icall_System_Diagnostics_Debugger_Log,
// token 13908,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 13927,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 13934,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 13935,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 13937,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
};
