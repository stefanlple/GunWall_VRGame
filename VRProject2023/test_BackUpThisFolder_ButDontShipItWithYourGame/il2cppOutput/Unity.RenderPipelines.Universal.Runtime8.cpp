#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.Int32[]>
struct Dictionary_2_tCB9019887EB0254D4745B0724BC12327C5B63792;
// System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.Int32>
struct Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct Dictionary_2_t6E21BD77BE545FD55B4784E10DBE055D6AF6D1B9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>>>
struct Dictionary_2_t8BD6308EB9E88486C040C0B44AAE81F0B6C637C9;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent>
struct Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A;
// System.Func`4<UnityEngine.Light,UnityEngine.Camera,UnityEngine.Vector3,System.Single>
struct Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE;
// System.Func`4<System.Object,System.Object,UnityEngine.Vector3,System.Single>
struct Func_4_t332C0058075A9D0A2F5170831803531EC540225C;
// System.Collections.Generic.IEnumerator`1<System.Action`2<UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.CommandBuffer>>
struct IEnumerator_1_t5926539DBBB2302C569D0A07AF3A95A874CEBE33;
// System.Lazy`1<UnityEngine.Rendering.VolumeManager>
struct Lazy_1_t8BF68D560BD85EC85ECBE57F1B105CF767F8FBBC;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.Rendering.LensFlareComponentSRP>
struct List_1_tC024320491AC06EBF0986C13544616E79D860B9A;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass>
struct List_1_t2E485E650BF1E41358CE56A69323E183C5A89CB6;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature>
struct List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>
struct List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897;
// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>
struct List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView>
struct List_1_tB3AD940C3EFA3B62F5F00791CB82A01B87D1F4CE;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.VolumeParameter>
struct ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// UnityEngine.Rendering.RenderTargetIdentifier[][]
struct RenderTargetIdentifierU5BU5DU5BU5D_tDB35F8D017FE3AD8BB35E08E323074D47C5A10BB;
// UnityEngine.Rendering.AttachmentDescriptor[]
struct AttachmentDescriptorU5BU5D_tC70107EBD955FE94BA31C7FDC146069EF9C547C1;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Rendering.GraphicsDeviceType[]
struct GraphicsDeviceTypeU5BU5D_t4322565F239068C66BF47053B83BD6A9A9D16408;
// UnityEngine.Experimental.Rendering.GraphicsFormat[]
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5;
// UnityEngine.Hash128[]
struct Hash128U5BU5D_tB104E7247B842648E447B7FCF4748077DC1F8C98;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Plane[]
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
// UnityEngine.Rendering.RTHandle[]
struct RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF;
// UnityEngine.Rendering.RenderBufferStoreAction[]
struct RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Rendering.Universal.Bloom
struct Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225;
// UnityEngine.Rendering.BoolParameter
struct BoolParameter_tAA460C5A72ADBDDB4519BFF0BA040EC202E14E95;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Rendering.Universal.ChromaticAberration
struct ChromaticAberration_t84EAB576773C3AD4DE77A13952B487F9DA10DA9F;
// UnityEngine.Rendering.ClampedFloatParameter
struct ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8;
// UnityEngine.Rendering.ClampedIntParameter
struct ClampedIntParameter_tAF77FC44E522B137734644AE2E3F702580033B8E;
// UnityEngine.Rendering.Universal.ColorAdjustments
struct ColorAdjustments_t97EE64C6DB384E5F6BC48C3FA13C207E8FC87A86;
// UnityEngine.Rendering.Universal.ColorLookup
struct ColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C;
// UnityEngine.Rendering.ColorParameter
struct ColorParameter_t367FD9EBE5DAA0ADB44F7DD0C260E9CDE3827CC0;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Rendering.CullingAllocationInfo
struct CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A;
// UnityEngine.Profiling.CustomSampler
struct CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487;
// UnityEngine.Rendering.Universal.DebugHandler
struct DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Rendering.Universal.DepthOfField
struct DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF;
// UnityEngine.Rendering.Universal.DepthOfFieldModeParameter
struct DepthOfFieldModeParameter_t2AC87B0A41A5C9BB872A9E9D7913C262F9DA4E26;
// UnityEngine.Rendering.Universal.FilmGrain
struct FilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172;
// UnityEngine.Rendering.Universal.FilmGrainLookupParameter
struct FilmGrainLookupParameter_tDF3F944D7FECD6E33C773117CA937AE2420F4C6F;
// UnityEngine.Rendering.FloatParameter
struct FloatParameter_t566B623CD21B2F957A20BA790ACEF6684A712106;
// UnityEngine.Rendering.Universal.LensDistortion
struct LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6;
// UnityEngine.Rendering.LensFlareCommonSRP
struct LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Rendering.MinFloatParameter
struct MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9;
// UnityEngine.Rendering.Universal.MotionBlur
struct MotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161;
// UnityEngine.Rendering.Universal.MotionBlurModeParameter
struct MotionBlurModeParameter_tB166307F460D4DF85A966BE6EDA29279F6B4FF14;
// UnityEngine.Rendering.Universal.MotionBlurQualityParameter
struct MotionBlurQualityParameter_tD50C3C4531FB58AB4B8C2917F41668C3EE54A637;
// UnityEngine.Rendering.NoInterpTextureParameter
struct NoInterpTextureParameter_tC99FB0FE7B2B1D94AE407F612730FC05204C1478;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Rendering.Universal.PaniniProjection
struct PaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA;
// UnityEngine.Rendering.Universal.PostProcessData
struct PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05;
// UnityEngine.Rendering.Universal.Internal.PostProcessPass
struct PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286;
// UnityEngine.Rendering.Universal.Internal.PreviousFrameData
struct PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF;
// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE;
// UnityEngine.Rendering.RTHandle
struct RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B;
// UnityEngine.Rendering.RTHandleSystem
struct RTHandleSystem_tAE496B31B56A77B4896E34576C961C3CA073998F;
// UnityEngine.Profiling.Recorder
struct Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90;
// UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem
struct RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Rendering.ScaleFunc
struct ScaleFunc_t423F661DAD5C7A18F509C8F1F62C9D6AEA9A9791;
// UnityEngine.Rendering.Universal.ScriptableRenderPass
struct ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0;
// UnityEngine.Rendering.Universal.ScriptableRenderer
struct ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Rendering.TextureParameter
struct TextureParameter_t8989581983DE4A463CBB1A19F90D9E27BF7EC28A;
// UnityEngine.Rendering.Universal.Tonemapping
struct Tonemapping_tB71CED262B25FC58B0259FD05DD32821C2858DBA;
// UnityEngine.Rendering.Universal.TonemappingModeParameter
struct TonemappingModeParameter_t0F6AAE0B6FFB371E2035BB0C739AF87C37E1760A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Rendering.Universal.UniversalRenderPipelineDebugDisplaySettings
struct UniversalRenderPipelineDebugDisplaySettings_t8E70DD217918DB0E7BD8BCCD9958C3E781DE0653;
// UnityEngine.Rendering.Vector2Parameter
struct Vector2Parameter_tA29C9FAC53EDB2E0996430A461F9CC59B6C4288A;
// UnityEngine.Rendering.Universal.Vignette
struct Vignette_t77147DD5FEEB4476AF22BD98255F8010738985DC;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Rendering.VolumeManager
struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621;
// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8;
// UnityEngine.Rendering.Universal.XRPass
struct XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Rendering.Universal.PostProcessData/ShaderResources
struct ShaderResources_t5CFF4C7697343EC59BAE5094B637F9EC23CE6D59;
// UnityEngine.Rendering.Universal.PostProcessData/TextureResources
struct TextureResources_t9220AC464374C6AA55163CD0AC71C62B85E6C122;
// UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c
struct U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D;
// UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary
struct MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED;
// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures
struct RenderingFeatures_t31044CBDCDC2F05194BFA2A2122FBD937D78A371;
// UnityEngine.Rendering.Universal.XRPass/CustomMirrorView
struct CustomMirrorView_t826B740E52CCFCC96FCCDD7DCC1B2D7208D8D316;

IL2CPP_EXTERN_C RuntimeClass* ColorUtils_t8DE09CC60FE5A7C28984134BC712DD1B5104AC18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandBufferPool_t88CACA06AB445EE4743F5C4D742C73761A2DEF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTHandles_t84D932A74064E591F31E9813FBED5D64F5CC888C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderingUtils_t4E40200449A82FA3A172A563C490DF11FADA2BE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02AA5CF1C80B0DF618D084F879CD23859F1E374B;
IL2CPP_EXTERN_C String_t* _stringLiteral07B171B1C8D7DBEA8D8A335E16FF04529ED4C296;
IL2CPP_EXTERN_C String_t* _stringLiteral0C8800AA6A8E1686CEFFF45C793EC512C24B0519;
IL2CPP_EXTERN_C String_t* _stringLiteral1831D6AF0034BFD62502B7DAAE7F161CCE2152E9;
IL2CPP_EXTERN_C String_t* _stringLiteral187B550E326EA78EDB32157988FA6DE7B6BB5C85;
IL2CPP_EXTERN_C String_t* _stringLiteral18F9F20DBB46D16A736FD871D499B91C8B8AD52A;
IL2CPP_EXTERN_C String_t* _stringLiteral1B9EFBFC3B2698A75AE9060E2CA3F4703BAA46DB;
IL2CPP_EXTERN_C String_t* _stringLiteral1D6B2F5769B37B64ED1CF89C6872C4C70E115DA4;
IL2CPP_EXTERN_C String_t* _stringLiteral228C7CE59F61DC4634C693698A1F1F9A09B84345;
IL2CPP_EXTERN_C String_t* _stringLiteral236EF4A9D84C6C0908DB95675FDA65CBA7AB2165;
IL2CPP_EXTERN_C String_t* _stringLiteral2D37F43E99EB6C0790ED0EA5E97AE868BD7DAD4A;
IL2CPP_EXTERN_C String_t* _stringLiteral395532A2CA3FFB4E35DA4816E48F5D38866FD3A0;
IL2CPP_EXTERN_C String_t* _stringLiteral3DB1F1B6C8DBF6236F1F97FF50A52D5C675BBAC2;
IL2CPP_EXTERN_C String_t* _stringLiteral3F839ECBA8AC470BFFE9349EECF4319425E9777E;
IL2CPP_EXTERN_C String_t* _stringLiteral3FAF1DA4444E4B6AD59D12D507B263672C20EC08;
IL2CPP_EXTERN_C String_t* _stringLiteral42E48670FB7AC0A2FDE591B7E2E6725B2F6A4BF7;
IL2CPP_EXTERN_C String_t* _stringLiteral431B60EF974BB8E5F0F8EC2A455F97E801E2D0DB;
IL2CPP_EXTERN_C String_t* _stringLiteral44C2668500869CC2081E76ACB924F307C180BEFA;
IL2CPP_EXTERN_C String_t* _stringLiteral4A0F84CABDBAA807ED74BAE97A3B37809D5BBDC3;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8A139418EF0697974054E94254DECA0AE09AAC;
IL2CPP_EXTERN_C String_t* _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E;
IL2CPP_EXTERN_C String_t* _stringLiteral53E5A11AA5E4FD35308D01344B0A5149AC89BE2D;
IL2CPP_EXTERN_C String_t* _stringLiteral577B724681B6E49F462DA98700A79269E1C87123;
IL2CPP_EXTERN_C String_t* _stringLiteral5A55890C1107C5FD772CC1ABA7EBE78909195995;
IL2CPP_EXTERN_C String_t* _stringLiteral5C8716309FF255E33DEB3745CD6DA72452B5B635;
IL2CPP_EXTERN_C String_t* _stringLiteral708F66D2AD87776F5B7E546381F1E73EB9DDB090;
IL2CPP_EXTERN_C String_t* _stringLiteral731B552DFA43AAB097DE738D6C929FA08D6461A1;
IL2CPP_EXTERN_C String_t* _stringLiteral7605E990BDF3D9FE837E8A654F08CA6BEA25F21E;
IL2CPP_EXTERN_C String_t* _stringLiteral7987DF7BA4C266E69980DE0831B635B3EF700BF2;
IL2CPP_EXTERN_C String_t* _stringLiteral7BAABDF048F39D7B1B75DA1936FA10BB87C330E9;
IL2CPP_EXTERN_C String_t* _stringLiteral817B818885135BEF736D2338DB6B5420E379E536;
IL2CPP_EXTERN_C String_t* _stringLiteral834863B80D35E96D02830CC464160847F063892D;
IL2CPP_EXTERN_C String_t* _stringLiteral862A9879517D02316ADA3EF22C673885DB64148D;
IL2CPP_EXTERN_C String_t* _stringLiteral8938AED977E803D8E07BA49BDBD9BE350D907CF1;
IL2CPP_EXTERN_C String_t* _stringLiteral97A06D1C7C5ECFFBDE00FA3405D9F031222A580A;
IL2CPP_EXTERN_C String_t* _stringLiteral97DD384485F1826C8BDA793DE10EBDF2F802A88A;
IL2CPP_EXTERN_C String_t* _stringLiteral99C4188C1BCB2ECF7EDFADE513E17AAAAD995C31;
IL2CPP_EXTERN_C String_t* _stringLiteralA48E3026A883B72EC7928644F7CC3A8CB1CF4450;
IL2CPP_EXTERN_C String_t* _stringLiteralA9E6683E605E25CCA0564720D2361F0374DE6BD5;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralAEA2C29107B397E134D3442DBC70E1733AC3113A;
IL2CPP_EXTERN_C String_t* _stringLiteralB01016D4685B6A6555F7E20D2F432EE29F969DA2;
IL2CPP_EXTERN_C String_t* _stringLiteralB13FC67A490243407C31B667439121EE0D06846D;
IL2CPP_EXTERN_C String_t* _stringLiteralB22B59490C30C06D45315B7E4293DAD5075AFFE0;
IL2CPP_EXTERN_C String_t* _stringLiteralB362EB5CD5FC34BC0C938BF79ACBF6DDAC632CE3;
IL2CPP_EXTERN_C String_t* _stringLiteralB3E3DADCE6E7B32E1B630C2110EE36F91D6E999B;
IL2CPP_EXTERN_C String_t* _stringLiteralB4EBE57C49598AA2CE2A6F4F37A57543F7D538EC;
IL2CPP_EXTERN_C String_t* _stringLiteralC1B8FEF67A4B5CEC7AF8D68A4845C6CEB59E9BE1;
IL2CPP_EXTERN_C String_t* _stringLiteralCA67D590521B2AE2F3BD3F775DE1AB089187B32B;
IL2CPP_EXTERN_C String_t* _stringLiteralCC2E32F2767D7908897EBC0EB050EBC46381662F;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD11BB1712DB6382A048B4AE3EADE730E885FFA;
IL2CPP_EXTERN_C String_t* _stringLiteralCD107AB84C3C7CAEF9C83EC57E99F64A0D1D246C;
IL2CPP_EXTERN_C String_t* _stringLiteralD2105439EFE4A4A8D6E5E9FCDFB969C23C532D04;
IL2CPP_EXTERN_C String_t* _stringLiteralD43BE2E9022947EFE17627374058F5286CB8905B;
IL2CPP_EXTERN_C String_t* _stringLiteralD51FF53FBBCE7298F312420D698228910BE37C28;
IL2CPP_EXTERN_C String_t* _stringLiteralDE3D4B9AAA347D492D840D37A56CCE204D06B4CB;
IL2CPP_EXTERN_C String_t* _stringLiteralE078582BB0F722460DE31693A931059066547B83;
IL2CPP_EXTERN_C String_t* _stringLiteralE97DC9C8E192370B0AD2F71BCAB9828CB1B88F0C;
IL2CPP_EXTERN_C String_t* _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003;
IL2CPP_EXTERN_C String_t* _stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D;
IL2CPP_EXTERN_C String_t* _stringLiteralF933CA13CDF0D40118EC4F0A27CE7F086936DE3D;
IL2CPP_EXTERN_C String_t* _stringLiteralFA2AF3C657E8CFA51F4969D5C814257C925AD3EF;
IL2CPP_EXTERN_C String_t* _stringLiteralFFD55C761D363A2D2DE1D3DCCA7A3F010ADE1A1E;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreUtils_Swap_TisRTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B_m90EAC541E53A878FAD361EEA8BC135CEB507E9E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CDoLensFlareDatadrivenU3Eb__69_0_m806687F2794508799B69BD9A750001C858762BE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeStack_GetComponent_TisBloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225_m25682DCE38F204E0B4062C3F2D9132BDA2C5BF0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeStack_GetComponent_TisChromaticAberration_t84EAB576773C3AD4DE77A13952B487F9DA10DA9F_mF488DC971011EE15740583673AA8BB56BE10A9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeStack_GetComponent_TisColorAdjustments_t97EE64C6DB384E5F6BC48C3FA13C207E8FC87A86_m3B00FEBB9197BDF606018D15AB7202D813CC653E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeStack_GetComponent_TisColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C_mBC5D3E47DCADB0AF1F944EE238C6188CD3B308F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeStack_GetComponent_TisDepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF_m6CC04C172E6C70C6446B6644BC25CBC3C1A691E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeStack_GetComponent_TisFilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172_mFAC921A292413CAF7B64BED0822B24DA7C60530D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeStack_GetComponent_TisLensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6_m7AA5B34C2EB5A633802388F0CA1139092EEC2E18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeStack_GetComponent_TisMotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161_mCF77251617E769053BB46F8844649FDBE0006D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeStack_GetComponent_TisPaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA_mB589E14BB73F90314BF582164232143C575C93C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeStack_GetComponent_TisTonemapping_tB71CED262B25FC58B0259FD05DD32821C2858DBA_mF484658FD16186D510BE1828DE343B029ECE2F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VolumeStack_GetComponent_TisVignette_t77147DD5FEEB4476AF22BD98255F8010738985DC_mB42423B71631D13196913871E448FC0B90422DC1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct Il2CppArrayBounds;

// UnityEngine.Rendering.LensFlareCommonSRP
struct LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135  : public RuntimeObject
{
};

struct LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135_StaticFields
{
	// UnityEngine.Rendering.LensFlareCommonSRP UnityEngine.Rendering.LensFlareCommonSRP::m_Instance
	LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135* ___m_Instance_0;
	// System.Object UnityEngine.Rendering.LensFlareCommonSRP::m_Padlock
	RuntimeObject* ___m_Padlock_1;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.LensFlareComponentSRP> UnityEngine.Rendering.LensFlareCommonSRP::m_Data
	List_1_tC024320491AC06EBF0986C13544616E79D860B9A* ___m_Data_2;
	// System.Int32 UnityEngine.Rendering.LensFlareCommonSRP::maxLensFlareWithOcclusion
	int32_t ___maxLensFlareWithOcclusion_3;
	// System.Int32 UnityEngine.Rendering.LensFlareCommonSRP::maxLensFlareWithOcclusionTemporalSample
	int32_t ___maxLensFlareWithOcclusionTemporalSample_4;
	// System.Int32 UnityEngine.Rendering.LensFlareCommonSRP::mergeNeeded
	int32_t ___mergeNeeded_5;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.LensFlareCommonSRP::occlusionRT
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___occlusionRT_6;
	// System.Int32 UnityEngine.Rendering.LensFlareCommonSRP::frameIdx
	int32_t ___frameIdx_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE  : public RuntimeObject
{
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<sampler>k__BackingField
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___U3CsamplerU3Ek__BackingField_0;
	// UnityEngine.Profiling.CustomSampler UnityEngine.Rendering.ProfilingSampler::<inlineSampler>k__BackingField
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___U3CinlineSamplerU3Ek__BackingField_1;
	// System.String UnityEngine.Rendering.ProfilingSampler::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;
	// UnityEngine.Profiling.Recorder UnityEngine.Rendering.ProfilingSampler::m_Recorder
	Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90* ___m_Recorder_3;
	// UnityEngine.Profiling.Recorder UnityEngine.Rendering.ProfilingSampler::m_InlineRecorder
	Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90* ___m_InlineRecorder_4;
};

// UnityEngine.Rendering.Universal.ShaderKeywordStrings
struct ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14  : public RuntimeObject
{
};

struct ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields
{
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::MainLightShadows
	String_t* ___MainLightShadows_0;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::MainLightShadowCascades
	String_t* ___MainLightShadowCascades_1;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::MainLightShadowScreen
	String_t* ___MainLightShadowScreen_2;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::CastingPunctualLightShadow
	String_t* ___CastingPunctualLightShadow_3;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::AdditionalLightsVertex
	String_t* ___AdditionalLightsVertex_4;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::AdditionalLightsPixel
	String_t* ___AdditionalLightsPixel_5;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::ClusteredRendering
	String_t* ___ClusteredRendering_6;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::AdditionalLightShadows
	String_t* ___AdditionalLightShadows_7;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::ReflectionProbeBoxProjection
	String_t* ___ReflectionProbeBoxProjection_8;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::ReflectionProbeBlending
	String_t* ___ReflectionProbeBlending_9;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::SoftShadows
	String_t* ___SoftShadows_10;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::MixedLightingSubtractive
	String_t* ___MixedLightingSubtractive_11;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::LightmapShadowMixing
	String_t* ___LightmapShadowMixing_12;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::ShadowsShadowMask
	String_t* ___ShadowsShadowMask_13;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::LightLayers
	String_t* ___LightLayers_14;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::RenderPassEnabled
	String_t* ___RenderPassEnabled_15;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::BillboardFaceCameraPos
	String_t* ___BillboardFaceCameraPos_16;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::LightCookies
	String_t* ___LightCookies_17;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DepthNoMsaa
	String_t* ___DepthNoMsaa_18;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DepthMsaa2
	String_t* ___DepthMsaa2_19;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DepthMsaa4
	String_t* ___DepthMsaa4_20;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DepthMsaa8
	String_t* ___DepthMsaa8_21;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::LinearToSRGBConversion
	String_t* ___LinearToSRGBConversion_22;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::UseFastSRGBLinearConversion
	String_t* ___UseFastSRGBLinearConversion_23;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DBufferMRT1
	String_t* ___DBufferMRT1_24;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DBufferMRT2
	String_t* ___DBufferMRT2_25;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DBufferMRT3
	String_t* ___DBufferMRT3_26;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DecalNormalBlendLow
	String_t* ___DecalNormalBlendLow_27;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DecalNormalBlendMedium
	String_t* ___DecalNormalBlendMedium_28;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DecalNormalBlendHigh
	String_t* ___DecalNormalBlendHigh_29;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::SmaaLow
	String_t* ___SmaaLow_30;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::SmaaMedium
	String_t* ___SmaaMedium_31;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::SmaaHigh
	String_t* ___SmaaHigh_32;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::PaniniGeneric
	String_t* ___PaniniGeneric_33;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::PaniniUnitDistance
	String_t* ___PaniniUnitDistance_34;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::BloomLQ
	String_t* ___BloomLQ_35;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::BloomHQ
	String_t* ___BloomHQ_36;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::BloomLQDirt
	String_t* ___BloomLQDirt_37;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::BloomHQDirt
	String_t* ___BloomHQDirt_38;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::UseRGBM
	String_t* ___UseRGBM_39;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::Distortion
	String_t* ___Distortion_40;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::ChromaticAberration
	String_t* ___ChromaticAberration_41;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::HDRGrading
	String_t* ___HDRGrading_42;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::TonemapACES
	String_t* ___TonemapACES_43;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::TonemapNeutral
	String_t* ___TonemapNeutral_44;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::FilmGrain
	String_t* ___FilmGrain_45;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::Fxaa
	String_t* ___Fxaa_46;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::Dithering
	String_t* ___Dithering_47;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::ScreenSpaceOcclusion
	String_t* ___ScreenSpaceOcclusion_48;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::HighQualitySampling
	String_t* ___HighQualitySampling_49;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DOWNSAMPLING_SIZE_2
	String_t* ___DOWNSAMPLING_SIZE_2_50;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DOWNSAMPLING_SIZE_4
	String_t* ___DOWNSAMPLING_SIZE_4_51;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DOWNSAMPLING_SIZE_8
	String_t* ___DOWNSAMPLING_SIZE_8_52;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DOWNSAMPLING_SIZE_16
	String_t* ___DOWNSAMPLING_SIZE_16_53;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_SPOT
	String_t* ____SPOT_54;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_DIRECTIONAL
	String_t* ____DIRECTIONAL_55;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_POINT
	String_t* ____POINT_56;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_DEFERRED_STENCIL
	String_t* ____DEFERRED_STENCIL_57;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_DEFERRED_FIRST_LIGHT
	String_t* ____DEFERRED_FIRST_LIGHT_58;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_DEFERRED_MAIN_LIGHT
	String_t* ____DEFERRED_MAIN_LIGHT_59;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_GBUFFER_NORMALS_OCT
	String_t* ____GBUFFER_NORMALS_OCT_60;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_DEFERRED_MIXED_LIGHTING
	String_t* ____DEFERRED_MIXED_LIGHTING_61;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::LIGHTMAP_ON
	String_t* ___LIGHTMAP_ON_62;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DYNAMICLIGHTMAP_ON
	String_t* ___DYNAMICLIGHTMAP_ON_63;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_ALPHATEST_ON
	String_t* ____ALPHATEST_ON_64;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DIRLIGHTMAP_COMBINED
	String_t* ___DIRLIGHTMAP_COMBINED_65;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_DETAIL_MULX2
	String_t* ____DETAIL_MULX2_66;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_DETAIL_SCALED
	String_t* ____DETAIL_SCALED_67;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_CLEARCOAT
	String_t* ____CLEARCOAT_68;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_CLEARCOATMAP
	String_t* ____CLEARCOATMAP_69;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::DEBUG_DISPLAY
	String_t* ___DEBUG_DISPLAY_70;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_EMISSION
	String_t* ____EMISSION_71;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_RECEIVE_SHADOWS_OFF
	String_t* ____RECEIVE_SHADOWS_OFF_72;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_SURFACE_TYPE_TRANSPARENT
	String_t* ____SURFACE_TYPE_TRANSPARENT_73;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_ALPHAPREMULTIPLY_ON
	String_t* ____ALPHAPREMULTIPLY_ON_74;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_ALPHAMODULATE_ON
	String_t* ____ALPHAMODULATE_ON_75;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::_NORMALMAP
	String_t* ____NORMALMAP_76;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::EDITOR_VISUALIZATION
	String_t* ___EDITOR_VISUALIZATION_77;
	// System.String UnityEngine.Rendering.Universal.ShaderKeywordStrings::UseDrawProcedural
	String_t* ___UseDrawProcedural_78;
};

// UnityEngine.Rendering.Universal.ShaderPropertyId
struct ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2  : public RuntimeObject
{
};

struct ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_StaticFields
{
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::glossyEnvironmentColor
	int32_t ___glossyEnvironmentColor_0;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::subtractiveShadowColor
	int32_t ___subtractiveShadowColor_1;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::glossyEnvironmentCubeMap
	int32_t ___glossyEnvironmentCubeMap_2;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::glossyEnvironmentCubeMapHDR
	int32_t ___glossyEnvironmentCubeMapHDR_3;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::ambientSkyColor
	int32_t ___ambientSkyColor_4;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::ambientEquatorColor
	int32_t ___ambientEquatorColor_5;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::ambientGroundColor
	int32_t ___ambientGroundColor_6;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::time
	int32_t ___time_7;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::sinTime
	int32_t ___sinTime_8;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::cosTime
	int32_t ___cosTime_9;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::deltaTime
	int32_t ___deltaTime_10;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::timeParameters
	int32_t ___timeParameters_11;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::scaledScreenParams
	int32_t ___scaledScreenParams_12;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::worldSpaceCameraPos
	int32_t ___worldSpaceCameraPos_13;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::screenParams
	int32_t ___screenParams_14;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::projectionParams
	int32_t ___projectionParams_15;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::zBufferParams
	int32_t ___zBufferParams_16;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::orthoParams
	int32_t ___orthoParams_17;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::screenSize
	int32_t ___screenSize_18;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::viewMatrix
	int32_t ___viewMatrix_19;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::projectionMatrix
	int32_t ___projectionMatrix_20;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::viewAndProjectionMatrix
	int32_t ___viewAndProjectionMatrix_21;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::inverseViewMatrix
	int32_t ___inverseViewMatrix_22;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::inverseProjectionMatrix
	int32_t ___inverseProjectionMatrix_23;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::inverseViewAndProjectionMatrix
	int32_t ___inverseViewAndProjectionMatrix_24;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::cameraProjectionMatrix
	int32_t ___cameraProjectionMatrix_25;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::inverseCameraProjectionMatrix
	int32_t ___inverseCameraProjectionMatrix_26;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::worldToCameraMatrix
	int32_t ___worldToCameraMatrix_27;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::cameraToWorldMatrix
	int32_t ___cameraToWorldMatrix_28;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::cameraWorldClipPlanes
	int32_t ___cameraWorldClipPlanes_29;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::billboardNormal
	int32_t ___billboardNormal_30;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::billboardTangent
	int32_t ___billboardTangent_31;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::billboardCameraParams
	int32_t ___billboardCameraParams_32;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::sourceTex
	int32_t ___sourceTex_33;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::scaleBias
	int32_t ___scaleBias_34;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::scaleBiasRt
	int32_t ___scaleBiasRt_35;
	// System.Int32 UnityEngine.Rendering.Universal.ShaderPropertyId::rendererColor
	int32_t ___rendererColor_36;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.Rendering.VolumeManager
struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621  : public RuntimeObject
{
	// UnityEngine.Rendering.VolumeStack UnityEngine.Rendering.VolumeManager::<stack>k__BackingField
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* ___U3CstackU3Ek__BackingField_1;
	// System.Type[] UnityEngine.Rendering.VolumeManager::<baseComponentTypeArray>k__BackingField
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CbaseComponentTypeArrayU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>> UnityEngine.Rendering.VolumeManager::m_SortedVolumes
	Dictionary_2_t6E21BD77BE545FD55B4784E10DBE055D6AF6D1B9* ___m_SortedVolumes_5;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume> UnityEngine.Rendering.VolumeManager::m_Volumes
	List_1_tA81AF2F0C55444C61C8EE5264AF3B4719AD4A897* ___m_Volumes_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> UnityEngine.Rendering.VolumeManager::m_SortNeeded
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___m_SortNeeded_7;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeManager::m_ComponentsDefaultState
	List_1_t602BCD639AA637A6C0BB45C136DD5458DBE18064* ___m_ComponentsDefaultState_8;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.Rendering.VolumeManager::m_TempColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_TempColliders_9;
	// UnityEngine.Rendering.VolumeStack UnityEngine.Rendering.VolumeManager::m_DefaultStack
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* ___m_DefaultStack_10;
};

struct VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_StaticFields
{
	// System.Lazy`1<UnityEngine.Rendering.VolumeManager> UnityEngine.Rendering.VolumeManager::s_Instance
	Lazy_1_t8BF68D560BD85EC85ECBE57F1B105CF767F8FBBC* ___s_Instance_0;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>>> UnityEngine.Rendering.VolumeManager::s_SupportedVolumeComponentsForRenderPipeline
	Dictionary_2_t8BD6308EB9E88486C040C0B44AAE81F0B6C637C9* ___s_SupportedVolumeComponentsForRenderPipeline_2;
};

// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72  : public RuntimeObject
{
	// System.Boolean UnityEngine.Rendering.VolumeParameter::m_OverrideState
	bool ___m_OverrideState_1;
};

// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeStack::components
	Dictionary_2_t5A7CE09F4D3EC74EEAE8DB41E209394AF6D9C99A* ___components_0;
};

// UnityEngine.Rendering.Universal.PostProcessData/ShaderResources
struct ShaderResources_t5CFF4C7697343EC59BAE5094B637F9EC23CE6D59  : public RuntimeObject
{
	// UnityEngine.Shader UnityEngine.Rendering.Universal.PostProcessData/ShaderResources::stopNanPS
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___stopNanPS_0;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.PostProcessData/ShaderResources::subpixelMorphologicalAntialiasingPS
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___subpixelMorphologicalAntialiasingPS_1;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.PostProcessData/ShaderResources::gaussianDepthOfFieldPS
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___gaussianDepthOfFieldPS_2;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.PostProcessData/ShaderResources::bokehDepthOfFieldPS
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___bokehDepthOfFieldPS_3;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.PostProcessData/ShaderResources::cameraMotionBlurPS
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___cameraMotionBlurPS_4;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.PostProcessData/ShaderResources::paniniProjectionPS
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___paniniProjectionPS_5;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.PostProcessData/ShaderResources::lutBuilderLdrPS
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___lutBuilderLdrPS_6;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.PostProcessData/ShaderResources::lutBuilderHdrPS
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___lutBuilderHdrPS_7;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.PostProcessData/ShaderResources::bloomPS
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___bloomPS_8;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.PostProcessData/ShaderResources::LensFlareDataDrivenPS
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___LensFlareDataDrivenPS_9;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.PostProcessData/ShaderResources::uberPostPS
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___uberPostPS_10;
	// UnityEngine.Shader UnityEngine.Rendering.Universal.PostProcessData/ShaderResources::finalPostPassPS
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___finalPostPassPS_11;
};

// UnityEngine.Rendering.Universal.PostProcessData/TextureResources
struct TextureResources_t9220AC464374C6AA55163CD0AC71C62B85E6C122  : public RuntimeObject
{
	// UnityEngine.Texture2D[] UnityEngine.Rendering.Universal.PostProcessData/TextureResources::blueNoise16LTex
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___blueNoise16LTex_0;
	// UnityEngine.Texture2D[] UnityEngine.Rendering.Universal.PostProcessData/TextureResources::filmGrainTex
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___filmGrainTex_1;
	// UnityEngine.Texture2D UnityEngine.Rendering.Universal.PostProcessData/TextureResources::smaaAreaTex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___smaaAreaTex_2;
	// UnityEngine.Texture2D UnityEngine.Rendering.Universal.PostProcessData/TextureResources::smaaSearchTex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___smaaSearchTex_3;
};

// UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c
struct U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D  : public RuntimeObject
{
};

struct U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_StaticFields
{
	// UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c::<>9
	U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D* ___U3CU3E9_0;
	// System.Func`4<UnityEngine.Light,UnityEngine.Camera,UnityEngine.Vector3,System.Single> UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c::<>9__69_0
	Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE* ___U3CU3E9__69_0_1;
};

// UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary
struct MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED  : public RuntimeObject
{
	// UnityEngine.Material UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::stopNaN
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___stopNaN_0;
	// UnityEngine.Material UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::subpixelMorphologicalAntialiasing
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___subpixelMorphologicalAntialiasing_1;
	// UnityEngine.Material UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::gaussianDepthOfField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___gaussianDepthOfField_2;
	// UnityEngine.Material UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::bokehDepthOfField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___bokehDepthOfField_3;
	// UnityEngine.Material UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::cameraMotionBlur
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cameraMotionBlur_4;
	// UnityEngine.Material UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::paniniProjection
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___paniniProjection_5;
	// UnityEngine.Material UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::bloom
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___bloom_6;
	// UnityEngine.Material UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::uber
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___uber_7;
	// UnityEngine.Material UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::finalPass
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___finalPass_8;
	// UnityEngine.Material UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::lensFlareDataDriven
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___lensFlareDataDriven_9;
};

// UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants
struct ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC  : public RuntimeObject
{
};

struct ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields
{
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_TempTarget
	int32_t ____TempTarget_0;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_TempTarget2
	int32_t ____TempTarget2_1;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_StencilRef
	int32_t ____StencilRef_2;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_StencilMask
	int32_t ____StencilMask_3;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_FullCoCTexture
	int32_t ____FullCoCTexture_4;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_HalfCoCTexture
	int32_t ____HalfCoCTexture_5;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_DofTexture
	int32_t ____DofTexture_6;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_CoCParams
	int32_t ____CoCParams_7;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_BokehKernel
	int32_t ____BokehKernel_8;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_BokehConstants
	int32_t ____BokehConstants_9;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_PongTexture
	int32_t ____PongTexture_10;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_PingTexture
	int32_t ____PingTexture_11;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_Metrics
	int32_t ____Metrics_12;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_AreaTexture
	int32_t ____AreaTexture_13;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_SearchTexture
	int32_t ____SearchTexture_14;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_EdgeTexture
	int32_t ____EdgeTexture_15;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_BlendTexture
	int32_t ____BlendTexture_16;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_ColorTexture
	int32_t ____ColorTexture_17;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_Params
	int32_t ____Params_18;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_SourceTexLowMip
	int32_t ____SourceTexLowMip_19;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_Bloom_Params
	int32_t ____Bloom_Params_20;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_Bloom_RGBM
	int32_t ____Bloom_RGBM_21;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_Bloom_Texture
	int32_t ____Bloom_Texture_22;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_LensDirt_Texture
	int32_t ____LensDirt_Texture_23;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_LensDirt_Params
	int32_t ____LensDirt_Params_24;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_LensDirt_Intensity
	int32_t ____LensDirt_Intensity_25;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_Distortion_Params1
	int32_t ____Distortion_Params1_26;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_Distortion_Params2
	int32_t ____Distortion_Params2_27;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_Chroma_Params
	int32_t ____Chroma_Params_28;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_Vignette_Params1
	int32_t ____Vignette_Params1_29;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_Vignette_Params2
	int32_t ____Vignette_Params2_30;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_Vignette_ParamsXR
	int32_t ____Vignette_ParamsXR_31;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_Lut_Params
	int32_t ____Lut_Params_32;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_UserLut_Params
	int32_t ____UserLut_Params_33;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_InternalLut
	int32_t ____InternalLut_34;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_UserLut
	int32_t ____UserLut_35;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_DownSampleScaleFactor
	int32_t ____DownSampleScaleFactor_36;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_FlareOcclusionTex
	int32_t ____FlareOcclusionTex_37;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_FlareOcclusionIndex
	int32_t ____FlareOcclusionIndex_38;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_FlareTex
	int32_t ____FlareTex_39;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_FlareColorValue
	int32_t ____FlareColorValue_40;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_FlareData0
	int32_t ____FlareData0_41;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_FlareData1
	int32_t ____FlareData1_42;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_FlareData2
	int32_t ____FlareData2_43;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_FlareData3
	int32_t ____FlareData3_44;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_FlareData4
	int32_t ____FlareData4_45;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_FlareData5
	int32_t ____FlareData5_46;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_FullscreenProjMat
	int32_t ____FullscreenProjMat_47;
	// System.Int32[] UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_BloomMipUp
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____BloomMipUp_48;
	// System.Int32[] UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::_BloomMipDown
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____BloomMipDown_49;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight>
struct NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.Rendering.VolumeParameter`1<System.Boolean>
struct VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	bool ___m_Value_2;
};

// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Rendering.Universal.DepthOfFieldMode>
struct VolumeParameter_1_t80C75EB611679D3400624E84553EF01B344A125D  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	int32_t ___m_Value_2;
};

// UnityEngine.Rendering.VolumeParameter`1<System.Int32>
struct VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	int32_t ___m_Value_2;
};

// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Rendering.Universal.MotionBlurQuality>
struct VolumeParameter_1_tFFADF17175E410D847D12382BCFD16C4EAD004A1  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	int32_t ___m_Value_2;
};

// UnityEngine.Rendering.VolumeParameter`1<System.Single>
struct VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	float ___m_Value_2;
};

// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Texture>
struct VolumeParameter_1_tB3100970DE7F44CC1B4585781E82F1E9F5C9C4A1  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Value_2;
};

// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Rendering.Universal.TonemappingMode>
struct VolumeParameter_1_tBA92B79A20B96D6212DF5589AAFA7B0B4AC68A2C  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	int32_t ___m_Value_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Rendering.CoreCameraValues
struct CoreCameraValues_t5BD0108A962D53208E8523BA29AFFA9F9A295F1F 
{
	// System.Int32 UnityEngine.Rendering.CoreCameraValues::filterMode
	int32_t ___filterMode_0;
	// System.UInt32 UnityEngine.Rendering.CoreCameraValues::cullingMask
	uint32_t ___cullingMask_1;
	// System.Int32 UnityEngine.Rendering.CoreCameraValues::instanceID
	int32_t ___instanceID_2;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Rendering.Universal.PostProcessingData
struct PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4 
{
	// UnityEngine.Rendering.Universal.ColorGradingMode UnityEngine.Rendering.Universal.PostProcessingData::gradingMode
	int32_t ___gradingMode_0;
	// System.Int32 UnityEngine.Rendering.Universal.PostProcessingData::lutSize
	int32_t ___lutSize_1;
	// System.Boolean UnityEngine.Rendering.Universal.PostProcessingData::useFastSRGBLinearConversion
	bool ___useFastSRGBLinearConversion_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.PostProcessingData
struct PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshaled_pinvoke
{
	int32_t ___gradingMode_0;
	int32_t ___lutSize_1;
	int32_t ___useFastSRGBLinearConversion_2;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.PostProcessingData
struct PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshaled_com
{
	int32_t ___gradingMode_0;
	int32_t ___lutSize_1;
	int32_t ___useFastSRGBLinearConversion_2;
};

// UnityEngine.Rendering.ProfilingScope
struct ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD 
{
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.ProfilingScope::m_Cmd
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___m_Cmd_0;
	// System.Boolean UnityEngine.Rendering.ProfilingScope::m_Disposed
	bool ___m_Disposed_1;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.ProfilingScope::m_Sampler
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___m_Sampler_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.ProfilingScope
struct ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD_marshaled_pinvoke
{
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___m_Cmd_0;
	int32_t ___m_Disposed_1;
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___m_Sampler_2;
};
// Native definition for COM marshalling of UnityEngine.Rendering.ProfilingScope
struct ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD_marshaled_com
{
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___m_Cmd_0;
	int32_t ___m_Disposed_1;
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___m_Sampler_2;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 
{
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<depthStencilFormat>k__BackingField
	int32_t ___U3CdepthStencilFormatU3Ek__BackingField_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_8;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_9;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_10;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_11;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_12;
};

// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;
};

struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___none_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t5F40C9EEDE242DFE47A8DCE218ED3DF3E88B4EC0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t5F40C9EEDE242DFE47A8DCE218ED3DF3E88B4EC0__padding[12];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_tB86B9BFC4ADBF4E2DF11F39AF43639693C65DF05 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tB86B9BFC4ADBF4E2DF11F39AF43639693C65DF05__padding[16];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24_tB605E983EFADFA4C2759D8C48AB45B0B3A7BCC51 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tB605E983EFADFA4C2759D8C48AB45B0B3A7BCC51__padding[24];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=960
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D960_t86900CB1F8550ABFAD884FDD8E17F7B7AA90ED0D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D960_t86900CB1F8550ABFAD884FDD8E17F7B7AA90ED0D__padding[960];
	};
};
#pragma pack(pop, tp)

// UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer
struct U3ClayerCullDistancesU3Ee__FixedBuffer_t899804C5038AB391CB8F8C17638A02661B106C3F 
{
	union
	{
		struct
		{
			// System.Single UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3ClayerCullDistancesU3Ee__FixedBuffer_t899804C5038AB391CB8F8C17638A02661B106C3F__padding[128];
	};
};

// UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer
struct U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t41B125C97F22DF8C016DBA29753704559C53DCD9 
{
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t41B125C97F22DF8C016DBA29753704559C53DCD9__padding[96];
	};
};

// UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer
struct U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_tEBBBC21BE4AF7AC2F831E9A67E5E5CFEBDF2DE4F 
{
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_tEBBBC21BE4AF7AC2F831E9A67E5E5CFEBDF2DE4F__padding[96];
	};
};

// UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c__DisplayClass60_0
struct U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 
{
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c__DisplayClass60_0::source
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___source_0;
	// UnityEngine.Rendering.Universal.Internal.PostProcessPass UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c__DisplayClass60_0::<>4__this
	PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* ___U3CU3E4__this_1;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c__DisplayClass60_0::destination
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___destination_2;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c__DisplayClass60_0::cmd
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd_3;
	// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c__DisplayClass60_0::tempTargetUsed
	bool ___tempTargetUsed_4;
	// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c__DisplayClass60_0::tempTarget2Used
	bool ___tempTarget2Used_5;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c__DisplayClass60_0::amountOfPassesRemaining
	int32_t ___amountOfPassesRemaining_6;
};

// UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer
struct SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4 
{
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer::rtMSAA
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___rtMSAA_0;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer::rtResolve
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___rtResolve_1;
	// System.String UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer::name
	String_t* ___name_2;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer::msaa
	int32_t ___msaa_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer
struct SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4_marshaled_pinvoke
{
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___rtMSAA_0;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___rtResolve_1;
	char* ___name_2;
	int32_t ___msaa_3;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer
struct SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4_marshaled_com
{
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___rtMSAA_0;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___rtResolve_1;
	Il2CppChar* ___name_2;
	int32_t ___msaa_3;
};

// UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_t1E4CBEC7086738067A0EF9A1B2B6B36059DAB955 
{
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_t1E4CBEC7086738067A0EF9A1B2B6B36059DAB955__padding[160];
	};
};

// UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer
struct U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_tD64F550B6761957A5DA6A33A171BBF4FB4EB667D 
{
	union
	{
		struct
		{
			// System.Single UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_tD64F550B6761957A5DA6A33A171BBF4FB4EB667D__padding[128];
	};
};

// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Color>
struct VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value_2;
};

// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>
struct VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B  : public VolumeParameter_t95994C89644D2CC4C11F666571492420D16BED72
{
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Value_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t16CE31F4DEE6BA0AEFEB3FA0105D58630695B339  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t16CE31F4DEE6BA0AEFEB3FA0105D58630695B339_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::08243D32F28C35701F6EA57F52AE707302C8528E8D358F13C6E6915543D265C6
	__StaticArrayInitTypeSizeU3D16_tB86B9BFC4ADBF4E2DF11F39AF43639693C65DF05 ___08243D32F28C35701F6EA57F52AE707302C8528E8D358F13C6E6915543D265C6_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::18689A54C1FF754BE58500B2ED77A6C75B025BE96F6D01FEF89C42DA1C953F34
	__StaticArrayInitTypeSizeU3D24_tB605E983EFADFA4C2759D8C48AB45B0B3A7BCC51 ___18689A54C1FF754BE58500B2ED77A6C75B025BE96F6D01FEF89C42DA1C953F34_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=960 <PrivateImplementationDetails>::6322123493378558D4F9DD025993C168685B194246485704DD5B391FDCD77A64
	__StaticArrayInitTypeSizeU3D960_t86900CB1F8550ABFAD884FDD8E17F7B7AA90ED0D ___6322123493378558D4F9DD025993C168685B194246485704DD5B391FDCD77A64_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8E2129A5F232A49B45FCB149981C3507166B7EE6265A5B90A1C9B0B87B2C0A80
	__StaticArrayInitTypeSizeU3D12_t5F40C9EEDE242DFE47A8DCE218ED3DF3E88B4EC0 ___8E2129A5F232A49B45FCB149981C3507166B7EE6265A5B90A1C9B0B87B2C0A80_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::9D3A6E7E88415D8C1A0F3887B6384A9A8E4F44A036C5A24796C319751ACACCAD
	__StaticArrayInitTypeSizeU3D12_t5F40C9EEDE242DFE47A8DCE218ED3DF3E88B4EC0 ___9D3A6E7E88415D8C1A0F3887B6384A9A8E4F44A036C5A24796C319751ACACCAD_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=960 <PrivateImplementationDetails>::E2EF5640DF412939A64301FFA3F66A62A34FA6E45A26E62F6994E5390B380D01
	__StaticArrayInitTypeSizeU3D960_t86900CB1F8550ABFAD884FDD8E17F7B7AA90ED0D ___E2EF5640DF412939A64301FFA3F66A62A34FA6E45A26E62F6994E5390B380D01_5;
	// System.Int32 <PrivateImplementationDetails>::F896C3A5F9841B6E1F0A22BD35A6A1BC5EFB28AAA23B66301EC8098CE57CF99A
	int32_t ___F896C3A5F9841B6E1F0A22BD35A6A1BC5EFB28AAA23B66301EC8098CE57CF99A_6;
};

// UnityEngine.Rendering.BoolParameter
struct BoolParameter_tAA460C5A72ADBDDB4519BFF0BA040EC202E14E95  : public VolumeParameter_1_tBCB51FE341649CAB77E12B97823E7D31852372CF
{
};

// UnityEngine.Rendering.Universal.CameraData
struct CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E 
{
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.CameraData::m_ViewMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ViewMatrix_0;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.CameraData::m_ProjectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ProjectionMatrix_1;
	// UnityEngine.Camera UnityEngine.Rendering.Universal.CameraData::camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_2;
	// UnityEngine.Rendering.Universal.CameraRenderType UnityEngine.Rendering.Universal.CameraData::renderType
	int32_t ___renderType_3;
	// UnityEngine.RenderTexture UnityEngine.Rendering.Universal.CameraData::targetTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___targetTexture_4;
	// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.CameraData::cameraTargetDescriptor
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___cameraTargetDescriptor_5;
	// UnityEngine.Rect UnityEngine.Rendering.Universal.CameraData::pixelRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect_6;
	// System.Int32 UnityEngine.Rendering.Universal.CameraData::pixelWidth
	int32_t ___pixelWidth_7;
	// System.Int32 UnityEngine.Rendering.Universal.CameraData::pixelHeight
	int32_t ___pixelHeight_8;
	// System.Single UnityEngine.Rendering.Universal.CameraData::aspectRatio
	float ___aspectRatio_9;
	// System.Single UnityEngine.Rendering.Universal.CameraData::renderScale
	float ___renderScale_10;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::clearDepth
	bool ___clearDepth_11;
	// UnityEngine.CameraType UnityEngine.Rendering.Universal.CameraData::cameraType
	int32_t ___cameraType_12;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isDefaultViewport
	bool ___isDefaultViewport_13;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isHdrEnabled
	bool ___isHdrEnabled_14;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::requiresDepthTexture
	bool ___requiresDepthTexture_15;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::requiresOpaqueTexture
	bool ___requiresOpaqueTexture_16;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::postProcessingRequiresDepthTexture
	bool ___postProcessingRequiresDepthTexture_17;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::xrRendering
	bool ___xrRendering_18;
	// UnityEngine.Rendering.SortingCriteria UnityEngine.Rendering.Universal.CameraData::defaultOpaqueSortFlags
	int32_t ___defaultOpaqueSortFlags_19;
	// UnityEngine.Rendering.Universal.XRPass UnityEngine.Rendering.Universal.CameraData::xr
	XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* ___xr_20;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isStereoEnabled
	bool ___isStereoEnabled_21;
	// System.Single UnityEngine.Rendering.Universal.CameraData::maxShadowDistance
	float ___maxShadowDistance_22;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::postProcessEnabled
	bool ___postProcessEnabled_23;
	// System.Collections.Generic.IEnumerator`1<System.Action`2<UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.CommandBuffer>> UnityEngine.Rendering.Universal.CameraData::captureActions
	RuntimeObject* ___captureActions_24;
	// UnityEngine.LayerMask UnityEngine.Rendering.Universal.CameraData::volumeLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___volumeLayerMask_25;
	// UnityEngine.Transform UnityEngine.Rendering.Universal.CameraData::volumeTrigger
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___volumeTrigger_26;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isStopNaNEnabled
	bool ___isStopNaNEnabled_27;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::isDitheringEnabled
	bool ___isDitheringEnabled_28;
	// UnityEngine.Rendering.Universal.AntialiasingMode UnityEngine.Rendering.Universal.CameraData::antialiasing
	int32_t ___antialiasing_29;
	// UnityEngine.Rendering.Universal.AntialiasingQuality UnityEngine.Rendering.Universal.CameraData::antialiasingQuality
	int32_t ___antialiasingQuality_30;
	// UnityEngine.Rendering.Universal.ScriptableRenderer UnityEngine.Rendering.Universal.CameraData::renderer
	ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* ___renderer_31;
	// System.Boolean UnityEngine.Rendering.Universal.CameraData::resolveFinalTarget
	bool ___resolveFinalTarget_32;
	// UnityEngine.Vector3 UnityEngine.Rendering.Universal.CameraData::worldSpaceCameraPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldSpaceCameraPos_33;
	// UnityEngine.Color UnityEngine.Rendering.Universal.CameraData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_34;
	// UnityEngine.Camera UnityEngine.Rendering.Universal.CameraData::baseCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___baseCamera_35;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.CameraData
struct CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshaled_pinvoke
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ViewMatrix_0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ProjectionMatrix_1;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_2;
	int32_t ___renderType_3;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___targetTexture_4;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___cameraTargetDescriptor_5;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect_6;
	int32_t ___pixelWidth_7;
	int32_t ___pixelHeight_8;
	float ___aspectRatio_9;
	float ___renderScale_10;
	int32_t ___clearDepth_11;
	int32_t ___cameraType_12;
	int32_t ___isDefaultViewport_13;
	int32_t ___isHdrEnabled_14;
	int32_t ___requiresDepthTexture_15;
	int32_t ___requiresOpaqueTexture_16;
	int32_t ___postProcessingRequiresDepthTexture_17;
	int32_t ___xrRendering_18;
	int32_t ___defaultOpaqueSortFlags_19;
	XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* ___xr_20;
	int32_t ___isStereoEnabled_21;
	float ___maxShadowDistance_22;
	int32_t ___postProcessEnabled_23;
	RuntimeObject* ___captureActions_24;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___volumeLayerMask_25;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___volumeTrigger_26;
	int32_t ___isStopNaNEnabled_27;
	int32_t ___isDitheringEnabled_28;
	int32_t ___antialiasing_29;
	int32_t ___antialiasingQuality_30;
	ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* ___renderer_31;
	int32_t ___resolveFinalTarget_32;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldSpaceCameraPos_33;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_34;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___baseCamera_35;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.CameraData
struct CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshaled_com
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ViewMatrix_0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_ProjectionMatrix_1;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera_2;
	int32_t ___renderType_3;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___targetTexture_4;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___cameraTargetDescriptor_5;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect_6;
	int32_t ___pixelWidth_7;
	int32_t ___pixelHeight_8;
	float ___aspectRatio_9;
	float ___renderScale_10;
	int32_t ___clearDepth_11;
	int32_t ___cameraType_12;
	int32_t ___isDefaultViewport_13;
	int32_t ___isHdrEnabled_14;
	int32_t ___requiresDepthTexture_15;
	int32_t ___requiresOpaqueTexture_16;
	int32_t ___postProcessingRequiresDepthTexture_17;
	int32_t ___xrRendering_18;
	int32_t ___defaultOpaqueSortFlags_19;
	XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* ___xr_20;
	int32_t ___isStereoEnabled_21;
	float ___maxShadowDistance_22;
	int32_t ___postProcessEnabled_23;
	RuntimeObject* ___captureActions_24;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___volumeLayerMask_25;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___volumeTrigger_26;
	int32_t ___isStopNaNEnabled_27;
	int32_t ___isDitheringEnabled_28;
	int32_t ___antialiasing_29;
	int32_t ___antialiasingQuality_30;
	ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* ___renderer_31;
	int32_t ___resolveFinalTarget_32;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldSpaceCameraPos_33;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_34;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___baseCamera_35;
};

// UnityEngine.Rendering.CameraProperties
struct CameraProperties_t9318B43C06A9BAC4CD8BC5EFCC9FE6882D296D57 
{
	// UnityEngine.Rect UnityEngine.Rendering.CameraProperties::screenRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::viewDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___viewDir_1;
	// System.Single UnityEngine.Rendering.CameraProperties::projectionNear
	float ___projectionNear_2;
	// System.Single UnityEngine.Rendering.CameraProperties::projectionFar
	float ___projectionFar_3;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraNear
	float ___cameraNear_4;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraFar
	float ___cameraFar_5;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraAspect
	float ___cameraAspect_6;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraToWorld
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cameraToWorld_7;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::actualWorldToClip
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___actualWorldToClip_8;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraClipToWorld
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cameraClipToWorld_9;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraWorldToClip
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cameraWorldToClip_10;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::implicitProjection
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___implicitProjection_11;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::stereoWorldToClipLeft
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___stereoWorldToClipLeft_12;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::stereoWorldToClipRight
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___stereoWorldToClipRight_13;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::worldToCamera
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___worldToCamera_14;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_15;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::right
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___right_16;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::transformDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___transformDirection_17;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::cameraEuler
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraEuler_18;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_19;
	// System.Single UnityEngine.Rendering.CameraProperties::farPlaneWorldSpaceLength
	float ___farPlaneWorldSpaceLength_20;
	// System.UInt32 UnityEngine.Rendering.CameraProperties::rendererCount
	uint32_t ___rendererCount_21;
	// UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer UnityEngine.Rendering.CameraProperties::m_ShadowCullPlanes
	U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_tEBBBC21BE4AF7AC2F831E9A67E5E5CFEBDF2DE4F ___m_ShadowCullPlanes_22;
	// UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer UnityEngine.Rendering.CameraProperties::m_CameraCullPlanes
	U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t41B125C97F22DF8C016DBA29753704559C53DCD9 ___m_CameraCullPlanes_23;
	// System.Single UnityEngine.Rendering.CameraProperties::baseFarDistance
	float ___baseFarDistance_24;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::shadowCullCenter
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___shadowCullCenter_25;
	// UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer UnityEngine.Rendering.CameraProperties::layerCullDistances
	U3ClayerCullDistancesU3Ee__FixedBuffer_t899804C5038AB391CB8F8C17638A02661B106C3F ___layerCullDistances_26;
	// System.Int32 UnityEngine.Rendering.CameraProperties::layerCullSpherical
	int32_t ___layerCullSpherical_27;
	// UnityEngine.Rendering.CoreCameraValues UnityEngine.Rendering.CameraProperties::coreCameraValues
	CoreCameraValues_t5BD0108A962D53208E8523BA29AFFA9F9A295F1F ___coreCameraValues_28;
	// System.UInt32 UnityEngine.Rendering.CameraProperties::cameraType
	uint32_t ___cameraType_29;
	// System.Int32 UnityEngine.Rendering.CameraProperties::projectionIsOblique
	int32_t ___projectionIsOblique_30;
	// System.Int32 UnityEngine.Rendering.CameraProperties::isImplicitProjectionMatrix
	int32_t ___isImplicitProjectionMatrix_31;
};

// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Rendering.CullingResults
struct CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 
{
	// System.IntPtr UnityEngine.Rendering.CullingResults::ptr
	intptr_t ___ptr_0;
	// UnityEngine.Rendering.CullingAllocationInfo* UnityEngine.Rendering.CullingResults::m_AllocationInfo
	CullingAllocationInfo_tB260F5CD0B290F74E145EB16E54B901CC68D9D5A* ___m_AllocationInfo_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Rendering.Universal.DepthOfFieldModeParameter
struct DepthOfFieldModeParameter_t2AC87B0A41A5C9BB872A9E9D7913C262F9DA4E26  : public VolumeParameter_1_t80C75EB611679D3400624E84553EF01B344A125D
{
};

// UnityEngine.Rendering.FloatParameter
struct FloatParameter_t566B623CD21B2F957A20BA790ACEF6684A712106  : public VolumeParameter_1_t18B35E30089EFE0C2751A53FE6143F972EC9F9B8
{
};

// UnityEngine.Rendering.IntParameter
struct IntParameter_t45D52025F857DFDFC590EDB800071A92774E04B8  : public VolumeParameter_1_t7111FAD4FF4C5BAEA3D390725AF3BC9069DBB546
{
};

// UnityEngine.Rendering.LODParameters
struct LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A 
{
	// System.Int32 UnityEngine.Rendering.LODParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.LODParameters::m_CameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition_1;
	// System.Single UnityEngine.Rendering.LODParameters::m_FieldOfView
	float ___m_FieldOfView_2;
	// System.Single UnityEngine.Rendering.LODParameters::m_OrthoSize
	float ___m_OrthoSize_3;
	// System.Int32 UnityEngine.Rendering.LODParameters::m_CameraPixelHeight
	int32_t ___m_CameraPixelHeight_4;
};

// UnityEngine.Rendering.Universal.LightData
struct LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470 
{
	// System.Int32 UnityEngine.Rendering.Universal.LightData::mainLightIndex
	int32_t ___mainLightIndex_0;
	// System.Int32 UnityEngine.Rendering.Universal.LightData::additionalLightsCount
	int32_t ___additionalLightsCount_1;
	// System.Int32 UnityEngine.Rendering.Universal.LightData::maxPerObjectAdditionalLightsCount
	int32_t ___maxPerObjectAdditionalLightsCount_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight> UnityEngine.Rendering.Universal.LightData::visibleLights
	NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___visibleLights_3;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.Universal.LightData::originalIndices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___originalIndices_4;
	// System.Boolean UnityEngine.Rendering.Universal.LightData::shadeAdditionalLightsPerVertex
	bool ___shadeAdditionalLightsPerVertex_5;
	// System.Boolean UnityEngine.Rendering.Universal.LightData::supportsMixedLighting
	bool ___supportsMixedLighting_6;
	// System.Boolean UnityEngine.Rendering.Universal.LightData::reflectionProbeBoxProjection
	bool ___reflectionProbeBoxProjection_7;
	// System.Boolean UnityEngine.Rendering.Universal.LightData::reflectionProbeBlending
	bool ___reflectionProbeBlending_8;
	// System.Boolean UnityEngine.Rendering.Universal.LightData::supportsLightLayers
	bool ___supportsLightLayers_9;
	// System.Boolean UnityEngine.Rendering.Universal.LightData::supportsAdditionalLights
	bool ___supportsAdditionalLights_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.LightData
struct LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshaled_pinvoke
{
	int32_t ___mainLightIndex_0;
	int32_t ___additionalLightsCount_1;
	int32_t ___maxPerObjectAdditionalLightsCount_2;
	NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___visibleLights_3;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___originalIndices_4;
	int32_t ___shadeAdditionalLightsPerVertex_5;
	int32_t ___supportsMixedLighting_6;
	int32_t ___reflectionProbeBoxProjection_7;
	int32_t ___reflectionProbeBlending_8;
	int32_t ___supportsLightLayers_9;
	int32_t ___supportsAdditionalLights_10;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.LightData
struct LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshaled_com
{
	int32_t ___mainLightIndex_0;
	int32_t ___additionalLightsCount_1;
	int32_t ___maxPerObjectAdditionalLightsCount_2;
	NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___visibleLights_3;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___originalIndices_4;
	int32_t ___shadeAdditionalLightsPerVertex_5;
	int32_t ___supportsMixedLighting_6;
	int32_t ___reflectionProbeBoxProjection_7;
	int32_t ___reflectionProbeBlending_8;
	int32_t ___supportsLightLayers_9;
	int32_t ___supportsAdditionalLights_10;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Rendering.Universal.MotionBlurQualityParameter
struct MotionBlurQualityParameter_tD50C3C4531FB58AB4B8C2917F41668C3EE54A637  : public VolumeParameter_1_tFFADF17175E410D847D12382BCFD16C4EAD004A1
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.Universal.Internal.PreviousFrameData
struct PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF  : public RuntimeObject
{
	// System.Boolean UnityEngine.Rendering.Universal.Internal.PreviousFrameData::m_IsFirstFrame
	bool ___m_IsFirstFrame_0;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PreviousFrameData::m_LastFrameActive
	int32_t ___m_LastFrameActive_1;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.Internal.PreviousFrameData::m_viewProjectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_viewProjectionMatrix_2;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.Internal.PreviousFrameData::m_PreviousViewProjectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_PreviousViewProjectionMatrix_3;
	// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.Internal.PreviousFrameData::m_ViewProjectionMatrixStereo
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___m_ViewProjectionMatrixStereo_4;
	// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.Internal.PreviousFrameData::m_PreviousViewProjectionMatrixStereo
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___m_PreviousViewProjectionMatrixStereo_5;
};

// UnityEngine.Rendering.RTHandleProperties
struct RTHandleProperties_tBCB3E1EFE8B366995704C1322B9C443877580CD6 
{
	// UnityEngine.Vector2Int UnityEngine.Rendering.RTHandleProperties::previousViewportSize
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___previousViewportSize_0;
	// UnityEngine.Vector2Int UnityEngine.Rendering.RTHandleProperties::previousRenderTargetSize
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___previousRenderTargetSize_1;
	// UnityEngine.Vector2Int UnityEngine.Rendering.RTHandleProperties::currentViewportSize
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___currentViewportSize_2;
	// UnityEngine.Vector2Int UnityEngine.Rendering.RTHandleProperties::currentRenderTargetSize
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___currentRenderTargetSize_3;
	// UnityEngine.Vector4 UnityEngine.Rendering.RTHandleProperties::rtHandleScale
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rtHandleScale_4;
};

// UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem
struct RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13  : public RuntimeObject
{
	// UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::m_A
	SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4 ___m_A_0;
	// UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::m_B
	SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4 ___m_B_1;
	// UnityEngine.FilterMode UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::m_FilterMode
	int32_t ___m_FilterMode_4;
	// System.Boolean UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::m_AllowMSAA
	bool ___m_AllowMSAA_5;
};

struct RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_StaticFields
{
	// System.Boolean UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::m_AisBackBuffer
	bool ___m_AisBackBuffer_2;
	// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::m_Desc
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___m_Desc_3;
};

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_2;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_3;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_4;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_5;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_6;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_7;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 
{
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_1;
};

struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ScriptableRenderContext::kRenderTypeTag
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___kRenderTypeTag_0;
};

// UnityEngine.Rendering.Universal.ShadowData
struct ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832 
{
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::supportsMainLightShadows
	bool ___supportsMainLightShadows_0;
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::requiresScreenSpaceShadowResolve
	bool ___requiresScreenSpaceShadowResolve_1;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::mainLightShadowmapWidth
	int32_t ___mainLightShadowmapWidth_2;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::mainLightShadowmapHeight
	int32_t ___mainLightShadowmapHeight_3;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::mainLightShadowCascadesCount
	int32_t ___mainLightShadowCascadesCount_4;
	// UnityEngine.Vector3 UnityEngine.Rendering.Universal.ShadowData::mainLightShadowCascadesSplit
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mainLightShadowCascadesSplit_5;
	// System.Single UnityEngine.Rendering.Universal.ShadowData::mainLightShadowCascadeBorder
	float ___mainLightShadowCascadeBorder_6;
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::supportsAdditionalLightShadows
	bool ___supportsAdditionalLightShadows_7;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::additionalLightsShadowmapWidth
	int32_t ___additionalLightsShadowmapWidth_8;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::additionalLightsShadowmapHeight
	int32_t ___additionalLightsShadowmapHeight_9;
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::supportsSoftShadows
	bool ___supportsSoftShadows_10;
	// System.Int32 UnityEngine.Rendering.Universal.ShadowData::shadowmapDepthBufferBits
	int32_t ___shadowmapDepthBufferBits_11;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.Rendering.Universal.ShadowData::bias
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___bias_12;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Rendering.Universal.ShadowData::resolution
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___resolution_13;
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::isKeywordAdditionalLightShadowsEnabled
	bool ___isKeywordAdditionalLightShadowsEnabled_14;
	// System.Boolean UnityEngine.Rendering.Universal.ShadowData::isKeywordSoftShadowsEnabled
	bool ___isKeywordSoftShadowsEnabled_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.ShadowData
struct ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshaled_pinvoke
{
	int32_t ___supportsMainLightShadows_0;
	int32_t ___requiresScreenSpaceShadowResolve_1;
	int32_t ___mainLightShadowmapWidth_2;
	int32_t ___mainLightShadowmapHeight_3;
	int32_t ___mainLightShadowCascadesCount_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mainLightShadowCascadesSplit_5;
	float ___mainLightShadowCascadeBorder_6;
	int32_t ___supportsAdditionalLightShadows_7;
	int32_t ___additionalLightsShadowmapWidth_8;
	int32_t ___additionalLightsShadowmapHeight_9;
	int32_t ___supportsSoftShadows_10;
	int32_t ___shadowmapDepthBufferBits_11;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___bias_12;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___resolution_13;
	int32_t ___isKeywordAdditionalLightShadowsEnabled_14;
	int32_t ___isKeywordSoftShadowsEnabled_15;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.ShadowData
struct ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshaled_com
{
	int32_t ___supportsMainLightShadows_0;
	int32_t ___requiresScreenSpaceShadowResolve_1;
	int32_t ___mainLightShadowmapWidth_2;
	int32_t ___mainLightShadowmapHeight_3;
	int32_t ___mainLightShadowCascadesCount_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mainLightShadowCascadesSplit_5;
	float ___mainLightShadowCascadeBorder_6;
	int32_t ___supportsAdditionalLightShadows_7;
	int32_t ___additionalLightsShadowmapWidth_8;
	int32_t ___additionalLightsShadowmapHeight_9;
	int32_t ___supportsSoftShadows_10;
	int32_t ___shadowmapDepthBufferBits_11;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___bias_12;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___resolution_13;
	int32_t ___isKeywordAdditionalLightShadowsEnabled_14;
	int32_t ___isKeywordSoftShadowsEnabled_15;
};

// UnityEngine.Rendering.TextureParameter
struct TextureParameter_t8989581983DE4A463CBB1A19F90D9E27BF7EC28A  : public VolumeParameter_1_tB3100970DE7F44CC1B4585781E82F1E9F5C9C4A1
{
	// UnityEngine.Rendering.TextureDimension UnityEngine.Rendering.TextureParameter::dimension
	int32_t ___dimension_3;
};

// UnityEngine.Rendering.Universal.TonemappingModeParameter
struct TonemappingModeParameter_t0F6AAE0B6FFB371E2035BB0C739AF87C37E1760A  : public VolumeParameter_1_tBA92B79A20B96D6212DF5589AAFA7B0B4AC68A2C
{
};

// UnityEngine.Rendering.AttachmentDescriptor
struct AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E 
{
	// UnityEngine.Rendering.RenderBufferLoadAction UnityEngine.Rendering.AttachmentDescriptor::m_LoadAction
	int32_t ___m_LoadAction_0;
	// UnityEngine.Rendering.RenderBufferStoreAction UnityEngine.Rendering.AttachmentDescriptor::m_StoreAction
	int32_t ___m_StoreAction_1;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Rendering.AttachmentDescriptor::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.AttachmentDescriptor::m_LoadStoreTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_LoadStoreTarget_3;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.AttachmentDescriptor::m_ResolveTarget
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_ResolveTarget_4;
	// UnityEngine.Color UnityEngine.Rendering.AttachmentDescriptor::m_ClearColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ClearColor_5;
	// System.Single UnityEngine.Rendering.AttachmentDescriptor::m_ClearDepth
	float ___m_ClearDepth_6;
	// System.UInt32 UnityEngine.Rendering.AttachmentDescriptor::m_ClearStencil
	uint32_t ___m_ClearStencil_7;
};

// UnityEngine.Rendering.ClampedFloatParameter
struct ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8  : public FloatParameter_t566B623CD21B2F957A20BA790ACEF6684A712106
{
	// System.Single UnityEngine.Rendering.ClampedFloatParameter::min
	float ___min_3;
	// System.Single UnityEngine.Rendering.ClampedFloatParameter::max
	float ___max_4;
};

// UnityEngine.Rendering.ClampedIntParameter
struct ClampedIntParameter_tAF77FC44E522B137734644AE2E3F702580033B8E  : public IntParameter_t45D52025F857DFDFC590EDB800071A92774E04B8
{
	// System.Int32 UnityEngine.Rendering.ClampedIntParameter::min
	int32_t ___min_3;
	// System.Int32 UnityEngine.Rendering.ClampedIntParameter::max
	int32_t ___max_4;
};

// UnityEngine.Rendering.ColorParameter
struct ColorParameter_t367FD9EBE5DAA0ADB44F7DD0C260E9CDE3827CC0  : public VolumeParameter_1_t548F25B8FDAED7E284E53FF27602B841970079FC
{
	// System.Boolean UnityEngine.Rendering.ColorParameter::hdr
	bool ___hdr_3;
	// System.Boolean UnityEngine.Rendering.ColorParameter::showAlpha
	bool ___showAlpha_4;
	// System.Boolean UnityEngine.Rendering.ColorParameter::showEyeDropper
	bool ___showEyeDropper_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Rendering.Universal.DebugHandler
struct DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4  : public RuntimeObject
{
	// UnityEngine.Material UnityEngine.Rendering.Universal.DebugHandler::m_ReplacementMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_ReplacementMaterial_27;
	// System.Boolean UnityEngine.Rendering.Universal.DebugHandler::m_HasDebugRenderTarget
	bool ___m_HasDebugRenderTarget_28;
	// System.Boolean UnityEngine.Rendering.Universal.DebugHandler::m_DebugRenderTargetSupportsStereo
	bool ___m_DebugRenderTargetSupportsStereo_29;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.DebugHandler::m_DebugRenderTargetPixelRect
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_DebugRenderTargetPixelRect_30;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.DebugHandler::m_DebugRenderTargetIdentifier
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_DebugRenderTargetIdentifier_31;
	// UnityEngine.Rendering.Universal.UniversalRenderPipelineDebugDisplaySettings UnityEngine.Rendering.Universal.DebugHandler::m_DebugDisplaySettings
	UniversalRenderPipelineDebugDisplaySettings_t8E70DD217918DB0E7BD8BCCD9958C3E781DE0653* ___m_DebugDisplaySettings_32;
};

struct DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4_StaticFields
{
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugColorInvalidModePropertyId
	int32_t ___k_DebugColorInvalidModePropertyId_0;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugColorPropertyId
	int32_t ___k_DebugColorPropertyId_1;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugTexturePropertyId
	int32_t ___k_DebugTexturePropertyId_2;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugTextureNoStereoPropertyId
	int32_t ___k_DebugTextureNoStereoPropertyId_3;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugTextureDisplayRect
	int32_t ___k_DebugTextureDisplayRect_4;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugRenderTargetSupportsStereo
	int32_t ___k_DebugRenderTargetSupportsStereo_5;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugMaterialModeId
	int32_t ___k_DebugMaterialModeId_6;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugVertexAttributeModeId
	int32_t ___k_DebugVertexAttributeModeId_7;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugMaterialValidationModeId
	int32_t ___k_DebugMaterialValidationModeId_8;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugMipInfoModeId
	int32_t ___k_DebugMipInfoModeId_9;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugSceneOverrideModeId
	int32_t ___k_DebugSceneOverrideModeId_10;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugFullScreenModeId
	int32_t ___k_DebugFullScreenModeId_11;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugValidationModeId
	int32_t ___k_DebugValidationModeId_12;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugValidateBelowMinThresholdColorPropertyId
	int32_t ___k_DebugValidateBelowMinThresholdColorPropertyId_13;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugValidateAboveMaxThresholdColorPropertyId
	int32_t ___k_DebugValidateAboveMaxThresholdColorPropertyId_14;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugLightingModeId
	int32_t ___k_DebugLightingModeId_15;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugLightingFeatureFlagsId
	int32_t ___k_DebugLightingFeatureFlagsId_16;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugValidateAlbedoMinLuminanceId
	int32_t ___k_DebugValidateAlbedoMinLuminanceId_17;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugValidateAlbedoMaxLuminanceId
	int32_t ___k_DebugValidateAlbedoMaxLuminanceId_18;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugValidateAlbedoSaturationToleranceId
	int32_t ___k_DebugValidateAlbedoSaturationToleranceId_19;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugValidateAlbedoHueToleranceId
	int32_t ___k_DebugValidateAlbedoHueToleranceId_20;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugValidateAlbedoCompareColorId
	int32_t ___k_DebugValidateAlbedoCompareColorId_21;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugValidateMetallicMinValueId
	int32_t ___k_DebugValidateMetallicMinValueId_22;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_DebugValidateMetallicMaxValueId
	int32_t ___k_DebugValidateMetallicMaxValueId_23;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_ValidationChannelsId
	int32_t ___k_ValidationChannelsId_24;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_RangeMinimumId
	int32_t ___k_RangeMinimumId_25;
	// System.Int32 UnityEngine.Rendering.Universal.DebugHandler::k_RangeMaximumId
	int32_t ___k_RangeMaximumId_26;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Rendering.MinFloatParameter
struct MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9  : public FloatParameter_t566B623CD21B2F957A20BA790ACEF6684A712106
{
	// System.Single UnityEngine.Rendering.MinFloatParameter::min
	float ___min_3;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Rendering.RTHandle
struct RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B  : public RuntimeObject
{
	// UnityEngine.Rendering.RTHandleSystem UnityEngine.Rendering.RTHandle::m_Owner
	RTHandleSystem_tAE496B31B56A77B4896E34576C961C3CA073998F* ___m_Owner_0;
	// UnityEngine.RenderTexture UnityEngine.Rendering.RTHandle::m_RT
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RT_1;
	// UnityEngine.Texture UnityEngine.Rendering.RTHandle::m_ExternalTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_ExternalTexture_2;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RTHandle::m_NameID
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_NameID_3;
	// System.Boolean UnityEngine.Rendering.RTHandle::m_EnableMSAA
	bool ___m_EnableMSAA_4;
	// System.Boolean UnityEngine.Rendering.RTHandle::m_EnableRandomWrite
	bool ___m_EnableRandomWrite_5;
	// System.Boolean UnityEngine.Rendering.RTHandle::m_EnableHWDynamicScale
	bool ___m_EnableHWDynamicScale_6;
	// System.String UnityEngine.Rendering.RTHandle::m_Name
	String_t* ___m_Name_7;
	// System.Boolean UnityEngine.Rendering.RTHandle::m_UseCustomHandleScales
	bool ___m_UseCustomHandleScales_8;
	// UnityEngine.Rendering.RTHandleProperties UnityEngine.Rendering.RTHandle::m_CustomHandleProperties
	RTHandleProperties_tBCB3E1EFE8B366995704C1322B9C443877580CD6 ___m_CustomHandleProperties_9;
	// UnityEngine.Vector2 UnityEngine.Rendering.RTHandle::<scaleFactor>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscaleFactorU3Ek__BackingField_10;
	// UnityEngine.Rendering.ScaleFunc UnityEngine.Rendering.RTHandle::scaleFunc
	ScaleFunc_t423F661DAD5C7A18F509C8F1F62C9D6AEA9A9791* ___scaleFunc_11;
	// System.Boolean UnityEngine.Rendering.RTHandle::<useScaling>k__BackingField
	bool ___U3CuseScalingU3Ek__BackingField_12;
	// UnityEngine.Vector2Int UnityEngine.Rendering.RTHandle::<referenceSize>k__BackingField
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CreferenceSizeU3Ek__BackingField_13;
};

// UnityEngine.Rendering.Universal.RenderingData
struct RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71 
{
	// UnityEngine.Rendering.CullingResults UnityEngine.Rendering.Universal.RenderingData::cullResults
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullResults_0;
	// UnityEngine.Rendering.Universal.CameraData UnityEngine.Rendering.Universal.RenderingData::cameraData
	CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E ___cameraData_1;
	// UnityEngine.Rendering.Universal.LightData UnityEngine.Rendering.Universal.RenderingData::lightData
	LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470 ___lightData_2;
	// UnityEngine.Rendering.Universal.ShadowData UnityEngine.Rendering.Universal.RenderingData::shadowData
	ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832 ___shadowData_3;
	// UnityEngine.Rendering.Universal.PostProcessingData UnityEngine.Rendering.Universal.RenderingData::postProcessingData
	PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4 ___postProcessingData_4;
	// System.Boolean UnityEngine.Rendering.Universal.RenderingData::supportsDynamicBatching
	bool ___supportsDynamicBatching_5;
	// UnityEngine.Rendering.PerObjectData UnityEngine.Rendering.Universal.RenderingData::perObjectData
	int32_t ___perObjectData_6;
	// System.Boolean UnityEngine.Rendering.Universal.RenderingData::postProcessingEnabled
	bool ___postProcessingEnabled_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.RenderingData
struct RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71_marshaled_pinvoke
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullResults_0;
	CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshaled_pinvoke ___cameraData_1;
	LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshaled_pinvoke ___lightData_2;
	ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshaled_pinvoke ___shadowData_3;
	PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshaled_pinvoke ___postProcessingData_4;
	int32_t ___supportsDynamicBatching_5;
	int32_t ___perObjectData_6;
	int32_t ___postProcessingEnabled_7;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.RenderingData
struct RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71_marshaled_com
{
	CullingResults_tD6B7EF20B68D47DFF3A99EB2EA73F47F1D460267 ___cullResults_0;
	CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E_marshaled_com ___cameraData_1;
	LightData_t6A82F1C9AA97327A5EE9C16A3E949918F3A55470_marshaled_com ___lightData_2;
	ShadowData_tA165FDF7CA4CE6BEA8B649FFAB91C59ED684D832_marshaled_com ___shadowData_3;
	PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4_marshaled_com ___postProcessingData_4;
	int32_t ___supportsDynamicBatching_5;
	int32_t ___perObjectData_6;
	int32_t ___postProcessingEnabled_7;
};

// UnityEngine.Rendering.ScriptableCullingParameters
struct ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899 
{
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Rendering.LODParameters UnityEngine.Rendering.ScriptableCullingParameters::m_LODParameters
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___m_LODParameters_1;
	// UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer UnityEngine.Rendering.ScriptableCullingParameters::m_CullingPlanes
	U3Cm_CullingPlanesU3Ee__FixedBuffer_t1E4CBEC7086738067A0EF9A1B2B6B36059DAB955 ___m_CullingPlanes_3;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingPlaneCount
	int32_t ___m_CullingPlaneCount_4;
	// System.UInt32 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingMask
	uint32_t ___m_CullingMask_5;
	// System.UInt64 UnityEngine.Rendering.ScriptableCullingParameters::m_SceneMask
	uint64_t ___m_SceneMask_6;
	// System.UInt64 UnityEngine.Rendering.ScriptableCullingParameters::m_ViewID
	uint64_t ___m_ViewID_7;
	// UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer UnityEngine.Rendering.ScriptableCullingParameters::m_LayerFarCullDistances
	U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_tD64F550B6761957A5DA6A33A171BBF4FB4EB667D ___m_LayerFarCullDistances_9;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_LayerCull
	int32_t ___m_LayerCull_10;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix_11;
	// UnityEngine.Vector3 UnityEngine.Rendering.ScriptableCullingParameters::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_12;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_ShadowDistance
	float ___m_ShadowDistance_13;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_ShadowNearPlaneOffset
	float ___m_ShadowNearPlaneOffset_14;
	// UnityEngine.Rendering.CullingOptions UnityEngine.Rendering.ScriptableCullingParameters::m_CullingOptions
	int32_t ___m_CullingOptions_15;
	// UnityEngine.Rendering.ReflectionProbeSortingCriteria UnityEngine.Rendering.ScriptableCullingParameters::m_ReflectionProbeSortingCriteria
	int32_t ___m_ReflectionProbeSortingCriteria_16;
	// UnityEngine.Rendering.CameraProperties UnityEngine.Rendering.ScriptableCullingParameters::m_CameraProperties
	CameraProperties_t9318B43C06A9BAC4CD8BC5EFCC9FE6882D296D57 ___m_CameraProperties_17;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_AccurateOcclusionThreshold
	float ___m_AccurateOcclusionThreshold_18;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_MaximumPortalCullingJobs
	int32_t ___m_MaximumPortalCullingJobs_19;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_StereoViewMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_StereoViewMatrix_20;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_StereoProjectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_StereoProjectionMatrix_21;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_StereoSeparationDistance
	float ___m_StereoSeparationDistance_22;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_maximumVisibleLights
	int32_t ___m_maximumVisibleLights_23;
	// System.Boolean UnityEngine.Rendering.ScriptableCullingParameters::m_ConservativeEnclosingSphere
	bool ___m_ConservativeEnclosingSphere_24;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_NumIterationsEnclosingSphere
	int32_t ___m_NumIterationsEnclosingSphere_25;
};

struct ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_StaticFields
{
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::maximumCullingPlaneCount
	int32_t ___maximumCullingPlaneCount_2;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::layerCount
	int32_t ___layerCount_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.ScriptableCullingParameters
struct ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshaled_pinvoke
{
	int32_t ___m_IsOrthographic_0;
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___m_LODParameters_1;
	U3Cm_CullingPlanesU3Ee__FixedBuffer_t1E4CBEC7086738067A0EF9A1B2B6B36059DAB955 ___m_CullingPlanes_3;
	int32_t ___m_CullingPlaneCount_4;
	uint32_t ___m_CullingMask_5;
	uint64_t ___m_SceneMask_6;
	uint64_t ___m_ViewID_7;
	U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_tD64F550B6761957A5DA6A33A171BBF4FB4EB667D ___m_LayerFarCullDistances_9;
	int32_t ___m_LayerCull_10;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix_11;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_12;
	float ___m_ShadowDistance_13;
	float ___m_ShadowNearPlaneOffset_14;
	int32_t ___m_CullingOptions_15;
	int32_t ___m_ReflectionProbeSortingCriteria_16;
	CameraProperties_t9318B43C06A9BAC4CD8BC5EFCC9FE6882D296D57 ___m_CameraProperties_17;
	float ___m_AccurateOcclusionThreshold_18;
	int32_t ___m_MaximumPortalCullingJobs_19;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_StereoViewMatrix_20;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_StereoProjectionMatrix_21;
	float ___m_StereoSeparationDistance_22;
	int32_t ___m_maximumVisibleLights_23;
	int32_t ___m_ConservativeEnclosingSphere_24;
	int32_t ___m_NumIterationsEnclosingSphere_25;
};
// Native definition for COM marshalling of UnityEngine.Rendering.ScriptableCullingParameters
struct ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899_marshaled_com
{
	int32_t ___m_IsOrthographic_0;
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___m_LODParameters_1;
	U3Cm_CullingPlanesU3Ee__FixedBuffer_t1E4CBEC7086738067A0EF9A1B2B6B36059DAB955 ___m_CullingPlanes_3;
	int32_t ___m_CullingPlaneCount_4;
	uint32_t ___m_CullingMask_5;
	uint64_t ___m_SceneMask_6;
	uint64_t ___m_ViewID_7;
	U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_tD64F550B6761957A5DA6A33A171BBF4FB4EB667D ___m_LayerFarCullDistances_9;
	int32_t ___m_LayerCull_10;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_CullingMatrix_11;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_12;
	float ___m_ShadowDistance_13;
	float ___m_ShadowNearPlaneOffset_14;
	int32_t ___m_CullingOptions_15;
	int32_t ___m_ReflectionProbeSortingCriteria_16;
	CameraProperties_t9318B43C06A9BAC4CD8BC5EFCC9FE6882D296D57 ___m_CameraProperties_17;
	float ___m_AccurateOcclusionThreshold_18;
	int32_t ___m_MaximumPortalCullingJobs_19;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_StereoViewMatrix_20;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_StereoProjectionMatrix_21;
	float ___m_StereoSeparationDistance_22;
	int32_t ___m_maximumVisibleLights_23;
	int32_t ___m_ConservativeEnclosingSphere_24;
	int32_t ___m_NumIterationsEnclosingSphere_25;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Rendering.Universal.ScriptableRenderPass
struct ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0  : public RuntimeObject
{
	// UnityEngine.Rendering.Universal.RenderPassEvent UnityEngine.Rendering.Universal.ScriptableRenderPass::<renderPassEvent>k__BackingField
	int32_t ___U3CrenderPassEventU3Ek__BackingField_1;
	// UnityEngine.Rendering.RenderBufferStoreAction[] UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ColorStoreActions
	RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5* ___m_ColorStoreActions_2;
	// UnityEngine.Rendering.RenderBufferStoreAction UnityEngine.Rendering.Universal.ScriptableRenderPass::m_DepthStoreAction
	int32_t ___m_DepthStoreAction_3;
	// System.Boolean[] UnityEngine.Rendering.Universal.ScriptableRenderPass::m_OverriddenColorStoreActions
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___m_OverriddenColorStoreActions_4;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::m_OverriddenDepthStoreAction
	bool ___m_OverriddenDepthStoreAction_5;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.ScriptableRenderPass::<profilingSampler>k__BackingField
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___U3CprofilingSamplerU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::<overrideCameraTarget>k__BackingField
	bool ___U3CoverrideCameraTargetU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::<isBlitRenderPass>k__BackingField
	bool ___U3CisBlitRenderPassU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::<useNativeRenderPass>k__BackingField
	bool ___U3CuseNativeRenderPassU3Ek__BackingField_9;
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderPass::<renderTargetWidth>k__BackingField
	int32_t ___U3CrenderTargetWidthU3Ek__BackingField_10;
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderPass::<renderTargetHeight>k__BackingField
	int32_t ___U3CrenderTargetHeightU3Ek__BackingField_11;
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderPass::<renderTargetSampleCount>k__BackingField
	int32_t ___U3CrenderTargetSampleCountU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::<depthOnly>k__BackingField
	bool ___U3CdepthOnlyU3Ek__BackingField_13;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::<isLastPass>k__BackingField
	bool ___U3CisLastPassU3Ek__BackingField_14;
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderPass::<renderPassQueueIndex>k__BackingField
	int32_t ___U3CrenderPassQueueIndexU3Ek__BackingField_15;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ColorAttachmentIndices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_ColorAttachmentIndices_16;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.Universal.ScriptableRenderPass::m_InputAttachmentIndices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_InputAttachmentIndices_17;
	// UnityEngine.Experimental.Rendering.GraphicsFormat[] UnityEngine.Rendering.Universal.ScriptableRenderPass::<renderTargetFormat>k__BackingField
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* ___U3CrenderTargetFormatU3Ek__BackingField_18;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderPass::m_UsesRTHandles
	bool ___m_UsesRTHandles_19;
	// UnityEngine.Rendering.RTHandle[] UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ColorAttachments
	RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF* ___m_ColorAttachments_20;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ColorAttachmentIds
	RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* ___m_ColorAttachmentIds_21;
	// UnityEngine.Rendering.RTHandle[] UnityEngine.Rendering.Universal.ScriptableRenderPass::m_InputAttachments
	RTHandleU5BU5D_tE4B403B060D159B839BF74E8B59F8DCD52CF97DF* ___m_InputAttachments_22;
	// System.Boolean[] UnityEngine.Rendering.Universal.ScriptableRenderPass::m_InputAttachmentIsTransient
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___m_InputAttachmentIsTransient_23;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.ScriptableRenderPass::m_DepthAttachment
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___m_DepthAttachment_24;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderPass::m_DepthAttachmentId
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_DepthAttachmentId_25;
	// UnityEngine.Rendering.Universal.ScriptableRenderPassInput UnityEngine.Rendering.Universal.ScriptableRenderPass::m_Input
	int32_t ___m_Input_26;
	// UnityEngine.Rendering.ClearFlag UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ClearFlag
	int32_t ___m_ClearFlag_27;
	// UnityEngine.Color UnityEngine.Rendering.Universal.ScriptableRenderPass::m_ClearColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ClearColor_28;
};

struct ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_StaticFields
{
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.ScriptableRenderPass::k_CameraTarget
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___k_CameraTarget_0;
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Rendering.Vector2Parameter
struct Vector2Parameter_tA29C9FAC53EDB2E0996430A461F9CC59B6C4288A  : public VolumeParameter_1_tADB3F1E2F42E88F6F74B7FD1CE782B1098424D7B
{
};

// UnityEngine.Rendering.Universal.ScriptableRenderer/RTHandleRenderTargetIdentifierCompat
struct RTHandleRenderTargetIdentifierCompat_tAAA3E093F4D907D1F11FFB2B9A3F5D6202993EBB 
{
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.ScriptableRenderer/RTHandleRenderTargetIdentifierCompat::handle
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___handle_0;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer/RTHandleRenderTargetIdentifierCompat::fallback
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___fallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.ScriptableRenderer/RTHandleRenderTargetIdentifierCompat
struct RTHandleRenderTargetIdentifierCompat_tAAA3E093F4D907D1F11FFB2B9A3F5D6202993EBB_marshaled_pinvoke
{
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___handle_0;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___fallback_1;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.ScriptableRenderer/RTHandleRenderTargetIdentifierCompat
struct RTHandleRenderTargetIdentifierCompat_tAAA3E093F4D907D1F11FFB2B9A3F5D6202993EBB_marshaled_com
{
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___handle_0;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___fallback_1;
};

// System.Func`4<UnityEngine.Light,UnityEngine.Camera,UnityEngine.Vector3,System.Single>
struct Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rendering.Universal.PostProcessData
struct PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Rendering.Universal.PostProcessData/ShaderResources UnityEngine.Rendering.Universal.PostProcessData::shaders
	ShaderResources_t5CFF4C7697343EC59BAE5094B637F9EC23CE6D59* ___shaders_4;
	// UnityEngine.Rendering.Universal.PostProcessData/TextureResources UnityEngine.Rendering.Universal.PostProcessData::textures
	TextureResources_t9220AC464374C6AA55163CD0AC71C62B85E6C122* ___textures_5;
};

// UnityEngine.Rendering.Universal.Internal.PostProcessPass
struct PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286  : public ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0
{
	// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_Descriptor
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___m_Descriptor_29;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_Source
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___m_Source_30;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_Destination
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___m_Destination_31;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_Depth
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___m_Depth_32;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_InternalLut
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___m_InternalLut_33;
	// UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_Materials
	MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* ___m_Materials_38;
	// UnityEngine.Rendering.Universal.PostProcessData UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_Data
	PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* ___m_Data_39;
	// UnityEngine.Rendering.Universal.DepthOfField UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_DepthOfField
	DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* ___m_DepthOfField_40;
	// UnityEngine.Rendering.Universal.MotionBlur UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_MotionBlur
	MotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161* ___m_MotionBlur_41;
	// UnityEngine.Rendering.Universal.PaniniProjection UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_PaniniProjection
	PaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA* ___m_PaniniProjection_42;
	// UnityEngine.Rendering.Universal.Bloom UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_Bloom
	Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* ___m_Bloom_43;
	// UnityEngine.Rendering.Universal.LensDistortion UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_LensDistortion
	LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6* ___m_LensDistortion_44;
	// UnityEngine.Rendering.Universal.ChromaticAberration UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_ChromaticAberration
	ChromaticAberration_t84EAB576773C3AD4DE77A13952B487F9DA10DA9F* ___m_ChromaticAberration_45;
	// UnityEngine.Rendering.Universal.Vignette UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_Vignette
	Vignette_t77147DD5FEEB4476AF22BD98255F8010738985DC* ___m_Vignette_46;
	// UnityEngine.Rendering.Universal.ColorLookup UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_ColorLookup
	ColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C* ___m_ColorLookup_47;
	// UnityEngine.Rendering.Universal.ColorAdjustments UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_ColorAdjustments
	ColorAdjustments_t97EE64C6DB384E5F6BC48C3FA13C207E8FC87A86* ___m_ColorAdjustments_48;
	// UnityEngine.Rendering.Universal.Tonemapping UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_Tonemapping
	Tonemapping_tB71CED262B25FC58B0259FD05DD32821C2858DBA* ___m_Tonemapping_49;
	// UnityEngine.Rendering.Universal.FilmGrain UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_FilmGrain
	FilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172* ___m_FilmGrain_50;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_DefaultHDRFormat
	int32_t ___m_DefaultHDRFormat_52;
	// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_UseRGBM
	bool ___m_UseRGBM_53;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_SMAAEdgeFormat
	int32_t ___m_SMAAEdgeFormat_54;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_GaussianCoCFormat
	int32_t ___m_GaussianCoCFormat_55;
	// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_PrevViewProjM
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___m_PrevViewProjM_56;
	// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_ResetHistory
	bool ___m_ResetHistory_57;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_DitheringTextureIndex
	int32_t ___m_DitheringTextureIndex_58;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_MRT2
	RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* ___m_MRT2_59;
	// UnityEngine.Vector4[] UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_BokehKernel
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_BokehKernel_60;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_BokehHash
	int32_t ___m_BokehHash_61;
	// System.Single UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_BokehMaxRadius
	float ___m_BokehMaxRadius_62;
	// System.Single UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_BokehRCPAspect
	float ___m_BokehRCPAspect_63;
	// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_IsFinalPass
	bool ___m_IsFinalPass_64;
	// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_HasFinalPass
	bool ___m_HasFinalPass_65;
	// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_EnableSRGBConversionIfNeeded
	bool ___m_EnableSRGBConversionIfNeeded_66;
	// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_UseDrawProcedural
	bool ___m_UseDrawProcedural_67;
	// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_UseFastSRGBLinearConversion
	bool ___m_UseFastSRGBLinearConversion_68;
	// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_ResolveToScreen
	bool ___m_ResolveToScreen_69;
	// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_UseSwapBuffer
	bool ___m_UseSwapBuffer_70;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_TempTarget
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___m_TempTarget_71;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_TempTarget2
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___m_TempTarget2_72;
	// UnityEngine.Material UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_BlitMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_BlitMaterial_73;
};

struct PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_StaticFields
{
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_ProfilingRenderPostProcessing
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___m_ProfilingRenderPostProcessing_36;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.Internal.PostProcessPass::m_ProfilingRenderFinalPostProcessing
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___m_ProfilingRenderFinalPostProcessing_37;
	// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.Internal.PostProcessPass::viewProjMatrixStereo
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___viewProjMatrixStereo_74;
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Rendering.Universal.ScriptableRenderer
struct ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892  : public RuntimeObject
{
	// System.Int32 UnityEngine.Rendering.Universal.ScriptableRenderer::m_LastBeginSubpassPassIndex
	int32_t ___m_LastBeginSubpassPassIndex_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.Int32[]> UnityEngine.Rendering.Universal.ScriptableRenderer::m_MergeableRenderPassesMap
	Dictionary_2_tCB9019887EB0254D4745B0724BC12327C5B63792* ___m_MergeableRenderPassesMap_3;
	// System.Int32[][] UnityEngine.Rendering.Universal.ScriptableRenderer::m_MergeableRenderPassesMapArrays
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___m_MergeableRenderPassesMapArrays_4;
	// UnityEngine.Hash128[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_PassIndexToPassHash
	Hash128U5BU5D_tB104E7247B842648E447B7FCF4748077DC1F8C98* ___m_PassIndexToPassHash_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Hash128,System.Int32> UnityEngine.Rendering.Universal.ScriptableRenderer::m_RenderPassesAttachmentCount
	Dictionary_2_tB41FAC88F07BAB98D6D373F7C94FB0496D1BDA32* ___m_RenderPassesAttachmentCount_6;
	// UnityEngine.Rendering.AttachmentDescriptor[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveColorAttachmentDescriptors
	AttachmentDescriptorU5BU5D_tC70107EBD955FE94BA31C7FDC146069EF9C547C1* ___m_ActiveColorAttachmentDescriptors_7;
	// UnityEngine.Rendering.AttachmentDescriptor UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveDepthAttachmentDescriptor
	AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E ___m_ActiveDepthAttachmentDescriptor_8;
	// System.Boolean[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_IsActiveColorAttachmentTransient
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___m_IsActiveColorAttachmentTransient_9;
	// UnityEngine.Rendering.RenderBufferStoreAction[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_FinalColorStoreAction
	RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5* ___m_FinalColorStoreAction_10;
	// UnityEngine.Rendering.RenderBufferStoreAction UnityEngine.Rendering.Universal.ScriptableRenderer::m_FinalDepthStoreAction
	int32_t ___m_FinalDepthStoreAction_11;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.ScriptableRenderer::<profilingExecute>k__BackingField
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___U3CprofilingExecuteU3Ek__BackingField_12;
	// UnityEngine.Rendering.Universal.DebugHandler UnityEngine.Rendering.Universal.ScriptableRenderer::<DebugHandler>k__BackingField
	DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4* ___U3CDebugHandlerU3Ek__BackingField_13;
	// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures UnityEngine.Rendering.Universal.ScriptableRenderer::<supportedRenderingFeatures>k__BackingField
	RenderingFeatures_t31044CBDCDC2F05194BFA2A2122FBD937D78A371* ___U3CsupportedRenderingFeaturesU3Ek__BackingField_15;
	// UnityEngine.Rendering.GraphicsDeviceType[] UnityEngine.Rendering.Universal.ScriptableRenderer::<unsupportedGraphicsDeviceTypes>k__BackingField
	GraphicsDeviceTypeU5BU5D_t4322565F239068C66BF47053B83BD6A9A9D16408* ___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_16;
	// UnityEngine.Rendering.Universal.StoreActionsOptimization UnityEngine.Rendering.Universal.ScriptableRenderer::m_StoreActionsOptimizationSetting
	int32_t ___m_StoreActionsOptimizationSetting_17;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass> UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveRenderPassQueue
	List_1_t2E485E650BF1E41358CE56A69323E183C5A89CB6* ___m_ActiveRenderPassQueue_21;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature> UnityEngine.Rendering.Universal.ScriptableRenderer::m_RendererFeatures
	List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6* ___m_RendererFeatures_22;
	// UnityEngine.Rendering.Universal.ScriptableRenderer/RTHandleRenderTargetIdentifierCompat UnityEngine.Rendering.Universal.ScriptableRenderer::m_CameraColorTarget
	RTHandleRenderTargetIdentifierCompat_tAAA3E093F4D907D1F11FFB2B9A3F5D6202993EBB ___m_CameraColorTarget_23;
	// UnityEngine.Rendering.Universal.ScriptableRenderer/RTHandleRenderTargetIdentifierCompat UnityEngine.Rendering.Universal.ScriptableRenderer::m_CameraDepthTarget
	RTHandleRenderTargetIdentifierCompat_tAAA3E093F4D907D1F11FFB2B9A3F5D6202993EBB ___m_CameraDepthTarget_24;
	// UnityEngine.Rendering.Universal.ScriptableRenderer/RTHandleRenderTargetIdentifierCompat UnityEngine.Rendering.Universal.ScriptableRenderer::m_CameraResolveTarget
	RTHandleRenderTargetIdentifierCompat_tAAA3E093F4D907D1F11FFB2B9A3F5D6202993EBB ___m_CameraResolveTarget_25;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_FirstTimeCameraColorTargetIsBound
	bool ___m_FirstTimeCameraColorTargetIsBound_26;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_FirstTimeCameraDepthTargetIsBound
	bool ___m_FirstTimeCameraDepthTargetIsBound_27;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_IsPipelineExecuting
	bool ___m_IsPipelineExecuting_28;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::disableNativeRenderPassInFeatures
	bool ___disableNativeRenderPassInFeatures_29;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::useRenderPassEnabled
	bool ___useRenderPassEnabled_30;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::<useDepthPriming>k__BackingField
	bool ___U3CuseDepthPrimingU3Ek__BackingField_38;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::<stripShadowsOffVariants>k__BackingField
	bool ___U3CstripShadowsOffVariantsU3Ek__BackingField_39;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::<stripAdditionalLightOffVariants>k__BackingField
	bool ___U3CstripAdditionalLightOffVariantsU3Ek__BackingField_40;
};

struct ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892_StaticFields
{
	// UnityEngine.Rendering.Universal.ScriptableRenderer UnityEngine.Rendering.Universal.ScriptableRenderer::current
	ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* ___current_14;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_UseOptimizedStoreActions
	bool ___m_UseOptimizedStoreActions_18;
	// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.ScriptableRenderer::k_CameraTarget
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___k_CameraTarget_20;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveColorAttachments
	RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* ___m_ActiveColorAttachments_31;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveDepthAttachment
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_ActiveDepthAttachment_32;
	// UnityEngine.Rendering.RenderBufferStoreAction[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveColorStoreActions
	RenderBufferStoreActionU5BU5D_tFEA8F5DD460573EA9F35FBEC5727D1804C5DCBF5* ___m_ActiveColorStoreActions_33;
	// UnityEngine.Rendering.RenderBufferStoreAction UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveDepthStoreAction
	int32_t ___m_ActiveDepthStoreAction_34;
	// UnityEngine.Rendering.RenderTargetIdentifier[][] UnityEngine.Rendering.Universal.ScriptableRenderer::m_TrimmedColorAttachmentCopies
	RenderTargetIdentifierU5BU5DU5BU5D_tDB35F8D017FE3AD8BB35E08E323074D47C5A10BB* ___m_TrimmedColorAttachmentCopies_35;
	// UnityEngine.Plane[] UnityEngine.Rendering.Universal.ScriptableRenderer::s_Planes
	PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___s_Planes_36;
	// UnityEngine.Vector4[] UnityEngine.Rendering.Universal.ScriptableRenderer::s_VectorPlanes
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_VectorPlanes_37;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rendering.VolumeComponent
struct VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.Rendering.VolumeComponent::active
	bool ___active_4;
	// System.String UnityEngine.Rendering.VolumeComponent::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_5;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.VolumeParameter> UnityEngine.Rendering.VolumeComponent::<parameters>k__BackingField
	ReadOnlyCollection_1_tE414953665CCBE1BFF28E8E32C184621ADDA4B76* ___U3CparametersU3Ek__BackingField_6;
};

// UnityEngine.Rendering.Universal.XRPass
struct XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.XRView> UnityEngine.Rendering.Universal.XRPass::views
	List_1_tB3AD940C3EFA3B62F5F00791CB82A01B87D1F4CE* ___views_0;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<xrSdkEnabled>k__BackingField
	bool ___U3CxrSdkEnabledU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<copyDepth>k__BackingField
	bool ___U3CcopyDepthU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::<multipassId>k__BackingField
	int32_t ___U3CmultipassIdU3Ek__BackingField_3;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::<cullingPassId>k__BackingField
	int32_t ___U3CcullingPassIdU3Ek__BackingField_4;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.XRPass::<renderTarget>k__BackingField
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___U3CrenderTargetU3Ek__BackingField_5;
	// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.XRPass::<renderTargetDesc>k__BackingField
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___U3CrenderTargetDescU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<renderTargetIsRenderTexture>k__BackingField
	bool ___U3CrenderTargetIsRenderTextureU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<isLateLatchEnabled>k__BackingField
	bool ___U3CisLateLatchEnabledU3Ek__BackingField_9;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<canMarkLateLatch>k__BackingField
	bool ___U3CcanMarkLateLatchU3Ek__BackingField_10;
	// System.Boolean UnityEngine.Rendering.Universal.XRPass::<hasMarkedLateLatch>k__BackingField
	bool ___U3ChasMarkedLateLatchU3Ek__BackingField_11;
	// UnityEngine.Rendering.ScriptableCullingParameters UnityEngine.Rendering.Universal.XRPass::<cullingParams>k__BackingField
	ScriptableCullingParameters_tD9539440A4A7DA4C7578CCE16F24466A5DC89899 ___U3CcullingParamsU3Ek__BackingField_12;
	// UnityEngine.Material UnityEngine.Rendering.Universal.XRPass::occlusionMeshMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___occlusionMeshMaterial_13;
	// UnityEngine.Mesh UnityEngine.Rendering.Universal.XRPass::occlusionMeshCombined
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMeshCombined_14;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::occlusionMeshCombinedHashCode
	int32_t ___occlusionMeshCombinedHashCode_15;
	// UnityEngine.Rendering.Universal.XRPass/CustomMirrorView UnityEngine.Rendering.Universal.XRPass::customMirrorView
	CustomMirrorView_t826B740E52CCFCC96FCCDD7DCC1B2D7208D8D316* ___customMirrorView_16;
	// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.XRPass::stereoProjectionMatrix
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___stereoProjectionMatrix_21;
	// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.XRPass::stereoViewMatrix
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___stereoViewMatrix_22;
	// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.XRPass::stereoCameraProjectionMatrix
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___stereoCameraProjectionMatrix_23;
};

struct XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24_StaticFields
{
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.XRPass::invalidRT
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___invalidRT_7;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.XRPass::_XRCustomMirrorProfilingSampler
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ____XRCustomMirrorProfilingSampler_18;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.XRPass::_XROcclusionProfilingSampler
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ____XROcclusionProfilingSampler_20;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::UNITY_STEREO_MATRIX_V
	int32_t ___UNITY_STEREO_MATRIX_V_24;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::UNITY_STEREO_MATRIX_IV
	int32_t ___UNITY_STEREO_MATRIX_IV_25;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::UNITY_STEREO_MATRIX_VP
	int32_t ___UNITY_STEREO_MATRIX_VP_26;
	// System.Int32 UnityEngine.Rendering.Universal.XRPass::UNITY_STEREO_MATRIX_IVP
	int32_t ___UNITY_STEREO_MATRIX_IVP_27;
};

// UnityEngine.Rendering.Universal.Bloom
struct Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225  : public VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1
{
	// UnityEngine.Rendering.MinFloatParameter UnityEngine.Rendering.Universal.Bloom::threshold
	MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* ___threshold_7;
	// UnityEngine.Rendering.MinFloatParameter UnityEngine.Rendering.Universal.Bloom::intensity
	MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* ___intensity_8;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.Bloom::scatter
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___scatter_9;
	// UnityEngine.Rendering.MinFloatParameter UnityEngine.Rendering.Universal.Bloom::clamp
	MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* ___clamp_10;
	// UnityEngine.Rendering.ColorParameter UnityEngine.Rendering.Universal.Bloom::tint
	ColorParameter_t367FD9EBE5DAA0ADB44F7DD0C260E9CDE3827CC0* ___tint_11;
	// UnityEngine.Rendering.BoolParameter UnityEngine.Rendering.Universal.Bloom::highQualityFiltering
	BoolParameter_tAA460C5A72ADBDDB4519BFF0BA040EC202E14E95* ___highQualityFiltering_12;
	// UnityEngine.Rendering.ClampedIntParameter UnityEngine.Rendering.Universal.Bloom::skipIterations
	ClampedIntParameter_tAF77FC44E522B137734644AE2E3F702580033B8E* ___skipIterations_13;
	// UnityEngine.Rendering.TextureParameter UnityEngine.Rendering.Universal.Bloom::dirtTexture
	TextureParameter_t8989581983DE4A463CBB1A19F90D9E27BF7EC28A* ___dirtTexture_14;
	// UnityEngine.Rendering.MinFloatParameter UnityEngine.Rendering.Universal.Bloom::dirtIntensity
	MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* ___dirtIntensity_15;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Rendering.Universal.ChromaticAberration
struct ChromaticAberration_t84EAB576773C3AD4DE77A13952B487F9DA10DA9F  : public VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1
{
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.ChromaticAberration::intensity
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___intensity_7;
};

// UnityEngine.Rendering.Universal.ColorAdjustments
struct ColorAdjustments_t97EE64C6DB384E5F6BC48C3FA13C207E8FC87A86  : public VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1
{
	// UnityEngine.Rendering.FloatParameter UnityEngine.Rendering.Universal.ColorAdjustments::postExposure
	FloatParameter_t566B623CD21B2F957A20BA790ACEF6684A712106* ___postExposure_7;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.ColorAdjustments::contrast
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___contrast_8;
	// UnityEngine.Rendering.ColorParameter UnityEngine.Rendering.Universal.ColorAdjustments::colorFilter
	ColorParameter_t367FD9EBE5DAA0ADB44F7DD0C260E9CDE3827CC0* ___colorFilter_9;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.ColorAdjustments::hueShift
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___hueShift_10;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.ColorAdjustments::saturation
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___saturation_11;
};

// UnityEngine.Rendering.Universal.ColorLookup
struct ColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C  : public VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1
{
	// UnityEngine.Rendering.TextureParameter UnityEngine.Rendering.Universal.ColorLookup::texture
	TextureParameter_t8989581983DE4A463CBB1A19F90D9E27BF7EC28A* ___texture_7;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.ColorLookup::contribution
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___contribution_8;
};

// UnityEngine.Rendering.Universal.DepthOfField
struct DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF  : public VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1
{
	// UnityEngine.Rendering.Universal.DepthOfFieldModeParameter UnityEngine.Rendering.Universal.DepthOfField::mode
	DepthOfFieldModeParameter_t2AC87B0A41A5C9BB872A9E9D7913C262F9DA4E26* ___mode_7;
	// UnityEngine.Rendering.MinFloatParameter UnityEngine.Rendering.Universal.DepthOfField::gaussianStart
	MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* ___gaussianStart_8;
	// UnityEngine.Rendering.MinFloatParameter UnityEngine.Rendering.Universal.DepthOfField::gaussianEnd
	MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* ___gaussianEnd_9;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.DepthOfField::gaussianMaxRadius
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___gaussianMaxRadius_10;
	// UnityEngine.Rendering.BoolParameter UnityEngine.Rendering.Universal.DepthOfField::highQualitySampling
	BoolParameter_tAA460C5A72ADBDDB4519BFF0BA040EC202E14E95* ___highQualitySampling_11;
	// UnityEngine.Rendering.MinFloatParameter UnityEngine.Rendering.Universal.DepthOfField::focusDistance
	MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* ___focusDistance_12;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.DepthOfField::aperture
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___aperture_13;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.DepthOfField::focalLength
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___focalLength_14;
	// UnityEngine.Rendering.ClampedIntParameter UnityEngine.Rendering.Universal.DepthOfField::bladeCount
	ClampedIntParameter_tAF77FC44E522B137734644AE2E3F702580033B8E* ___bladeCount_15;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.DepthOfField::bladeCurvature
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___bladeCurvature_16;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.DepthOfField::bladeRotation
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___bladeRotation_17;
};

// UnityEngine.Rendering.Universal.FilmGrain
struct FilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172  : public VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1
{
	// UnityEngine.Rendering.Universal.FilmGrainLookupParameter UnityEngine.Rendering.Universal.FilmGrain::type
	FilmGrainLookupParameter_tDF3F944D7FECD6E33C773117CA937AE2420F4C6F* ___type_7;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.FilmGrain::intensity
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___intensity_8;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.FilmGrain::response
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___response_9;
	// UnityEngine.Rendering.NoInterpTextureParameter UnityEngine.Rendering.Universal.FilmGrain::texture
	NoInterpTextureParameter_tC99FB0FE7B2B1D94AE407F612730FC05204C1478* ___texture_10;
};

// UnityEngine.Rendering.Universal.LensDistortion
struct LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6  : public VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1
{
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.LensDistortion::intensity
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___intensity_7;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.LensDistortion::xMultiplier
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___xMultiplier_8;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.LensDistortion::yMultiplier
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___yMultiplier_9;
	// UnityEngine.Rendering.Vector2Parameter UnityEngine.Rendering.Universal.LensDistortion::center
	Vector2Parameter_tA29C9FAC53EDB2E0996430A461F9CC59B6C4288A* ___center_10;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.LensDistortion::scale
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___scale_11;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.Rendering.Universal.MotionBlur
struct MotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161  : public VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1
{
	// UnityEngine.Rendering.Universal.MotionBlurModeParameter UnityEngine.Rendering.Universal.MotionBlur::mode
	MotionBlurModeParameter_tB166307F460D4DF85A966BE6EDA29279F6B4FF14* ___mode_7;
	// UnityEngine.Rendering.Universal.MotionBlurQualityParameter UnityEngine.Rendering.Universal.MotionBlur::quality
	MotionBlurQualityParameter_tD50C3C4531FB58AB4B8C2917F41668C3EE54A637* ___quality_8;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.MotionBlur::intensity
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___intensity_9;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.MotionBlur::clamp
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___clamp_10;
};

// UnityEngine.Rendering.Universal.PaniniProjection
struct PaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA  : public VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1
{
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.PaniniProjection::distance
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___distance_7;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.PaniniProjection::cropToFit
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___cropToFit_8;
};

// UnityEngine.Rendering.Universal.Tonemapping
struct Tonemapping_tB71CED262B25FC58B0259FD05DD32821C2858DBA  : public VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1
{
	// UnityEngine.Rendering.Universal.TonemappingModeParameter UnityEngine.Rendering.Universal.Tonemapping::mode
	TonemappingModeParameter_t0F6AAE0B6FFB371E2035BB0C739AF87C37E1760A* ___mode_7;
};

// UnityEngine.Rendering.Universal.Vignette
struct Vignette_t77147DD5FEEB4476AF22BD98255F8010738985DC  : public VolumeComponent_t8121D1F6054A9DFB3A596EE451FD65A2BFE2D7E1
{
	// UnityEngine.Rendering.ColorParameter UnityEngine.Rendering.Universal.Vignette::color
	ColorParameter_t367FD9EBE5DAA0ADB44F7DD0C260E9CDE3827CC0* ___color_7;
	// UnityEngine.Rendering.Vector2Parameter UnityEngine.Rendering.Universal.Vignette::center
	Vector2Parameter_tA29C9FAC53EDB2E0996430A461F9CC59B6C4288A* ___center_8;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.Vignette::intensity
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___intensity_9;
	// UnityEngine.Rendering.ClampedFloatParameter UnityEngine.Rendering.Universal.Vignette::smoothness
	ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* ___smoothness_10;
	// UnityEngine.Rendering.BoolParameter UnityEngine.Rendering.Universal.Vignette::rounded
	BoolParameter_tAA460C5A72ADBDDB4519BFF0BA040EC202E14E95* ___rounded_11;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE  : public RuntimeArray
{
	ALIGN_FIELD (8) RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B m_Items[1];

	inline RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Rendering.VolumeStack::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.ProfilingSampler::Get<System.Int32Enum>(TEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ProfilingSampler_Get_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m8A88D1A0EBDE48471A988A3C0B292D7E590709B2_gshared (int32_t ___marker0, const RuntimeMethod* method) ;
// System.Void System.Func`4<System.Object,System.Object,UnityEngine.Vector3,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_4__ctor_m6F2B4733AC89D456287CE6FCC617F05B75EB7429_gshared (Func_4_t332C0058075A9D0A2F5170831803531EC540225C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CoreUtils::Swap<System.Object>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreUtils_Swap_TisRuntimeObject_m90918B648B5523623E7104CF64145223DDB3E28A_gshared (RuntimeObject** ___a0, RuntimeObject** ___b1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;

// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324 (int32_t ___nameID0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.RTHandles::Alloc(UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* RTHandles_Alloc_m7EC88962CADCEAB38EAE8D792039466E20874304 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___tex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderPass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderPass__ctor_mE49D4FF8E68A854367A4081E664B8DBA74E6B752 (ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ProfilingSampler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingSampler__ctor_m26500989FCDB07FA33C9A3BB7F215CBD892F5BB7 (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderPass::set_profilingSampler(UnityEngine.Rendering.ProfilingSampler)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRenderPass_set_profilingSampler_mFD238B85B68DED586BA8C678141BEEAF229FBF2D_inline (ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0* __this, ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderPass::set_renderPassEvent(UnityEngine.Rendering.Universal.RenderPassEvent)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRenderPass_set_renderPassEvent_m63FA581FFDE1C69C2E1358BD0B8DB30275334960_inline (ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::.ctor(UnityEngine.Rendering.Universal.PostProcessData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialLibrary__ctor_mA85804FBE3A866F53E0193EB243B7E615FC48CC7 (MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* __this, PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* ___data0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_IsFormatSupported_m412D2A8B391BDBCD1EDB5C17ADAB724CDB123499 (int32_t ___format0, int32_t ___usage1, const RuntimeMethod* method) ;
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVendor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVendor_mE2D7A85437C820636639ADC124C965DB37B52204 (const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderPass::set_useNativeRenderPass(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRenderPass_set_useNativeRenderPass_m1D60C30BB1CF1B4D383FFCABC1F57EA755626895_inline (ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialLibrary_Cleanup_m649B692A57B9C055331E47F4967348B9B7942DF9 (MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_useMipMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_autoGenerateMips(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_autoGenerateMips_mB49837BA39F45B3F814928C8C471A082A4BDC414 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderPass::set_overrideCameraTarget(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRenderPass_set_overrideCameraTarget_mC7A5FB7FB9D32C88226E81992DAD058174C99D95_inline (ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.VolumeManager UnityEngine.Rendering.VolumeManager::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* VolumeManager_get_instance_m3D5ADFC04553CE0658A86B642CC9690C537DFA5C (const RuntimeMethod* method) ;
// UnityEngine.Rendering.VolumeStack UnityEngine.Rendering.VolumeManager::get_stack()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* VolumeManager_get_stack_m5F7B366D1E7FE168EF4CA04A17531D34DD200266_inline (VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* __this, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.VolumeStack::GetComponent<UnityEngine.Rendering.Universal.DepthOfField>()
inline DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* VolumeStack_GetComponent_TisDepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF_m6CC04C172E6C70C6446B6644BC25CBC3C1A691E2 (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method)
{
	return ((  DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* (*) (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8*, const RuntimeMethod*))VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared)(__this, method);
}
// T UnityEngine.Rendering.VolumeStack::GetComponent<UnityEngine.Rendering.Universal.MotionBlur>()
inline MotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161* VolumeStack_GetComponent_TisMotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161_mCF77251617E769053BB46F8844649FDBE0006D99 (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method)
{
	return ((  MotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161* (*) (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8*, const RuntimeMethod*))VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared)(__this, method);
}
// T UnityEngine.Rendering.VolumeStack::GetComponent<UnityEngine.Rendering.Universal.PaniniProjection>()
inline PaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA* VolumeStack_GetComponent_TisPaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA_mB589E14BB73F90314BF582164232143C575C93C2 (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method)
{
	return ((  PaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA* (*) (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8*, const RuntimeMethod*))VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared)(__this, method);
}
// T UnityEngine.Rendering.VolumeStack::GetComponent<UnityEngine.Rendering.Universal.Bloom>()
inline Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* VolumeStack_GetComponent_TisBloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225_m25682DCE38F204E0B4062C3F2D9132BDA2C5BF0D (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method)
{
	return ((  Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* (*) (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8*, const RuntimeMethod*))VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared)(__this, method);
}
// T UnityEngine.Rendering.VolumeStack::GetComponent<UnityEngine.Rendering.Universal.LensDistortion>()
inline LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6* VolumeStack_GetComponent_TisLensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6_m7AA5B34C2EB5A633802388F0CA1139092EEC2E18 (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method)
{
	return ((  LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6* (*) (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8*, const RuntimeMethod*))VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared)(__this, method);
}
// T UnityEngine.Rendering.VolumeStack::GetComponent<UnityEngine.Rendering.Universal.ChromaticAberration>()
inline ChromaticAberration_t84EAB576773C3AD4DE77A13952B487F9DA10DA9F* VolumeStack_GetComponent_TisChromaticAberration_t84EAB576773C3AD4DE77A13952B487F9DA10DA9F_mF488DC971011EE15740583673AA8BB56BE10A9E4 (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method)
{
	return ((  ChromaticAberration_t84EAB576773C3AD4DE77A13952B487F9DA10DA9F* (*) (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8*, const RuntimeMethod*))VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared)(__this, method);
}
// T UnityEngine.Rendering.VolumeStack::GetComponent<UnityEngine.Rendering.Universal.Vignette>()
inline Vignette_t77147DD5FEEB4476AF22BD98255F8010738985DC* VolumeStack_GetComponent_TisVignette_t77147DD5FEEB4476AF22BD98255F8010738985DC_mB42423B71631D13196913871E448FC0B90422DC1 (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method)
{
	return ((  Vignette_t77147DD5FEEB4476AF22BD98255F8010738985DC* (*) (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8*, const RuntimeMethod*))VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared)(__this, method);
}
// T UnityEngine.Rendering.VolumeStack::GetComponent<UnityEngine.Rendering.Universal.ColorLookup>()
inline ColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C* VolumeStack_GetComponent_TisColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C_mBC5D3E47DCADB0AF1F944EE238C6188CD3B308F5 (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method)
{
	return ((  ColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C* (*) (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8*, const RuntimeMethod*))VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared)(__this, method);
}
// T UnityEngine.Rendering.VolumeStack::GetComponent<UnityEngine.Rendering.Universal.ColorAdjustments>()
inline ColorAdjustments_t97EE64C6DB384E5F6BC48C3FA13C207E8FC87A86* VolumeStack_GetComponent_TisColorAdjustments_t97EE64C6DB384E5F6BC48C3FA13C207E8FC87A86_m3B00FEBB9197BDF606018D15AB7202D813CC653E (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method)
{
	return ((  ColorAdjustments_t97EE64C6DB384E5F6BC48C3FA13C207E8FC87A86* (*) (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8*, const RuntimeMethod*))VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared)(__this, method);
}
// T UnityEngine.Rendering.VolumeStack::GetComponent<UnityEngine.Rendering.Universal.Tonemapping>()
inline Tonemapping_tB71CED262B25FC58B0259FD05DD32821C2858DBA* VolumeStack_GetComponent_TisTonemapping_tB71CED262B25FC58B0259FD05DD32821C2858DBA_mF484658FD16186D510BE1828DE343B029ECE2F0E (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method)
{
	return ((  Tonemapping_tB71CED262B25FC58B0259FD05DD32821C2858DBA* (*) (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8*, const RuntimeMethod*))VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared)(__this, method);
}
// T UnityEngine.Rendering.VolumeStack::GetComponent<UnityEngine.Rendering.Universal.FilmGrain>()
inline FilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172* VolumeStack_GetComponent_TisFilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172_mFAC921A292413CAF7B64BED0822B24DA7C60530D (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* __this, const RuntimeMethod* method)
{
	return ((  FilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172* (*) (VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8*, const RuntimeMethod*))VolumeStack_GetComponent_TisRuntimeObject_m8D5395D64A3CF1D54202CD9C021F6515580DB6AE_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rendering.Universal.XRPass::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPass_get_enabled_mC2CF12F8D66EB1EE2560B4DD1FB9343D5E598155 (XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.CommandBufferPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* CommandBufferPool_Get_m1A194FD7FBF7B6B0B47F292287DAD9EB65EE4423 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ProfilingScope::.ctor(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.ProfilingSampler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingScope__ctor_mE15813DF7651C1A3B6AFD6465AD4B973E8F1DBFC (ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___sampler1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ProfilingScope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4 (ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::RenderFinalPass(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.Universal.RenderingData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_RenderFinalPass_mF69E5F1F2DC1DA64F0467D0DF45E75A80E13171F (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* ___renderingData1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.ScriptableRenderContext::ExecuteCommandBuffer(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderContext_ExecuteCommandBuffer_mBAE37DFC699B7167A6E2C59012066C44A31E9896 (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___commandBuffer0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBufferPool::Release(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBufferPool_Release_mF83A83AA404E868E189436107015AD084C00C844 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___buffer0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass::CanRunOnTile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostProcessPass_CanRunOnTile_m9159D0DE4ECC65BDAC286A57B695DFF079E9689E (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::Render(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.Universal.RenderingData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_Render_mFA2906671991898424365EB5B753423DC1BB3E5D (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* ___renderingData1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RenderTextureDescriptor::get_width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RenderTextureDescriptor::get_height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::get_graphicsFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_graphicsFormat_m50F25A4F179EA318C8D3B0D8685F9C5F59F7DEC0 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.Internal.PostProcessPass::GetCompatibleDescriptor(System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Rendering.DepthBits)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 PostProcessPass_GetCompatibleDescriptor_m9FE5C15264300379BC9D4B16DE669925264801BA (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, int32_t ___depthBufferBits3, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.Internal.PostProcessPass::GetCompatibleDescriptor(UnityEngine.RenderTextureDescriptor,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Rendering.DepthBits)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 PostProcessPass_GetCompatibleDescriptor_mECF5FFD3A19F3B5162BC6AEDE8A81E330D52DC62 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___desc0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___depthBufferBits4, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_depthBufferBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_depthBufferBits_mA3710C0D6E485BA6465B328CD8B1954F0E4C5819 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_msaaSamples(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_width(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_height(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_graphicsFormat_m037DA25F9A8B956D830C7B7E5C6E258DC1133A13 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.CameraData::get_requireSrgbConversion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraData_get_requireSrgbConversion_m6C5E8C4E67811A673E01D79E79B719216EE53139 (CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture(System.Int32,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___nameID0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalVector_mBE497AA5F5C9E71A3F353BA1BDB97D8AC4B75FDA (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___nameID0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderTargetIdentifier::.ctor(UnityEngine.Rendering.RenderTargetIdentifier,System.Int32,UnityEngine.CubemapFace,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetIdentifier__ctor_m79A7348AF351A912E617BF9C8A44A766648C80FB (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___renderTargetIdentifier0, int32_t ___mipLevel1, int32_t ___cubeFace2, int32_t ___depthSlice3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___rt0, int32_t ___colorLoadAction1, int32_t ___colorStoreAction2, int32_t ___depthLoadAction3, int32_t ___depthStoreAction4, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawProcedural(UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,UnityEngine.MeshTopology,System.Int32,System.Int32,UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawProcedural_m460EDBBEDA84E4743CA09A2F0EF44A6149C4EBD7 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, int32_t ___shaderPass2, int32_t ___topology3, int32_t ___vertexCount4, int32_t ___instanceCount5, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties6, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Blit_m20AC38869B1D9D16C37E1A697B4EF3E2B0D12530 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, int32_t ___pass3, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.Rendering.Universal.RenderingUtils::get_fullscreenMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* RenderingUtils_get_fullscreenMesh_m6593C7C1C240A56AC8BD7C112DD672EEDE28F34E (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawMesh_m2CDCAC3E41416226D38770259BB2C56CB37D5EEF (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, int32_t ___submeshIndex3, int32_t ___shaderPass4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.CameraData::get_isSceneViewCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraData_get_isSceneViewCamera_m4FBB102E90A7B1AE47ED0368DAA939B1B0DA7D70 (CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.DepthOfField::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DepthOfField_IsActive_mAEEBA8A02BC313AA621C4C197CF4A8A0A7352C0E (DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.LensFlareCommonSRP UnityEngine.Rendering.LensFlareCommonSRP::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135* LensFlareCommonSRP_get_Instance_mF64DA65427B459BE5C9A648FAA697AE8B6DD479B (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.LensFlareCommonSRP::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LensFlareCommonSRP_IsEmpty_m10C9D536E29439EA829486AA85748609DD7106E0 (LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.MotionBlur::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MotionBlur_IsActive_mB06475DA53BAABEA9E9D53D0DA4CC4117E8C9768 (MotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.PaniniProjection::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PaniniProjection_IsActive_m91BB6BE780D3AFFCFD863B97195EECAB659BF2B0 (PaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.ScriptableRenderer::get_cameraColorTargetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ScriptableRenderer_get_cameraColorTargetHandle_mB0B32CF50F711E4B41822F4F6BBCE2091C608A6D (ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.GL::GetGPUProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GL_GetGPUProjectionMatrix_m3B89D47134C77B9361DB3CDDFFDA276C1373DD2A (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___proj0, bool ___renderIntoTexture1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalMatrix(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalMatrix_m8454AD5B02C68C5824015F290D831207FA098612 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___nameID0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.ProfilingSampler::Get<UnityEngine.Rendering.Universal.URPProfileId>(TEnum)
inline ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661 (int32_t ___marker0, const RuntimeMethod* method)
{
	return ((  ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* (*) (int32_t, const RuntimeMethod*))ProfilingSampler_Get_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m8A88D1A0EBDE48471A988A3C0B292D7E590709B2_gshared)(___marker0, method);
}
// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.PostProcessPass::<Render>g__GetSource|60_0(UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c__DisplayClass60_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* PostProcessPass_U3CRenderU3Eg__GetSourceU7C60_0_mAF2EFC98E40F74B4BE7B638A8A07ADE5700BC542 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* p0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.PostProcessPass::<Render>g__GetDestination|60_1(UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c__DisplayClass60_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* PostProcessPass_U3CRenderU3Eg__GetDestinationU7C60_1_m7CA5DE57A11DA8DBA33C9D43DDC6CEB36B4503EE (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.RenderingUtils::Blit(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RTHandle,UnityEngine.Rendering.RTHandle,UnityEngine.Material,System.Int32,System.Boolean,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderingUtils_Blit_mAB446C22E24E3CA76248FD033A53A7D0611B9159 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___source1, RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___destination2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material3, int32_t ___passIndex4, bool ___useDrawProcedural5, int32_t ___colorLoadAction6, int32_t ___colorStoreAction7, int32_t ___depthLoadAction8, int32_t ___depthStoreAction9, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::<Render>g__Swap|60_2(UnityEngine.Rendering.Universal.ScriptableRenderer&,UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c__DisplayClass60_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_U3CRenderU3Eg__SwapU7C60_2_m6E4963751FB3FA1E6B8D486FE572A42D8003233E (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** ___r0, U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* p1, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RTHandle::op_Implicit(UnityEngine.Rendering.RTHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54 (RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DoSubpixelMorphologicalAntialiasing(UnityEngine.Rendering.Universal.CameraData&,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DoSubpixelMorphologicalAntialiasing_m1F2B384D7CECF2C7D17BFD43B69B702A047A1A61 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* ___cameraData0, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DoDepthOfField(UnityEngine.Camera,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DoDepthOfField_m492D94D0E88A7531264051382F38916842E57D6F (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DoMotionBlur(UnityEngine.Rendering.Universal.CameraData,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DoMotionBlur_m9FE32E134297381B94A8A07ACC149D06217A3072 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E ___cameraData0, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DoPaniniProjection(UnityEngine.Camera,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DoPaniniProjection_m7486B5A46AE100162CEE0AFC47DAEF04438FCECB (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DoLensFlareDatadriven(UnityEngine.Camera,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,System.Boolean,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DoLensFlareDatadriven_m72A91017976E76EC614CCFE733B1B851BD51FF05 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source2, bool ___usePanini3, float ___paniniDistance4, float ___paniniCropToFit5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_shaderKeywords(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_shaderKeywords_mD650CF82B2DBB75F001E373E2E1ACA30876F3AB8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.Bloom::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bloom_IsActive_m18CD0E121D17E2D4B20D6E944433CDEEA9C970C3 (Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupBloom(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupBloom_mFD125A81E220222A305A0325E9AB92C9347C3DE3 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___uberMaterial2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupLensDistortion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupLensDistortion_mC8551C67AB37EB59ABB794A57B9F3D1A94C5C3CC (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, bool ___isSceneView1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupChromaticAberration(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupChromaticAberration_mA320D8C2C90E77757A97DF78E6B1973C750383AA (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupVignette(UnityEngine.Material,UnityEngine.Rendering.Universal.XRPass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupVignette_m38D4298A0F0856445AEA0AA550956CDBEEFFC3E4 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* ___xrPass1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupColorGrading(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.Universal.RenderingData&,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupColorGrading_m6FF0296D87AA0C6F079012989E9E971D3B05599A (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* ___renderingData1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupGrain(UnityEngine.Rendering.Universal.CameraData&,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupGrain_m949060E3A47FD58C37EC07BF3D0E15258FA05B57 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* ___cameraData0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupDithering(UnityEngine.Rendering.Universal.CameraData&,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupDithering_m229F0AADDAB308E22BF57F2946D2B4F316A95306 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* ___cameraData0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass::RequireSRGBConversionBlitToBackBuffer(UnityEngine.Rendering.Universal.CameraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostProcessPass_RequireSRGBConversionBlitToBackBuffer_mFFF0A97570D59F4A86CD4C20FC6C188E022F75D7 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E ___cameraData0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.Universal.DebugHandler UnityEngine.Rendering.Universal.ScriptableRenderPass::GetActiveDebugHandler(UnityEngine.Rendering.Universal.RenderingData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4* ScriptableRenderPass_GetActiveDebugHandler_m1B3D8D7F93DEF1415F494EEF46687F21DE379448 (ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0* __this, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71 ___renderingData0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.DebugHandler::UpdateShaderGlobalPropertiesForFinalValidationPass(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.Universal.CameraData&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugHandler_UpdateShaderGlobalPropertiesForFinalValidationPass_m70191758CEDBFFA4ED2D26A58FDD0680BBAFAC25 (DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* ___cameraData1, bool ___isFinalPass2, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RTHandle::get_nameID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B RTHandle_get_nameID_m30AF2567853494DB845D83A8B37D0FB523DA76E9 (RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Rendering.BuiltinRenderTextureType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B RenderTargetIdentifier_op_Implicit_m3E2366E36F14173DBEED75591978EBE1F01A1325 (int32_t ___type0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.XRPass::get_renderTarget()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B XRPass_get_renderTarget_m595B27BD6972FE1F74FCE71CB29088F159E84B18_inline (XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderTargetIdentifier::.ctor(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetIdentifier__ctor_mD6E20FA134EEBCE40A8B5E64C505DE8A0DC96BDF (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___tex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::op_Equality(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_op_Equality_mD9FD6667F4C385F2379E9DEAAA8F91B7A1D50A1F (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___lhs0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.XRPass::get_renderTargetIsRenderTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRPass_get_renderTargetIsRenderTexture_m79E6747B91048C48ED200D3A99B96621D0BFB67A_inline (XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetViewport(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetViewport_m3BCCABB7493369D88DB15EE43C41D9858AE2574D (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_graphicsUVStartsAtTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_graphicsUVStartsAtTop_m152BEEFFF20719C9EAB612AD238114BD0B3BFE4B (const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Rendering.RTHandle::op_Implicit(UnityEngine.Rendering.RTHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* RTHandle_op_Implicit_mEF75557100B4F5D5BD918A60C85060711687CD43 (RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderTargetIdentifier::.ctor(UnityEngine.Texture,System.Int32,UnityEngine.CubemapFace,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetIdentifier__ctor_m36F9914C200EE580EEDE97C4E8759D74879999D7 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___tex0, int32_t ___mipLevel1, int32_t ___cubeFace2, int32_t ___depthSlice3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.ScriptableRenderer::ConfigureCameraTarget(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRenderer_ConfigureCameraTarget_m4067416B1E8D785A5BADBEFB1E73FDA7A6A0D440 (ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___colorTarget0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___depthTarget1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetViewProjectionMatrices(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetViewProjectionMatrices_m50A472F193C13207D81B5EC8FB007F76E36A8C75 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___view0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___proj1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawMesh_m45BA88D4388EC7E5CDAABD42CD6CE29A5120042C (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// System.String UnityEngine.Rendering.RTHandle::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RTHandle_get_name_mF2E7B6B108477C76931BD1E5798BB1DA1F036B7A (RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RenderTextureDescriptor::get_msaaSamples()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_msaaSamples_mFCC33643AFF2265C8305DCFD79ED8774A1A8FA22_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,UnityEngine.RenderTextureDescriptor,UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___nameID0, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___desc1, int32_t ___filter2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderTargetIdentifier::.ctor(System.Int32,System.Int32,UnityEngine.CubemapFace,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetIdentifier__ctor_mAFAC5FB016609A5D4E07FCEC360D113B9C8D7ECF (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B* __this, int32_t ___nameID0, int32_t ___mipLevel1, int32_t ___cubeFace2, int32_t ___depthSlice3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderBufferLoadAction,UnityEngine.Rendering.RenderBufferStoreAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetRenderTarget_m43B883C6477E59A65A7FDF142EC347538EA6A57B (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___color0, int32_t ___colorLoadAction1, int32_t ___colorStoreAction2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___depth3, int32_t ___depthLoadAction4, int32_t ___depthStoreAction5, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::ClearRenderTarget(UnityEngine.Rendering.RTClearFlags,UnityEngine.Color,System.Single,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_ClearRenderTarget_mF79756BB41395A459CC5FD5CFFC517F65D93D86C (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___clearFlags0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor1, float ___depth2, uint32_t ___stencil3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DrawFullscreenMesh(UnityEngine.Rendering.CommandBuffer,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DrawFullscreenMesh_mAB97FB8B3CFF3DE88BA8D04863BB0EFCA32CEEA7 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, int32_t ___passIndex2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::ClearRenderTarget(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_ClearRenderTarget_mABBE498A16DCEADCAA8F5DB50073012F74D03F14 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, bool ___clearDepth0, bool ___clearColor1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DoGaussianDepthOfField(UnityEngine.Camera,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DoGaussianDepthOfField_m0F509B9DD92DEAA39E092F1AEC1DE9084F56CCD9 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DoBokehDepthOfField(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DoBokehDepthOfField_m9F432BB1FB34528C85BCF915A766FA52CEE133A2 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CoreUtils::SetKeyword(UnityEngine.Material,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreUtils_SetKeyword_m7F886C529A9DEC48A568FA4FFD4CF789AA294239 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, String_t* ___keyword1, bool ___state2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.PostProcessUtils::SetSourceSize(UnityEngine.Rendering.CommandBuffer,UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessUtils_SetSourceSize_m5EF5F2F3FE68CFDEFF201F07CBD403BBD96F0E35 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___desc1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::Blit(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material3, int32_t ___passIndex4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier[],UnityEngine.Rendering.RenderTargetIdentifier,System.Int32,UnityEngine.CubemapFace,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetRenderTarget_m2A11A517DE44DC5F37BA08EF86ED1DCABAC4CC1E (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* ___colors0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___depth1, int32_t ___mipLevel2, int32_t ___cubemapFace3, int32_t ___depthSlice4, const RuntimeMethod* method) ;
// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.Universal.Internal.PostProcessPass::BlitDstDiscardContent(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PostProcessPass_BlitDstDiscardContent_m0CD67D1CAF9AC54EB998A4AEC3D6178680781C59 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___rt1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rendering.Universal.Internal.PostProcessPass::GetMaxBokehRadiusInPixels(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PostProcessPass_GetMaxBokehRadiusInPixels_m56705A12AE2306C52AA6C96D28D09A5F6F2EC2F4_inline (float ___viewportHeight0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::PrepareBokehKernel(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_PrepareBokehKernel_m1C36A697FADC81D2A1E16E92B8A1237382D6B59F (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, float ___maxRadius0, float ___rcpAspect1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalVectorArray(System.Int32,UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalVectorArray_m8CC41D9A9A5E2D5EF192D0852E97829DEA07A217 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___nameID0, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___values1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m1FD55F67090B321AC9488CA325A72E454E6BCA37_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.LightType UnityEngine.Light::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rendering.LensFlareCommonSRP::ShapeAttenuationDirLight(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LensFlareCommonSRP_ShapeAttenuationDirLight_m8D55129898412D0D60A6827F4BF3C7B2E20465E6 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___wo1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rendering.LensFlareCommonSRP::ShapeAttenuationPointLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LensFlareCommonSRP_ShapeAttenuationPointLight_m4150B52B763097665D45A6705BA6C6C5422451D6 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_spotAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_innerSpotAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_innerSpotAngle_mFDCE5C31ABF638A8B515F5088F12225D23D3406C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rendering.LensFlareCommonSRP::ShapeAttenuationSpotConeLight(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LensFlareCommonSRP_ShapeAttenuationSpotConeLight_m5A146E8B6D38C860F5B0C5D40E337EEF3F054296 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___wo1, float ___spotAngle2, float ___innerSpotPercent013, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___column1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Func`4<UnityEngine.Light,UnityEngine.Camera,UnityEngine.Vector3,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_4__ctor_mCB654A521C926308B7947FC97B239C5A7847D677 (Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_4__ctor_m6F2B4733AC89D456287CE6FCC617F05B75EB7429_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Rendering.LensFlareCommonSRP::DoLensFlareDataDrivenCommon(UnityEngine.Material,UnityEngine.Rendering.LensFlareCommonSRP,UnityEngine.Camera,System.Single,System.Single,System.Boolean,System.Single,System.Single,System.Boolean,UnityEngine.Vector3,UnityEngine.Matrix4x4,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,System.Func`4<UnityEngine.Light,UnityEngine.Camera,UnityEngine.Vector3,System.Single>,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LensFlareCommonSRP_DoLensFlareDataDrivenCommon_m490AD685535866B2C088AC846DDA409356891A1C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___lensFlareShader0, LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135* ___lensFlares1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, float ___actualWidth3, float ___actualHeight4, bool ___usePanini5, float ___paniniDistance6, float ___paniniCropToFit7, bool ___isCameraRelative8, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraPositionWS9, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewProjMatrix10, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd11, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___colorBuffer12, Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE* ___GetLensFlareLightAttenuation13, int32_t ____FlareOcclusionTex14, int32_t ____FlareOcclusionIndex15, int32_t ____FlareTex16, int32_t ____FlareColorValue17, int32_t ____FlareData018, int32_t ____FlareData119, int32_t ____FlareData220, int32_t ____FlareData321, int32_t ____FlareData422, bool ___debugView23, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.XRPass::get_singlePassEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPass_get_singlePassEnabled_mB8BBB9F66EE93200D10F7C6C766E5F2D855A6FF3 (XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.CameraData::GetProjectionMatrix(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 CameraData_GetProjectionMatrix_m3B2EC52DEC102715BDBAF85816904DEF7DFCF10D (CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* __this, int32_t ___viewIndex0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.CameraData::GetViewMatrix(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 CameraData_GetViewMatrix_m85D00AF6C537A14220F4E2D70E2BFF23DD11C86E (CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* __this, int32_t ___viewIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetMatrixArray(System.String,UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrixArray_mE05298BC5B50DD5F6F3DB18682DE575C6FDE2FC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___values1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.XRPass::get_multipassId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRPass_get_multipassId_mC66149857F511ED441A9C8647C3EF0DD7167F15A_inline (XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rendering.Universal.Internal.PostProcessPass::CalcViewExtents(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PostProcessPass_CalcViewExtents_mF37365DC32C98227FB74545888BBCC62ED983EBF (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rendering.Universal.Internal.PostProcessPass::CalcCropExtents(UnityEngine.Camera,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PostProcessPass_CalcCropExtents_m0584B26FDD001908C17C7BA449CF483CE562F91E (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline (float ___f0, float ___p1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_linear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rendering.ColorUtils::Luminance(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColorUtils_Luminance_mFDC649B1AE8F94D798AB492DDF0ECC7BE8E34477 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___color0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_blackTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2D_get_blackTexture_mBEF97F64AD650DAAC1EEC84EB34F9CF22B56A08C (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.LensDistortion::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LensDistortion_IsActive_m777DA00296A34FFEC72C43157037C06F62B406AE (LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.ChromaticAberration::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChromaticAberration_IsActive_mF820F1009BB285EE1752333366C146E33F863428 (ChromaticAberration_t84EAB576773C3AD4DE77A13952B487F9DA10DA9F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Rendering.Universal.XRPass::ApplyXRViewCenterOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 XRPass_ApplyXRViewCenterOffset_m53AA61C5C29E671EC5D9CE979C1E9A04C5FD54A6 (XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector4_op_Implicit_m6673D431FBCA5AFB6CF06CD9783D07A4C90CC2AA_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.ColorLookup::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorLookup_IsActive_m7264066E811F24C5EAEFAFB79F2110C089F2465A (ColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.FilmGrain::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FilmGrain_IsActive_m9251CA64E6E5E1FB8609260F85CEB07BA04B4BA9 (FilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.PostProcessUtils::ConfigureFilmGrain(UnityEngine.Rendering.Universal.PostProcessData,UnityEngine.Rendering.Universal.FilmGrain,System.Int32,System.Int32,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessUtils_ConfigureFilmGrain_m9AFEDA4B679AB1D1D47F8EC440BADA369715A85B (PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* ___data0, FilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172* ___settings1, int32_t ___cameraPixelWidth2, int32_t ___cameraPixelHeight3, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material4, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.PostProcessUtils::ConfigureDithering(UnityEngine.Rendering.Universal.PostProcessData,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PostProcessUtils_ConfigureDithering_m4EDD6C3D556383E75451522FF1E51E3B47DACD9C (PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* ___data0, int32_t ___index1, int32_t ___cameraPixelWidth2, int32_t ___cameraPixelHeight3, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material4, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.Internal.PostProcessPass::GetCompatibleDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 PostProcessPass_GetCompatibleDescriptor_m22DFDB00C3012A4AADFBC8F5A483E6139BBD42BC (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CoreUtils::Swap<UnityEngine.Rendering.RTHandle>(T&,T&)
inline void CoreUtils_Swap_TisRTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B_m90EAC541E53A878FAD361EEA8BC135CEB507E9E6 (RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** ___a0, RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** ___b1, const RuntimeMethod* method)
{
	((  void (*) (RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B**, RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B**, const RuntimeMethod*))CoreUtils_Swap_TisRuntimeObject_m90918B648B5523623E7104CF64145223DDB3E28A_gshared)(___a0, ___b1, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::Load(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* MaterialLibrary_Load_mE88D2915A87998139CF7455C07F5F69D0226BC69 (MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Shader::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Rendering.CoreUtils::CreateEngineMaterial(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* CoreUtils_CreateEngineMaterial_m81DECC0AF6901F95B5041A00ED588F5230546AD2 (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CoreUtils::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreUtils_Destroy_mD2FDD299C528530E4CC5F99EFBAF90ABC7B02C69 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB26E3080A715C814D9B9A5C71A85B7862B203076 (U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rendering.Universal.Internal.PostProcessPass::GetLensFlareLightAttenuation(UnityEngine.Light,UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PostProcessPass_GetLensFlareLightAttenuation_mC42080722051CE28B6AF96E9CC2959E48D6F5D6D (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___wo2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RTHandle::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTHandle_Release_m743C2A22FD95D177D2D425E9DF1F3088161F387B (RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer& UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::get_backBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* RenderTargetBufferSystem_get_backBuffer_mF7305DBD196865D17A0029AC212E8CC02D8205A2 (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::ReAllocate(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetBufferSystem_ReAllocate_m21F112E4C9D22893403D2BDC60ED8D41312AE0D9 (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::PeekBackBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* RenderTargetBufferSystem_PeekBackBuffer_m5496A9F37497CE9915D760AD5F44FEA5EE304941 (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer& UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::get_frontBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* RenderTargetBufferSystem_get_frontBuffer_mDD8E09139E41F59A682216AD6C0A94AE4387E11A (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.RenderingUtils::ReAllocateIfNeeded(UnityEngine.Rendering.RTHandle&,UnityEngine.RenderTextureDescriptor&,UnityEngine.FilterMode,UnityEngine.TextureWrapMode,System.Boolean,System.Int32,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderingUtils_ReAllocateIfNeeded_mDE48AE1C4158076D30E8D4D9322A9EE4219C2812 (RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** ___handle0, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* ___descriptor1, int32_t ___filterMode2, int32_t ___wrapMode3, bool ___isShadowMap4, int32_t ___anisoLevel5, float ___mipMapBias6, String_t* ___name7, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture(System.String,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetGlobalTexture_mD6F1CC7E87FA88B5838D5EDAFBA602EF94FE1F69 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, String_t* ___name0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::Clear(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetBufferSystem_Clear_mF7870361FAA8E01DD173A72369C4000146FD4B2E (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::EnableMSAA(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetBufferSystem_EnableMSAA_mFACEC550EEF2910AC94C1F22C0DA146DBE36F3CA (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, bool ___enable0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Double System.Math::Log(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Log_m5A3BBBF06AB82F25C885812E07D27B473CF43054 (double ___a0, double ___newBase1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::.ctor(UnityEngine.Rendering.Universal.RenderPassEvent,UnityEngine.Rendering.Universal.PostProcessData,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass__ctor_mEBB0AFB4744196F3F07B27C71CB0E9D6731B097D (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, int32_t ___evt0, PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* ___data1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___blitMaterial2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTHandles_t84D932A74064E591F31E9813FBED5D64F5CC888C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8800AA6A8E1686CEFFF45C793EC512C24B0519);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral834863B80D35E96D02830CC464160847F063892D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97A06D1C7C5ECFFBDE00FA3405D9F031222A580A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C4188C1BCB2ECF7EDFADE513E17AAAAD995C31);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* G_B4_0 = NULL;
	PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* G_B5_1 = NULL;
	int32_t G_B9_0 = 0;
	{
		// Matrix4x4[] m_PrevViewProjM = new Matrix4x4[2];
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___m_PrevViewProjM_56 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PrevViewProjM_56), (void*)L_0);
		// RTHandle m_TempTarget = RTHandles.Alloc(ShaderConstants._TempTarget);
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____TempTarget_0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_2;
		L_2 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(RTHandles_t84D932A74064E591F31E9813FBED5D64F5CC888C_il2cpp_TypeInfo_var);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_3;
		L_3 = RTHandles_Alloc_m7EC88962CADCEAB38EAE8D792039466E20874304(L_2, NULL);
		__this->___m_TempTarget_71 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TempTarget_71), (void*)L_3);
		// RTHandle m_TempTarget2 = RTHandles.Alloc(ShaderConstants._TempTarget2);
		int32_t L_4 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____TempTarget2_1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_5;
		L_5 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_4, NULL);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_6;
		L_6 = RTHandles_Alloc_m7EC88962CADCEAB38EAE8D792039466E20874304(L_5, NULL);
		__this->___m_TempTarget2_72 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TempTarget2_72), (void*)L_6);
		// public PostProcessPass(RenderPassEvent evt, PostProcessData data, Material blitMaterial)
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var);
		ScriptableRenderPass__ctor_mE49D4FF8E68A854367A4081E664B8DBA74E6B752(__this, NULL);
		// base.profilingSampler = new ProfilingSampler(nameof(PostProcessPass));
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_7 = (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE*)il2cpp_codegen_object_new(ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ProfilingSampler__ctor_m26500989FCDB07FA33C9A3BB7F215CBD892F5BB7(L_7, _stringLiteral834863B80D35E96D02830CC464160847F063892D, NULL);
		ScriptableRenderPass_set_profilingSampler_mFD238B85B68DED586BA8C678141BEEAF229FBF2D_inline(__this, L_7, NULL);
		// renderPassEvent = evt;
		int32_t L_8 = ___evt0;
		ScriptableRenderPass_set_renderPassEvent_m63FA581FFDE1C69C2E1358BD0B8DB30275334960_inline(__this, L_8, NULL);
		// m_Data = data;
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_9 = ___data1;
		__this->___m_Data_39 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_39), (void*)L_9);
		// m_Materials = new MaterialLibrary(data);
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_10 = ___data1;
		MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_11 = (MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED*)il2cpp_codegen_object_new(MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		MaterialLibrary__ctor_mA85804FBE3A866F53E0193EB243B7E615FC48CC7(L_11, L_10, NULL);
		__this->___m_Materials_38 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Materials_38), (void*)L_11);
		// m_BlitMaterial = blitMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___blitMaterial2;
		__this->___m_BlitMaterial_73 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BlitMaterial_73), (void*)L_12);
		// if (SystemInfo.IsFormatSupported(GraphicsFormat.B10G11R11_UFloatPack32, FormatUsage.Linear | FormatUsage.Render))
		bool L_13;
		L_13 = SystemInfo_IsFormatSupported_m412D2A8B391BDBCD1EDB5C17ADAB724CDB123499(((int32_t)74), 5, NULL);
		V_0 = L_13;
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_0090;
		}
	}
	{
		// m_DefaultHDRFormat = GraphicsFormat.B10G11R11_UFloatPack32;
		__this->___m_DefaultHDRFormat_52 = ((int32_t)74);
		// m_UseRGBM = false;
		__this->___m_UseRGBM_53 = (bool)0;
		goto IL_00ab;
	}

IL_0090:
	{
		// m_DefaultHDRFormat = QualitySettings.activeColorSpace == ColorSpace.Linear
		//     ? GraphicsFormat.R8G8B8A8_SRGB
		//     : GraphicsFormat.R8G8B8A8_UNorm;
		int32_t L_15;
		L_15 = QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9(NULL);
		G_B3_0 = __this;
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			G_B4_0 = __this;
			goto IL_009d;
		}
	}
	{
		G_B5_0 = 8;
		G_B5_1 = G_B3_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B5_0 = 4;
		G_B5_1 = G_B4_0;
	}

IL_009e:
	{
		NullCheck(G_B5_1);
		G_B5_1->___m_DefaultHDRFormat_52 = G_B5_0;
		// m_UseRGBM = true;
		__this->___m_UseRGBM_53 = (bool)1;
	}

IL_00ab:
	{
		// if (SystemInfo.IsFormatSupported(GraphicsFormat.R8G8_UNorm, FormatUsage.Render) && SystemInfo.graphicsDeviceVendor.ToLowerInvariant().Contains("arm"))
		bool L_16;
		L_16 = SystemInfo_IsFormatSupported_m412D2A8B391BDBCD1EDB5C17ADAB724CDB123499(6, 4, NULL);
		if (!L_16)
		{
			goto IL_00ca;
		}
	}
	{
		String_t* L_17;
		L_17 = SystemInfo_get_graphicsDeviceVendor_mE2D7A85437C820636639ADC124C965DB37B52204(NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_17, NULL);
		NullCheck(L_18);
		bool L_19;
		L_19 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_18, _stringLiteral0C8800AA6A8E1686CEFFF45C793EC512C24B0519, NULL);
		G_B9_0 = ((int32_t)(L_19));
		goto IL_00cb;
	}

IL_00ca:
	{
		G_B9_0 = 0;
	}

IL_00cb:
	{
		V_1 = (bool)G_B9_0;
		bool L_20 = V_1;
		if (!L_20)
		{
			goto IL_00d8;
		}
	}
	{
		// m_SMAAEdgeFormat = GraphicsFormat.R8G8_UNorm;
		__this->___m_SMAAEdgeFormat_54 = 6;
		goto IL_00df;
	}

IL_00d8:
	{
		// m_SMAAEdgeFormat = GraphicsFormat.R8G8B8A8_UNorm;
		__this->___m_SMAAEdgeFormat_54 = 8;
	}

IL_00df:
	{
		// if (SystemInfo.IsFormatSupported(GraphicsFormat.R16_UNorm, FormatUsage.Linear | FormatUsage.Render))
		bool L_21;
		L_21 = SystemInfo_IsFormatSupported_m412D2A8B391BDBCD1EDB5C17ADAB724CDB123499(((int32_t)21), 5, NULL);
		V_2 = L_21;
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_00f5;
		}
	}
	{
		// m_GaussianCoCFormat = GraphicsFormat.R16_UNorm;
		__this->___m_GaussianCoCFormat_55 = ((int32_t)21);
		goto IL_0112;
	}

IL_00f5:
	{
		// else if (SystemInfo.IsFormatSupported(GraphicsFormat.R16_SFloat, FormatUsage.Linear | FormatUsage.Render))
		bool L_23;
		L_23 = SystemInfo_IsFormatSupported_m412D2A8B391BDBCD1EDB5C17ADAB724CDB123499(((int32_t)45), 5, NULL);
		V_3 = L_23;
		bool L_24 = V_3;
		if (!L_24)
		{
			goto IL_010b;
		}
	}
	{
		// m_GaussianCoCFormat = GraphicsFormat.R16_SFloat;
		__this->___m_GaussianCoCFormat_55 = ((int32_t)45);
		goto IL_0112;
	}

IL_010b:
	{
		// m_GaussianCoCFormat = GraphicsFormat.R8_UNorm;
		__this->___m_GaussianCoCFormat_55 = 5;
	}

IL_0112:
	{
		// ShaderConstants._BloomMipUp = new int[k_MaxPyramidSize];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipUp_48 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipUp_48), (void*)L_25);
		// ShaderConstants._BloomMipDown = new int[k_MaxPyramidSize];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipDown_49 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipDown_49), (void*)L_26);
		// for (int i = 0; i < k_MaxPyramidSize; i++)
		V_4 = 0;
		goto IL_0173;
	}

IL_012f:
	{
		// ShaderConstants._BloomMipUp[i] = Shader.PropertyToID("_BloomMipUp" + i);
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipUp_48;
		int32_t L_28 = V_4;
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral97A06D1C7C5ECFFBDE00FA3405D9F031222A580A, L_29, NULL);
		int32_t L_31;
		L_31 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_30, NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_31);
		// ShaderConstants._BloomMipDown[i] = Shader.PropertyToID("_BloomMipDown" + i);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipDown_49;
		int32_t L_33 = V_4;
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_35;
		L_35 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral99C4188C1BCB2ECF7EDFADE513E17AAAAD995C31, L_34, NULL);
		int32_t L_36;
		L_36 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_35, NULL);
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)L_36);
		// for (int i = 0; i < k_MaxPyramidSize; i++)
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0173:
	{
		// for (int i = 0; i < k_MaxPyramidSize; i++)
		int32_t L_38 = V_4;
		V_5 = (bool)((((int32_t)L_38) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_39 = V_5;
		if (L_39)
		{
			goto IL_012f;
		}
	}
	{
		// m_MRT2 = new RenderTargetIdentifier[2];
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_40 = (RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE*)(RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE*)SZArrayNew(RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___m_MRT2_59 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MRT2_59), (void*)L_40);
		// m_ResetHistory = true;
		__this->___m_ResetHistory_57 = (bool)1;
		// base.useNativeRenderPass = false;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var);
		ScriptableRenderPass_set_useNativeRenderPass_m1D60C30BB1CF1B4D383FFCABC1F57EA755626895_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_Cleanup_m6DDB1B21CD9B50A79A23F6A4552D255AD25670A7 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, const RuntimeMethod* method) 
{
	{
		// public void Cleanup() => m_Materials.Cleanup();
		MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_0 = __this->___m_Materials_38;
		NullCheck(L_0);
		MaterialLibrary_Cleanup_m649B692A57B9C055331E47F4967348B9B7942DF9(L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::Setup(UnityEngine.RenderTextureDescriptor&,UnityEngine.Rendering.RTHandle&,System.Boolean,UnityEngine.Rendering.RTHandle&,UnityEngine.Rendering.RTHandle&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_Setup_m0912E9D3DC9E1A0A3EB700031368B1AF6969AC48 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* ___baseDescriptor0, RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** ___source1, bool ___resolveToScreen2, RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** ___depth3, RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** ___internalLut4, bool ___hasFinalPass5, bool ___enableSRGBConversion6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Descriptor = baseDescriptor;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_0 = ___baseDescriptor0;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_1 = (*(RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46*)L_0);
		__this->___m_Descriptor_29 = L_1;
		// m_Descriptor.useMipMap = false;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_2 = (&__this->___m_Descriptor_29);
		RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539(L_2, (bool)0, NULL);
		// m_Descriptor.autoGenerateMips = false;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_3 = (&__this->___m_Descriptor_29);
		RenderTextureDescriptor_set_autoGenerateMips_mB49837BA39F45B3F814928C8C471A082A4BDC414(L_3, (bool)0, NULL);
		// m_Source = source;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** L_4 = ___source1;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_5 = *((RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B**)L_4);
		__this->___m_Source_30 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Source_30), (void*)L_5);
		// m_Depth = depth;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** L_6 = ___depth3;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_7 = *((RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B**)L_6);
		__this->___m_Depth_32 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Depth_32), (void*)L_7);
		// m_InternalLut = internalLut;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** L_8 = ___internalLut4;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_9 = *((RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B**)L_8);
		__this->___m_InternalLut_33 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalLut_33), (void*)L_9);
		// m_IsFinalPass = false;
		__this->___m_IsFinalPass_64 = (bool)0;
		// m_HasFinalPass = hasFinalPass;
		bool L_10 = ___hasFinalPass5;
		__this->___m_HasFinalPass_65 = L_10;
		// m_EnableSRGBConversionIfNeeded = enableSRGBConversion;
		bool L_11 = ___enableSRGBConversion6;
		__this->___m_EnableSRGBConversionIfNeeded_66 = L_11;
		// m_ResolveToScreen = resolveToScreen;
		bool L_12 = ___resolveToScreen2;
		__this->___m_ResolveToScreen_69 = L_12;
		// m_Destination = k_CameraTarget;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_13 = ((ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var))->___k_CameraTarget_0;
		__this->___m_Destination_31 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Destination_31), (void*)L_13);
		// m_UseSwapBuffer = true;
		__this->___m_UseSwapBuffer_70 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::Setup(UnityEngine.RenderTextureDescriptor&,UnityEngine.Rendering.RTHandle&,UnityEngine.Rendering.RTHandle,UnityEngine.Rendering.RTHandle&,UnityEngine.Rendering.RTHandle&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_Setup_m45A33A5038AB757F6A57F2BC430C4E44BCC89B6B (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* ___baseDescriptor0, RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** ___source1, RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___destination2, RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** ___depth3, RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** ___internalLut4, bool ___hasFinalPass5, bool ___enableSRGBConversion6, const RuntimeMethod* method) 
{
	{
		// m_Descriptor = baseDescriptor;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_0 = ___baseDescriptor0;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_1 = (*(RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46*)L_0);
		__this->___m_Descriptor_29 = L_1;
		// m_Descriptor.useMipMap = false;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_2 = (&__this->___m_Descriptor_29);
		RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539(L_2, (bool)0, NULL);
		// m_Descriptor.autoGenerateMips = false;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_3 = (&__this->___m_Descriptor_29);
		RenderTextureDescriptor_set_autoGenerateMips_mB49837BA39F45B3F814928C8C471A082A4BDC414(L_3, (bool)0, NULL);
		// m_Source = source;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** L_4 = ___source1;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_5 = *((RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B**)L_4);
		__this->___m_Source_30 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Source_30), (void*)L_5);
		// m_Destination = destination;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_6 = ___destination2;
		__this->___m_Destination_31 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Destination_31), (void*)L_6);
		// m_Depth = depth;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** L_7 = ___depth3;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_8 = *((RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B**)L_7);
		__this->___m_Depth_32 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Depth_32), (void*)L_8);
		// m_InternalLut = internalLut;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** L_9 = ___internalLut4;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_10 = *((RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B**)L_9);
		__this->___m_InternalLut_33 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalLut_33), (void*)L_10);
		// m_IsFinalPass = false;
		__this->___m_IsFinalPass_64 = (bool)0;
		// m_HasFinalPass = hasFinalPass;
		bool L_11 = ___hasFinalPass5;
		__this->___m_HasFinalPass_65 = L_11;
		// m_EnableSRGBConversionIfNeeded = enableSRGBConversion;
		bool L_12 = ___enableSRGBConversion6;
		__this->___m_EnableSRGBConversionIfNeeded_66 = L_12;
		// m_UseSwapBuffer = false;
		__this->___m_UseSwapBuffer_70 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupFinalPass(UnityEngine.Rendering.RTHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupFinalPass_m2480087203994817FA177D62A78E8A11C1BA696B (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** ___source0, bool ___useSwapBuffer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Source = source;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** L_0 = ___source0;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_1 = *((RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B**)L_0);
		__this->___m_Source_30 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Source_30), (void*)L_1);
		// m_Destination = k_CameraTarget;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_2 = ((ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var))->___k_CameraTarget_0;
		__this->___m_Destination_31 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Destination_31), (void*)L_2);
		// m_IsFinalPass = true;
		__this->___m_IsFinalPass_64 = (bool)1;
		// m_HasFinalPass = false;
		__this->___m_HasFinalPass_65 = (bool)0;
		// m_EnableSRGBConversionIfNeeded = true;
		__this->___m_EnableSRGBConversionIfNeeded_66 = (bool)1;
		// m_UseSwapBuffer = useSwapBuffer;
		bool L_3 = ___useSwapBuffer1;
		__this->___m_UseSwapBuffer_70 = L_3;
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::OnCameraSetup(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.Universal.RenderingData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_OnCameraSetup_m2596242512ED31E8702191D4056047C6BB1BB020 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* ___renderingData1, const RuntimeMethod* method) 
{
	{
		// overrideCameraTarget = true;
		ScriptableRenderPass_set_overrideCameraTarget_mC7A5FB7FB9D32C88226E81992DAD058174C99D95_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::ResetHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_ResetHistory_m8FF98A255AAC1EADE99CB7F807E7C2D1B57E7FD4 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, const RuntimeMethod* method) 
{
	{
		// m_ResetHistory = true;
		__this->___m_ResetHistory_57 = (bool)1;
		// }
		return;
	}
}
// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass::CanRunOnTile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostProcessPass_CanRunOnTile_m9159D0DE4ECC65BDAC286A57B695DFF079E9689E (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return false;
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::Execute(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Rendering.Universal.RenderingData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_Execute_mA788FFA27CC71B626D405065B45C121EFC5BE1CB (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* ___renderingData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBufferPool_t88CACA06AB445EE4743F5C4D742C73761A2DEF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeStack_GetComponent_TisBloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225_m25682DCE38F204E0B4062C3F2D9132BDA2C5BF0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeStack_GetComponent_TisChromaticAberration_t84EAB576773C3AD4DE77A13952B487F9DA10DA9F_mF488DC971011EE15740583673AA8BB56BE10A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeStack_GetComponent_TisColorAdjustments_t97EE64C6DB384E5F6BC48C3FA13C207E8FC87A86_m3B00FEBB9197BDF606018D15AB7202D813CC653E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeStack_GetComponent_TisColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C_mBC5D3E47DCADB0AF1F944EE238C6188CD3B308F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeStack_GetComponent_TisDepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF_m6CC04C172E6C70C6446B6644BC25CBC3C1A691E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeStack_GetComponent_TisFilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172_mFAC921A292413CAF7B64BED0822B24DA7C60530D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeStack_GetComponent_TisLensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6_m7AA5B34C2EB5A633802388F0CA1139092EEC2E18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeStack_GetComponent_TisMotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161_mCF77251617E769053BB46F8844649FDBE0006D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeStack_GetComponent_TisPaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA_mB589E14BB73F90314BF582164232143C575C93C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeStack_GetComponent_TisTonemapping_tB71CED262B25FC58B0259FD05DD32821C2858DBA_mF484658FD16186D510BE1828DE343B029ECE2F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeStack_GetComponent_TisVignette_t77147DD5FEEB4476AF22BD98255F8010738985DC_mB42423B71631D13196913871E448FC0B90422DC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* V_0 = NULL;
	bool V_1 = false;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* V_2 = NULL;
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* V_5 = NULL;
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// var stack = VolumeManager.instance.stack;
		il2cpp_codegen_runtime_class_init_inline(VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621_il2cpp_TypeInfo_var);
		VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* L_0;
		L_0 = VolumeManager_get_instance_m3D5ADFC04553CE0658A86B642CC9690C537DFA5C(NULL);
		NullCheck(L_0);
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_1;
		L_1 = VolumeManager_get_stack_m5F7B366D1E7FE168EF4CA04A17531D34DD200266_inline(L_0, NULL);
		V_0 = L_1;
		// m_DepthOfField = stack.GetComponent<DepthOfField>();
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_2 = V_0;
		NullCheck(L_2);
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_3;
		L_3 = VolumeStack_GetComponent_TisDepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF_m6CC04C172E6C70C6446B6644BC25CBC3C1A691E2(L_2, VolumeStack_GetComponent_TisDepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF_m6CC04C172E6C70C6446B6644BC25CBC3C1A691E2_RuntimeMethod_var);
		__this->___m_DepthOfField_40 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DepthOfField_40), (void*)L_3);
		// m_MotionBlur = stack.GetComponent<MotionBlur>();
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_4 = V_0;
		NullCheck(L_4);
		MotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161* L_5;
		L_5 = VolumeStack_GetComponent_TisMotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161_mCF77251617E769053BB46F8844649FDBE0006D99(L_4, VolumeStack_GetComponent_TisMotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161_mCF77251617E769053BB46F8844649FDBE0006D99_RuntimeMethod_var);
		__this->___m_MotionBlur_41 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MotionBlur_41), (void*)L_5);
		// m_PaniniProjection = stack.GetComponent<PaniniProjection>();
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_6 = V_0;
		NullCheck(L_6);
		PaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA* L_7;
		L_7 = VolumeStack_GetComponent_TisPaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA_mB589E14BB73F90314BF582164232143C575C93C2(L_6, VolumeStack_GetComponent_TisPaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA_mB589E14BB73F90314BF582164232143C575C93C2_RuntimeMethod_var);
		__this->___m_PaniniProjection_42 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PaniniProjection_42), (void*)L_7);
		// m_Bloom = stack.GetComponent<Bloom>();
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_8 = V_0;
		NullCheck(L_8);
		Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* L_9;
		L_9 = VolumeStack_GetComponent_TisBloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225_m25682DCE38F204E0B4062C3F2D9132BDA2C5BF0D(L_8, VolumeStack_GetComponent_TisBloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225_m25682DCE38F204E0B4062C3F2D9132BDA2C5BF0D_RuntimeMethod_var);
		__this->___m_Bloom_43 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Bloom_43), (void*)L_9);
		// m_LensDistortion = stack.GetComponent<LensDistortion>();
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_10 = V_0;
		NullCheck(L_10);
		LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6* L_11;
		L_11 = VolumeStack_GetComponent_TisLensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6_m7AA5B34C2EB5A633802388F0CA1139092EEC2E18(L_10, VolumeStack_GetComponent_TisLensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6_m7AA5B34C2EB5A633802388F0CA1139092EEC2E18_RuntimeMethod_var);
		__this->___m_LensDistortion_44 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LensDistortion_44), (void*)L_11);
		// m_ChromaticAberration = stack.GetComponent<ChromaticAberration>();
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_12 = V_0;
		NullCheck(L_12);
		ChromaticAberration_t84EAB576773C3AD4DE77A13952B487F9DA10DA9F* L_13;
		L_13 = VolumeStack_GetComponent_TisChromaticAberration_t84EAB576773C3AD4DE77A13952B487F9DA10DA9F_mF488DC971011EE15740583673AA8BB56BE10A9E4(L_12, VolumeStack_GetComponent_TisChromaticAberration_t84EAB576773C3AD4DE77A13952B487F9DA10DA9F_mF488DC971011EE15740583673AA8BB56BE10A9E4_RuntimeMethod_var);
		__this->___m_ChromaticAberration_45 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ChromaticAberration_45), (void*)L_13);
		// m_Vignette = stack.GetComponent<Vignette>();
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_14 = V_0;
		NullCheck(L_14);
		Vignette_t77147DD5FEEB4476AF22BD98255F8010738985DC* L_15;
		L_15 = VolumeStack_GetComponent_TisVignette_t77147DD5FEEB4476AF22BD98255F8010738985DC_mB42423B71631D13196913871E448FC0B90422DC1(L_14, VolumeStack_GetComponent_TisVignette_t77147DD5FEEB4476AF22BD98255F8010738985DC_mB42423B71631D13196913871E448FC0B90422DC1_RuntimeMethod_var);
		__this->___m_Vignette_46 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Vignette_46), (void*)L_15);
		// m_ColorLookup = stack.GetComponent<ColorLookup>();
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_16 = V_0;
		NullCheck(L_16);
		ColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C* L_17;
		L_17 = VolumeStack_GetComponent_TisColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C_mBC5D3E47DCADB0AF1F944EE238C6188CD3B308F5(L_16, VolumeStack_GetComponent_TisColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C_mBC5D3E47DCADB0AF1F944EE238C6188CD3B308F5_RuntimeMethod_var);
		__this->___m_ColorLookup_47 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ColorLookup_47), (void*)L_17);
		// m_ColorAdjustments = stack.GetComponent<ColorAdjustments>();
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_18 = V_0;
		NullCheck(L_18);
		ColorAdjustments_t97EE64C6DB384E5F6BC48C3FA13C207E8FC87A86* L_19;
		L_19 = VolumeStack_GetComponent_TisColorAdjustments_t97EE64C6DB384E5F6BC48C3FA13C207E8FC87A86_m3B00FEBB9197BDF606018D15AB7202D813CC653E(L_18, VolumeStack_GetComponent_TisColorAdjustments_t97EE64C6DB384E5F6BC48C3FA13C207E8FC87A86_m3B00FEBB9197BDF606018D15AB7202D813CC653E_RuntimeMethod_var);
		__this->___m_ColorAdjustments_48 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ColorAdjustments_48), (void*)L_19);
		// m_Tonemapping = stack.GetComponent<Tonemapping>();
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_20 = V_0;
		NullCheck(L_20);
		Tonemapping_tB71CED262B25FC58B0259FD05DD32821C2858DBA* L_21;
		L_21 = VolumeStack_GetComponent_TisTonemapping_tB71CED262B25FC58B0259FD05DD32821C2858DBA_mF484658FD16186D510BE1828DE343B029ECE2F0E(L_20, VolumeStack_GetComponent_TisTonemapping_tB71CED262B25FC58B0259FD05DD32821C2858DBA_mF484658FD16186D510BE1828DE343B029ECE2F0E_RuntimeMethod_var);
		__this->___m_Tonemapping_49 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tonemapping_49), (void*)L_21);
		// m_FilmGrain = stack.GetComponent<FilmGrain>();
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_22 = V_0;
		NullCheck(L_22);
		FilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172* L_23;
		L_23 = VolumeStack_GetComponent_TisFilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172_mFAC921A292413CAF7B64BED0822B24DA7C60530D(L_22, VolumeStack_GetComponent_TisFilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172_mFAC921A292413CAF7B64BED0822B24DA7C60530D_RuntimeMethod_var);
		__this->___m_FilmGrain_50 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FilmGrain_50), (void*)L_23);
		// m_UseDrawProcedural = renderingData.cameraData.xr.enabled;
		RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* L_24 = ___renderingData1;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_25 = (&L_24->___cameraData_1);
		XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_26 = L_25->___xr_20;
		NullCheck(L_26);
		bool L_27;
		L_27 = XRPass_get_enabled_mC2CF12F8D66EB1EE2560B4DD1FB9343D5E598155(L_26, NULL);
		__this->___m_UseDrawProcedural_67 = L_27;
		// m_UseFastSRGBLinearConversion = renderingData.postProcessingData.useFastSRGBLinearConversion;
		RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* L_28 = ___renderingData1;
		PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4* L_29 = (&L_28->___postProcessingData_4);
		bool L_30 = L_29->___useFastSRGBLinearConversion_2;
		__this->___m_UseFastSRGBLinearConversion_68 = L_30;
		// if (m_IsFinalPass)
		bool L_31 = __this->___m_IsFinalPass_64;
		V_1 = L_31;
		bool L_32 = V_1;
		if (!L_32)
		{
			goto IL_0104;
		}
	}
	{
		// var cmd = CommandBufferPool.Get();
		il2cpp_codegen_runtime_class_init_inline(CommandBufferPool_t88CACA06AB445EE4743F5C4D742C73761A2DEF0F_il2cpp_TypeInfo_var);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_33;
		L_33 = CommandBufferPool_Get_m1A194FD7FBF7B6B0B47F292287DAD9EB65EE4423(NULL);
		V_2 = L_33;
		// using (new ProfilingScope(cmd, m_ProfilingRenderFinalPostProcessing))
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_34 = V_2;
		il2cpp_codegen_runtime_class_init_inline(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_35 = ((PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_StaticFields*)il2cpp_codegen_static_fields_for(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var))->___m_ProfilingRenderFinalPostProcessing_37;
		ProfilingScope__ctor_mE15813DF7651C1A3B6AFD6465AD4B973E8F1DBFC((&V_3), L_34, L_35, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e2:
			{// begin finally (depth: 1)
				ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_3), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// RenderFinalPass(cmd, ref renderingData);
			CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_36 = V_2;
			RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* L_37 = ___renderingData1;
			PostProcessPass_RenderFinalPass_mF69E5F1F2DC1DA64F0467D0DF45E75A80E13171F(__this, L_36, L_37, NULL);
			goto IL_00f1;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f1:
	{
		// context.ExecuteCommandBuffer(cmd);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_38 = V_2;
		ScriptableRenderContext_ExecuteCommandBuffer_mBAE37DFC699B7167A6E2C59012066C44A31E9896((&___context0), L_38, NULL);
		// CommandBufferPool.Release(cmd);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_39 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CommandBufferPool_t88CACA06AB445EE4743F5C4D742C73761A2DEF0F_il2cpp_TypeInfo_var);
		CommandBufferPool_Release_mF83A83AA404E868E189436107015AD084C00C844(L_39, NULL);
		goto IL_015a;
	}

IL_0104:
	{
		// else if (CanRunOnTile())
		bool L_40;
		L_40 = PostProcessPass_CanRunOnTile_m9159D0DE4ECC65BDAC286A57B695DFF079E9689E(__this, NULL);
		V_4 = L_40;
		bool L_41 = V_4;
		if (!L_41)
		{
			goto IL_0114;
		}
	}
	{
		goto IL_015a;
	}

IL_0114:
	{
		// var cmd = CommandBufferPool.Get();
		il2cpp_codegen_runtime_class_init_inline(CommandBufferPool_t88CACA06AB445EE4743F5C4D742C73761A2DEF0F_il2cpp_TypeInfo_var);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_42;
		L_42 = CommandBufferPool_Get_m1A194FD7FBF7B6B0B47F292287DAD9EB65EE4423(NULL);
		V_5 = L_42;
		// using (new ProfilingScope(cmd, m_ProfilingRenderPostProcessing))
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_43 = V_5;
		il2cpp_codegen_runtime_class_init_inline(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_44 = ((PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_StaticFields*)il2cpp_codegen_static_fields_for(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var))->___m_ProfilingRenderPostProcessing_36;
		ProfilingScope__ctor_mE15813DF7651C1A3B6AFD6465AD4B973E8F1DBFC((&V_6), L_43, L_44, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0138:
			{// begin finally (depth: 1)
				ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_6), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Render(cmd, ref renderingData);
			CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_45 = V_5;
			RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* L_46 = ___renderingData1;
			PostProcessPass_Render_mFA2906671991898424365EB5B753423DC1BB3E5D(__this, L_45, L_46, NULL);
			goto IL_0147;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0147:
	{
		// context.ExecuteCommandBuffer(cmd);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_47 = V_5;
		ScriptableRenderContext_ExecuteCommandBuffer_mBAE37DFC699B7167A6E2C59012066C44A31E9896((&___context0), L_47, NULL);
		// CommandBufferPool.Release(cmd);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_48 = V_5;
		il2cpp_codegen_runtime_class_init_inline(CommandBufferPool_t88CACA06AB445EE4743F5C4D742C73761A2DEF0F_il2cpp_TypeInfo_var);
		CommandBufferPool_Release_mF83A83AA404E868E189436107015AD084C00C844(L_48, NULL);
	}

IL_015a:
	{
		// m_ResetHistory = false;
		__this->___m_ResetHistory_57 = (bool)0;
		// }
		return;
	}
}
// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.Internal.PostProcessPass::GetCompatibleDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 PostProcessPass_GetCompatibleDescriptor_m22DFDB00C3012A4AADFBC8F5A483E6139BBD42BC (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, const RuntimeMethod* method) 
{
	{
		// => GetCompatibleDescriptor(m_Descriptor.width, m_Descriptor.height, m_Descriptor.graphicsFormat);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_0 = (&__this->___m_Descriptor_29);
		int32_t L_1;
		L_1 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_0, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_2 = (&__this->___m_Descriptor_29);
		int32_t L_3;
		L_3 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_2, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_4 = (&__this->___m_Descriptor_29);
		int32_t L_5;
		L_5 = RenderTextureDescriptor_get_graphicsFormat_m50F25A4F179EA318C8D3B0D8685F9C5F59F7DEC0(L_4, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_6;
		L_6 = PostProcessPass_GetCompatibleDescriptor_m9FE5C15264300379BC9D4B16DE669925264801BA(__this, L_1, L_3, L_5, 0, NULL);
		return L_6;
	}
}
// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.Internal.PostProcessPass::GetCompatibleDescriptor(System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Rendering.DepthBits)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 PostProcessPass_GetCompatibleDescriptor_m9FE5C15264300379BC9D4B16DE669925264801BA (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, int32_t ___depthBufferBits3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => GetCompatibleDescriptor(m_Descriptor, width, height, format, depthBufferBits);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_0 = __this->___m_Descriptor_29;
		int32_t L_1 = ___width0;
		int32_t L_2 = ___height1;
		int32_t L_3 = ___format2;
		int32_t L_4 = ___depthBufferBits3;
		il2cpp_codegen_runtime_class_init_inline(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_5;
		L_5 = PostProcessPass_GetCompatibleDescriptor_mECF5FFD3A19F3B5162BC6AEDE8A81E330D52DC62(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.Universal.Internal.PostProcessPass::GetCompatibleDescriptor(UnityEngine.RenderTextureDescriptor,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Rendering.DepthBits)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 PostProcessPass_GetCompatibleDescriptor_mECF5FFD3A19F3B5162BC6AEDE8A81E330D52DC62 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___desc0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___depthBufferBits4, const RuntimeMethod* method) 
{
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// desc.depthBufferBits = (int)depthBufferBits;
		int32_t L_0 = ___depthBufferBits4;
		RenderTextureDescriptor_set_depthBufferBits_mA3710C0D6E485BA6465B328CD8B1954F0E4C5819((&___desc0), L_0, NULL);
		// desc.msaaSamples = 1;
		RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline((&___desc0), 1, NULL);
		// desc.width = width;
		int32_t L_1 = ___width1;
		RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline((&___desc0), L_1, NULL);
		// desc.height = height;
		int32_t L_2 = ___height2;
		RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline((&___desc0), L_2, NULL);
		// desc.graphicsFormat = format;
		int32_t L_3 = ___format3;
		RenderTextureDescriptor_set_graphicsFormat_m037DA25F9A8B956D830C7B7E5C6E258DC1133A13((&___desc0), L_3, NULL);
		// return desc;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_4 = ___desc0;
		V_0 = L_4;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Rendering.Universal.Internal.PostProcessPass::RequireSRGBConversionBlitToBackBuffer(UnityEngine.Rendering.Universal.CameraData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostProcessPass_RequireSRGBConversionBlitToBackBuffer_mFFF0A97570D59F4A86CD4C20FC6C188E022F75D7 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E ___cameraData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return cameraData.requireSrgbConversion && m_EnableSRGBConversionIfNeeded;
		bool L_0;
		L_0 = CameraData_get_requireSrgbConversion_m6C5E8C4E67811A673E01D79E79B719216EE53139((&___cameraData0), NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1 = __this->___m_EnableSRGBConversionIfNeeded_66;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::Blit(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination2, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material3, int32_t ___passIndex4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// cmd.SetGlobalTexture(ShaderPropertyId.sourceTex, source);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ___cmd0;
		il2cpp_codegen_runtime_class_init_inline(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var))->___sourceTex_33;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_2 = ___source1;
		NullCheck(L_0);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_0, L_1, L_2, NULL);
		// if (m_UseDrawProcedural)
		bool L_3 = __this->___m_UseDrawProcedural_67;
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_006c;
		}
	}
	{
		// Vector4 scaleBias = new Vector4(1, 1, 0, 0);
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_1), (1.0f), (1.0f), (0.0f), (0.0f), NULL);
		// cmd.SetGlobalVector(ShaderPropertyId.scaleBias, scaleBias);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_5 = ___cmd0;
		il2cpp_codegen_runtime_class_init_inline(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var);
		int32_t L_6 = ((ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var))->___scaleBias_34;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_1;
		NullCheck(L_5);
		CommandBuffer_SetGlobalVector_mBE497AA5F5C9E71A3F353BA1BDB97D8AC4B75FDA(L_5, L_6, L_7, NULL);
		// cmd.SetRenderTarget(new RenderTargetIdentifier(destination, 0, CubemapFace.Unknown, -1),
		//     RenderBufferLoadAction.Load, RenderBufferStoreAction.Store, RenderBufferLoadAction.Load, RenderBufferStoreAction.Store);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_8 = ___cmd0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_9 = ___destination2;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_10;
		memset((&L_10), 0, sizeof(L_10));
		RenderTargetIdentifier__ctor_m79A7348AF351A912E617BF9C8A44A766648C80FB((&L_10), L_9, 0, (-1), (-1), /*hidden argument*/NULL);
		NullCheck(L_8);
		CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C(L_8, L_10, 0, 0, 0, 0, NULL);
		// cmd.DrawProcedural(Matrix4x4.identity, material, passIndex, MeshTopology.Quads, 4, 1, null);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_11 = ___cmd0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = ___material3;
		int32_t L_14 = ___passIndex4;
		NullCheck(L_11);
		CommandBuffer_DrawProcedural_m460EDBBEDA84E4743CA09A2F0EF44A6149C4EBD7(L_11, L_12, L_13, L_14, 2, 4, 1, (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)NULL, NULL);
		goto IL_007b;
	}

IL_006c:
	{
		// cmd.Blit(source, destination, material, passIndex);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_15 = ___cmd0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_16 = ___source1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_17 = ___destination2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = ___material3;
		int32_t L_19 = ___passIndex4;
		NullCheck(L_15);
		CommandBuffer_Blit_m20AC38869B1D9D16C37E1A697B4EF3E2B0D12530(L_15, L_16, L_17, L_18, L_19, NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DrawFullscreenMesh(UnityEngine.Rendering.CommandBuffer,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DrawFullscreenMesh_mAB97FB8B3CFF3DE88BA8D04863BB0EFCA32CEEA7 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, int32_t ___passIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderingUtils_t4E40200449A82FA3A172A563C490DF11FADA2BE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_UseDrawProcedural)
		bool L_0 = __this->___m_UseDrawProcedural_67;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// Vector4 scaleBias = new Vector4(1, 1, 0, 0);
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_1), (1.0f), (1.0f), (0.0f), (0.0f), NULL);
		// cmd.SetGlobalVector(ShaderPropertyId.scaleBias, scaleBias);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_2 = ___cmd0;
		il2cpp_codegen_runtime_class_init_inline(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var);
		int32_t L_3 = ((ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var))->___scaleBias_34;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = V_1;
		NullCheck(L_2);
		CommandBuffer_SetGlobalVector_mBE497AA5F5C9E71A3F353BA1BDB97D8AC4B75FDA(L_2, L_3, L_4, NULL);
		// cmd.DrawProcedural(Matrix4x4.identity, material, passIndex, MeshTopology.Quads, 4, 1, null);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_5 = ___cmd0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___material1;
		int32_t L_8 = ___passIndex2;
		NullCheck(L_5);
		CommandBuffer_DrawProcedural_m460EDBBEDA84E4743CA09A2F0EF44A6149C4EBD7(L_5, L_6, L_7, L_8, 2, 4, 1, (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)NULL, NULL);
		goto IL_005f;
	}

IL_0049:
	{
		// cmd.DrawMesh(RenderingUtils.fullscreenMesh, Matrix4x4.identity, material, 0, passIndex);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_9 = ___cmd0;
		il2cpp_codegen_runtime_class_init_inline(RenderingUtils_t4E40200449A82FA3A172A563C490DF11FADA2BE1_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_10;
		L_10 = RenderingUtils_get_fullscreenMesh_m6593C7C1C240A56AC8BD7C112DD672EEDE28F34E(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___material1;
		int32_t L_13 = ___passIndex2;
		NullCheck(L_9);
		CommandBuffer_DrawMesh_m2CDCAC3E41416226D38770259BB2C56CB37D5EEF(L_9, L_10, L_11, L_12, 0, L_13, NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::Render(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.Universal.RenderingData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_Render_mFA2906671991898424365EB5B753423DC1BB3E5D (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* ___renderingData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderingUtils_t4E40200449A82FA3A172A563C490DF11FADA2BE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 V_0;
	memset((&V_0), 0, sizeof(V_0));
	CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* V_1 = NULL;
	ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_15;
	memset((&V_15), 0, sizeof(V_15));
	bool V_16 = false;
	int32_t V_17 = 0;
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	bool V_24 = false;
	float V_25 = 0.0f;
	float V_26 = 0.0f;
	bool V_27 = false;
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_28;
	memset((&V_28), 0, sizeof(V_28));
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_29;
	memset((&V_29), 0, sizeof(V_29));
	bool V_30 = false;
	int32_t V_31 = 0;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B V_32;
	memset((&V_32), 0, sizeof(V_32));
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B V_33;
	memset((&V_33), 0, sizeof(V_33));
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B V_34;
	memset((&V_34), 0, sizeof(V_34));
	bool V_35 = false;
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_36;
	memset((&V_36), 0, sizeof(V_36));
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_45;
	memset((&V_45), 0, sizeof(V_45));
	bool V_46 = false;
	bool V_47 = false;
	bool V_48 = false;
	bool V_49 = false;
	bool V_50 = false;
	bool V_51 = false;
	bool V_52 = false;
	bool V_53 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B9_0 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B19_0 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B21_0 = NULL;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B22_1 = NULL;
	int32_t G_B24_0 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B24_1 = NULL;
	int32_t G_B23_0 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B23_1 = NULL;
	int32_t G_B25_0 = 0;
	int32_t G_B25_1 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B25_2 = NULL;
	int32_t G_B27_0 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B27_1 = NULL;
	int32_t G_B26_0 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B26_1 = NULL;
	int32_t G_B28_0 = 0;
	int32_t G_B28_1 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B28_2 = NULL;
	int32_t G_B30_0 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B30_1 = NULL;
	int32_t G_B29_0 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B29_1 = NULL;
	int32_t G_B31_0 = 0;
	int32_t G_B31_1 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B31_2 = NULL;
	int32_t G_B33_0 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B33_1 = NULL;
	int32_t G_B32_0 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B32_1 = NULL;
	int32_t G_B34_0 = 0;
	int32_t G_B34_1 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B34_2 = NULL;
	int32_t G_B36_0 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B36_1 = NULL;
	int32_t G_B35_0 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B35_1 = NULL;
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B37_2 = NULL;
	int32_t G_B40_0 = 0;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B44_0 = NULL;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B43_0 = NULL;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* G_B45_0 = NULL;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B45_1 = NULL;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B47_0 = NULL;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B46_0 = NULL;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* G_B48_0 = NULL;
	U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* G_B48_1 = NULL;
	int32_t G_B62_0 = 0;
	DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4* G_B96_0 = NULL;
	DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4* G_B95_0 = NULL;
	int32_t G_B100_0 = 0;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B G_B105_0;
	memset((&G_B105_0), 0, sizeof(G_B105_0));
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B G_B111_0;
	memset((&G_B111_0), 0, sizeof(G_B111_0));
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B G_B115_0;
	memset((&G_B115_0), 0, sizeof(G_B115_0));
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B G_B119_0;
	memset((&G_B119_0), 0, sizeof(G_B119_0));
	PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* G_B124_0 = NULL;
	PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* G_B120_0 = NULL;
	PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* G_B122_0 = NULL;
	PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* G_B121_0 = NULL;
	int32_t G_B123_0 = 0;
	PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* G_B123_1 = NULL;
	int32_t G_B125_0 = 0;
	PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* G_B125_1 = NULL;
	int32_t G_B130_0 = 0;
	int32_t G_B135_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 G_B138_0;
	memset((&G_B138_0), 0, sizeof(G_B138_0));
	int32_t G_B141_0 = 0;
	int32_t G_B149_0 = 0;
	int32_t G_B151_0 = 0;
	int32_t G_B156_0 = 0;
	int32_t G_B162_0 = 0;
	{
		(&V_0)->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_1), (void*)__this);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ___cmd0;
		(&V_0)->___cmd_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___cmd_3), (void*)L_0);
		// ref CameraData cameraData = ref renderingData.cameraData;
		RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* L_1 = ___renderingData1;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_2 = (&L_1->___cameraData_1);
		V_1 = L_2;
		// ref ScriptableRenderer renderer = ref cameraData.renderer;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_3 = V_1;
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** L_4 = (&L_3->___renderer_31);
		V_2 = L_4;
		// bool isSceneViewCamera = cameraData.isSceneViewCamera;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_5 = V_1;
		bool L_6;
		L_6 = CameraData_get_isSceneViewCamera_m4FBB102E90A7B1AE47ED0368DAA939B1B0DA7D70(L_5, NULL);
		V_3 = L_6;
		// bool useStopNan = cameraData.isStopNaNEnabled && m_Materials.stopNaN != null;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_7 = V_1;
		bool L_8 = L_7->___isStopNaNEnabled_27;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_9 = __this->___m_Materials_38;
		NullCheck(L_9);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = L_9->___stopNaN_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_11));
		goto IL_0042;
	}

IL_0041:
	{
		G_B3_0 = 0;
	}

IL_0042:
	{
		V_4 = (bool)G_B3_0;
		// bool useSubPixeMorpAA = cameraData.antialiasing == AntialiasingMode.SubpixelMorphologicalAntiAliasing && SystemInfo.graphicsDeviceType != GraphicsDeviceType.OpenGLES2;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_12 = V_1;
		int32_t L_13 = L_12->___antialiasing_29;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_14;
		L_14 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(NULL);
		G_B6_0 = ((((int32_t)((((int32_t)L_14) == ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B6_0 = 0;
	}

IL_005b:
	{
		V_5 = (bool)G_B6_0;
		// var dofMaterial = m_DepthOfField.mode.value == DepthOfFieldMode.Gaussian ? m_Materials.gaussianDepthOfField : m_Materials.bokehDepthOfField;
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_15 = __this->___m_DepthOfField_40;
		NullCheck(L_15);
		DepthOfFieldModeParameter_t2AC87B0A41A5C9BB872A9E9D7913C262F9DA4E26* L_16 = L_15->___mode_7;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Rendering.Universal.DepthOfFieldMode>::get_value() */, L_16);
		if ((((int32_t)L_17) == ((int32_t)1)))
		{
			goto IL_007d;
		}
	}
	{
		MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_18 = __this->___m_Materials_38;
		NullCheck(L_18);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = L_18->___bokehDepthOfField_3;
		G_B9_0 = L_19;
		goto IL_0088;
	}

IL_007d:
	{
		MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_20 = __this->___m_Materials_38;
		NullCheck(L_20);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = L_20->___gaussianDepthOfField_2;
		G_B9_0 = L_21;
	}

IL_0088:
	{
		V_6 = G_B9_0;
		// bool useDepthOfField = m_DepthOfField.IsActive() && !isSceneViewCamera && dofMaterial != null;
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_22 = __this->___m_DepthOfField_40;
		NullCheck(L_22);
		bool L_23;
		L_23 = DepthOfField_IsActive_mAEEBA8A02BC313AA621C4C197CF4A8A0A7352C0E(L_22, NULL);
		if (!L_23)
		{
			goto IL_00a4;
		}
	}
	{
		bool L_24 = V_3;
		if (L_24)
		{
			goto IL_00a4;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B13_0 = ((int32_t)(L_26));
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B13_0 = 0;
	}

IL_00a5:
	{
		V_7 = (bool)G_B13_0;
		// bool useLensFlare = !LensFlareCommonSRP.Instance.IsEmpty();
		il2cpp_codegen_runtime_class_init_inline(LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135_il2cpp_TypeInfo_var);
		LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135* L_27;
		L_27 = LensFlareCommonSRP_get_Instance_mF64DA65427B459BE5C9A648FAA697AE8B6DD479B(NULL);
		NullCheck(L_27);
		bool L_28;
		L_28 = LensFlareCommonSRP_IsEmpty_m10C9D536E29439EA829486AA85748609DD7106E0(L_27, NULL);
		V_8 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		// bool useMotionBlur = m_MotionBlur.IsActive() && !isSceneViewCamera;
		MotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161* L_29 = __this->___m_MotionBlur_41;
		NullCheck(L_29);
		bool L_30;
		L_30 = MotionBlur_IsActive_mB06475DA53BAABEA9E9D53D0DA4CC4117E8C9768(L_29, NULL);
		if (!L_30)
		{
			goto IL_00c9;
		}
	}
	{
		bool L_31 = V_3;
		G_B16_0 = ((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		goto IL_00ca;
	}

IL_00c9:
	{
		G_B16_0 = 0;
	}

IL_00ca:
	{
		V_9 = (bool)G_B16_0;
		// bool usePaniniProjection = m_PaniniProjection.IsActive() && !isSceneViewCamera;
		PaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA* L_32 = __this->___m_PaniniProjection_42;
		NullCheck(L_32);
		bool L_33;
		L_33 = PaniniProjection_IsActive_m91BB6BE780D3AFFCFD863B97195EECAB659BF2B0(L_32, NULL);
		if (!L_33)
		{
			goto IL_00df;
		}
	}
	{
		bool L_34 = V_3;
		G_B19_0 = ((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00df:
	{
		G_B19_0 = 0;
	}

IL_00e0:
	{
		V_10 = (bool)G_B19_0;
		// int amountOfPassesRemaining = (useStopNan ? 1 : 0) + (useSubPixeMorpAA ? 1 : 0) + (useDepthOfField ? 1 : 0) + (useLensFlare ? 1 : 0) + (useMotionBlur ? 1 : 0) + (usePaniniProjection ? 1 : 0);
		bool L_35 = V_4;
		G_B20_0 = (&V_0);
		if (L_35)
		{
			G_B21_0 = (&V_0);
			goto IL_00eb;
		}
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_00ec;
	}

IL_00eb:
	{
		G_B22_0 = 1;
		G_B22_1 = G_B21_0;
	}

IL_00ec:
	{
		bool L_36 = V_5;
		G_B23_0 = G_B22_0;
		G_B23_1 = G_B22_1;
		if (L_36)
		{
			G_B24_0 = G_B22_0;
			G_B24_1 = G_B22_1;
			goto IL_00f3;
		}
	}
	{
		G_B25_0 = 0;
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		goto IL_00f4;
	}

IL_00f3:
	{
		G_B25_0 = 1;
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
	}

IL_00f4:
	{
		bool L_37 = V_7;
		G_B26_0 = ((int32_t)il2cpp_codegen_add(G_B25_1, G_B25_0));
		G_B26_1 = G_B25_2;
		if (L_37)
		{
			G_B27_0 = ((int32_t)il2cpp_codegen_add(G_B25_1, G_B25_0));
			G_B27_1 = G_B25_2;
			goto IL_00fc;
		}
	}
	{
		G_B28_0 = 0;
		G_B28_1 = G_B26_0;
		G_B28_2 = G_B26_1;
		goto IL_00fd;
	}

IL_00fc:
	{
		G_B28_0 = 1;
		G_B28_1 = G_B27_0;
		G_B28_2 = G_B27_1;
	}

IL_00fd:
	{
		bool L_38 = V_8;
		G_B29_0 = ((int32_t)il2cpp_codegen_add(G_B28_1, G_B28_0));
		G_B29_1 = G_B28_2;
		if (L_38)
		{
			G_B30_0 = ((int32_t)il2cpp_codegen_add(G_B28_1, G_B28_0));
			G_B30_1 = G_B28_2;
			goto IL_0105;
		}
	}
	{
		G_B31_0 = 0;
		G_B31_1 = G_B29_0;
		G_B31_2 = G_B29_1;
		goto IL_0106;
	}

IL_0105:
	{
		G_B31_0 = 1;
		G_B31_1 = G_B30_0;
		G_B31_2 = G_B30_1;
	}

IL_0106:
	{
		bool L_39 = V_9;
		G_B32_0 = ((int32_t)il2cpp_codegen_add(G_B31_1, G_B31_0));
		G_B32_1 = G_B31_2;
		if (L_39)
		{
			G_B33_0 = ((int32_t)il2cpp_codegen_add(G_B31_1, G_B31_0));
			G_B33_1 = G_B31_2;
			goto IL_010e;
		}
	}
	{
		G_B34_0 = 0;
		G_B34_1 = G_B32_0;
		G_B34_2 = G_B32_1;
		goto IL_010f;
	}

IL_010e:
	{
		G_B34_0 = 1;
		G_B34_1 = G_B33_0;
		G_B34_2 = G_B33_1;
	}

IL_010f:
	{
		bool L_40 = V_10;
		G_B35_0 = ((int32_t)il2cpp_codegen_add(G_B34_1, G_B34_0));
		G_B35_1 = G_B34_2;
		if (L_40)
		{
			G_B36_0 = ((int32_t)il2cpp_codegen_add(G_B34_1, G_B34_0));
			G_B36_1 = G_B34_2;
			goto IL_0117;
		}
	}
	{
		G_B37_0 = 0;
		G_B37_1 = G_B35_0;
		G_B37_2 = G_B35_1;
		goto IL_0118;
	}

IL_0117:
	{
		G_B37_0 = 1;
		G_B37_1 = G_B36_0;
		G_B37_2 = G_B36_1;
	}

IL_0118:
	{
		G_B37_2->___amountOfPassesRemaining_6 = ((int32_t)il2cpp_codegen_add(G_B37_1, G_B37_0));
		// if (m_UseSwapBuffer && amountOfPassesRemaining > 0)
		bool L_41 = __this->___m_UseSwapBuffer_70;
		if (!L_41)
		{
			goto IL_0131;
		}
	}
	{
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_42 = V_0;
		int32_t L_43 = L_42.___amountOfPassesRemaining_6;
		G_B40_0 = ((((int32_t)L_43) > ((int32_t)0))? 1 : 0);
		goto IL_0132;
	}

IL_0131:
	{
		G_B40_0 = 0;
	}

IL_0132:
	{
		V_11 = (bool)G_B40_0;
		bool L_44 = V_11;
		if (!L_44)
		{
			goto IL_0143;
		}
	}
	{
		// renderer.EnableSwapBufferMSAA(false);
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** L_45 = V_2;
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* L_46 = *((ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892**)L_45);
		NullCheck(L_46);
		VirtualActionInvoker1< bool >::Invoke(14 /* System.Void UnityEngine.Rendering.Universal.ScriptableRenderer::EnableSwapBufferMSAA(System.Boolean) */, L_46, (bool)0);
	}

IL_0143:
	{
		// bool tempTargetUsed = false;
		(&V_0)->___tempTargetUsed_4 = (bool)0;
		// bool tempTarget2Used = false;
		(&V_0)->___tempTarget2Used_5 = (bool)0;
		// RTHandle source = m_UseSwapBuffer ? renderer.cameraColorTargetHandle : m_Source;
		bool L_47 = __this->___m_UseSwapBuffer_70;
		G_B43_0 = (&V_0);
		if (L_47)
		{
			G_B44_0 = (&V_0);
			goto IL_0165;
		}
	}
	{
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_48 = __this->___m_Source_30;
		G_B45_0 = L_48;
		G_B45_1 = G_B43_0;
		goto IL_016c;
	}

IL_0165:
	{
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** L_49 = V_2;
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* L_50 = *((ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892**)L_49);
		NullCheck(L_50);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_51;
		L_51 = ScriptableRenderer_get_cameraColorTargetHandle_mB0B32CF50F711E4B41822F4F6BBCE2091C608A6D(L_50, NULL);
		G_B45_0 = L_51;
		G_B45_1 = G_B44_0;
	}

IL_016c:
	{
		G_B45_1->___source_0 = G_B45_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B45_1->___source_0), (void*)G_B45_0);
		// RTHandle destination = m_UseSwapBuffer ? renderer.GetCameraColorFrontBuffer(cmd) : k_CameraTarget;
		bool L_52 = __this->___m_UseSwapBuffer_70;
		G_B46_0 = (&V_0);
		if (L_52)
		{
			G_B47_0 = (&V_0);
			goto IL_0182;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_53 = ((ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var))->___k_CameraTarget_0;
		G_B48_0 = L_53;
		G_B48_1 = G_B46_0;
		goto IL_018f;
	}

IL_0182:
	{
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** L_54 = V_2;
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* L_55 = *((ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892**)L_54);
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_56 = V_0;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_57 = L_56.___cmd_3;
		NullCheck(L_55);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_58;
		L_58 = VirtualFuncInvoker1< RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B*, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* >::Invoke(6 /* UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.ScriptableRenderer::GetCameraColorFrontBuffer(UnityEngine.Rendering.CommandBuffer) */, L_55, L_57);
		G_B48_0 = L_58;
		G_B48_1 = G_B47_0;
	}

IL_018f:
	{
		G_B48_1->___destination_2 = G_B48_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B48_1->___destination_2), (void*)G_B48_0);
		// cmd.SetGlobalMatrix(ShaderConstants._FullscreenProjMat, GL.GetGPUProjectionMatrix(Matrix4x4.identity, true));
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_59 = V_0;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_60 = L_59.___cmd_3;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_61 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullscreenProjMat_47;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_62;
		L_62 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_63;
		L_63 = GL_GetGPUProjectionMatrix_m3B89D47134C77B9361DB3CDDFFDA276C1373DD2A(L_62, (bool)1, NULL);
		NullCheck(L_60);
		CommandBuffer_SetGlobalMatrix_m8454AD5B02C68C5824015F290D831207FA098612(L_60, L_61, L_63, NULL);
		// if (useStopNan)
		bool L_64 = V_4;
		V_12 = L_64;
		bool L_65 = V_12;
		if (!L_65)
		{
			goto IL_0220;
		}
	}
	{
		// using (new ProfilingScope(cmd, ProfilingSampler.Get(URPProfileId.StopNaNs)))
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_66 = V_0;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_67 = L_66.___cmd_3;
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_68;
		L_68 = ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661(((int32_t)15), ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661_RuntimeMethod_var);
		ProfilingScope__ctor_mE15813DF7651C1A3B6AFD6465AD4B973E8F1DBFC((&V_13), L_67, L_68, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0210:
			{// begin finally (depth: 1)
				ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_13), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// RenderingUtils.Blit(
			//     cmd, GetSource(), GetDestination(), m_Materials.stopNaN, 0, m_UseDrawProcedural,
			//     RenderBufferLoadAction.DontCare, RenderBufferStoreAction.Store,
			//     RenderBufferLoadAction.DontCare, RenderBufferStoreAction.DontCare);
			U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_69 = V_0;
			CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_70 = L_69.___cmd_3;
			RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_71;
			L_71 = PostProcessPass_U3CRenderU3Eg__GetSourceU7C60_0_mAF2EFC98E40F74B4BE7B638A8A07ADE5700BC542(__this, (&V_0), NULL);
			RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_72;
			L_72 = PostProcessPass_U3CRenderU3Eg__GetDestinationU7C60_1_m7CA5DE57A11DA8DBA33C9D43DDC6CEB36B4503EE(__this, (&V_0), NULL);
			MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_73 = __this->___m_Materials_38;
			NullCheck(L_73);
			Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74 = L_73->___stopNaN_0;
			bool L_75 = __this->___m_UseDrawProcedural_67;
			il2cpp_codegen_runtime_class_init_inline(RenderingUtils_t4E40200449A82FA3A172A563C490DF11FADA2BE1_il2cpp_TypeInfo_var);
			RenderingUtils_Blit_mAB446C22E24E3CA76248FD033A53A7D0611B9159(L_70, L_71, L_72, L_74, 0, L_75, 2, 0, 2, 3, NULL);
			// Swap(ref renderer);
			ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** L_76 = V_2;
			PostProcessPass_U3CRenderU3Eg__SwapU7C60_2_m6E4963751FB3FA1E6B8D486FE572A42D8003233E(__this, L_76, (&V_0), NULL);
			goto IL_021f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_021f:
	{
	}

IL_0220:
	{
		// if (useSubPixeMorpAA)
		bool L_77 = V_5;
		V_14 = L_77;
		bool L_78 = V_14;
		if (!L_78)
		{
			goto IL_0283;
		}
	}
	{
		// using (new ProfilingScope(cmd, ProfilingSampler.Get(URPProfileId.SMAA)))
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_79 = V_0;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_80 = L_79.___cmd_3;
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_81;
		L_81 = ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661(((int32_t)16), ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661_RuntimeMethod_var);
		ProfilingScope__ctor_mE15813DF7651C1A3B6AFD6465AD4B973E8F1DBFC((&V_15), L_80, L_81, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0273:
			{// begin finally (depth: 1)
				ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_15), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// DoSubpixelMorphologicalAntialiasing(ref cameraData, cmd, GetSource(), GetDestination());
			CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_82 = V_1;
			U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_83 = V_0;
			CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_84 = L_83.___cmd_3;
			RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_85;
			L_85 = PostProcessPass_U3CRenderU3Eg__GetSourceU7C60_0_mAF2EFC98E40F74B4BE7B638A8A07ADE5700BC542(__this, (&V_0), NULL);
			RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_86;
			L_86 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_85, NULL);
			RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_87;
			L_87 = PostProcessPass_U3CRenderU3Eg__GetDestinationU7C60_1_m7CA5DE57A11DA8DBA33C9D43DDC6CEB36B4503EE(__this, (&V_0), NULL);
			RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_88;
			L_88 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_87, NULL);
			PostProcessPass_DoSubpixelMorphologicalAntialiasing_m1F2B384D7CECF2C7D17BFD43B69B702A047A1A61(__this, L_82, L_84, L_86, L_88, NULL);
			// Swap(ref renderer);
			ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** L_89 = V_2;
			PostProcessPass_U3CRenderU3Eg__SwapU7C60_2_m6E4963751FB3FA1E6B8D486FE572A42D8003233E(__this, L_89, (&V_0), NULL);
			goto IL_0282;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0282:
	{
	}

IL_0283:
	{
		// if (useDepthOfField)
		bool L_90 = V_7;
		V_16 = L_90;
		bool L_91 = V_16;
		if (!L_91)
		{
			goto IL_030f;
		}
	}
	{
		// var markerName = m_DepthOfField.mode.value == DepthOfFieldMode.Gaussian
		//     ? URPProfileId.GaussianDepthOfField
		//     : URPProfileId.BokehDepthOfField;
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_92 = __this->___m_DepthOfField_40;
		NullCheck(L_92);
		DepthOfFieldModeParameter_t2AC87B0A41A5C9BB872A9E9D7913C262F9DA4E26* L_93 = L_92->___mode_7;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Rendering.Universal.DepthOfFieldMode>::get_value() */, L_93);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_02a6;
		}
	}
	{
		G_B62_0 = ((int32_t)18);
		goto IL_02a8;
	}

IL_02a6:
	{
		G_B62_0 = ((int32_t)17);
	}

IL_02a8:
	{
		V_17 = G_B62_0;
		// using (new ProfilingScope(cmd, ProfilingSampler.Get(markerName)))
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_95 = V_0;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_96 = L_95.___cmd_3;
		int32_t L_97 = V_17;
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_98;
		L_98 = ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661(L_97, ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661_RuntimeMethod_var);
		ProfilingScope__ctor_mE15813DF7651C1A3B6AFD6465AD4B973E8F1DBFC((&V_18), L_96, L_98, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02ff:
			{// begin finally (depth: 1)
				ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_18), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// DoDepthOfField(cameraData.camera, cmd, GetSource(), GetDestination(), cameraData.pixelRect);
			CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_99 = V_1;
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_100 = L_99->___camera_2;
			U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_101 = V_0;
			CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_102 = L_101.___cmd_3;
			RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_103;
			L_103 = PostProcessPass_U3CRenderU3Eg__GetSourceU7C60_0_mAF2EFC98E40F74B4BE7B638A8A07ADE5700BC542(__this, (&V_0), NULL);
			RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_104;
			L_104 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_103, NULL);
			RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_105;
			L_105 = PostProcessPass_U3CRenderU3Eg__GetDestinationU7C60_1_m7CA5DE57A11DA8DBA33C9D43DDC6CEB36B4503EE(__this, (&V_0), NULL);
			RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_106;
			L_106 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_105, NULL);
			CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_107 = V_1;
			Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_108 = L_107->___pixelRect_6;
			PostProcessPass_DoDepthOfField_m492D94D0E88A7531264051382F38916842E57D6F(__this, L_100, L_102, L_104, L_106, L_108, NULL);
			// Swap(ref renderer);
			ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** L_109 = V_2;
			PostProcessPass_U3CRenderU3Eg__SwapU7C60_2_m6E4963751FB3FA1E6B8D486FE572A42D8003233E(__this, L_109, (&V_0), NULL);
			goto IL_030e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_030e:
	{
	}

IL_030f:
	{
		// if (useMotionBlur)
		bool L_110 = V_9;
		V_19 = L_110;
		bool L_111 = V_19;
		if (!L_111)
		{
			goto IL_0377;
		}
	}
	{
		// using (new ProfilingScope(cmd, ProfilingSampler.Get(URPProfileId.MotionBlur)))
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_112 = V_0;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_113 = L_112.___cmd_3;
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_114;
		L_114 = ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661(((int32_t)19), ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661_RuntimeMethod_var);
		ProfilingScope__ctor_mE15813DF7651C1A3B6AFD6465AD4B973E8F1DBFC((&V_20), L_113, L_114, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0367:
			{// begin finally (depth: 1)
				ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_20), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// DoMotionBlur(cameraData, cmd, GetSource(), GetDestination());
			CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_115 = V_1;
			CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E L_116 = (*(CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E*)L_115);
			U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_117 = V_0;
			CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_118 = L_117.___cmd_3;
			RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_119;
			L_119 = PostProcessPass_U3CRenderU3Eg__GetSourceU7C60_0_mAF2EFC98E40F74B4BE7B638A8A07ADE5700BC542(__this, (&V_0), NULL);
			RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_120;
			L_120 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_119, NULL);
			RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_121;
			L_121 = PostProcessPass_U3CRenderU3Eg__GetDestinationU7C60_1_m7CA5DE57A11DA8DBA33C9D43DDC6CEB36B4503EE(__this, (&V_0), NULL);
			RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_122;
			L_122 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_121, NULL);
			PostProcessPass_DoMotionBlur_m9FE32E134297381B94A8A07ACC149D06217A3072(__this, L_116, L_118, L_120, L_122, NULL);
			// Swap(ref renderer);
			ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** L_123 = V_2;
			PostProcessPass_U3CRenderU3Eg__SwapU7C60_2_m6E4963751FB3FA1E6B8D486FE572A42D8003233E(__this, L_123, (&V_0), NULL);
			goto IL_0376;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0376:
	{
	}

IL_0377:
	{
		// if (usePaniniProjection)
		bool L_124 = V_10;
		V_21 = L_124;
		bool L_125 = V_21;
		if (!L_125)
		{
			goto IL_03df;
		}
	}
	{
		// using (new ProfilingScope(cmd, ProfilingSampler.Get(URPProfileId.PaniniProjection)))
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_126 = V_0;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_127 = L_126.___cmd_3;
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_128;
		L_128 = ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661(((int32_t)20), ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661_RuntimeMethod_var);
		ProfilingScope__ctor_mE15813DF7651C1A3B6AFD6465AD4B973E8F1DBFC((&V_22), L_127, L_128, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03cf:
			{// begin finally (depth: 1)
				ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_22), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// DoPaniniProjection(cameraData.camera, cmd, GetSource(), GetDestination());
			CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_129 = V_1;
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_130 = L_129->___camera_2;
			U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_131 = V_0;
			CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_132 = L_131.___cmd_3;
			RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_133;
			L_133 = PostProcessPass_U3CRenderU3Eg__GetSourceU7C60_0_mAF2EFC98E40F74B4BE7B638A8A07ADE5700BC542(__this, (&V_0), NULL);
			RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_134;
			L_134 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_133, NULL);
			RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_135;
			L_135 = PostProcessPass_U3CRenderU3Eg__GetDestinationU7C60_1_m7CA5DE57A11DA8DBA33C9D43DDC6CEB36B4503EE(__this, (&V_0), NULL);
			RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_136;
			L_136 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_135, NULL);
			PostProcessPass_DoPaniniProjection_m7486B5A46AE100162CEE0AFC47DAEF04438FCECB(__this, L_130, L_132, L_134, L_136, NULL);
			// Swap(ref renderer);
			ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** L_137 = V_2;
			PostProcessPass_U3CRenderU3Eg__SwapU7C60_2_m6E4963751FB3FA1E6B8D486FE572A42D8003233E(__this, L_137, (&V_0), NULL);
			goto IL_03de;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03de:
	{
	}

IL_03df:
	{
		// if (useLensFlare)
		bool L_138 = V_8;
		V_23 = L_138;
		bool L_139 = V_23;
		if (!L_139)
		{
			goto IL_0488;
		}
	}
	{
		// if (m_PaniniProjection.IsActive())
		PaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA* L_140 = __this->___m_PaniniProjection_42;
		NullCheck(L_140);
		bool L_141;
		L_141 = PaniniProjection_IsActive_m91BB6BE780D3AFFCFD863B97195EECAB659BF2B0(L_140, NULL);
		V_27 = L_141;
		bool L_142 = V_27;
		if (!L_142)
		{
			goto IL_0427;
		}
	}
	{
		// usePanini = true;
		V_24 = (bool)1;
		// paniniDistance = m_PaniniProjection.distance.value;
		PaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA* L_143 = __this->___m_PaniniProjection_42;
		NullCheck(L_143);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_144 = L_143->___distance_7;
		NullCheck(L_144);
		float L_145;
		L_145 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_144);
		V_25 = L_145;
		// paniniCropToFit = m_PaniniProjection.cropToFit.value;
		PaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA* L_146 = __this->___m_PaniniProjection_42;
		NullCheck(L_146);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_147 = L_146->___cropToFit_8;
		NullCheck(L_147);
		float L_148;
		L_148 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_147);
		V_26 = L_148;
		goto IL_043a;
	}

IL_0427:
	{
		// usePanini = false;
		V_24 = (bool)0;
		// paniniDistance = 1.0f;
		V_25 = (1.0f);
		// paniniCropToFit = 1.0f;
		V_26 = (1.0f);
	}

IL_043a:
	{
		// using (new ProfilingScope(cmd, ProfilingSampler.Get(URPProfileId.LensFlareDataDriven)))
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_149 = V_0;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_150 = L_149.___cmd_3;
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_151;
		L_151 = ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661(((int32_t)23), ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661_RuntimeMethod_var);
		ProfilingScope__ctor_mE15813DF7651C1A3B6AFD6465AD4B973E8F1DBFC((&V_28), L_150, L_151, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0478:
			{// begin finally (depth: 1)
				ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_28), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// DoLensFlareDatadriven(cameraData.camera, cmd, GetSource(), usePanini, paniniDistance, paniniCropToFit);
			CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_152 = V_1;
			Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_153 = L_152->___camera_2;
			U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_154 = V_0;
			CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_155 = L_154.___cmd_3;
			RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_156;
			L_156 = PostProcessPass_U3CRenderU3Eg__GetSourceU7C60_0_mAF2EFC98E40F74B4BE7B638A8A07ADE5700BC542(__this, (&V_0), NULL);
			RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_157;
			L_157 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_156, NULL);
			bool L_158 = V_24;
			float L_159 = V_25;
			float L_160 = V_26;
			PostProcessPass_DoLensFlareDatadriven_m72A91017976E76EC614CCFE733B1B851BD51FF05(__this, L_153, L_155, L_157, L_158, L_159, L_160, NULL);
			goto IL_0487;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0487:
	{
	}

IL_0488:
	{
		// using (new ProfilingScope(cmd, ProfilingSampler.Get(URPProfileId.UberPostProcess)))
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_161 = V_0;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_162 = L_161.___cmd_3;
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_163;
		L_163 = ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661(((int32_t)21), ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661_RuntimeMethod_var);
		ProfilingScope__ctor_mE15813DF7651C1A3B6AFD6465AD4B973E8F1DBFC((&V_29), L_162, L_163, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0a92:
			{// begin finally (depth: 1)
				ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_29), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// m_Materials.uber.shaderKeywords = null;
				MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_164 = __this->___m_Materials_38;
				NullCheck(L_164);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_165 = L_164->___uber_7;
				NullCheck(L_165);
				Material_set_shaderKeywords_mD650CF82B2DBB75F001E373E2E1ACA30876F3AB8(L_165, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
				// bool bloomActive = m_Bloom.IsActive();
				Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* L_166 = __this->___m_Bloom_43;
				NullCheck(L_166);
				bool L_167;
				L_167 = Bloom_IsActive_m18CD0E121D17E2D4B20D6E944433CDEEA9C970C3(L_166, NULL);
				V_30 = L_167;
				// if (bloomActive)
				bool L_168 = V_30;
				V_35 = L_168;
				bool L_169 = V_35;
				if (!L_169)
				{
					goto IL_0510_1;
				}
			}
			{
				// using (new ProfilingScope(cmd, ProfilingSampler.Get(URPProfileId.Bloom)))
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_170 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_171 = L_170.___cmd_3;
				ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_172;
				L_172 = ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661(((int32_t)22), ProfilingSampler_Get_TisURPProfileId_tA83520239B6C0F10A73CCC6CEC7D3DA1F1932481_m9F3104BDEBD70A287E8F4BAC86579564A19A5661_RuntimeMethod_var);
				ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD L_173;
				memset((&L_173), 0, sizeof(L_173));
				ProfilingScope__ctor_mE15813DF7651C1A3B6AFD6465AD4B973E8F1DBFC((&L_173), L_171, L_172, /*hidden argument*/NULL);
				V_36 = L_173;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0500_1:
					{// begin finally (depth: 2)
						ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_36), NULL);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// SetupBloom(cmd, GetSource(), m_Materials.uber);
					U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_174 = V_0;
					CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_175 = L_174.___cmd_3;
					RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_176;
					L_176 = PostProcessPass_U3CRenderU3Eg__GetSourceU7C60_0_mAF2EFC98E40F74B4BE7B638A8A07ADE5700BC542(__this, (&V_0), NULL);
					RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_177;
					L_177 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_176, NULL);
					MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_178 = __this->___m_Materials_38;
					NullCheck(L_178);
					Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_179 = L_178->___uber_7;
					PostProcessPass_SetupBloom_mFD125A81E220222A305A0325E9AB92C9347C3DE3(__this, L_175, L_177, L_179, NULL);
					goto IL_050f_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_050f_1:
			{
			}

IL_0510_1:
			{
				// SetupLensDistortion(m_Materials.uber, isSceneViewCamera);
				MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_180 = __this->___m_Materials_38;
				NullCheck(L_180);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_181 = L_180->___uber_7;
				bool L_182 = V_3;
				PostProcessPass_SetupLensDistortion_mC8551C67AB37EB59ABB794A57B9F3D1A94C5C3CC(__this, L_181, L_182, NULL);
				// SetupChromaticAberration(m_Materials.uber);
				MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_183 = __this->___m_Materials_38;
				NullCheck(L_183);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_184 = L_183->___uber_7;
				PostProcessPass_SetupChromaticAberration_mA320D8C2C90E77757A97DF78E6B1973C750383AA(__this, L_184, NULL);
				// SetupVignette(m_Materials.uber, cameraData.xr);
				MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_185 = __this->___m_Materials_38;
				NullCheck(L_185);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_186 = L_185->___uber_7;
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_187 = V_1;
				XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_188 = L_187->___xr_20;
				PostProcessPass_SetupVignette_m38D4298A0F0856445AEA0AA550956CDBEEFFC3E4(__this, L_186, L_188, NULL);
				// SetupColorGrading(cmd, ref renderingData, m_Materials.uber);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_189 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_190 = L_189.___cmd_3;
				RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* L_191 = ___renderingData1;
				MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_192 = __this->___m_Materials_38;
				NullCheck(L_192);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_193 = L_192->___uber_7;
				PostProcessPass_SetupColorGrading_m6FF0296D87AA0C6F079012989E9E971D3B05599A(__this, L_190, L_191, L_193, NULL);
				// SetupGrain(cameraData, m_Materials.uber);
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_194 = V_1;
				MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_195 = __this->___m_Materials_38;
				NullCheck(L_195);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_196 = L_195->___uber_7;
				PostProcessPass_SetupGrain_m949060E3A47FD58C37EC07BF3D0E15258FA05B57(__this, L_194, L_196, NULL);
				// SetupDithering(cameraData, m_Materials.uber);
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_197 = V_1;
				MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_198 = __this->___m_Materials_38;
				NullCheck(L_198);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_199 = L_198->___uber_7;
				PostProcessPass_SetupDithering_m229F0AADDAB308E22BF57F2946D2B4F316A95306(__this, L_197, L_199, NULL);
				// if (RequireSRGBConversionBlitToBackBuffer(cameraData))
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_200 = V_1;
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E L_201 = (*(CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E*)L_200);
				bool L_202;
				L_202 = PostProcessPass_RequireSRGBConversionBlitToBackBuffer_mFFF0A97570D59F4A86CD4C20FC6C188E022F75D7(__this, L_201, NULL);
				V_37 = L_202;
				bool L_203 = V_37;
				if (!L_203)
				{
					goto IL_05b4_1;
				}
			}
			{
				// m_Materials.uber.EnableKeyword(ShaderKeywordStrings.LinearToSRGBConversion);
				MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_204 = __this->___m_Materials_38;
				NullCheck(L_204);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_205 = L_204->___uber_7;
				il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
				String_t* L_206 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___LinearToSRGBConversion_22;
				NullCheck(L_205);
				Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_205, L_206, NULL);
			}

IL_05b4_1:
			{
				// if (m_UseFastSRGBLinearConversion)
				bool L_207 = __this->___m_UseFastSRGBLinearConversion_68;
				V_38 = L_207;
				bool L_208 = V_38;
				if (!L_208)
				{
					goto IL_05d8_1;
				}
			}
			{
				// m_Materials.uber.EnableKeyword(ShaderKeywordStrings.UseFastSRGBLinearConversion);
				MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_209 = __this->___m_Materials_38;
				NullCheck(L_209);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_210 = L_209->___uber_7;
				il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
				String_t* L_211 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___UseFastSRGBLinearConversion_23;
				NullCheck(L_210);
				Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_210, L_211, NULL);
			}

IL_05d8_1:
			{
				// GetActiveDebugHandler(renderingData)?.UpdateShaderGlobalPropertiesForFinalValidationPass(cmd, ref cameraData, !m_HasFinalPass);
				RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* L_212 = ___renderingData1;
				RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71 L_213 = (*(RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71*)L_212);
				DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4* L_214;
				L_214 = ScriptableRenderPass_GetActiveDebugHandler_m1B3D8D7F93DEF1415F494EEF46687F21DE379448(__this, L_213, NULL);
				DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4* L_215 = L_214;
				G_B95_0 = L_215;
				if (L_215)
				{
					G_B96_0 = L_215;
					goto IL_05ea_1;
				}
			}
			{
				goto IL_0600_1;
			}

IL_05ea_1:
			{
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_216 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_217 = L_216.___cmd_3;
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_218 = V_1;
				bool L_219 = __this->___m_HasFinalPass_65;
				NullCheck(G_B96_0);
				DebugHandler_UpdateShaderGlobalPropertiesForFinalValidationPass_m70191758CEDBFFA4ED2D26A58FDD0680BBAFAC25(G_B96_0, L_217, L_218, (bool)((((int32_t)L_219) == ((int32_t)0))? 1 : 0), NULL);
			}

IL_0600_1:
			{
				// cmd.SetGlobalTexture(ShaderPropertyId.sourceTex, GetSource());
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_220 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_221 = L_220.___cmd_3;
				il2cpp_codegen_runtime_class_init_inline(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var);
				int32_t L_222 = ((ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var))->___sourceTex_33;
				RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_223;
				L_223 = PostProcessPass_U3CRenderU3Eg__GetSourceU7C60_0_mAF2EFC98E40F74B4BE7B638A8A07ADE5700BC542(__this, (&V_0), NULL);
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_224;
				L_224 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_223, NULL);
				NullCheck(L_221);
				CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_221, L_222, L_224, NULL);
				// var colorLoadAction = RenderBufferLoadAction.DontCare;
				V_31 = 2;
				// if (m_Destination == k_CameraTarget && !cameraData.isDefaultViewport)
				RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_225 = __this->___m_Destination_31;
				il2cpp_codegen_runtime_class_init_inline(ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var);
				RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_226 = ((ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var))->___k_CameraTarget_0;
				if ((!(((RuntimeObject*)(RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B*)L_225) == ((RuntimeObject*)(RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B*)L_226))))
				{
					goto IL_0639_1;
				}
			}
			{
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_227 = V_1;
				bool L_228 = L_227->___isDefaultViewport_13;
				G_B100_0 = ((((int32_t)L_228) == ((int32_t)0))? 1 : 0);
				goto IL_063a_1;
			}

IL_0639_1:
			{
				G_B100_0 = 0;
			}

IL_063a_1:
			{
				V_39 = (bool)G_B100_0;
				bool L_229 = V_39;
				if (!L_229)
				{
					goto IL_0643_1;
				}
			}
			{
				// colorLoadAction = RenderBufferLoadAction.Load;
				V_31 = 0;
			}

IL_0643_1:
			{
				// RenderTargetIdentifier targetDestination = m_UseSwapBuffer ? destination : m_Destination.nameID;
				bool L_230 = __this->___m_UseSwapBuffer_70;
				if (L_230)
				{
					goto IL_0658_1;
				}
			}
			{
				RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_231 = __this->___m_Destination_31;
				NullCheck(L_231);
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_232;
				L_232 = RTHandle_get_nameID_m30AF2567853494DB845D83A8B37D0FB523DA76E9(L_231, NULL);
				G_B105_0 = L_232;
				goto IL_0663_1;
			}

IL_0658_1:
			{
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_233 = V_0;
				RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_234 = L_233.___destination_2;
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_235;
				L_235 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_234, NULL);
				G_B105_0 = L_235;
			}

IL_0663_1:
			{
				V_32 = G_B105_0;
				// RenderTargetIdentifier cameraTargetID = BuiltinRenderTextureType.CameraTarget;
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_236;
				L_236 = RenderTargetIdentifier_op_Implicit_m3E2366E36F14173DBEED75591978EBE1F01A1325(2, NULL);
				V_33 = L_236;
				// if (cameraData.xr.enabled)
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_237 = V_1;
				XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_238 = L_237->___xr_20;
				NullCheck(L_238);
				bool L_239;
				L_239 = XRPass_get_enabled_mC2CF12F8D66EB1EE2560B4DD1FB9343D5E598155(L_238, NULL);
				V_40 = L_239;
				bool L_240 = V_40;
				if (!L_240)
				{
					goto IL_068b_1;
				}
			}
			{
				// cameraTargetID = cameraData.xr.renderTarget;
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_241 = V_1;
				XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_242 = L_241->___xr_20;
				NullCheck(L_242);
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_243;
				L_243 = XRPass_get_renderTarget_m595B27BD6972FE1F74FCE71CB29088F159E84B18_inline(L_242, NULL);
				V_33 = L_243;
			}

IL_068b_1:
			{
				// RenderTargetIdentifier cameraTarget = (cameraData.targetTexture != null && !cameraData.xr.enabled) ? new RenderTargetIdentifier(cameraData.targetTexture) : cameraTargetID;
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_244 = V_1;
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_245 = L_244->___targetTexture_4;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_246;
				L_246 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_245, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_246)
				{
					goto IL_06a6_1;
				}
			}
			{
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_247 = V_1;
				XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_248 = L_247->___xr_20;
				NullCheck(L_248);
				bool L_249;
				L_249 = XRPass_get_enabled_mC2CF12F8D66EB1EE2560B4DD1FB9343D5E598155(L_248, NULL);
				if (!L_249)
				{
					goto IL_06aa_1;
				}
			}

IL_06a6_1:
			{
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_250 = V_33;
				G_B111_0 = L_250;
				goto IL_06b5_1;
			}

IL_06aa_1:
			{
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_251 = V_1;
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_252 = L_251->___targetTexture_4;
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_253;
				memset((&L_253), 0, sizeof(L_253));
				RenderTargetIdentifier__ctor_mD6E20FA134EEBCE40A8B5E64C505DE8A0DC96BDF((&L_253), L_252, /*hidden argument*/NULL);
				G_B111_0 = L_253;
			}

IL_06b5_1:
			{
				V_34 = G_B111_0;
				// if (m_UseSwapBuffer)
				bool L_254 = __this->___m_UseSwapBuffer_70;
				V_41 = L_254;
				bool L_255 = V_41;
				if (!L_255)
				{
					goto IL_06d7_1;
				}
			}
			{
				// cameraTarget = (m_ResolveToScreen) ? cameraTarget : targetDestination;
				bool L_256 = __this->___m_ResolveToScreen_69;
				if (L_256)
				{
					goto IL_06d0_1;
				}
			}
			{
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_257 = V_32;
				G_B115_0 = L_257;
				goto IL_06d2_1;
			}

IL_06d0_1:
			{
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_258 = V_34;
				G_B115_0 = L_258;
			}

IL_06d2_1:
			{
				V_34 = G_B115_0;
				goto IL_0730_1;
			}

IL_06d7_1:
			{
				// cameraTarget = (m_Destination.nameID == BuiltinRenderTextureType.CameraTarget) ? cameraTarget : m_Destination.nameID;
				RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_259 = __this->___m_Destination_31;
				NullCheck(L_259);
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_260;
				L_260 = RTHandle_get_nameID_m30AF2567853494DB845D83A8B37D0FB523DA76E9(L_259, NULL);
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_261;
				L_261 = RenderTargetIdentifier_op_Implicit_m3E2366E36F14173DBEED75591978EBE1F01A1325(2, NULL);
				bool L_262;
				L_262 = RenderTargetIdentifier_op_Equality_mD9FD6667F4C385F2379E9DEAAA8F91B7A1D50A1F(L_260, L_261, NULL);
				if (L_262)
				{
					goto IL_06fd_1;
				}
			}
			{
				RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_263 = __this->___m_Destination_31;
				NullCheck(L_263);
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_264;
				L_264 = RTHandle_get_nameID_m30AF2567853494DB845D83A8B37D0FB523DA76E9(L_263, NULL);
				G_B119_0 = L_264;
				goto IL_06ff_1;
			}

IL_06fd_1:
			{
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_265 = V_34;
				G_B119_0 = L_265;
			}

IL_06ff_1:
			{
				V_34 = G_B119_0;
				// m_ResolveToScreen = cameraData.resolveFinalTarget || (m_Destination.nameID == cameraTargetID || m_HasFinalPass == true);
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_266 = V_1;
				bool L_267 = L_266->___resolveFinalTarget_32;
				G_B120_0 = __this;
				if (L_267)
				{
					G_B124_0 = __this;
					goto IL_0729_1;
				}
			}
			{
				RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_268 = __this->___m_Destination_31;
				NullCheck(L_268);
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_269;
				L_269 = RTHandle_get_nameID_m30AF2567853494DB845D83A8B37D0FB523DA76E9(L_268, NULL);
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_270 = V_33;
				bool L_271;
				L_271 = RenderTargetIdentifier_op_Equality_mD9FD6667F4C385F2379E9DEAAA8F91B7A1D50A1F(L_269, L_270, NULL);
				G_B121_0 = G_B120_0;
				if (L_271)
				{
					G_B122_0 = G_B120_0;
					goto IL_0726_1;
				}
			}
			{
				bool L_272 = __this->___m_HasFinalPass_65;
				G_B123_0 = ((int32_t)(L_272));
				G_B123_1 = G_B121_0;
				goto IL_0727_1;
			}

IL_0726_1:
			{
				G_B123_0 = 1;
				G_B123_1 = G_B122_0;
			}

IL_0727_1:
			{
				G_B125_0 = G_B123_0;
				G_B125_1 = G_B123_1;
				goto IL_072a_1;
			}

IL_0729_1:
			{
				G_B125_0 = 1;
				G_B125_1 = G_B124_0;
			}

IL_072a_1:
			{
				NullCheck(G_B125_1);
				G_B125_1->___m_ResolveToScreen_69 = (bool)G_B125_0;
			}

IL_0730_1:
			{
				// if (cameraData.xr.enabled)
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_273 = V_1;
				XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_274 = L_273->___xr_20;
				NullCheck(L_274);
				bool L_275;
				L_275 = XRPass_get_enabled_mC2CF12F8D66EB1EE2560B4DD1FB9343D5E598155(L_274, NULL);
				V_42 = L_275;
				bool L_276 = V_42;
				if (!L_276)
				{
					goto IL_08c4_1;
				}
			}
			{
				// cmd.SetRenderTarget(new RenderTargetIdentifier(cameraTarget, 0, CubemapFace.Unknown, -1),
				//     colorLoadAction, RenderBufferStoreAction.Store, RenderBufferLoadAction.DontCare, RenderBufferStoreAction.DontCare);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_277 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_278 = L_277.___cmd_3;
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_279 = V_34;
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_280;
				memset((&L_280), 0, sizeof(L_280));
				RenderTargetIdentifier__ctor_m79A7348AF351A912E617BF9C8A44A766648C80FB((&L_280), L_279, 0, (-1), (-1), /*hidden argument*/NULL);
				int32_t L_281 = V_31;
				NullCheck(L_278);
				CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C(L_278, L_280, L_281, 0, 2, 3, NULL);
				// bool isRenderToBackBufferTarget = cameraTarget == cameraData.xr.renderTarget && !cameraData.xr.renderTargetIsRenderTexture;
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_282 = V_34;
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_283 = V_1;
				XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_284 = L_283->___xr_20;
				NullCheck(L_284);
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_285;
				L_285 = XRPass_get_renderTarget_m595B27BD6972FE1F74FCE71CB29088F159E84B18_inline(L_284, NULL);
				bool L_286;
				L_286 = RenderTargetIdentifier_op_Equality_mD9FD6667F4C385F2379E9DEAAA8F91B7A1D50A1F(L_282, L_285, NULL);
				if (!L_286)
				{
					goto IL_0784_1;
				}
			}
			{
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_287 = V_1;
				XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_288 = L_287->___xr_20;
				NullCheck(L_288);
				bool L_289;
				L_289 = XRPass_get_renderTargetIsRenderTexture_m79E6747B91048C48ED200D3A99B96621D0BFB67A_inline(L_288, NULL);
				G_B130_0 = ((((int32_t)L_289) == ((int32_t)0))? 1 : 0);
				goto IL_0785_1;
			}

IL_0784_1:
			{
				G_B130_0 = 0;
			}

IL_0785_1:
			{
				V_43 = (bool)G_B130_0;
				// if (isRenderToBackBufferTarget)
				bool L_290 = V_43;
				V_46 = L_290;
				bool L_291 = V_46;
				if (!L_291)
				{
					goto IL_07a1_1;
				}
			}
			{
				// cmd.SetViewport(cameraData.pixelRect);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_292 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_293 = L_292.___cmd_3;
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_294 = V_1;
				Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_295 = L_294->___pixelRect_6;
				NullCheck(L_293);
				CommandBuffer_SetViewport_m3BCCABB7493369D88DB15EE43C41D9858AE2574D(L_293, L_295, NULL);
			}

IL_07a1_1:
			{
				// bool yflip = isRenderToBackBufferTarget && SystemInfo.graphicsUVStartsAtTop;
				bool L_296 = V_43;
				if (!L_296)
				{
					goto IL_07ac_1;
				}
			}
			{
				bool L_297;
				L_297 = SystemInfo_get_graphicsUVStartsAtTop_m152BEEFFF20719C9EAB612AD238114BD0B3BFE4B(NULL);
				G_B135_0 = ((int32_t)(L_297));
				goto IL_07ad_1;
			}

IL_07ac_1:
			{
				G_B135_0 = 0;
			}

IL_07ad_1:
			{
				V_44 = (bool)G_B135_0;
				// Vector4 scaleBias = yflip ? new Vector4(1, -1, 0, 1) : new Vector4(1, 1, 0, 0);
				bool L_298 = V_44;
				if (L_298)
				{
					goto IL_07ce_1;
				}
			}
			{
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_299;
				memset((&L_299), 0, sizeof(L_299));
				Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_299), (1.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
				G_B138_0 = L_299;
				goto IL_07e7_1;
			}

IL_07ce_1:
			{
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_300;
				memset((&L_300), 0, sizeof(L_300));
				Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_300), (1.0f), (-1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
				G_B138_0 = L_300;
			}

IL_07e7_1:
			{
				V_45 = G_B138_0;
				// cmd.SetGlobalVector(ShaderPropertyId.scaleBias, scaleBias);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_301 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_302 = L_301.___cmd_3;
				il2cpp_codegen_runtime_class_init_inline(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var);
				int32_t L_303 = ((ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var))->___scaleBias_34;
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_304 = V_45;
				NullCheck(L_302);
				CommandBuffer_SetGlobalVector_mBE497AA5F5C9E71A3F353BA1BDB97D8AC4B75FDA(L_302, L_303, L_304, NULL);
				// cmd.DrawProcedural(Matrix4x4.identity, m_Materials.uber, 0, MeshTopology.Quads, 4, 1, null);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_305 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_306 = L_305.___cmd_3;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_307;
				L_307 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
				MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_308 = __this->___m_Materials_38;
				NullCheck(L_308);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_309 = L_308->___uber_7;
				NullCheck(L_306);
				CommandBuffer_DrawProcedural_m460EDBBEDA84E4743CA09A2F0EF44A6149C4EBD7(L_306, L_307, L_309, 0, 2, 4, 1, (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)NULL, NULL);
				// if (!m_ResolveToScreen && !m_UseSwapBuffer)
				bool L_310 = __this->___m_ResolveToScreen_69;
				if (L_310)
				{
					goto IL_0830_1;
				}
			}
			{
				bool L_311 = __this->___m_UseSwapBuffer_70;
				G_B141_0 = ((((int32_t)L_311) == ((int32_t)0))? 1 : 0);
				goto IL_0831_1;
			}

IL_0830_1:
			{
				G_B141_0 = 0;
			}

IL_0831_1:
			{
				V_47 = (bool)G_B141_0;
				bool L_312 = V_47;
				if (!L_312)
				{
					goto IL_08be_1;
				}
			}
			{
				// cmd.SetGlobalTexture(ShaderPropertyId.sourceTex, cameraTarget);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_313 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_314 = L_313.___cmd_3;
				il2cpp_codegen_runtime_class_init_inline(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var);
				int32_t L_315 = ((ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var))->___sourceTex_33;
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_316 = V_34;
				NullCheck(L_314);
				CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_314, L_315, L_316, NULL);
				// cmd.SetRenderTarget(new RenderTargetIdentifier(m_Source, 0, CubemapFace.Unknown, -1),
				//     colorLoadAction, RenderBufferStoreAction.Store, RenderBufferLoadAction.DontCare, RenderBufferStoreAction.DontCare);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_317 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_318 = L_317.___cmd_3;
				RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_319 = __this->___m_Source_30;
				Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_320;
				L_320 = RTHandle_op_Implicit_mEF75557100B4F5D5BD918A60C85060711687CD43(L_319, NULL);
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_321;
				memset((&L_321), 0, sizeof(L_321));
				RenderTargetIdentifier__ctor_m36F9914C200EE580EEDE97C4E8759D74879999D7((&L_321), L_320, 0, (-1), (-1), /*hidden argument*/NULL);
				int32_t L_322 = V_31;
				NullCheck(L_318);
				CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C(L_318, L_321, L_322, 0, 2, 3, NULL);
				// scaleBias = new Vector4(1, 1, 0, 0);;
				Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_45), (1.0f), (1.0f), (0.0f), (0.0f), NULL);
				// cmd.SetGlobalVector(ShaderPropertyId.scaleBias, scaleBias);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_323 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_324 = L_323.___cmd_3;
				int32_t L_325 = ((ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var))->___scaleBias_34;
				Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_326 = V_45;
				NullCheck(L_324);
				CommandBuffer_SetGlobalVector_mBE497AA5F5C9E71A3F353BA1BDB97D8AC4B75FDA(L_324, L_325, L_326, NULL);
				// cmd.DrawProcedural(Matrix4x4.identity, m_BlitMaterial, 0, MeshTopology.Quads, 4, 1, null);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_327 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_328 = L_327.___cmd_3;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_329;
				L_329 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_330 = __this->___m_BlitMaterial_73;
				NullCheck(L_328);
				CommandBuffer_DrawProcedural_m460EDBBEDA84E4743CA09A2F0EF44A6149C4EBD7(L_328, L_329, L_330, 0, 2, 4, 1, (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)NULL, NULL);
			}

IL_08be_1:
			{
				goto IL_09f4_1;
			}

IL_08c4_1:
			{
				// cmd.SetRenderTarget(cameraTarget, colorLoadAction, RenderBufferStoreAction.Store, RenderBufferLoadAction.DontCare, RenderBufferStoreAction.DontCare);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_331 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_332 = L_331.___cmd_3;
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_333 = V_34;
				int32_t L_334 = V_31;
				NullCheck(L_332);
				CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C(L_332, L_333, L_334, 0, 2, 3, NULL);
				// cameraData.renderer.ConfigureCameraTarget(cameraTarget, cameraTarget);
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_335 = V_1;
				ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* L_336 = L_335->___renderer_31;
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_337 = V_34;
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_338 = V_34;
				NullCheck(L_336);
				ScriptableRenderer_ConfigureCameraTarget_m4067416B1E8D785A5BADBEFB1E73FDA7A6A0D440(L_336, L_337, L_338, NULL);
				// cmd.SetViewProjectionMatrices(Matrix4x4.identity, Matrix4x4.identity);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_339 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_340 = L_339.___cmd_3;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_341;
				L_341 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_342;
				L_342 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
				NullCheck(L_340);
				CommandBuffer_SetViewProjectionMatrices_m50A472F193C13207D81B5EC8FB007F76E36A8C75(L_340, L_341, L_342, NULL);
				// if ((m_Destination.nameID == BuiltinRenderTextureType.CameraTarget && !m_UseSwapBuffer) || (m_ResolveToScreen && m_UseSwapBuffer))
				RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_343 = __this->___m_Destination_31;
				NullCheck(L_343);
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_344;
				L_344 = RTHandle_get_nameID_m30AF2567853494DB845D83A8B37D0FB523DA76E9(L_343, NULL);
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_345;
				L_345 = RenderTargetIdentifier_op_Implicit_m3E2366E36F14173DBEED75591978EBE1F01A1325(2, NULL);
				bool L_346;
				L_346 = RenderTargetIdentifier_op_Equality_mD9FD6667F4C385F2379E9DEAAA8F91B7A1D50A1F(L_344, L_345, NULL);
				if (!L_346)
				{
					goto IL_091e_1;
				}
			}
			{
				bool L_347 = __this->___m_UseSwapBuffer_70;
				if (!L_347)
				{
					goto IL_0931_1;
				}
			}

IL_091e_1:
			{
				bool L_348 = __this->___m_ResolveToScreen_69;
				if (!L_348)
				{
					goto IL_092e_1;
				}
			}
			{
				bool L_349 = __this->___m_UseSwapBuffer_70;
				G_B149_0 = ((int32_t)(L_349));
				goto IL_092f_1;
			}

IL_092e_1:
			{
				G_B149_0 = 0;
			}

IL_092f_1:
			{
				G_B151_0 = G_B149_0;
				goto IL_0932_1;
			}

IL_0931_1:
			{
				G_B151_0 = 1;
			}

IL_0932_1:
			{
				V_48 = (bool)G_B151_0;
				bool L_350 = V_48;
				if (!L_350)
				{
					goto IL_094a_1;
				}
			}
			{
				// cmd.SetViewport(cameraData.pixelRect);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_351 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_352 = L_351.___cmd_3;
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_353 = V_1;
				Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_354 = L_353->___pixelRect_6;
				NullCheck(L_352);
				CommandBuffer_SetViewport_m3BCCABB7493369D88DB15EE43C41D9858AE2574D(L_352, L_354, NULL);
			}

IL_094a_1:
			{
				// cmd.DrawMesh(RenderingUtils.fullscreenMesh, Matrix4x4.identity, m_Materials.uber);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_355 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_356 = L_355.___cmd_3;
				il2cpp_codegen_runtime_class_init_inline(RenderingUtils_t4E40200449A82FA3A172A563C490DF11FADA2BE1_il2cpp_TypeInfo_var);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_357;
				L_357 = RenderingUtils_get_fullscreenMesh_m6593C7C1C240A56AC8BD7C112DD672EEDE28F34E(NULL);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_358;
				L_358 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
				MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_359 = __this->___m_Materials_38;
				NullCheck(L_359);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_360 = L_359->___uber_7;
				NullCheck(L_356);
				CommandBuffer_DrawMesh_m45BA88D4388EC7E5CDAABD42CD6CE29A5120042C(L_356, L_357, L_358, L_360, NULL);
				// if (!m_ResolveToScreen && !m_UseSwapBuffer)
				bool L_361 = __this->___m_ResolveToScreen_69;
				if (L_361)
				{
					goto IL_097e_1;
				}
			}
			{
				bool L_362 = __this->___m_UseSwapBuffer_70;
				G_B156_0 = ((((int32_t)L_362) == ((int32_t)0))? 1 : 0);
				goto IL_097f_1;
			}

IL_097e_1:
			{
				G_B156_0 = 0;
			}

IL_097f_1:
			{
				V_49 = (bool)G_B156_0;
				bool L_363 = V_49;
				if (!L_363)
				{
					goto IL_09d1_1;
				}
			}
			{
				// cmd.SetGlobalTexture(ShaderPropertyId.sourceTex, cameraTarget);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_364 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_365 = L_364.___cmd_3;
				il2cpp_codegen_runtime_class_init_inline(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var);
				int32_t L_366 = ((ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var))->___sourceTex_33;
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_367 = V_34;
				NullCheck(L_365);
				CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_365, L_366, L_367, NULL);
				// cmd.SetRenderTarget(m_Source, RenderBufferLoadAction.DontCare, RenderBufferStoreAction.Store, RenderBufferLoadAction.DontCare, RenderBufferStoreAction.DontCare);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_368 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_369 = L_368.___cmd_3;
				RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_370 = __this->___m_Source_30;
				RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_371;
				L_371 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_370, NULL);
				NullCheck(L_369);
				CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C(L_369, L_371, 2, 0, 2, 3, NULL);
				// cmd.DrawMesh(RenderingUtils.fullscreenMesh, Matrix4x4.identity, m_BlitMaterial);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_372 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_373 = L_372.___cmd_3;
				il2cpp_codegen_runtime_class_init_inline(RenderingUtils_t4E40200449A82FA3A172A563C490DF11FADA2BE1_il2cpp_TypeInfo_var);
				Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_374;
				L_374 = RenderingUtils_get_fullscreenMesh_m6593C7C1C240A56AC8BD7C112DD672EEDE28F34E(NULL);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_375;
				L_375 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_376 = __this->___m_BlitMaterial_73;
				NullCheck(L_373);
				CommandBuffer_DrawMesh_m45BA88D4388EC7E5CDAABD42CD6CE29A5120042C(L_373, L_374, L_375, L_376, NULL);
			}

IL_09d1_1:
			{
				// cmd.SetViewProjectionMatrices(cameraData.camera.worldToCameraMatrix, cameraData.camera.projectionMatrix);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_377 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_378 = L_377.___cmd_3;
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_379 = V_1;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_380 = L_379->___camera_2;
				NullCheck(L_380);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_381;
				L_381 = Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40(L_380, NULL);
				CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_382 = V_1;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_383 = L_382->___camera_2;
				NullCheck(L_383);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_384;
				L_384 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_383, NULL);
				NullCheck(L_378);
				CommandBuffer_SetViewProjectionMatrices_m50A472F193C13207D81B5EC8FB007F76E36A8C75(L_378, L_381, L_384, NULL);
			}

IL_09f4_1:
			{
				// if (m_UseSwapBuffer && !m_ResolveToScreen)
				bool L_385 = __this->___m_UseSwapBuffer_70;
				if (!L_385)
				{
					goto IL_0a07_1;
				}
			}
			{
				bool L_386 = __this->___m_ResolveToScreen_69;
				G_B162_0 = ((((int32_t)L_386) == ((int32_t)0))? 1 : 0);
				goto IL_0a08_1;
			}

IL_0a07_1:
			{
				G_B162_0 = 0;
			}

IL_0a08_1:
			{
				V_50 = (bool)G_B162_0;
				bool L_387 = V_50;
				if (!L_387)
				{
					goto IL_0a1e_1;
				}
			}
			{
				// renderer.SwapColorBuffer(cmd);
				ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** L_388 = V_2;
				ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* L_389 = *((ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892**)L_388);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_390 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_391 = L_390.___cmd_3;
				NullCheck(L_389);
				VirtualActionInvoker1< CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* >::Invoke(13 /* System.Void UnityEngine.Rendering.Universal.ScriptableRenderer::SwapColorBuffer(UnityEngine.Rendering.CommandBuffer) */, L_389, L_391);
			}

IL_0a1e_1:
			{
				// if (bloomActive)
				bool L_392 = V_30;
				V_51 = L_392;
				bool L_393 = V_51;
				if (!L_393)
				{
					goto IL_0a39_1;
				}
			}
			{
				// cmd.ReleaseTemporaryRT(ShaderConstants._BloomMipUp[0]);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_394 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_395 = L_394.___cmd_3;
				il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_396 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipUp_48;
				NullCheck(L_396);
				int32_t L_397 = 0;
				int32_t L_398 = (L_396)->GetAt(static_cast<il2cpp_array_size_t>(L_397));
				NullCheck(L_395);
				CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_395, L_398, NULL);
			}

IL_0a39_1:
			{
				// if (tempTargetUsed)
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_399 = V_0;
				bool L_400 = L_399.___tempTargetUsed_4;
				V_52 = L_400;
				bool L_401 = V_52;
				if (!L_401)
				{
					goto IL_0a56_1;
				}
			}
			{
				// cmd.ReleaseTemporaryRT(ShaderConstants._TempTarget);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_402 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_403 = L_402.___cmd_3;
				il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
				int32_t L_404 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____TempTarget_0;
				NullCheck(L_403);
				CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_403, L_404, NULL);
			}

IL_0a56_1:
			{
				// if (tempTarget2Used)
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_405 = V_0;
				bool L_406 = L_405.___tempTarget2Used_5;
				V_53 = L_406;
				bool L_407 = V_53;
				if (!L_407)
				{
					goto IL_0a73_1;
				}
			}
			{
				// cmd.ReleaseTemporaryRT(ShaderConstants._TempTarget2);
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_408 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_409 = L_408.___cmd_3;
				il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
				int32_t L_410 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____TempTarget2_1;
				NullCheck(L_409);
				CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_409, L_410, NULL);
			}

IL_0a73_1:
			{
				// cmd.ReleaseTemporaryRT(Shader.PropertyToID(m_InternalLut.name));
				U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681 L_411 = V_0;
				CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_412 = L_411.___cmd_3;
				RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_413 = __this->___m_InternalLut_33;
				NullCheck(L_413);
				String_t* L_414;
				L_414 = RTHandle_get_name_mF2E7B6B108477C76931BD1E5798BB1DA1F036B7A(L_413, NULL);
				int32_t L_415;
				L_415 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_414, NULL);
				NullCheck(L_412);
				CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_412, L_415, NULL);
				goto IL_0aa1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0aa1:
	{
		// }
		return;
	}
}
// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.Universal.Internal.PostProcessPass::BlitDstDiscardContent(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PostProcessPass_BlitDstDiscardContent_m0CD67D1CAF9AC54EB998A4AEC3D6178680781C59 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___rt1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// cmd.SetRenderTarget(new RenderTargetIdentifier(rt, 0, CubemapFace.Unknown, -1),
		//     RenderBufferLoadAction.DontCare, RenderBufferStoreAction.Store,
		//     RenderBufferLoadAction.DontCare, RenderBufferStoreAction.DontCare);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ___cmd0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_1 = ___rt1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_2;
		memset((&L_2), 0, sizeof(L_2));
		RenderTargetIdentifier__ctor_m79A7348AF351A912E617BF9C8A44A766648C80FB((&L_2), L_1, 0, (-1), (-1), /*hidden argument*/NULL);
		NullCheck(L_0);
		CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C(L_0, L_2, 2, 0, 2, 3, NULL);
		// return BuiltinRenderTextureType.CurrentActive;
		V_0 = 1;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DoSubpixelMorphologicalAntialiasing(UnityEngine.Rendering.Universal.CameraData&,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DoSubpixelMorphologicalAntialiasing_m1F2B384D7CECF2C7D17BFD43B69B702A047A1A61 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* ___cameraData0, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_2 = NULL;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t G_B8_0 = 0;
	{
		// var camera = cameraData.camera;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_0 = ___cameraData0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = L_0->___camera_2;
		V_0 = L_1;
		// var pixelRect = cameraData.pixelRect;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_2 = ___cameraData0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = L_2->___pixelRect_6;
		V_1 = L_3;
		// var material = m_Materials.subpixelMorphologicalAntialiasing;
		MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_4 = __this->___m_Materials_38;
		NullCheck(L_4);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = L_4->___subpixelMorphologicalAntialiasing_1;
		V_2 = L_5;
		// material.SetVector(ShaderConstants._Metrics, new Vector4(1f / m_Descriptor.width, 1f / m_Descriptor.height, m_Descriptor.width, m_Descriptor.height));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_7 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Metrics_12;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_8 = (&__this->___m_Descriptor_29);
		int32_t L_9;
		L_9 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_8, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_10 = (&__this->___m_Descriptor_29);
		int32_t L_11;
		L_11 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_10, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_12 = (&__this->___m_Descriptor_29);
		int32_t L_13;
		L_13 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_12, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_14 = (&__this->___m_Descriptor_29);
		int32_t L_15;
		L_15 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_14, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_16), ((float)((1.0f)/((float)L_9))), ((float)((1.0f)/((float)L_11))), ((float)L_13), ((float)L_15), /*hidden argument*/NULL);
		NullCheck(L_6);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_6, L_7, L_16, NULL);
		// material.SetTexture(ShaderConstants._AreaTexture, m_Data.textures.smaaAreaTex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = V_2;
		int32_t L_18 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____AreaTexture_13;
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_19 = __this->___m_Data_39;
		NullCheck(L_19);
		TextureResources_t9220AC464374C6AA55163CD0AC71C62B85E6C122* L_20 = L_19->___textures_5;
		NullCheck(L_20);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = L_20->___smaaAreaTex_2;
		NullCheck(L_17);
		Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD(L_17, L_18, L_21, NULL);
		// material.SetTexture(ShaderConstants._SearchTexture, m_Data.textures.smaaSearchTex);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = V_2;
		int32_t L_23 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____SearchTexture_14;
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_24 = __this->___m_Data_39;
		NullCheck(L_24);
		TextureResources_t9220AC464374C6AA55163CD0AC71C62B85E6C122* L_25 = L_24->___textures_5;
		NullCheck(L_25);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = L_25->___smaaSearchTex_3;
		NullCheck(L_22);
		Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD(L_22, L_23, L_26, NULL);
		// material.SetFloat(ShaderConstants._StencilRef, (float)kStencilBit);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = V_2;
		int32_t L_28 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____StencilRef_2;
		NullCheck(L_27);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_27, L_28, (64.0f), NULL);
		// material.SetFloat(ShaderConstants._StencilMask, (float)kStencilBit);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = V_2;
		int32_t L_30 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____StencilMask_3;
		NullCheck(L_29);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_29, L_30, (64.0f), NULL);
		// material.shaderKeywords = null;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = V_2;
		NullCheck(L_31);
		Material_set_shaderKeywords_mD650CF82B2DBB75F001E373E2E1ACA30876F3AB8(L_31, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		// switch (cameraData.antialiasingQuality)
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_32 = ___cameraData0;
		int32_t L_33 = L_32->___antialiasingQuality_30;
		V_6 = L_33;
		int32_t L_34 = V_6;
		V_5 = L_34;
		int32_t L_35 = V_5;
		switch (L_35)
		{
			case 0:
			{
				goto IL_00eb;
			}
			case 1:
			{
				goto IL_00f9;
			}
			case 2:
			{
				goto IL_0107;
			}
		}
	}
	{
		goto IL_0115;
	}

IL_00eb:
	{
		// material.EnableKeyword(ShaderKeywordStrings.SmaaLow);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_37 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___SmaaLow_30;
		NullCheck(L_36);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_36, L_37, NULL);
		// break;
		goto IL_0115;
	}

IL_00f9:
	{
		// material.EnableKeyword(ShaderKeywordStrings.SmaaMedium);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_39 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___SmaaMedium_31;
		NullCheck(L_38);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_38, L_39, NULL);
		// break;
		goto IL_0115;
	}

IL_0107:
	{
		// material.EnableKeyword(ShaderKeywordStrings.SmaaHigh);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_41 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___SmaaHigh_32;
		NullCheck(L_40);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_40, L_41, NULL);
		// break;
		goto IL_0115;
	}

IL_0115:
	{
		// if (m_Depth == k_CameraTarget || m_Descriptor.msaaSamples > 1)
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_42 = __this->___m_Depth_32;
		il2cpp_codegen_runtime_class_init_inline(ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_43 = ((ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0_il2cpp_TypeInfo_var))->___k_CameraTarget_0;
		if ((((RuntimeObject*)(RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B*)L_42) == ((RuntimeObject*)(RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B*)L_43)))
		{
			goto IL_0132;
		}
	}
	{
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_44 = (&__this->___m_Descriptor_29);
		int32_t L_45;
		L_45 = RenderTextureDescriptor_get_msaaSamples_mFCC33643AFF2265C8305DCFD79ED8774A1A8FA22_inline(L_44, NULL);
		G_B8_0 = ((((int32_t)L_45) > ((int32_t)1))? 1 : 0);
		goto IL_0133;
	}

IL_0132:
	{
		G_B8_0 = 1;
	}

IL_0133:
	{
		V_7 = (bool)G_B8_0;
		bool L_46 = V_7;
		if (!L_46)
		{
			goto IL_014c;
		}
	}
	{
		// stencil = ShaderConstants._EdgeTexture;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_47 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____EdgeTexture_15;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_48;
		L_48 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_47, NULL);
		V_3 = L_48;
		// tempDepthBits = DepthBits.Depth24;
		V_4 = ((int32_t)24);
		goto IL_015d;
	}

IL_014c:
	{
		// stencil = m_Depth.nameID;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_49 = __this->___m_Depth_32;
		NullCheck(L_49);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_50;
		L_50 = RTHandle_get_nameID_m30AF2567853494DB845D83A8B37D0FB523DA76E9(L_49, NULL);
		V_3 = L_50;
		// tempDepthBits = DepthBits.None;
		V_4 = 0;
	}

IL_015d:
	{
		// cmd.GetTemporaryRT(ShaderConstants._EdgeTexture, GetCompatibleDescriptor(m_Descriptor.width, m_Descriptor.height, m_SMAAEdgeFormat, tempDepthBits), FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_51 = ___cmd1;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_52 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____EdgeTexture_15;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_53 = (&__this->___m_Descriptor_29);
		int32_t L_54;
		L_54 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_53, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_55 = (&__this->___m_Descriptor_29);
		int32_t L_56;
		L_56 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_55, NULL);
		int32_t L_57 = __this->___m_SMAAEdgeFormat_54;
		int32_t L_58 = V_4;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_59;
		L_59 = PostProcessPass_GetCompatibleDescriptor_m9FE5C15264300379BC9D4B16DE669925264801BA(__this, L_54, L_56, L_57, L_58, NULL);
		NullCheck(L_51);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_51, L_52, L_59, 1, NULL);
		// cmd.GetTemporaryRT(ShaderConstants._BlendTexture, GetCompatibleDescriptor(m_Descriptor.width, m_Descriptor.height, GraphicsFormat.R8G8B8A8_UNorm), FilterMode.Point);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_60 = ___cmd1;
		int32_t L_61 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BlendTexture_16;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_62 = (&__this->___m_Descriptor_29);
		int32_t L_63;
		L_63 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_62, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_64 = (&__this->___m_Descriptor_29);
		int32_t L_65;
		L_65 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_64, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_66;
		L_66 = PostProcessPass_GetCompatibleDescriptor_m9FE5C15264300379BC9D4B16DE669925264801BA(__this, L_63, L_65, 8, 0, NULL);
		NullCheck(L_60);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_60, L_61, L_66, 0, NULL);
		// cmd.SetViewProjectionMatrices(Matrix4x4.identity, Matrix4x4.identity);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_67 = ___cmd1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_68;
		L_68 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_69;
		L_69 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		NullCheck(L_67);
		CommandBuffer_SetViewProjectionMatrices_m50A472F193C13207D81B5EC8FB007F76E36A8C75(L_67, L_68, L_69, NULL);
		// cmd.SetViewport(pixelRect);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_70 = ___cmd1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_71 = V_1;
		NullCheck(L_70);
		CommandBuffer_SetViewport_m3BCCABB7493369D88DB15EE43C41D9858AE2574D(L_70, L_71, NULL);
		// cmd.SetRenderTarget(new RenderTargetIdentifier(ShaderConstants._EdgeTexture, 0, CubemapFace.Unknown, -1),
		//     RenderBufferLoadAction.DontCare, RenderBufferStoreAction.Store, stencil,
		//     RenderBufferLoadAction.DontCare, RenderBufferStoreAction.Store);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_72 = ___cmd1;
		int32_t L_73 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____EdgeTexture_15;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_74;
		memset((&L_74), 0, sizeof(L_74));
		RenderTargetIdentifier__ctor_mAFAC5FB016609A5D4E07FCEC360D113B9C8D7ECF((&L_74), L_73, 0, (-1), (-1), /*hidden argument*/NULL);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_75 = V_3;
		NullCheck(L_72);
		CommandBuffer_SetRenderTarget_m43B883C6477E59A65A7FDF142EC347538EA6A57B(L_72, L_74, 2, 0, L_75, 2, 0, NULL);
		// cmd.ClearRenderTarget(RTClearFlags.ColorStencil, Color.clear, 1.0f, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_76 = ___cmd1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77;
		L_77 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		NullCheck(L_76);
		CommandBuffer_ClearRenderTarget_mF79756BB41395A459CC5FD5CFFC517F65D93D86C(L_76, 5, L_77, (1.0f), 0, NULL);
		// cmd.SetGlobalTexture(ShaderConstants._ColorTexture, source);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_78 = ___cmd1;
		int32_t L_79 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____ColorTexture_17;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_80 = ___source2;
		NullCheck(L_78);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_78, L_79, L_80, NULL);
		// DrawFullscreenMesh(cmd, material, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_81 = ___cmd1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_82 = V_2;
		PostProcessPass_DrawFullscreenMesh_mAB97FB8B3CFF3DE88BA8D04863BB0EFCA32CEEA7(__this, L_81, L_82, 0, NULL);
		// cmd.SetRenderTarget(new RenderTargetIdentifier(ShaderConstants._BlendTexture, 0, CubemapFace.Unknown, -1),
		//     RenderBufferLoadAction.DontCare, RenderBufferStoreAction.Store, stencil,
		//     RenderBufferLoadAction.Load, RenderBufferStoreAction.DontCare);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_83 = ___cmd1;
		int32_t L_84 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BlendTexture_16;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_85;
		memset((&L_85), 0, sizeof(L_85));
		RenderTargetIdentifier__ctor_mAFAC5FB016609A5D4E07FCEC360D113B9C8D7ECF((&L_85), L_84, 0, (-1), (-1), /*hidden argument*/NULL);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_86 = V_3;
		NullCheck(L_83);
		CommandBuffer_SetRenderTarget_m43B883C6477E59A65A7FDF142EC347538EA6A57B(L_83, L_85, 2, 0, L_86, 0, 3, NULL);
		// cmd.ClearRenderTarget(false, true, Color.clear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_87 = ___cmd1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_88;
		L_88 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		NullCheck(L_87);
		CommandBuffer_ClearRenderTarget_mABBE498A16DCEADCAA8F5DB50073012F74D03F14(L_87, (bool)0, (bool)1, L_88, NULL);
		// cmd.SetGlobalTexture(ShaderConstants._ColorTexture, ShaderConstants._EdgeTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_89 = ___cmd1;
		int32_t L_90 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____ColorTexture_17;
		int32_t L_91 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____EdgeTexture_15;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_92;
		L_92 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_91, NULL);
		NullCheck(L_89);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_89, L_90, L_92, NULL);
		// DrawFullscreenMesh(cmd, material, 1);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_93 = ___cmd1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94 = V_2;
		PostProcessPass_DrawFullscreenMesh_mAB97FB8B3CFF3DE88BA8D04863BB0EFCA32CEEA7(__this, L_93, L_94, 1, NULL);
		// cmd.SetRenderTarget(new RenderTargetIdentifier(destination, 0, CubemapFace.Unknown, -1),
		//     RenderBufferLoadAction.DontCare, RenderBufferStoreAction.Store,
		//     RenderBufferLoadAction.DontCare, RenderBufferStoreAction.DontCare);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_95 = ___cmd1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_96 = ___destination3;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_97;
		memset((&L_97), 0, sizeof(L_97));
		RenderTargetIdentifier__ctor_m79A7348AF351A912E617BF9C8A44A766648C80FB((&L_97), L_96, 0, (-1), (-1), /*hidden argument*/NULL);
		NullCheck(L_95);
		CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C(L_95, L_97, 2, 0, 2, 3, NULL);
		// cmd.SetGlobalTexture(ShaderConstants._ColorTexture, source);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_98 = ___cmd1;
		int32_t L_99 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____ColorTexture_17;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_100 = ___source2;
		NullCheck(L_98);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_98, L_99, L_100, NULL);
		// cmd.SetGlobalTexture(ShaderConstants._BlendTexture, ShaderConstants._BlendTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_101 = ___cmd1;
		int32_t L_102 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BlendTexture_16;
		int32_t L_103 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BlendTexture_16;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_104;
		L_104 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_103, NULL);
		NullCheck(L_101);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_101, L_102, L_104, NULL);
		// DrawFullscreenMesh(cmd, material, 2);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_105 = ___cmd1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106 = V_2;
		PostProcessPass_DrawFullscreenMesh_mAB97FB8B3CFF3DE88BA8D04863BB0EFCA32CEEA7(__this, L_105, L_106, 2, NULL);
		// cmd.ReleaseTemporaryRT(ShaderConstants._EdgeTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_107 = ___cmd1;
		int32_t L_108 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____EdgeTexture_15;
		NullCheck(L_107);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_107, L_108, NULL);
		// cmd.ReleaseTemporaryRT(ShaderConstants._BlendTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_109 = ___cmd1;
		int32_t L_110 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BlendTexture_16;
		NullCheck(L_109);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_109, L_110, NULL);
		// cmd.SetViewProjectionMatrices(camera.worldToCameraMatrix, camera.projectionMatrix);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_111 = ___cmd1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_112 = V_0;
		NullCheck(L_112);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_113;
		L_113 = Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40(L_112, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_114 = V_0;
		NullCheck(L_114);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_115;
		L_115 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_114, NULL);
		NullCheck(L_111);
		CommandBuffer_SetViewProjectionMatrices_m50A472F193C13207D81B5EC8FB007F76E36A8C75(L_111, L_113, L_115, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DoDepthOfField(UnityEngine.Camera,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DoDepthOfField_m492D94D0E88A7531264051382F38916842E57D6F (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_DepthOfField.mode.value == DepthOfFieldMode.Gaussian)
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_0 = __this->___m_DepthOfField_40;
		NullCheck(L_0);
		DepthOfFieldModeParameter_t2AC87B0A41A5C9BB872A9E9D7913C262F9DA4E26* L_1 = L_0->___mode_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Rendering.Universal.DepthOfFieldMode>::get_value() */, L_1);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// DoGaussianDepthOfField(camera, cmd, source, destination, pixelRect);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ___camera0;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_5 = ___cmd1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_6 = ___source2;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_7 = ___destination3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = ___pixelRect4;
		PostProcessPass_DoGaussianDepthOfField_m0F509B9DD92DEAA39E092F1AEC1DE9084F56CCD9(__this, L_4, L_5, L_6, L_7, L_8, NULL);
		goto IL_004c;
	}

IL_0028:
	{
		// else if (m_DepthOfField.mode.value == DepthOfFieldMode.Bokeh)
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_9 = __this->___m_DepthOfField_40;
		NullCheck(L_9);
		DepthOfFieldModeParameter_t2AC87B0A41A5C9BB872A9E9D7913C262F9DA4E26* L_10 = L_9->___mode_7;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Rendering.Universal.DepthOfFieldMode>::get_value() */, L_10);
		V_1 = (bool)((((int32_t)L_11) == ((int32_t)2))? 1 : 0);
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		// DoBokehDepthOfField(cmd, source, destination, pixelRect);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_13 = ___cmd1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_14 = ___source2;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_15 = ___destination3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16 = ___pixelRect4;
		PostProcessPass_DoBokehDepthOfField_m9F432BB1FB34528C85BCF915A766FA52CEE133A2(__this, L_13, L_14, L_15, L_16, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DoGaussianDepthOfField(UnityEngine.Camera,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DoGaussianDepthOfField_m0F509B9DD92DEAA39E092F1AEC1DE9084F56CCD9 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// int downSample = 2;
		V_0 = 2;
		// var material = m_Materials.gaussianDepthOfField;
		MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_0 = __this->___m_Materials_38;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = L_0->___gaussianDepthOfField_2;
		V_1 = L_1;
		// int wh = m_Descriptor.width / downSample;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_2 = (&__this->___m_Descriptor_29);
		int32_t L_3;
		L_3 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_2, NULL);
		int32_t L_4 = V_0;
		V_2 = ((int32_t)(L_3/L_4));
		// int hh = m_Descriptor.height / downSample;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_5 = (&__this->___m_Descriptor_29);
		int32_t L_6;
		L_6 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_5, NULL);
		int32_t L_7 = V_0;
		V_3 = ((int32_t)(L_6/L_7));
		// float farStart = m_DepthOfField.gaussianStart.value;
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_8 = __this->___m_DepthOfField_40;
		NullCheck(L_8);
		MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* L_9 = L_8->___gaussianStart_8;
		NullCheck(L_9);
		float L_10;
		L_10 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_9);
		V_4 = L_10;
		// float farEnd = Mathf.Max(farStart, m_DepthOfField.gaussianEnd.value);
		float L_11 = V_4;
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_12 = __this->___m_DepthOfField_40;
		NullCheck(L_12);
		MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* L_13 = L_12->___gaussianEnd_9;
		NullCheck(L_13);
		float L_14;
		L_14 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_13);
		float L_15;
		L_15 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_11, L_14, NULL);
		V_5 = L_15;
		// float maxRadius = m_DepthOfField.gaussianMaxRadius.value * (wh / 1080f);
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_16 = __this->___m_DepthOfField_40;
		NullCheck(L_16);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_17 = L_16->___gaussianMaxRadius_10;
		NullCheck(L_17);
		float L_18;
		L_18 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_17);
		int32_t L_19 = V_2;
		V_6 = ((float)il2cpp_codegen_multiply(L_18, ((float)(((float)L_19)/(1080.0f)))));
		// maxRadius = Mathf.Min(maxRadius, 2f);
		float L_20 = V_6;
		float L_21;
		L_21 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_20, (2.0f), NULL);
		V_6 = L_21;
		// CoreUtils.SetKeyword(material, ShaderKeywordStrings.HighQualitySampling, m_DepthOfField.highQualitySampling.value);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_23 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___HighQualitySampling_49;
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_24 = __this->___m_DepthOfField_40;
		NullCheck(L_24);
		BoolParameter_tAA460C5A72ADBDDB4519BFF0BA040EC202E14E95* L_25 = L_24->___highQualitySampling_11;
		NullCheck(L_25);
		bool L_26;
		L_26 = VirtualFuncInvoker0< bool >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Boolean>::get_value() */, L_25);
		il2cpp_codegen_runtime_class_init_inline(CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		CoreUtils_SetKeyword_m7F886C529A9DEC48A568FA4FFD4CF789AA294239(L_22, L_23, L_26, NULL);
		// material.SetVector(ShaderConstants._CoCParams, new Vector3(farStart, farEnd, maxRadius));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_28 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____CoCParams_7;
		float L_29 = V_4;
		float L_30 = V_5;
		float L_31 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), L_29, L_30, L_31, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33;
		L_33 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_32, NULL);
		NullCheck(L_27);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_27, L_28, L_33, NULL);
		// cmd.GetTemporaryRT(ShaderConstants._FullCoCTexture, GetCompatibleDescriptor(m_Descriptor.width, m_Descriptor.height, m_GaussianCoCFormat), FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_34 = ___cmd1;
		int32_t L_35 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullCoCTexture_4;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_36 = (&__this->___m_Descriptor_29);
		int32_t L_37;
		L_37 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_36, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_38 = (&__this->___m_Descriptor_29);
		int32_t L_39;
		L_39 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_38, NULL);
		int32_t L_40 = __this->___m_GaussianCoCFormat_55;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_41;
		L_41 = PostProcessPass_GetCompatibleDescriptor_m9FE5C15264300379BC9D4B16DE669925264801BA(__this, L_37, L_39, L_40, 0, NULL);
		NullCheck(L_34);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_34, L_35, L_41, 1, NULL);
		// cmd.GetTemporaryRT(ShaderConstants._HalfCoCTexture, GetCompatibleDescriptor(wh, hh, m_GaussianCoCFormat), FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_42 = ___cmd1;
		int32_t L_43 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____HalfCoCTexture_5;
		int32_t L_44 = V_2;
		int32_t L_45 = V_3;
		int32_t L_46 = __this->___m_GaussianCoCFormat_55;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_47;
		L_47 = PostProcessPass_GetCompatibleDescriptor_m9FE5C15264300379BC9D4B16DE669925264801BA(__this, L_44, L_45, L_46, 0, NULL);
		NullCheck(L_42);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_42, L_43, L_47, 1, NULL);
		// cmd.GetTemporaryRT(ShaderConstants._PingTexture, GetCompatibleDescriptor(wh, hh, m_DefaultHDRFormat), FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_48 = ___cmd1;
		int32_t L_49 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PingTexture_11;
		int32_t L_50 = V_2;
		int32_t L_51 = V_3;
		int32_t L_52 = __this->___m_DefaultHDRFormat_52;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_53;
		L_53 = PostProcessPass_GetCompatibleDescriptor_m9FE5C15264300379BC9D4B16DE669925264801BA(__this, L_50, L_51, L_52, 0, NULL);
		NullCheck(L_48);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_48, L_49, L_53, 1, NULL);
		// cmd.GetTemporaryRT(ShaderConstants._PongTexture, GetCompatibleDescriptor(wh, hh, m_DefaultHDRFormat), FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_54 = ___cmd1;
		int32_t L_55 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PongTexture_10;
		int32_t L_56 = V_2;
		int32_t L_57 = V_3;
		int32_t L_58 = __this->___m_DefaultHDRFormat_52;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_59;
		L_59 = PostProcessPass_GetCompatibleDescriptor_m9FE5C15264300379BC9D4B16DE669925264801BA(__this, L_56, L_57, L_58, 0, NULL);
		NullCheck(L_54);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_54, L_55, L_59, 1, NULL);
		// PostProcessUtils.SetSourceSize(cmd, m_Descriptor);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_60 = ___cmd1;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_61 = __this->___m_Descriptor_29;
		PostProcessUtils_SetSourceSize_m5EF5F2F3FE68CFDEFF201F07CBD403BBD96F0E35(L_60, L_61, NULL);
		// cmd.SetGlobalVector(ShaderConstants._DownSampleScaleFactor, new Vector4(1.0f / downSample, 1.0f / downSample, downSample, downSample));
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_62 = ___cmd1;
		int32_t L_63 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____DownSampleScaleFactor_36;
		int32_t L_64 = V_0;
		int32_t L_65 = V_0;
		int32_t L_66 = V_0;
		int32_t L_67 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_68), ((float)((1.0f)/((float)L_64))), ((float)((1.0f)/((float)L_65))), ((float)L_66), ((float)L_67), /*hidden argument*/NULL);
		NullCheck(L_62);
		CommandBuffer_SetGlobalVector_mBE497AA5F5C9E71A3F353BA1BDB97D8AC4B75FDA(L_62, L_63, L_68, NULL);
		// Blit(cmd, source, ShaderConstants._FullCoCTexture, material, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_69 = ___cmd1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_70 = ___source2;
		int32_t L_71 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullCoCTexture_4;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_72;
		L_72 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_71, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73 = V_1;
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_69, L_70, L_72, L_73, 0, NULL);
		// m_MRT2[0] = ShaderConstants._HalfCoCTexture;
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_74 = __this->___m_MRT2_59;
		int32_t L_75 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____HalfCoCTexture_5;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_76;
		L_76 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_75, NULL);
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(0), (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B)L_76);
		// m_MRT2[1] = ShaderConstants._PingTexture;
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_77 = __this->___m_MRT2_59;
		int32_t L_78 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PingTexture_11;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_79;
		L_79 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_78, NULL);
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(1), (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B)L_79);
		// cmd.SetViewProjectionMatrices(Matrix4x4.identity, Matrix4x4.identity);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_80 = ___cmd1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_81;
		L_81 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_82;
		L_82 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		NullCheck(L_80);
		CommandBuffer_SetViewProjectionMatrices_m50A472F193C13207D81B5EC8FB007F76E36A8C75(L_80, L_81, L_82, NULL);
		// cmd.SetViewport(pixelRect);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_83 = ___cmd1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_84 = ___pixelRect4;
		NullCheck(L_83);
		CommandBuffer_SetViewport_m3BCCABB7493369D88DB15EE43C41D9858AE2574D(L_83, L_84, NULL);
		// cmd.SetGlobalTexture(ShaderConstants._ColorTexture, source);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_85 = ___cmd1;
		int32_t L_86 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____ColorTexture_17;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_87 = ___source2;
		NullCheck(L_85);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_85, L_86, L_87, NULL);
		// cmd.SetGlobalTexture(ShaderConstants._FullCoCTexture, ShaderConstants._FullCoCTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_88 = ___cmd1;
		int32_t L_89 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullCoCTexture_4;
		int32_t L_90 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullCoCTexture_4;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_91;
		L_91 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_90, NULL);
		NullCheck(L_88);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_88, L_89, L_91, NULL);
		// cmd.SetRenderTarget(m_MRT2, ShaderConstants._HalfCoCTexture, 0, CubemapFace.Unknown, -1);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_92 = ___cmd1;
		RenderTargetIdentifierU5BU5D_t179798C153B7CE381B41C57863F98CB24023C4CE* L_93 = __this->___m_MRT2_59;
		int32_t L_94 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____HalfCoCTexture_5;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_95;
		L_95 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_94, NULL);
		NullCheck(L_92);
		CommandBuffer_SetRenderTarget_m2A11A517DE44DC5F37BA08EF86ED1DCABAC4CC1E(L_92, L_93, L_95, 0, (-1), (-1), NULL);
		// DrawFullscreenMesh(cmd, material, 1);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_96 = ___cmd1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_97 = V_1;
		PostProcessPass_DrawFullscreenMesh_mAB97FB8B3CFF3DE88BA8D04863BB0EFCA32CEEA7(__this, L_96, L_97, 1, NULL);
		// cmd.SetViewProjectionMatrices(camera.worldToCameraMatrix, camera.projectionMatrix);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_98 = ___cmd1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_99 = ___camera0;
		NullCheck(L_99);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_100;
		L_100 = Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40(L_99, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_101 = ___camera0;
		NullCheck(L_101);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_102;
		L_102 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_101, NULL);
		NullCheck(L_98);
		CommandBuffer_SetViewProjectionMatrices_m50A472F193C13207D81B5EC8FB007F76E36A8C75(L_98, L_100, L_102, NULL);
		// cmd.SetGlobalTexture(ShaderConstants._HalfCoCTexture, ShaderConstants._HalfCoCTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_103 = ___cmd1;
		int32_t L_104 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____HalfCoCTexture_5;
		int32_t L_105 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____HalfCoCTexture_5;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_106;
		L_106 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_105, NULL);
		NullCheck(L_103);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_103, L_104, L_106, NULL);
		// Blit(cmd, ShaderConstants._PingTexture, ShaderConstants._PongTexture, material, 2);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_107 = ___cmd1;
		int32_t L_108 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PingTexture_11;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_109;
		L_109 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_108, NULL);
		int32_t L_110 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PongTexture_10;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_111;
		L_111 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_110, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_112 = V_1;
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_107, L_109, L_111, L_112, 2, NULL);
		// Blit(cmd, ShaderConstants._PongTexture, BlitDstDiscardContent(cmd, ShaderConstants._PingTexture), material, 3);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_113 = ___cmd1;
		int32_t L_114 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PongTexture_10;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_115;
		L_115 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_114, NULL);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_116 = ___cmd1;
		int32_t L_117 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PingTexture_11;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_118;
		L_118 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_117, NULL);
		int32_t L_119;
		L_119 = PostProcessPass_BlitDstDiscardContent_m0CD67D1CAF9AC54EB998A4AEC3D6178680781C59(__this, L_116, L_118, NULL);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_120;
		L_120 = RenderTargetIdentifier_op_Implicit_m3E2366E36F14173DBEED75591978EBE1F01A1325(L_119, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_121 = V_1;
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_113, L_115, L_120, L_121, 3, NULL);
		// cmd.SetGlobalTexture(ShaderConstants._ColorTexture, ShaderConstants._PingTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_122 = ___cmd1;
		int32_t L_123 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____ColorTexture_17;
		int32_t L_124 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PingTexture_11;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_125;
		L_125 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_124, NULL);
		NullCheck(L_122);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_122, L_123, L_125, NULL);
		// cmd.SetGlobalTexture(ShaderConstants._FullCoCTexture, ShaderConstants._FullCoCTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_126 = ___cmd1;
		int32_t L_127 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullCoCTexture_4;
		int32_t L_128 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullCoCTexture_4;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_129;
		L_129 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_128, NULL);
		NullCheck(L_126);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_126, L_127, L_129, NULL);
		// Blit(cmd, source, BlitDstDiscardContent(cmd, destination), material, 4);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_130 = ___cmd1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_131 = ___source2;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_132 = ___cmd1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_133 = ___destination3;
		int32_t L_134;
		L_134 = PostProcessPass_BlitDstDiscardContent_m0CD67D1CAF9AC54EB998A4AEC3D6178680781C59(__this, L_132, L_133, NULL);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_135;
		L_135 = RenderTargetIdentifier_op_Implicit_m3E2366E36F14173DBEED75591978EBE1F01A1325(L_134, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136 = V_1;
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_130, L_131, L_135, L_136, 4, NULL);
		// cmd.ReleaseTemporaryRT(ShaderConstants._FullCoCTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_137 = ___cmd1;
		int32_t L_138 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullCoCTexture_4;
		NullCheck(L_137);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_137, L_138, NULL);
		// cmd.ReleaseTemporaryRT(ShaderConstants._HalfCoCTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_139 = ___cmd1;
		int32_t L_140 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____HalfCoCTexture_5;
		NullCheck(L_139);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_139, L_140, NULL);
		// cmd.ReleaseTemporaryRT(ShaderConstants._PingTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_141 = ___cmd1;
		int32_t L_142 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PingTexture_11;
		NullCheck(L_141);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_141, L_142, NULL);
		// cmd.ReleaseTemporaryRT(ShaderConstants._PongTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_143 = ___cmd1;
		int32_t L_144 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PongTexture_10;
		NullCheck(L_143);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_143, L_144, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::PrepareBokehKernel(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_PrepareBokehKernel_m1C36A697FADC81D2A1E16E92B8A1237382D6B59F (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, float ___maxRadius0, float ___rcpAspect1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	bool V_22 = false;
	bool V_23 = false;
	{
		// if (m_BokehKernel == null)
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = __this->___m_BokehKernel_60;
		V_4 = (bool)((((RuntimeObject*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// m_BokehKernel = new Vector4[42];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_2 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)42));
		__this->___m_BokehKernel_60 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BokehKernel_60), (void*)L_2);
	}

IL_001d:
	{
		// int idx = 0;
		V_0 = 0;
		// float bladeCount = m_DepthOfField.bladeCount.value;
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_3 = __this->___m_DepthOfField_40;
		NullCheck(L_3);
		ClampedIntParameter_tAF77FC44E522B137734644AE2E3F702580033B8E* L_4 = L_3->___bladeCount_15;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32>::get_value() */, L_4);
		V_1 = ((float)L_5);
		// float curvature = 1f - m_DepthOfField.bladeCurvature.value;
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_6 = __this->___m_DepthOfField_40;
		NullCheck(L_6);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_7 = L_6->___bladeCurvature_16;
		NullCheck(L_7);
		float L_8;
		L_8 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_7);
		V_2 = ((float)il2cpp_codegen_subtract((1.0f), L_8));
		// float rotation = m_DepthOfField.bladeRotation.value * Mathf.Deg2Rad;
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_9 = __this->___m_DepthOfField_40;
		NullCheck(L_9);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_10 = L_9->___bladeRotation_17;
		NullCheck(L_10);
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_10);
		V_3 = ((float)il2cpp_codegen_multiply(L_11, (0.0174532924f)));
		// for (int ring = 1; ring < kRings; ring++)
		V_5 = 1;
		goto IL_0165;
	}

IL_0067:
	{
		// float bias = 1f / kPointsPerRing;
		V_6 = (0.142857149f);
		// float radius = (ring + bias) / (kRings - 1f + bias);
		int32_t L_12 = V_5;
		float L_13 = V_6;
		float L_14 = V_6;
		V_7 = ((float)(((float)il2cpp_codegen_add(((float)L_12), L_13))/((float)il2cpp_codegen_add((3.0f), L_14))));
		// int points = ring * kPointsPerRing;
		int32_t L_15 = V_5;
		V_8 = ((int32_t)il2cpp_codegen_multiply(L_15, 7));
		// for (int point = 0; point < points; point++)
		V_9 = 0;
		goto IL_014f;
	}

IL_008e:
	{
		// float phi = 2f * PI * point / points;
		int32_t L_16 = V_9;
		int32_t L_17 = V_8;
		V_10 = ((float)(((float)il2cpp_codegen_multiply((6.28318548f), ((float)L_16)))/((float)L_17)));
		// float nt = Mathf.Cos(PI / bladeCount);
		float L_18 = V_1;
		float L_19;
		L_19 = cosf(((float)((3.14159274f)/L_18)));
		V_11 = L_19;
		// float dt = Mathf.Cos(phi - (TWO_PI / bladeCount) * Mathf.Floor((bladeCount * phi + Mathf.PI) / TWO_PI));
		float L_20 = V_10;
		float L_21 = V_1;
		float L_22 = V_1;
		float L_23 = V_10;
		float L_24;
		L_24 = floorf(((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_22, L_23)), (3.14159274f)))/(6.28318548f))));
		float L_25;
		L_25 = cosf(((float)il2cpp_codegen_subtract(L_20, ((float)il2cpp_codegen_multiply(((float)((6.28318548f)/L_21)), L_24)))));
		V_12 = L_25;
		// float r = radius * Mathf.Pow(nt / dt, curvature);
		float L_26 = V_7;
		float L_27 = V_11;
		float L_28 = V_12;
		float L_29 = V_2;
		float L_30;
		L_30 = powf(((float)(L_27/L_28)), L_29);
		V_13 = ((float)il2cpp_codegen_multiply(L_26, L_30));
		// float u = r * Mathf.Cos(phi - rotation);
		float L_31 = V_13;
		float L_32 = V_10;
		float L_33 = V_3;
		float L_34;
		L_34 = cosf(((float)il2cpp_codegen_subtract(L_32, L_33)));
		V_14 = ((float)il2cpp_codegen_multiply(L_31, L_34));
		// float v = r * Mathf.Sin(phi - rotation);
		float L_35 = V_13;
		float L_36 = V_10;
		float L_37 = V_3;
		float L_38;
		L_38 = sinf(((float)il2cpp_codegen_subtract(L_36, L_37)));
		V_15 = ((float)il2cpp_codegen_multiply(L_35, L_38));
		// float uRadius = u * maxRadius;
		float L_39 = V_14;
		float L_40 = ___maxRadius0;
		V_16 = ((float)il2cpp_codegen_multiply(L_39, L_40));
		// float vRadius = v * maxRadius;
		float L_41 = V_15;
		float L_42 = ___maxRadius0;
		V_17 = ((float)il2cpp_codegen_multiply(L_41, L_42));
		// float uRadiusPowTwo = uRadius * uRadius;
		float L_43 = V_16;
		float L_44 = V_16;
		V_18 = ((float)il2cpp_codegen_multiply(L_43, L_44));
		// float vRadiusPowTwo = vRadius * vRadius;
		float L_45 = V_17;
		float L_46 = V_17;
		V_19 = ((float)il2cpp_codegen_multiply(L_45, L_46));
		// float kernelLength = Mathf.Sqrt((uRadiusPowTwo + vRadiusPowTwo));
		float L_47 = V_18;
		float L_48 = V_19;
		float L_49;
		L_49 = sqrtf(((float)il2cpp_codegen_add(L_47, L_48)));
		V_20 = L_49;
		// float uRCP = uRadius * rcpAspect;
		float L_50 = V_16;
		float L_51 = ___rcpAspect1;
		V_21 = ((float)il2cpp_codegen_multiply(L_50, L_51));
		// m_BokehKernel[idx] = new Vector4(uRadius, vRadius, kernelLength, uRCP);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_52 = __this->___m_BokehKernel_60;
		int32_t L_53 = V_0;
		float L_54 = V_16;
		float L_55 = V_17;
		float L_56 = V_20;
		float L_57 = V_21;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_58), L_54, L_55, L_56, L_57, /*hidden argument*/NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_58);
		// idx++;
		int32_t L_59 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		// for (int point = 0; point < points; point++)
		int32_t L_60 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_014f:
	{
		// for (int point = 0; point < points; point++)
		int32_t L_61 = V_9;
		int32_t L_62 = V_8;
		V_22 = (bool)((((int32_t)L_61) < ((int32_t)L_62))? 1 : 0);
		bool L_63 = V_22;
		if (L_63)
		{
			goto IL_008e;
		}
	}
	{
		// for (int ring = 1; ring < kRings; ring++)
		int32_t L_64 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_0165:
	{
		// for (int ring = 1; ring < kRings; ring++)
		int32_t L_65 = V_5;
		V_23 = (bool)((((int32_t)L_65) < ((int32_t)4))? 1 : 0);
		bool L_66 = V_23;
		if (L_66)
		{
			goto IL_0067;
		}
	}
	{
		// }
		return;
	}
}
// System.Single UnityEngine.Rendering.Universal.Internal.PostProcessPass::GetMaxBokehRadiusInPixels(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PostProcessPass_GetMaxBokehRadiusInPixels_m56705A12AE2306C52AA6C96D28D09A5F6F2EC2F4 (float ___viewportHeight0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return Mathf.Min(0.05f, kRadiusInPixels / viewportHeight);
		float L_0 = ___viewportHeight0;
		float L_1;
		L_1 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((0.0500000007f), ((float)((14.0f)/L_0)), NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DoBokehDepthOfField(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DoBokehDepthOfField_m9F432BB1FB34528C85BCF915A766FA52CEE133A2 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination2, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___pixelRect3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	bool V_12 = false;
	int32_t G_B4_0 = 0;
	{
		// int downSample = 2;
		V_0 = 2;
		// var material = m_Materials.bokehDepthOfField;
		MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_0 = __this->___m_Materials_38;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = L_0->___bokehDepthOfField_3;
		V_1 = L_1;
		// int wh = m_Descriptor.width / downSample;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_2 = (&__this->___m_Descriptor_29);
		int32_t L_3;
		L_3 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_2, NULL);
		int32_t L_4 = V_0;
		V_2 = ((int32_t)(L_3/L_4));
		// int hh = m_Descriptor.height / downSample;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_5 = (&__this->___m_Descriptor_29);
		int32_t L_6;
		L_6 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_5, NULL);
		int32_t L_7 = V_0;
		V_3 = ((int32_t)(L_6/L_7));
		// float F = m_DepthOfField.focalLength.value / 1000f;
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_8 = __this->___m_DepthOfField_40;
		NullCheck(L_8);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_9 = L_8->___focalLength_14;
		NullCheck(L_9);
		float L_10;
		L_10 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_9);
		V_4 = ((float)(L_10/(1000.0f)));
		// float A = m_DepthOfField.focalLength.value / m_DepthOfField.aperture.value;
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_11 = __this->___m_DepthOfField_40;
		NullCheck(L_11);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_12 = L_11->___focalLength_14;
		NullCheck(L_12);
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_12);
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_14 = __this->___m_DepthOfField_40;
		NullCheck(L_14);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_15 = L_14->___aperture_13;
		NullCheck(L_15);
		float L_16;
		L_16 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_15);
		V_5 = ((float)(L_13/L_16));
		// float P = m_DepthOfField.focusDistance.value;
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_17 = __this->___m_DepthOfField_40;
		NullCheck(L_17);
		MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* L_18 = L_17->___focusDistance_12;
		NullCheck(L_18);
		float L_19;
		L_19 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_18);
		V_6 = L_19;
		// float maxCoC = (A * F) / (P - F);
		float L_20 = V_5;
		float L_21 = V_4;
		float L_22 = V_6;
		float L_23 = V_4;
		V_7 = ((float)(((float)il2cpp_codegen_multiply(L_20, L_21))/((float)il2cpp_codegen_subtract(L_22, L_23))));
		// float maxRadius = GetMaxBokehRadiusInPixels(m_Descriptor.height);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_24 = (&__this->___m_Descriptor_29);
		int32_t L_25;
		L_25 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var);
		float L_26;
		L_26 = PostProcessPass_GetMaxBokehRadiusInPixels_m56705A12AE2306C52AA6C96D28D09A5F6F2EC2F4_inline(((float)L_25), NULL);
		V_8 = L_26;
		// float rcpAspect = 1f / (wh / (float)hh);
		int32_t L_27 = V_2;
		int32_t L_28 = V_3;
		V_9 = ((float)((1.0f)/((float)(((float)L_27)/((float)L_28)))));
		// CoreUtils.SetKeyword(material, ShaderKeywordStrings.UseFastSRGBLinearConversion, m_UseFastSRGBLinearConversion);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_30 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___UseFastSRGBLinearConversion_23;
		bool L_31 = __this->___m_UseFastSRGBLinearConversion_68;
		il2cpp_codegen_runtime_class_init_inline(CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		CoreUtils_SetKeyword_m7F886C529A9DEC48A568FA4FFD4CF789AA294239(L_29, L_30, L_31, NULL);
		// cmd.SetGlobalVector(ShaderConstants._CoCParams, new Vector4(P, maxCoC, maxRadius, rcpAspect));
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_32 = ___cmd0;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_33 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____CoCParams_7;
		float L_34 = V_6;
		float L_35 = V_7;
		float L_36 = V_8;
		float L_37 = V_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_38), L_34, L_35, L_36, L_37, /*hidden argument*/NULL);
		NullCheck(L_32);
		CommandBuffer_SetGlobalVector_mBE497AA5F5C9E71A3F353BA1BDB97D8AC4B75FDA(L_32, L_33, L_38, NULL);
		// int hash = m_DepthOfField.GetHashCode();
		DepthOfField_t7CFE75BDAF1877EF64F50E70D621A893CF3637EF* L_39 = __this->___m_DepthOfField_40;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_39);
		V_10 = L_40;
		// if (hash != m_BokehHash || maxRadius != m_BokehMaxRadius || rcpAspect != m_BokehRCPAspect)
		int32_t L_41 = V_10;
		int32_t L_42 = __this->___m_BokehHash_61;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_0100;
		}
	}
	{
		float L_43 = V_8;
		float L_44 = __this->___m_BokehMaxRadius_62;
		if ((!(((float)L_43) == ((float)L_44))))
		{
			goto IL_0100;
		}
	}
	{
		float L_45 = V_9;
		float L_46 = __this->___m_BokehRCPAspect_63;
		G_B4_0 = ((((int32_t)((((float)L_45) == ((float)L_46))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B4_0 = 1;
	}

IL_0101:
	{
		V_12 = (bool)G_B4_0;
		bool L_47 = V_12;
		if (!L_47)
		{
			goto IL_012c;
		}
	}
	{
		// m_BokehHash = hash;
		int32_t L_48 = V_10;
		__this->___m_BokehHash_61 = L_48;
		// m_BokehMaxRadius = maxRadius;
		float L_49 = V_8;
		__this->___m_BokehMaxRadius_62 = L_49;
		// m_BokehRCPAspect = rcpAspect;
		float L_50 = V_9;
		__this->___m_BokehRCPAspect_63 = L_50;
		// PrepareBokehKernel(maxRadius, rcpAspect);
		float L_51 = V_8;
		float L_52 = V_9;
		PostProcessPass_PrepareBokehKernel_m1C36A697FADC81D2A1E16E92B8A1237382D6B59F(__this, L_51, L_52, NULL);
	}

IL_012c:
	{
		// cmd.SetGlobalVectorArray(ShaderConstants._BokehKernel, m_BokehKernel);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_53 = ___cmd0;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_54 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BokehKernel_8;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_55 = __this->___m_BokehKernel_60;
		NullCheck(L_53);
		CommandBuffer_SetGlobalVectorArray_m8CC41D9A9A5E2D5EF192D0852E97829DEA07A217(L_53, L_54, L_55, NULL);
		// cmd.GetTemporaryRT(ShaderConstants._FullCoCTexture, GetCompatibleDescriptor(m_Descriptor.width, m_Descriptor.height, GraphicsFormat.R8_UNorm), FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_56 = ___cmd0;
		int32_t L_57 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullCoCTexture_4;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_58 = (&__this->___m_Descriptor_29);
		int32_t L_59;
		L_59 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_58, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_60 = (&__this->___m_Descriptor_29);
		int32_t L_61;
		L_61 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_60, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_62;
		L_62 = PostProcessPass_GetCompatibleDescriptor_m9FE5C15264300379BC9D4B16DE669925264801BA(__this, L_59, L_61, 5, 0, NULL);
		NullCheck(L_56);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_56, L_57, L_62, 1, NULL);
		// cmd.GetTemporaryRT(ShaderConstants._PingTexture, GetCompatibleDescriptor(wh, hh, GraphicsFormat.R16G16B16A16_SFloat), FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_63 = ___cmd0;
		int32_t L_64 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PingTexture_11;
		int32_t L_65 = V_2;
		int32_t L_66 = V_3;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_67;
		L_67 = PostProcessPass_GetCompatibleDescriptor_m9FE5C15264300379BC9D4B16DE669925264801BA(__this, L_65, L_66, ((int32_t)48), 0, NULL);
		NullCheck(L_63);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_63, L_64, L_67, 1, NULL);
		// cmd.GetTemporaryRT(ShaderConstants._PongTexture, GetCompatibleDescriptor(wh, hh, GraphicsFormat.R16G16B16A16_SFloat), FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_68 = ___cmd0;
		int32_t L_69 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PongTexture_10;
		int32_t L_70 = V_2;
		int32_t L_71 = V_3;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_72;
		L_72 = PostProcessPass_GetCompatibleDescriptor_m9FE5C15264300379BC9D4B16DE669925264801BA(__this, L_70, L_71, ((int32_t)48), 0, NULL);
		NullCheck(L_68);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_68, L_69, L_72, 1, NULL);
		// PostProcessUtils.SetSourceSize(cmd, m_Descriptor);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_73 = ___cmd0;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_74 = __this->___m_Descriptor_29;
		PostProcessUtils_SetSourceSize_m5EF5F2F3FE68CFDEFF201F07CBD403BBD96F0E35(L_73, L_74, NULL);
		// cmd.SetGlobalVector(ShaderConstants._DownSampleScaleFactor, new Vector4(1.0f / downSample, 1.0f / downSample, downSample, downSample));
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_75 = ___cmd0;
		int32_t L_76 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____DownSampleScaleFactor_36;
		int32_t L_77 = V_0;
		int32_t L_78 = V_0;
		int32_t L_79 = V_0;
		int32_t L_80 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_81), ((float)((1.0f)/((float)L_77))), ((float)((1.0f)/((float)L_78))), ((float)L_79), ((float)L_80), /*hidden argument*/NULL);
		NullCheck(L_75);
		CommandBuffer_SetGlobalVector_mBE497AA5F5C9E71A3F353BA1BDB97D8AC4B75FDA(L_75, L_76, L_81, NULL);
		// float uvMargin = (1.0f / m_Descriptor.height) * downSample;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_82 = (&__this->___m_Descriptor_29);
		int32_t L_83;
		L_83 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_82, NULL);
		int32_t L_84 = V_0;
		V_11 = ((float)il2cpp_codegen_multiply(((float)((1.0f)/((float)L_83))), ((float)L_84)));
		// cmd.SetGlobalVector(ShaderConstants._BokehConstants, new Vector4(uvMargin, uvMargin * 2.0f));
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_85 = ___cmd0;
		int32_t L_86 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BokehConstants_9;
		float L_87 = V_11;
		float L_88 = V_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector4__ctor_m1FD55F67090B321AC9488CA325A72E454E6BCA37_inline((&L_89), L_87, ((float)il2cpp_codegen_multiply(L_88, (2.0f))), /*hidden argument*/NULL);
		NullCheck(L_85);
		CommandBuffer_SetGlobalVector_mBE497AA5F5C9E71A3F353BA1BDB97D8AC4B75FDA(L_85, L_86, L_89, NULL);
		// Blit(cmd, source, ShaderConstants._FullCoCTexture, material, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_90 = ___cmd0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_91 = ___source1;
		int32_t L_92 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullCoCTexture_4;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_93;
		L_93 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_92, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94 = V_1;
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_90, L_91, L_93, L_94, 0, NULL);
		// cmd.SetGlobalTexture(ShaderConstants._FullCoCTexture, ShaderConstants._FullCoCTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_95 = ___cmd0;
		int32_t L_96 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullCoCTexture_4;
		int32_t L_97 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullCoCTexture_4;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_98;
		L_98 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_97, NULL);
		NullCheck(L_95);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_95, L_96, L_98, NULL);
		// Blit(cmd, source, ShaderConstants._PingTexture, material, 1);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_99 = ___cmd0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_100 = ___source1;
		int32_t L_101 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PingTexture_11;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_102;
		L_102 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_101, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103 = V_1;
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_99, L_100, L_102, L_103, 1, NULL);
		// Blit(cmd, ShaderConstants._PingTexture, ShaderConstants._PongTexture, material, 2);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_104 = ___cmd0;
		int32_t L_105 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PingTexture_11;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_106;
		L_106 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_105, NULL);
		int32_t L_107 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PongTexture_10;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_108;
		L_108 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_107, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_109 = V_1;
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_104, L_106, L_108, L_109, 2, NULL);
		// Blit(cmd, ShaderConstants._PongTexture, BlitDstDiscardContent(cmd, ShaderConstants._PingTexture), material, 3);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_110 = ___cmd0;
		int32_t L_111 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PongTexture_10;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_112;
		L_112 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_111, NULL);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_113 = ___cmd0;
		int32_t L_114 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PingTexture_11;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_115;
		L_115 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_114, NULL);
		int32_t L_116;
		L_116 = PostProcessPass_BlitDstDiscardContent_m0CD67D1CAF9AC54EB998A4AEC3D6178680781C59(__this, L_113, L_115, NULL);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_117;
		L_117 = RenderTargetIdentifier_op_Implicit_m3E2366E36F14173DBEED75591978EBE1F01A1325(L_116, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_118 = V_1;
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_110, L_112, L_117, L_118, 3, NULL);
		// cmd.SetGlobalTexture(ShaderConstants._DofTexture, ShaderConstants._PingTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_119 = ___cmd0;
		int32_t L_120 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____DofTexture_6;
		int32_t L_121 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PingTexture_11;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_122;
		L_122 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_121, NULL);
		NullCheck(L_119);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_119, L_120, L_122, NULL);
		// Blit(cmd, source, BlitDstDiscardContent(cmd, destination), material, 4);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_123 = ___cmd0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_124 = ___source1;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_125 = ___cmd0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_126 = ___destination2;
		int32_t L_127;
		L_127 = PostProcessPass_BlitDstDiscardContent_m0CD67D1CAF9AC54EB998A4AEC3D6178680781C59(__this, L_125, L_126, NULL);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_128;
		L_128 = RenderTargetIdentifier_op_Implicit_m3E2366E36F14173DBEED75591978EBE1F01A1325(L_127, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129 = V_1;
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_123, L_124, L_128, L_129, 4, NULL);
		// cmd.ReleaseTemporaryRT(ShaderConstants._FullCoCTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_130 = ___cmd0;
		int32_t L_131 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullCoCTexture_4;
		NullCheck(L_130);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_130, L_131, NULL);
		// cmd.ReleaseTemporaryRT(ShaderConstants._PingTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_132 = ___cmd0;
		int32_t L_133 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PingTexture_11;
		NullCheck(L_132);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_132, L_133, NULL);
		// cmd.ReleaseTemporaryRT(ShaderConstants._PongTexture);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_134 = ___cmd0;
		int32_t L_135 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PongTexture_10;
		NullCheck(L_134);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_134, L_135, NULL);
		// }
		return;
	}
}
// System.Single UnityEngine.Rendering.Universal.Internal.PostProcessPass::GetLensFlareLightAttenuation(UnityEngine.Light,UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PostProcessPass_GetLensFlareLightAttenuation_mC42080722051CE28B6AF96E9CC2959E48D6F5D6D (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___wo2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		// if (light != null)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___light0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		// switch (light.type)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3 = ___light0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_3, NULL);
		V_2 = L_4;
		int32_t L_5 = V_2;
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002a:
	{
		// return LensFlareCommonSRP.ShapeAttenuationDirLight(light.transform.forward, wo);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_7 = ___light0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___wo2;
		il2cpp_codegen_runtime_class_init_inline(LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135_il2cpp_TypeInfo_var);
		float L_11;
		L_11 = LensFlareCommonSRP_ShapeAttenuationDirLight_m8D55129898412D0D60A6827F4BF3C7B2E20465E6(L_9, L_10, NULL);
		V_3 = L_11;
		goto IL_007c;
	}

IL_003e:
	{
		// return LensFlareCommonSRP.ShapeAttenuationPointLight();
		il2cpp_codegen_runtime_class_init_inline(LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135_il2cpp_TypeInfo_var);
		float L_12;
		L_12 = LensFlareCommonSRP_ShapeAttenuationPointLight_m4150B52B763097665D45A6705BA6C6C5422451D6(NULL);
		V_3 = L_12;
		goto IL_007c;
	}

IL_0046:
	{
		// return LensFlareCommonSRP.ShapeAttenuationSpotConeLight(light.transform.forward, wo, light.spotAngle, light.innerSpotAngle / 180.0f);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_13 = ___light0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___wo2;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = ___light0;
		NullCheck(L_17);
		float L_18;
		L_18 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_17, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___light0;
		NullCheck(L_19);
		float L_20;
		L_20 = Light_get_innerSpotAngle_mFDCE5C31ABF638A8B515F5088F12225D23D3406C(L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135_il2cpp_TypeInfo_var);
		float L_21;
		L_21 = LensFlareCommonSRP_ShapeAttenuationSpotConeLight_m5A146E8B6D38C860F5B0C5D40E337EEF3F054296(L_15, L_16, L_18, ((float)(L_20/(180.0f))), NULL);
		V_3 = L_21;
		goto IL_007c;
	}

IL_006c:
	{
		// return 1.0f;
		V_3 = (1.0f);
		goto IL_007c;
	}

IL_0074:
	{
		// return 1.0f;
		V_3 = (1.0f);
		goto IL_007c;
	}

IL_007c:
	{
		// }
		float L_22 = V_3;
		return L_22;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DoLensFlareDatadriven(UnityEngine.Camera,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,System.Boolean,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DoLensFlareDatadriven_m72A91017976E76EC614CCFE733B1B851BD51FF05 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source2, bool ___usePanini3, float ___paniniDistance4, float ___paniniCropToFit5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDoLensFlareDatadrivenU3Eb__69_0_m806687F2794508799B69BD9A750001C858762BE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE* G_B2_0 = NULL;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B2_2 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_4;
	memset((&G_B2_4), 0, sizeof(G_B2_4));
	int32_t G_B2_5 = 0;
	float G_B2_6 = 0.0f;
	float G_B2_7 = 0.0f;
	bool G_B2_8 = false;
	float G_B2_9 = 0.0f;
	float G_B2_10 = 0.0f;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B2_11 = NULL;
	LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135* G_B2_12 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_13 = NULL;
	Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE* G_B1_0 = NULL;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* G_B1_2 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_4;
	memset((&G_B1_4), 0, sizeof(G_B1_4));
	int32_t G_B1_5 = 0;
	float G_B1_6 = 0.0f;
	float G_B1_7 = 0.0f;
	bool G_B1_8 = false;
	float G_B1_9 = 0.0f;
	float G_B1_10 = 0.0f;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B1_11 = NULL;
	LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135* G_B1_12 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_13 = NULL;
	{
		// var gpuView = camera.worldToCameraMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40(L_0, NULL);
		V_0 = L_1;
		// var gpuNonJitteredProj = GL.GetGPUProjectionMatrix(camera.projectionMatrix, true);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___camera0;
		NullCheck(L_2);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_2, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = GL_GetGPUProjectionMatrix_m3B89D47134C77B9361DB3CDDFFDA276C1373DD2A(L_3, (bool)1, NULL);
		V_1 = L_4;
		// gpuView.SetColumn(3, new Vector4(0, 0, 0, 1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_5), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234((&V_0), 3, L_5, NULL);
		// var gpuVP = gpuNonJitteredProj * camera.worldToCameraMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = ___camera0;
		NullCheck(L_7);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8;
		L_8 = Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40(L_7, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_6, L_8, NULL);
		V_2 = L_9;
		// LensFlareCommonSRP.DoLensFlareDataDrivenCommon(m_Materials.lensFlareDataDriven, LensFlareCommonSRP.Instance, camera, (float)m_Descriptor.width, (float)m_Descriptor.height,
		//     usePanini, paniniDistance, paniniCropToFit,
		//     true,
		//     camera.transform.position,
		//     gpuVP,
		//     cmd, source,
		//     (Light light, Camera cam, Vector3 wo) => { return GetLensFlareLightAttenuation(light, cam, wo); },
		//     ShaderConstants._FlareOcclusionTex, ShaderConstants._FlareOcclusionIndex,
		//     ShaderConstants._FlareTex, ShaderConstants._FlareColorValue,
		//     ShaderConstants._FlareData0, ShaderConstants._FlareData1, ShaderConstants._FlareData2, ShaderConstants._FlareData3, ShaderConstants._FlareData4,
		//     false);
		MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_10 = __this->___m_Materials_38;
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = L_10->___lensFlareDataDriven_9;
		il2cpp_codegen_runtime_class_init_inline(LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135_il2cpp_TypeInfo_var);
		LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135* L_12;
		L_12 = LensFlareCommonSRP_get_Instance_mF64DA65427B459BE5C9A648FAA697AE8B6DD479B(NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = ___camera0;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_14 = (&__this->___m_Descriptor_29);
		int32_t L_15;
		L_15 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_14, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_16 = (&__this->___m_Descriptor_29);
		int32_t L_17;
		L_17 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_16, NULL);
		bool L_18 = ___usePanini3;
		float L_19 = ___paniniDistance4;
		float L_20 = ___paniniCropToFit5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = ___camera0;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24 = V_2;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_25 = ___cmd1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_26 = ___source2;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_il2cpp_TypeInfo_var);
		Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE* L_27 = ((U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_il2cpp_TypeInfo_var))->___U3CU3E9__69_0_1;
		Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE* L_28 = L_27;
		G_B1_0 = L_28;
		G_B1_1 = L_26;
		G_B1_2 = L_25;
		G_B1_3 = L_24;
		G_B1_4 = L_23;
		G_B1_5 = 1;
		G_B1_6 = L_20;
		G_B1_7 = L_19;
		G_B1_8 = L_18;
		G_B1_9 = ((float)L_17);
		G_B1_10 = ((float)L_15);
		G_B1_11 = L_13;
		G_B1_12 = L_12;
		G_B1_13 = L_11;
		if (L_28)
		{
			G_B2_0 = L_28;
			G_B2_1 = L_26;
			G_B2_2 = L_25;
			G_B2_3 = L_24;
			G_B2_4 = L_23;
			G_B2_5 = 1;
			G_B2_6 = L_20;
			G_B2_7 = L_19;
			G_B2_8 = L_18;
			G_B2_9 = ((float)L_17);
			G_B2_10 = ((float)L_15);
			G_B2_11 = L_13;
			G_B2_12 = L_12;
			G_B2_13 = L_11;
			goto IL_00a1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_il2cpp_TypeInfo_var);
		U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D* L_29 = ((U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE* L_30 = (Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE*)il2cpp_codegen_object_new(Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Func_4__ctor_mCB654A521C926308B7947FC97B239C5A7847D677(L_30, L_29, (intptr_t)((void*)U3CU3Ec_U3CDoLensFlareDatadrivenU3Eb__69_0_m806687F2794508799B69BD9A750001C858762BE5_RuntimeMethod_var), NULL);
		Func_4_t10E373E09E0663CA58211D9753566AB17B869CFE* L_31 = L_30;
		((U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_il2cpp_TypeInfo_var))->___U3CU3E9__69_0_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_il2cpp_TypeInfo_var))->___U3CU3E9__69_0_1), (void*)L_31);
		G_B2_0 = L_31;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		G_B2_4 = G_B1_4;
		G_B2_5 = G_B1_5;
		G_B2_6 = G_B1_6;
		G_B2_7 = G_B1_7;
		G_B2_8 = G_B1_8;
		G_B2_9 = G_B1_9;
		G_B2_10 = G_B1_10;
		G_B2_11 = G_B1_11;
		G_B2_12 = G_B1_12;
		G_B2_13 = G_B1_13;
	}

IL_00a1:
	{
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_32 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareOcclusionTex_37;
		int32_t L_33 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareOcclusionIndex_38;
		int32_t L_34 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareTex_39;
		int32_t L_35 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareColorValue_40;
		int32_t L_36 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareData0_41;
		int32_t L_37 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareData1_42;
		int32_t L_38 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareData2_43;
		int32_t L_39 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareData3_44;
		int32_t L_40 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareData4_45;
		il2cpp_codegen_runtime_class_init_inline(LensFlareCommonSRP_t216404EC3242B43B3A8486A9D03A70302E79C135_il2cpp_TypeInfo_var);
		LensFlareCommonSRP_DoLensFlareDataDrivenCommon_m490AD685535866B2C088AC846DDA409356891A1C(G_B2_13, G_B2_12, G_B2_11, G_B2_10, G_B2_9, G_B2_8, G_B2_7, G_B2_6, (bool)G_B2_5, G_B2_4, G_B2_3, G_B2_2, G_B2_1, G_B2_0, L_32, L_33, L_34, L_35, L_36, L_37, L_38, L_39, L_40, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DoMotionBlur(UnityEngine.Rendering.Universal.CameraData,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DoMotionBlur_m9FE32E134297381B94A8A07ACC149D06217A3072 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E ___cameraData0, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DB1F1B6C8DBF6236F1F97FF50A52D5C675BBAC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53E5A11AA5E4FD35308D01344B0A5149AC89BE2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral731B552DFA43AAB097DE738D6C929FA08D6461A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB22B59490C30C06D45315B7E4293DAD5075AFFE0);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	bool V_1 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t V_5 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B3_0 = 0;
	{
		// var material = m_Materials.cameraMotionBlur;
		MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_0 = __this->___m_Materials_38;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = L_0->___cameraMotionBlur_4;
		V_0 = L_1;
		// if (cameraData.xr.enabled && cameraData.xr.singlePassEnabled)
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E L_2 = ___cameraData0;
		XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_3 = L_2.___xr_20;
		NullCheck(L_3);
		bool L_4;
		L_4 = XRPass_get_enabled_mC2CF12F8D66EB1EE2560B4DD1FB9343D5E598155(L_3, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E L_5 = ___cameraData0;
		XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_6 = L_5.___xr_20;
		NullCheck(L_6);
		bool L_7;
		L_7 = XRPass_get_singlePassEnabled_mB8BBB9F66EE93200D10F7C6C766E5F2D855A6FF3(L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_1 = (bool)G_B3_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00d3;
		}
	}
	{
		// var viewProj0 = GL.GetGPUProjectionMatrix(cameraData.GetProjectionMatrix(0), true) * cameraData.GetViewMatrix(0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = CameraData_GetProjectionMatrix_m3B2EC52DEC102715BDBAF85816904DEF7DFCF10D((&___cameraData0), 0, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = GL_GetGPUProjectionMatrix_m3B89D47134C77B9361DB3CDDFFDA276C1373DD2A(L_9, (bool)1, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = CameraData_GetViewMatrix_m85D00AF6C537A14220F4E2D70E2BFF23DD11C86E((&___cameraData0), 0, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_10, L_11, NULL);
		V_2 = L_12;
		// var viewProj1 = GL.GetGPUProjectionMatrix(cameraData.GetProjectionMatrix(1), true) * cameraData.GetViewMatrix(1);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13;
		L_13 = CameraData_GetProjectionMatrix_m3B2EC52DEC102715BDBAF85816904DEF7DFCF10D((&___cameraData0), 1, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14;
		L_14 = GL_GetGPUProjectionMatrix_m3B89D47134C77B9361DB3CDDFFDA276C1373DD2A(L_13, (bool)1, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15;
		L_15 = CameraData_GetViewMatrix_m85D00AF6C537A14220F4E2D70E2BFF23DD11C86E((&___cameraData0), 1, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_16;
		L_16 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_14, L_15, NULL);
		V_3 = L_16;
		// if (m_ResetHistory)
		bool L_17 = __this->___m_ResetHistory_57;
		V_4 = L_17;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a1;
		}
	}
	{
		// viewProjMatrixStereo[0] = viewProj0;
		il2cpp_codegen_runtime_class_init_inline(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_19 = ((PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_StaticFields*)il2cpp_codegen_static_fields_for(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var))->___viewProjMatrixStereo_74;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20 = V_2;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_20);
		// viewProjMatrixStereo[1] = viewProj1;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_21 = ((PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_StaticFields*)il2cpp_codegen_static_fields_for(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var))->___viewProjMatrixStereo_74;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22 = V_3;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_22);
		// material.SetMatrixArray("_PrevViewProjMStereo", viewProjMatrixStereo);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_24 = ((PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_StaticFields*)il2cpp_codegen_static_fields_for(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var))->___viewProjMatrixStereo_74;
		NullCheck(L_23);
		Material_SetMatrixArray_mE05298BC5B50DD5F6F3DB18682DE575C6FDE2FC0(L_23, _stringLiteral731B552DFA43AAB097DE738D6C929FA08D6461A1, L_24, NULL);
		goto IL_00b3;
	}

IL_00a1:
	{
		// material.SetMatrixArray("_PrevViewProjMStereo", m_PrevViewProjM);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_26 = __this->___m_PrevViewProjM_56;
		NullCheck(L_25);
		Material_SetMatrixArray_mE05298BC5B50DD5F6F3DB18682DE575C6FDE2FC0(L_25, _stringLiteral731B552DFA43AAB097DE738D6C929FA08D6461A1, L_26, NULL);
	}

IL_00b3:
	{
		// m_PrevViewProjM[0] = viewProj0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_27 = __this->___m_PrevViewProjM_56;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_28 = V_2;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_28);
		// m_PrevViewProjM[1] = viewProj1;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_29 = __this->___m_PrevViewProjM_56;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_30 = V_3;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_30);
		goto IL_0167;
	}

IL_00d3:
	{
		// int prevViewProjMIdx = 0;
		V_5 = 0;
		// if (cameraData.xr.enabled)
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E L_31 = ___cameraData0;
		XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_32 = L_31.___xr_20;
		NullCheck(L_32);
		bool L_33;
		L_33 = XRPass_get_enabled_mC2CF12F8D66EB1EE2560B4DD1FB9343D5E598155(L_32, NULL);
		V_9 = L_33;
		bool L_34 = V_9;
		if (!L_34)
		{
			goto IL_00f5;
		}
	}
	{
		// prevViewProjMIdx = cameraData.xr.multipassId;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E L_35 = ___cameraData0;
		XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_36 = L_35.___xr_20;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = XRPass_get_multipassId_mC66149857F511ED441A9C8647C3EF0DD7167F15A_inline(L_36, NULL);
		V_5 = L_37;
	}

IL_00f5:
	{
		// var proj = cameraData.GetProjectionMatrix();
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_38;
		L_38 = CameraData_GetProjectionMatrix_m3B2EC52DEC102715BDBAF85816904DEF7DFCF10D((&___cameraData0), 0, NULL);
		V_6 = L_38;
		// var view = cameraData.GetViewMatrix();
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_39;
		L_39 = CameraData_GetViewMatrix_m85D00AF6C537A14220F4E2D70E2BFF23DD11C86E((&___cameraData0), 0, NULL);
		V_7 = L_39;
		// var viewProj = proj * view;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_40 = V_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_41 = V_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_42;
		L_42 = Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162(L_40, L_41, NULL);
		V_8 = L_42;
		// material.SetMatrix("_ViewProjM", viewProj);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_44 = V_8;
		NullCheck(L_43);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_43, _stringLiteralB22B59490C30C06D45315B7E4293DAD5075AFFE0, L_44, NULL);
		// if (m_ResetHistory)
		bool L_45 = __this->___m_ResetHistory_57;
		V_10 = L_45;
		bool L_46 = V_10;
		if (!L_46)
		{
			goto IL_013e;
		}
	}
	{
		// material.SetMatrix("_PrevViewProjM", viewProj);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_48 = V_8;
		NullCheck(L_47);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_47, _stringLiteral3DB1F1B6C8DBF6236F1F97FF50A52D5C675BBAC2, L_48, NULL);
		goto IL_0157;
	}

IL_013e:
	{
		// material.SetMatrix("_PrevViewProjM", m_PrevViewProjM[prevViewProjMIdx]);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_50 = __this->___m_PrevViewProjM_56;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_49);
		Material_SetMatrix_m1F4E20583C898A1C1DBA256868E1F98C539F13FB(L_49, _stringLiteral3DB1F1B6C8DBF6236F1F97FF50A52D5C675BBAC2, L_53, NULL);
	}

IL_0157:
	{
		// m_PrevViewProjM[prevViewProjMIdx] = viewProj;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_54 = __this->___m_PrevViewProjM_56;
		int32_t L_55 = V_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_56 = V_8;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_56);
	}

IL_0167:
	{
		// material.SetFloat("_Intensity", m_MotionBlur.intensity.value);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57 = V_0;
		MotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161* L_58 = __this->___m_MotionBlur_41;
		NullCheck(L_58);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_59 = L_58->___intensity_9;
		NullCheck(L_59);
		float L_60;
		L_60 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_59);
		NullCheck(L_57);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_57, _stringLiteral4E207A1E776F6188653FF9228A95BFD3A17B492E, L_60, NULL);
		// material.SetFloat("_Clamp", m_MotionBlur.clamp.value);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_61 = V_0;
		MotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161* L_62 = __this->___m_MotionBlur_41;
		NullCheck(L_62);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_63 = L_62->___clamp_10;
		NullCheck(L_63);
		float L_64;
		L_64 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_63);
		NullCheck(L_61);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_61, _stringLiteral53E5A11AA5E4FD35308D01344B0A5149AC89BE2D, L_64, NULL);
		// PostProcessUtils.SetSourceSize(cmd, m_Descriptor);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_65 = ___cmd1;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_66 = __this->___m_Descriptor_29;
		PostProcessUtils_SetSourceSize_m5EF5F2F3FE68CFDEFF201F07CBD403BBD96F0E35(L_65, L_66, NULL);
		// Blit(cmd, source, BlitDstDiscardContent(cmd, destination), material, (int)m_MotionBlur.quality.value);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_67 = ___cmd1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_68 = ___source2;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_69 = ___cmd1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_70 = ___destination3;
		int32_t L_71;
		L_71 = PostProcessPass_BlitDstDiscardContent_m0CD67D1CAF9AC54EB998A4AEC3D6178680781C59(__this, L_69, L_70, NULL);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_72;
		L_72 = RenderTargetIdentifier_op_Implicit_m3E2366E36F14173DBEED75591978EBE1F01A1325(L_71, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73 = V_0;
		MotionBlur_tCC3C4B1EDF692B22533C0ADBCE5D92101E566161* L_74 = __this->___m_MotionBlur_41;
		NullCheck(L_74);
		MotionBlurQualityParameter_tD50C3C4531FB58AB4B8C2917F41668C3EE54A637* L_75 = L_74->___quality_8;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Rendering.Universal.MotionBlurQuality>::get_value() */, L_75);
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_67, L_68, L_72, L_73, L_76, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::DoPaniniProjection(UnityEngine.Camera,UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_DoPaniniProjection_m7486B5A46AE100162CEE0AFC47DAEF04438FCECB (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_8 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_1 = NULL;
	{
		// float distance = m_PaniniProjection.distance.value;
		PaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA* L_0 = __this->___m_PaniniProjection_42;
		NullCheck(L_0);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_1 = L_0->___distance_7;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_1);
		V_0 = L_2;
		// var viewExtents = CalcViewExtents(camera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = ___camera0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PostProcessPass_CalcViewExtents_mF37365DC32C98227FB74545888BBCC62ED983EBF(__this, L_3, NULL);
		V_1 = L_4;
		// var cropExtents = CalcCropExtents(camera, distance);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ___camera0;
		float L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = PostProcessPass_CalcCropExtents_m0584B26FDD001908C17C7BA449CF483CE562F91E(__this, L_5, L_6, NULL);
		V_2 = L_7;
		// float scaleX = cropExtents.x / viewExtents.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_2;
		float L_9 = L_8.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_1;
		float L_11 = L_10.___x_0;
		V_3 = ((float)(L_9/L_11));
		// float scaleY = cropExtents.y / viewExtents.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		float L_13 = L_12.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_1;
		float L_15 = L_14.___y_1;
		V_4 = ((float)(L_13/L_15));
		// float scaleF = Mathf.Min(scaleX, scaleY);
		float L_16 = V_3;
		float L_17 = V_4;
		float L_18;
		L_18 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_16, L_17, NULL);
		V_5 = L_18;
		// float paniniD = distance;
		float L_19 = V_0;
		V_6 = L_19;
		// float paniniS = Mathf.Lerp(1f, Mathf.Clamp01(scaleF), m_PaniniProjection.cropToFit.value);
		float L_20 = V_5;
		float L_21;
		L_21 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_20, NULL);
		PaniniProjection_t1E2B2CBC65D2E9BC9D4C6C07163D742F1FE85BDA* L_22 = __this->___m_PaniniProjection_42;
		NullCheck(L_22);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_23 = L_22->___cropToFit_8;
		NullCheck(L_23);
		float L_24;
		L_24 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_23);
		float L_25;
		L_25 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((1.0f), L_21, L_24, NULL);
		V_7 = L_25;
		// var material = m_Materials.paniniProjection;
		MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_26 = __this->___m_Materials_38;
		NullCheck(L_26);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = L_26->___paniniProjection_5;
		V_8 = L_27;
		// material.SetVector(ShaderConstants._Params, new Vector4(viewExtents.x, viewExtents.y, paniniD, paniniS));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = V_8;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_29 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Params_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_1;
		float L_31 = L_30.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_1;
		float L_33 = L_32.___y_1;
		float L_34 = V_6;
		float L_35 = V_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_36), L_31, L_33, L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_28);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_28, L_29, L_36, NULL);
		// material.EnableKeyword(
		//     1f - Mathf.Abs(paniniD) > float.Epsilon
		//     ? ShaderKeywordStrings.PaniniGeneric : ShaderKeywordStrings.PaniniUnitDistance
		// );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = V_8;
		float L_38 = V_6;
		float L_39;
		L_39 = fabsf(L_38);
		G_B1_0 = L_37;
		if ((((float)((float)il2cpp_codegen_subtract((1.0f), L_39))) > ((float)(1.40129846E-45f))))
		{
			G_B2_0 = L_37;
			goto IL_00bc;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_40 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___PaniniUnitDistance_34;
		G_B3_0 = L_40;
		G_B3_1 = G_B1_0;
		goto IL_00c1;
	}

IL_00bc:
	{
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_41 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___PaniniGeneric_33;
		G_B3_0 = L_41;
		G_B3_1 = G_B2_0;
	}

IL_00c1:
	{
		NullCheck(G_B3_1);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(G_B3_1, G_B3_0, NULL);
		// Blit(cmd, source, BlitDstDiscardContent(cmd, destination), material);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_42 = ___cmd1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_43 = ___source2;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_44 = ___cmd1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_45 = ___destination3;
		int32_t L_46;
		L_46 = PostProcessPass_BlitDstDiscardContent_m0CD67D1CAF9AC54EB998A4AEC3D6178680781C59(__this, L_44, L_45, NULL);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_47;
		L_47 = RenderTargetIdentifier_op_Implicit_m3E2366E36F14173DBEED75591978EBE1F01A1325(L_46, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_48 = V_8;
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_42, L_43, L_47, L_48, 0, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Rendering.Universal.Internal.PostProcessPass::CalcViewExtents(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PostProcessPass_CalcViewExtents_mF37365DC32C98227FB74545888BBCC62ED983EBF (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// float fovY = camera.fieldOfView * Mathf.Deg2Rad;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_0, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_1, (0.0174532924f)));
		// float aspect = m_Descriptor.width / (float)m_Descriptor.height;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_2 = (&__this->___m_Descriptor_29);
		int32_t L_3;
		L_3 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_2, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_4 = (&__this->___m_Descriptor_29);
		int32_t L_5;
		L_5 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_4, NULL);
		V_1 = ((float)(((float)L_3)/((float)L_5)));
		// float viewExtY = Mathf.Tan(0.5f * fovY);
		float L_6 = V_0;
		float L_7;
		L_7 = tanf(((float)il2cpp_codegen_multiply((0.5f), L_6)));
		V_2 = L_7;
		// float viewExtX = aspect * viewExtY;
		float L_8 = V_1;
		float L_9 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply(L_8, L_9));
		// return new Vector2(viewExtX, viewExtY);
		float L_10 = V_3;
		float L_11 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), L_10, L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_4;
		return L_13;
	}
}
// UnityEngine.Vector2 UnityEngine.Rendering.Universal.Internal.PostProcessPass::CalcCropExtents(UnityEngine.Camera,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PostProcessPass_CalcCropExtents_m0584B26FDD001908C17C7BA449CF483CE562F91E (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, float ___d1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float viewDist = 1f + d;
		float L_0 = ___d1;
		V_0 = ((float)il2cpp_codegen_add((1.0f), L_0));
		// var projPos = CalcViewExtents(camera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = ___camera0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PostProcessPass_CalcViewExtents_mF37365DC32C98227FB74545888BBCC62ED983EBF(__this, L_1, NULL);
		V_1 = L_2;
		// var projHyp = Mathf.Sqrt(projPos.x * projPos.x + 1f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		float L_4 = L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_1;
		float L_6 = L_5.___x_0;
		float L_7;
		L_7 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, L_6)), (1.0f))));
		V_2 = L_7;
		// float cylDistMinusD = 1f / projHyp;
		float L_8 = V_2;
		V_3 = ((float)((1.0f)/L_8));
		// float cylDist = cylDistMinusD + d;
		float L_9 = V_3;
		float L_10 = ___d1;
		V_4 = ((float)il2cpp_codegen_add(L_9, L_10));
		// var cylPos = projPos * cylDistMinusD;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_1;
		float L_12 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_11, L_12, NULL);
		V_5 = L_13;
		// return cylPos * (viewDist / cylDist);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_5;
		float L_15 = V_0;
		float L_16 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_14, ((float)(L_15/L_16)), NULL);
		V_6 = L_17;
		goto IL_004f;
	}

IL_004f:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_6;
		return L_18;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupBloom(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupBloom_mFD125A81E220222A305A0325E9AB92C9347C3DE3 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___uberMaterial2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorUtils_t8DE09CC60FE5A7C28984134BC712DD1B5104AC18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_9 = NULL;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_15 = NULL;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_18;
	memset((&V_18), 0, sizeof(V_18));
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	bool V_23 = false;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	bool V_28 = false;
	int32_t V_29 = 0;
	bool V_30 = false;
	bool V_31 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_32;
	memset((&V_32), 0, sizeof(V_32));
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t G_B7_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	int32_t G_B19_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B19_1 = NULL;
	int32_t G_B18_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B18_1 = NULL;
	float G_B20_0 = 0.0f;
	int32_t G_B20_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B20_2 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B23_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B30_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B29_0 = NULL;
	String_t* G_B31_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B31_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B34_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B33_0 = NULL;
	String_t* G_B35_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B35_1 = NULL;
	{
		// int tw = m_Descriptor.width >> 1;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_0 = (&__this->___m_Descriptor_29);
		int32_t L_1;
		L_1 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_0, NULL);
		V_0 = ((int32_t)(L_1>>1));
		// int th = m_Descriptor.height >> 1;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_2 = (&__this->___m_Descriptor_29);
		int32_t L_3;
		L_3 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_2, NULL);
		V_1 = ((int32_t)(L_3>>1));
		// int maxSize = Mathf.Max(tw, th);
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6;
		L_6 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_4, L_5, NULL);
		V_2 = L_6;
		// int iterations = Mathf.FloorToInt(Mathf.Log(maxSize, 2f) - 1);
		int32_t L_7 = V_2;
		float L_8;
		L_8 = Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline(((float)L_7), (2.0f), NULL);
		int32_t L_9;
		L_9 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_subtract(L_8, (1.0f))), NULL);
		V_3 = L_9;
		// iterations -= m_Bloom.skipIterations.value;
		int32_t L_10 = V_3;
		Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* L_11 = __this->___m_Bloom_43;
		NullCheck(L_11);
		ClampedIntParameter_tAF77FC44E522B137734644AE2E3F702580033B8E* L_12 = L_11->___skipIterations_13;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32>::get_value() */, L_12);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_10, L_13));
		// int mipCount = Mathf.Clamp(iterations, 2, k_MaxPyramidSize);
		int32_t L_14 = V_3;
		int32_t L_15;
		L_15 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_14, 2, ((int32_t)16), NULL);
		V_4 = L_15;
		// float clamp = m_Bloom.clamp.value;
		Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* L_16 = __this->___m_Bloom_43;
		NullCheck(L_16);
		MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* L_17 = L_16->___clamp_10;
		NullCheck(L_17);
		float L_18;
		L_18 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_17);
		V_5 = L_18;
		// float threshold = Mathf.GammaToLinearSpace(m_Bloom.threshold.value);
		Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* L_19 = __this->___m_Bloom_43;
		NullCheck(L_19);
		MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* L_20 = L_19->___threshold_7;
		NullCheck(L_20);
		float L_21;
		L_21 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_20);
		float L_22;
		L_22 = Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F(L_21, NULL);
		V_6 = L_22;
		// float thresholdKnee = threshold * 0.5f; // Hardcoded soft knee
		float L_23 = V_6;
		V_7 = ((float)il2cpp_codegen_multiply(L_23, (0.5f)));
		// float scatter = Mathf.Lerp(0.05f, 0.95f, m_Bloom.scatter.value);
		Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* L_24 = __this->___m_Bloom_43;
		NullCheck(L_24);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_25 = L_24->___scatter_9;
		NullCheck(L_25);
		float L_26;
		L_26 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_25);
		float L_27;
		L_27 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0500000007f), (0.949999988f), L_26, NULL);
		V_8 = L_27;
		// var bloomMaterial = m_Materials.bloom;
		MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_28 = __this->___m_Materials_38;
		NullCheck(L_28);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = L_28->___bloom_6;
		V_9 = L_29;
		// bloomMaterial.SetVector(ShaderConstants._Params, new Vector4(scatter, clamp, threshold, thresholdKnee));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = V_9;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_31 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Params_18;
		float L_32 = V_8;
		float L_33 = V_5;
		float L_34 = V_6;
		float L_35 = V_7;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_36), L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_30);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_30, L_31, L_36, NULL);
		// CoreUtils.SetKeyword(bloomMaterial, ShaderKeywordStrings.BloomHQ, m_Bloom.highQualityFiltering.value);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = V_9;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_38 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___BloomHQ_36;
		Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* L_39 = __this->___m_Bloom_43;
		NullCheck(L_39);
		BoolParameter_tAA460C5A72ADBDDB4519BFF0BA040EC202E14E95* L_40 = L_39->___highQualityFiltering_12;
		NullCheck(L_40);
		bool L_41;
		L_41 = VirtualFuncInvoker0< bool >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Boolean>::get_value() */, L_40);
		il2cpp_codegen_runtime_class_init_inline(CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		CoreUtils_SetKeyword_m7F886C529A9DEC48A568FA4FFD4CF789AA294239(L_37, L_38, L_41, NULL);
		// CoreUtils.SetKeyword(bloomMaterial, ShaderKeywordStrings.UseRGBM, m_UseRGBM);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = V_9;
		String_t* L_43 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___UseRGBM_39;
		bool L_44 = __this->___m_UseRGBM_53;
		CoreUtils_SetKeyword_m7F886C529A9DEC48A568FA4FFD4CF789AA294239(L_42, L_43, L_44, NULL);
		// var desc = GetCompatibleDescriptor(tw, th, m_DefaultHDRFormat);
		int32_t L_45 = V_0;
		int32_t L_46 = V_1;
		int32_t L_47 = __this->___m_DefaultHDRFormat_52;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_48;
		L_48 = PostProcessPass_GetCompatibleDescriptor_m9FE5C15264300379BC9D4B16DE669925264801BA(__this, L_45, L_46, L_47, 0, NULL);
		V_10 = L_48;
		// cmd.GetTemporaryRT(ShaderConstants._BloomMipDown[0], desc, FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_49 = ___cmd0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipDown_49;
		NullCheck(L_50);
		int32_t L_51 = 0;
		int32_t L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_53 = V_10;
		NullCheck(L_49);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_49, L_52, L_53, 1, NULL);
		// cmd.GetTemporaryRT(ShaderConstants._BloomMipUp[0], desc, FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_54 = ___cmd0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipUp_48;
		NullCheck(L_55);
		int32_t L_56 = 0;
		int32_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_58 = V_10;
		NullCheck(L_54);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_54, L_57, L_58, 1, NULL);
		// Blit(cmd, source, ShaderConstants._BloomMipDown[0], bloomMaterial, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_59 = ___cmd0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_60 = ___source1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipDown_49;
		NullCheck(L_61);
		int32_t L_62 = 0;
		int32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_64;
		L_64 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_63, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65 = V_9;
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_59, L_60, L_64, L_65, 0, NULL);
		// int lastDown = ShaderConstants._BloomMipDown[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipDown_49;
		NullCheck(L_66);
		int32_t L_67 = 0;
		int32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_11 = L_68;
		// for (int i = 1; i < mipCount; i++)
		V_20 = 1;
		goto IL_01f2;
	}

IL_0162:
	{
		// tw = Mathf.Max(1, tw >> 1);
		int32_t L_69 = V_0;
		int32_t L_70;
		L_70 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(1, ((int32_t)(L_69>>1)), NULL);
		V_0 = L_70;
		// th = Mathf.Max(1, th >> 1);
		int32_t L_71 = V_1;
		int32_t L_72;
		L_72 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(1, ((int32_t)(L_71>>1)), NULL);
		V_1 = L_72;
		// int mipDown = ShaderConstants._BloomMipDown[i];
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipDown_49;
		int32_t L_74 = V_20;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		int32_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_21 = L_76;
		// int mipUp = ShaderConstants._BloomMipUp[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipUp_48;
		int32_t L_78 = V_20;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		int32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_22 = L_80;
		// desc.width = tw;
		int32_t L_81 = V_0;
		RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline((&V_10), L_81, NULL);
		// desc.height = th;
		int32_t L_82 = V_1;
		RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline((&V_10), L_82, NULL);
		// cmd.GetTemporaryRT(mipDown, desc, FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_83 = ___cmd0;
		int32_t L_84 = V_21;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_85 = V_10;
		NullCheck(L_83);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_83, L_84, L_85, 1, NULL);
		// cmd.GetTemporaryRT(mipUp, desc, FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_86 = ___cmd0;
		int32_t L_87 = V_22;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_88 = V_10;
		NullCheck(L_86);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_86, L_87, L_88, 1, NULL);
		// Blit(cmd, lastDown, mipUp, bloomMaterial, 1);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_89 = ___cmd0;
		int32_t L_90 = V_11;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_91;
		L_91 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_90, NULL);
		int32_t L_92 = V_22;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_93;
		L_93 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_92, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94 = V_9;
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_89, L_91, L_93, L_94, 1, NULL);
		// Blit(cmd, mipUp, mipDown, bloomMaterial, 2);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_95 = ___cmd0;
		int32_t L_96 = V_22;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_97;
		L_97 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_96, NULL);
		int32_t L_98 = V_21;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_99;
		L_99 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_98, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_100 = V_9;
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_95, L_97, L_99, L_100, 2, NULL);
		// lastDown = mipDown;
		int32_t L_101 = V_21;
		V_11 = L_101;
		// for (int i = 1; i < mipCount; i++)
		int32_t L_102 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_01f2:
	{
		// for (int i = 1; i < mipCount; i++)
		int32_t L_103 = V_20;
		int32_t L_104 = V_4;
		V_23 = (bool)((((int32_t)L_103) < ((int32_t)L_104))? 1 : 0);
		bool L_105 = V_23;
		if (L_105)
		{
			goto IL_0162;
		}
	}
	{
		// for (int i = mipCount - 2; i >= 0; i--)
		int32_t L_106 = V_4;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_106, 2));
		goto IL_027d;
	}

IL_0209:
	{
		// int lowMip = (i == mipCount - 2) ? ShaderConstants._BloomMipDown[i + 1] : ShaderConstants._BloomMipUp[i + 1];
		int32_t L_107 = V_24;
		int32_t L_108 = V_4;
		if ((((int32_t)L_107) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_108, 2)))))
		{
			goto IL_021e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipUp_48;
		int32_t L_110 = V_24;
		NullCheck(L_109);
		int32_t L_111 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		G_B7_0 = L_112;
		goto IL_0228;
	}

IL_021e:
	{
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipDown_49;
		int32_t L_114 = V_24;
		NullCheck(L_113);
		int32_t L_115 = ((int32_t)il2cpp_codegen_add(L_114, 1));
		int32_t L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		G_B7_0 = L_116;
	}

IL_0228:
	{
		V_25 = G_B7_0;
		// int highMip = ShaderConstants._BloomMipDown[i];
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipDown_49;
		int32_t L_118 = V_24;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		int32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		V_26 = L_120;
		// int dst = ShaderConstants._BloomMipUp[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipUp_48;
		int32_t L_122 = V_24;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		int32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		V_27 = L_124;
		// cmd.SetGlobalTexture(ShaderConstants._SourceTexLowMip, lowMip);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_125 = ___cmd0;
		int32_t L_126 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____SourceTexLowMip_19;
		int32_t L_127 = V_25;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_128;
		L_128 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_127, NULL);
		NullCheck(L_125);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_125, L_126, L_128, NULL);
		// Blit(cmd, highMip, BlitDstDiscardContent(cmd, dst), bloomMaterial, 3);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_129 = ___cmd0;
		int32_t L_130 = V_26;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_131;
		L_131 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_130, NULL);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_132 = ___cmd0;
		int32_t L_133 = V_27;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_134;
		L_134 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_133, NULL);
		int32_t L_135;
		L_135 = PostProcessPass_BlitDstDiscardContent_m0CD67D1CAF9AC54EB998A4AEC3D6178680781C59(__this, L_132, L_134, NULL);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_136;
		L_136 = RenderTargetIdentifier_op_Implicit_m3E2366E36F14173DBEED75591978EBE1F01A1325(L_135, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_137 = V_9;
		PostProcessPass_Blit_m4E34398E35D875F840D16FC98E21F409415FB939(__this, L_129, L_131, L_136, L_137, 3, NULL);
		// for (int i = mipCount - 2; i >= 0; i--)
		int32_t L_138 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_138, 1));
	}

IL_027d:
	{
		// for (int i = mipCount - 2; i >= 0; i--)
		int32_t L_139 = V_24;
		V_28 = (bool)((((int32_t)((((int32_t)L_139) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_140 = V_28;
		if (L_140)
		{
			goto IL_0209;
		}
	}
	{
		// for (int i = 0; i < mipCount; i++)
		V_29 = 0;
		goto IL_02c4;
	}

IL_0293:
	{
		// cmd.ReleaseTemporaryRT(ShaderConstants._BloomMipDown[i]);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_141 = ___cmd0;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_142 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipDown_49;
		int32_t L_143 = V_29;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		int32_t L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		NullCheck(L_141);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_141, L_145, NULL);
		// if (i > 0) cmd.ReleaseTemporaryRT(ShaderConstants._BloomMipUp[i]);
		int32_t L_146 = V_29;
		V_30 = (bool)((((int32_t)L_146) > ((int32_t)0))? 1 : 0);
		bool L_147 = V_30;
		if (!L_147)
		{
			goto IL_02bd;
		}
	}
	{
		// if (i > 0) cmd.ReleaseTemporaryRT(ShaderConstants._BloomMipUp[i]);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_148 = ___cmd0;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipUp_48;
		int32_t L_150 = V_29;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		int32_t L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		NullCheck(L_148);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_148, L_152, NULL);
	}

IL_02bd:
	{
		// for (int i = 0; i < mipCount; i++)
		int32_t L_153 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_153, 1));
	}

IL_02c4:
	{
		// for (int i = 0; i < mipCount; i++)
		int32_t L_154 = V_29;
		int32_t L_155 = V_4;
		V_31 = (bool)((((int32_t)L_154) < ((int32_t)L_155))? 1 : 0);
		bool L_156 = V_31;
		if (L_156)
		{
			goto IL_0293;
		}
	}
	{
		// var tint = m_Bloom.tint.value.linear;
		Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* L_157 = __this->___m_Bloom_43;
		NullCheck(L_157);
		ColorParameter_t367FD9EBE5DAA0ADB44F7DD0C260E9CDE3827CC0* L_158 = L_157->___tint_11;
		NullCheck(L_158);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_159;
		L_159 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Color>::get_value() */, L_158);
		V_32 = L_159;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_160;
		L_160 = Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline((&V_32), NULL);
		V_12 = L_160;
		// var luma = ColorUtils.Luminance(tint);
		il2cpp_codegen_runtime_class_init_inline(ColorUtils_t8DE09CC60FE5A7C28984134BC712DD1B5104AC18_il2cpp_TypeInfo_var);
		float L_161;
		L_161 = ColorUtils_Luminance_mFDC649B1AE8F94D798AB492DDF0ECC7BE8E34477((&V_12), NULL);
		V_13 = L_161;
		// tint = luma > 0f ? tint * (1f / luma) : Color.white;
		float L_162 = V_13;
		if ((((float)L_162) > ((float)(0.0f))))
		{
			goto IL_0304;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_163;
		L_163 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B17_0 = L_163;
		goto IL_0313;
	}

IL_0304:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_164 = V_12;
		float L_165 = V_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_166;
		L_166 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_164, ((float)((1.0f)/L_165)), NULL);
		G_B17_0 = L_166;
	}

IL_0313:
	{
		V_12 = G_B17_0;
		// var bloomParams = new Vector4(m_Bloom.intensity.value, tint.r, tint.g, tint.b);
		Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* L_167 = __this->___m_Bloom_43;
		NullCheck(L_167);
		MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* L_168 = L_167->___intensity_8;
		NullCheck(L_168);
		float L_169;
		L_169 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_168);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_170 = V_12;
		float L_171 = L_170.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_172 = V_12;
		float L_173 = L_172.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_174 = V_12;
		float L_175 = L_174.___b_2;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_14), L_169, L_171, L_173, L_175, NULL);
		// uberMaterial.SetVector(ShaderConstants._Bloom_Params, bloomParams);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_176 = ___uberMaterial2;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_177 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Bloom_Params_20;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_178 = V_14;
		NullCheck(L_176);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_176, L_177, L_178, NULL);
		// uberMaterial.SetFloat(ShaderConstants._Bloom_RGBM, m_UseRGBM ? 1f : 0f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_179 = ___uberMaterial2;
		int32_t L_180 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Bloom_RGBM_21;
		bool L_181 = __this->___m_UseRGBM_53;
		G_B18_0 = L_180;
		G_B18_1 = L_179;
		if (L_181)
		{
			G_B19_0 = L_180;
			G_B19_1 = L_179;
			goto IL_0364;
		}
	}
	{
		G_B20_0 = (0.0f);
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		goto IL_0369;
	}

IL_0364:
	{
		G_B20_0 = (1.0f);
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
	}

IL_0369:
	{
		NullCheck(G_B20_2);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(G_B20_2, G_B20_1, G_B20_0, NULL);
		// cmd.SetGlobalTexture(ShaderConstants._Bloom_Texture, ShaderConstants._BloomMipUp[0]);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_182 = ___cmd0;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_183 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Bloom_Texture_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_184 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BloomMipUp_48;
		NullCheck(L_184);
		int32_t L_185 = 0;
		int32_t L_186 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_187;
		L_187 = RenderTargetIdentifier_op_Implicit_m5D9E7FF7B325608E3C4A37BBB52FE728361E7324(L_186, NULL);
		NullCheck(L_182);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_182, L_183, L_187, NULL);
		// var dirtTexture = m_Bloom.dirtTexture.value == null ? Texture2D.blackTexture : m_Bloom.dirtTexture.value;
		Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* L_188 = __this->___m_Bloom_43;
		NullCheck(L_188);
		TextureParameter_t8989581983DE4A463CBB1A19F90D9E27BF7EC28A* L_189 = L_188->___dirtTexture_14;
		NullCheck(L_189);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_190;
		L_190 = VirtualFuncInvoker0< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Texture>::get_value() */, L_189);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_191;
		L_191 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_190, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_191)
		{
			goto IL_03b1;
		}
	}
	{
		Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* L_192 = __this->___m_Bloom_43;
		NullCheck(L_192);
		TextureParameter_t8989581983DE4A463CBB1A19F90D9E27BF7EC28A* L_193 = L_192->___dirtTexture_14;
		NullCheck(L_193);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_194;
		L_194 = VirtualFuncInvoker0< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Texture>::get_value() */, L_193);
		G_B23_0 = L_194;
		goto IL_03b6;
	}

IL_03b1:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_195;
		L_195 = Texture2D_get_blackTexture_mBEF97F64AD650DAAC1EEC84EB34F9CF22B56A08C(NULL);
		G_B23_0 = ((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)(L_195));
	}

IL_03b6:
	{
		V_15 = G_B23_0;
		// float dirtRatio = dirtTexture.width / (float)dirtTexture.height;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_196 = V_15;
		NullCheck(L_196);
		int32_t L_197;
		L_197 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_196);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_198 = V_15;
		NullCheck(L_198);
		int32_t L_199;
		L_199 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_198);
		V_16 = ((float)(((float)L_197)/((float)L_199)));
		// float screenRatio = m_Descriptor.width / (float)m_Descriptor.height;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_200 = (&__this->___m_Descriptor_29);
		int32_t L_201;
		L_201 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_200, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_202 = (&__this->___m_Descriptor_29);
		int32_t L_203;
		L_203 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_202, NULL);
		V_17 = ((float)(((float)L_201)/((float)L_203)));
		// var dirtScaleOffset = new Vector4(1f, 1f, 0f, 0f);
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_18), (1.0f), (1.0f), (0.0f), (0.0f), NULL);
		// float dirtIntensity = m_Bloom.dirtIntensity.value;
		Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* L_204 = __this->___m_Bloom_43;
		NullCheck(L_204);
		MinFloatParameter_tA4BCE8AF64068D3761A8689DB27D0B04238525F9* L_205 = L_204->___dirtIntensity_15;
		NullCheck(L_205);
		float L_206;
		L_206 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_205);
		V_19 = L_206;
		// if (dirtRatio > screenRatio)
		float L_207 = V_16;
		float L_208 = V_17;
		V_33 = (bool)((((float)L_207) > ((float)L_208))? 1 : 0);
		bool L_209 = V_33;
		if (!L_209)
		{
			goto IL_0449;
		}
	}
	{
		// dirtScaleOffset.x = screenRatio / dirtRatio;
		float L_210 = V_17;
		float L_211 = V_16;
		(&V_18)->___x_1 = ((float)(L_210/L_211));
		// dirtScaleOffset.z = (1f - dirtScaleOffset.x) * 0.5f;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_212 = V_18;
		float L_213 = L_212.___x_1;
		(&V_18)->___z_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_213)), (0.5f)));
		goto IL_047d;
	}

IL_0449:
	{
		// else if (screenRatio > dirtRatio)
		float L_214 = V_17;
		float L_215 = V_16;
		V_34 = (bool)((((float)L_214) > ((float)L_215))? 1 : 0);
		bool L_216 = V_34;
		if (!L_216)
		{
			goto IL_047d;
		}
	}
	{
		// dirtScaleOffset.y = dirtRatio / screenRatio;
		float L_217 = V_16;
		float L_218 = V_17;
		(&V_18)->___y_2 = ((float)(L_217/L_218));
		// dirtScaleOffset.w = (1f - dirtScaleOffset.y) * 0.5f;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_219 = V_18;
		float L_220 = L_219.___y_2;
		(&V_18)->___w_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_220)), (0.5f)));
	}

IL_047d:
	{
		// uberMaterial.SetVector(ShaderConstants._LensDirt_Params, dirtScaleOffset);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_221 = ___uberMaterial2;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_222 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____LensDirt_Params_24;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_223 = V_18;
		NullCheck(L_221);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_221, L_222, L_223, NULL);
		// uberMaterial.SetFloat(ShaderConstants._LensDirt_Intensity, dirtIntensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_224 = ___uberMaterial2;
		int32_t L_225 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____LensDirt_Intensity_25;
		float L_226 = V_19;
		NullCheck(L_224);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_224, L_225, L_226, NULL);
		// uberMaterial.SetTexture(ShaderConstants._LensDirt_Texture, dirtTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_227 = ___uberMaterial2;
		int32_t L_228 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____LensDirt_Texture_23;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_229 = V_15;
		NullCheck(L_227);
		Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD(L_227, L_228, L_229, NULL);
		// if (m_Bloom.highQualityFiltering.value)
		Bloom_t0C806C947E1D104DC95E933B3FB9A307CBB5B225* L_230 = __this->___m_Bloom_43;
		NullCheck(L_230);
		BoolParameter_tAA460C5A72ADBDDB4519BFF0BA040EC202E14E95* L_231 = L_230->___highQualityFiltering_12;
		NullCheck(L_231);
		bool L_232;
		L_232 = VirtualFuncInvoker0< bool >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Boolean>::get_value() */, L_231);
		V_35 = L_232;
		bool L_233 = V_35;
		if (!L_233)
		{
			goto IL_04db;
		}
	}
	{
		// uberMaterial.EnableKeyword(dirtIntensity > 0f ? ShaderKeywordStrings.BloomHQDirt : ShaderKeywordStrings.BloomHQ);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_234 = ___uberMaterial2;
		float L_235 = V_19;
		G_B29_0 = L_234;
		if ((((float)L_235) > ((float)(0.0f))))
		{
			G_B30_0 = L_234;
			goto IL_04ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_236 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___BloomHQ_36;
		G_B31_0 = L_236;
		G_B31_1 = G_B29_0;
		goto IL_04d3;
	}

IL_04ce:
	{
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_237 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___BloomHQDirt_38;
		G_B31_0 = L_237;
		G_B31_1 = G_B30_0;
	}

IL_04d3:
	{
		NullCheck(G_B31_1);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(G_B31_1, G_B31_0, NULL);
		goto IL_04f7;
	}

IL_04db:
	{
		// uberMaterial.EnableKeyword(dirtIntensity > 0f ? ShaderKeywordStrings.BloomLQDirt : ShaderKeywordStrings.BloomLQ);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_238 = ___uberMaterial2;
		float L_239 = V_19;
		G_B33_0 = L_238;
		if ((((float)L_239) > ((float)(0.0f))))
		{
			G_B34_0 = L_238;
			goto IL_04ec;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_240 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___BloomLQ_35;
		G_B35_0 = L_240;
		G_B35_1 = G_B33_0;
		goto IL_04f1;
	}

IL_04ec:
	{
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_241 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___BloomLQDirt_37;
		G_B35_0 = L_241;
		G_B35_1 = G_B34_0;
	}

IL_04f1:
	{
		NullCheck(G_B35_1);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(G_B35_1, G_B35_0, NULL);
	}

IL_04f7:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupLensDistortion(UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupLensDistortion_mC8551C67AB37EB59ABB794A57B9F3D1A94C5C3CC (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, bool ___isSceneView1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B2_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B3_1 = NULL;
	int32_t G_B6_0 = 0;
	{
		// float amount = 1.6f * Mathf.Max(Mathf.Abs(m_LensDistortion.intensity.value * 100f), 1f);
		LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6* L_0 = __this->___m_LensDistortion_44;
		NullCheck(L_0);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_1 = L_0->___intensity_7;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_1);
		float L_3;
		L_3 = fabsf(((float)il2cpp_codegen_multiply(L_2, (100.0f))));
		float L_4;
		L_4 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_3, (1.0f), NULL);
		V_0 = ((float)il2cpp_codegen_multiply((1.60000002f), L_4));
		// float theta = Mathf.Deg2Rad * Mathf.Min(160f, amount);
		float L_5 = V_0;
		float L_6;
		L_6 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((160.0f), L_5, NULL);
		V_1 = ((float)il2cpp_codegen_multiply((0.0174532924f), L_6));
		// float sigma = 2f * Mathf.Tan(theta * 0.5f);
		float L_7 = V_1;
		float L_8;
		L_8 = tanf(((float)il2cpp_codegen_multiply(L_7, (0.5f))));
		V_2 = ((float)il2cpp_codegen_multiply((2.0f), L_8));
		// var center = m_LensDistortion.center.value * 2f - Vector2.one;
		LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6* L_9 = __this->___m_LensDistortion_44;
		NullCheck(L_9);
		Vector2Parameter_tA29C9FAC53EDB2E0996430A461F9CC59B6C4288A* L_10 = L_9->___center_10;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = VirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_11, (2.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_12, L_13, NULL);
		V_3 = L_14;
		// var p1 = new Vector4(
		//     center.x,
		//     center.y,
		//     Mathf.Max(m_LensDistortion.xMultiplier.value, 1e-4f),
		//     Mathf.Max(m_LensDistortion.yMultiplier.value, 1e-4f)
		// );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_3;
		float L_16 = L_15.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_3;
		float L_18 = L_17.___y_1;
		LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6* L_19 = __this->___m_LensDistortion_44;
		NullCheck(L_19);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_20 = L_19->___xMultiplier_8;
		NullCheck(L_20);
		float L_21;
		L_21 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_20);
		float L_22;
		L_22 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_21, (9.99999975E-05f), NULL);
		LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6* L_23 = __this->___m_LensDistortion_44;
		NullCheck(L_23);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_24 = L_23->___yMultiplier_9;
		NullCheck(L_24);
		float L_25;
		L_25 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_24);
		float L_26;
		L_26 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_25, (9.99999975E-05f), NULL);
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_4), L_16, L_18, L_22, L_26, NULL);
		// var p2 = new Vector4(
		//     m_LensDistortion.intensity.value >= 0f ? theta : 1f / theta,
		//     sigma,
		//     1f / m_LensDistortion.scale.value,
		//     m_LensDistortion.intensity.value * 100f
		// );
		LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6* L_27 = __this->___m_LensDistortion_44;
		NullCheck(L_27);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_28 = L_27->___intensity_7;
		NullCheck(L_28);
		float L_29;
		L_29 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_28);
		G_B1_0 = (&V_5);
		if ((((float)L_29) >= ((float)(0.0f))))
		{
			G_B2_0 = (&V_5);
			goto IL_00e0;
		}
	}
	{
		float L_30 = V_1;
		G_B3_0 = ((float)((1.0f)/L_30));
		G_B3_1 = G_B1_0;
		goto IL_00e1;
	}

IL_00e0:
	{
		float L_31 = V_1;
		G_B3_0 = L_31;
		G_B3_1 = G_B2_0;
	}

IL_00e1:
	{
		float L_32 = V_2;
		LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6* L_33 = __this->___m_LensDistortion_44;
		NullCheck(L_33);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_34 = L_33->___scale_11;
		NullCheck(L_34);
		float L_35;
		L_35 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_34);
		LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6* L_36 = __this->___m_LensDistortion_44;
		NullCheck(L_36);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_37 = L_36->___intensity_7;
		NullCheck(L_37);
		float L_38;
		L_38 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_37);
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline(G_B3_1, G_B3_0, L_32, ((float)((1.0f)/L_35)), ((float)il2cpp_codegen_multiply(L_38, (100.0f))), NULL);
		// material.SetVector(ShaderConstants._Distortion_Params1, p1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = ___material0;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_40 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Distortion_Params1_26;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_41 = V_4;
		NullCheck(L_39);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_39, L_40, L_41, NULL);
		// material.SetVector(ShaderConstants._Distortion_Params2, p2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = ___material0;
		int32_t L_43 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Distortion_Params2_27;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_44 = V_5;
		NullCheck(L_42);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_42, L_43, L_44, NULL);
		// if (m_LensDistortion.IsActive() && !isSceneView)
		LensDistortion_t54FF310512B37DD2D9DBEEF9DA9DDF1F0A2082C6* L_45 = __this->___m_LensDistortion_44;
		NullCheck(L_45);
		bool L_46;
		L_46 = LensDistortion_IsActive_m777DA00296A34FFEC72C43157037C06F62B406AE(L_45, NULL);
		if (!L_46)
		{
			goto IL_0142;
		}
	}
	{
		bool L_47 = ___isSceneView1;
		G_B6_0 = ((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		goto IL_0143;
	}

IL_0142:
	{
		G_B6_0 = 0;
	}

IL_0143:
	{
		V_6 = (bool)G_B6_0;
		bool L_48 = V_6;
		if (!L_48)
		{
			goto IL_0155;
		}
	}
	{
		// material.EnableKeyword(ShaderKeywordStrings.Distortion);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = ___material0;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_50 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___Distortion_40;
		NullCheck(L_49);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_49, L_50, NULL);
	}

IL_0155:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupChromaticAberration(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupChromaticAberration_mA320D8C2C90E77757A97DF78E6B1973C750383AA (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// material.SetFloat(ShaderConstants._Chroma_Params, m_ChromaticAberration.intensity.value * 0.05f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Chroma_Params_28;
		ChromaticAberration_t84EAB576773C3AD4DE77A13952B487F9DA10DA9F* L_2 = __this->___m_ChromaticAberration_45;
		NullCheck(L_2);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_3 = L_2->___intensity_7;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_3);
		NullCheck(L_0);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_0, L_1, ((float)il2cpp_codegen_multiply(L_4, (0.0500000007f))), NULL);
		// if (m_ChromaticAberration.IsActive())
		ChromaticAberration_t84EAB576773C3AD4DE77A13952B487F9DA10DA9F* L_5 = __this->___m_ChromaticAberration_45;
		NullCheck(L_5);
		bool L_6;
		L_6 = ChromaticAberration_IsActive_mF820F1009BB285EE1752333366C146E33F863428(L_5, NULL);
		V_0 = L_6;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		// material.EnableKeyword(ShaderKeywordStrings.ChromaticAberration);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___material0;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_9 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___ChromaticAberration_41;
		NullCheck(L_8);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_8, L_9, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupVignette(UnityEngine.Material,UnityEngine.Rendering.Universal.XRPass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupVignette_m38D4298A0F0856445AEA0AA550956CDBEEFFC3E4 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* ___xrPass1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	float G_B10_0 = 0.0f;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B10_3 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B9_2 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B9_3 = NULL;
	float G_B11_0 = 0.0f;
	float G_B11_1 = 0.0f;
	float G_B11_2 = 0.0f;
	float G_B11_3 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B11_4 = NULL;
	{
		// var color = m_Vignette.color.value;
		Vignette_t77147DD5FEEB4476AF22BD98255F8010738985DC* L_0 = __this->___m_Vignette_46;
		NullCheck(L_0);
		ColorParameter_t367FD9EBE5DAA0ADB44F7DD0C260E9CDE3827CC0* L_1 = L_0->___color_7;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Color>::get_value() */, L_1);
		V_0 = L_2;
		// var center = m_Vignette.center.value;
		Vignette_t77147DD5FEEB4476AF22BD98255F8010738985DC* L_3 = __this->___m_Vignette_46;
		NullCheck(L_3);
		Vector2Parameter_tA29C9FAC53EDB2E0996430A461F9CC59B6C4288A* L_4 = L_3->___center_8;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = VirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, L_4);
		V_1 = L_5;
		// var aspectRatio = m_Descriptor.width / (float)m_Descriptor.height;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_6 = (&__this->___m_Descriptor_29);
		int32_t L_7;
		L_7 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline(L_6, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_8 = (&__this->___m_Descriptor_29);
		int32_t L_9;
		L_9 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline(L_8, NULL);
		V_2 = ((float)(((float)L_7)/((float)L_9)));
		// if (xrPass != null && xrPass.enabled)
		XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_10 = ___xrPass1;
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_11 = ___xrPass1;
		NullCheck(L_11);
		bool L_12;
		L_12 = XRPass_get_enabled_mC2CF12F8D66EB1EE2560B4DD1FB9343D5E598155(L_11, NULL);
		G_B3_0 = ((int32_t)(L_12));
		goto IL_0049;
	}

IL_0048:
	{
		G_B3_0 = 0;
	}

IL_0049:
	{
		V_5 = (bool)G_B3_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		// if (xrPass.singlePassEnabled)
		XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_14 = ___xrPass1;
		NullCheck(L_14);
		bool L_15;
		L_15 = XRPass_get_singlePassEnabled_mB8BBB9F66EE93200D10F7C6C766E5F2D855A6FF3(L_14, NULL);
		V_6 = L_15;
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0071;
		}
	}
	{
		// material.SetVector(ShaderConstants._Vignette_ParamsXR, xrPass.ApplyXRViewCenterOffset(center));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = ___material0;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_18 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Vignette_ParamsXR_31;
		XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_19 = ___xrPass1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_1;
		NullCheck(L_19);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21;
		L_21 = XRPass_ApplyXRViewCenterOffset_m53AA61C5C29E671EC5D9CE979C1E9A04C5FD54A6(L_19, L_20, NULL);
		NullCheck(L_17);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_17, L_18, L_21, NULL);
		goto IL_007e;
	}

IL_0071:
	{
		// center = xrPass.ApplyXRViewCenterOffset(center);
		XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_22 = ___xrPass1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_1;
		NullCheck(L_22);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24;
		L_24 = XRPass_ApplyXRViewCenterOffset_m53AA61C5C29E671EC5D9CE979C1E9A04C5FD54A6(L_22, L_23, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector4_op_Implicit_m6673D431FBCA5AFB6CF06CD9783D07A4C90CC2AA_inline(L_24, NULL);
		V_1 = L_25;
	}

IL_007e:
	{
	}

IL_007f:
	{
		// var v1 = new Vector4(
		//     color.r, color.g, color.b,
		//     m_Vignette.rounded.value ? aspectRatio : 1f
		// );
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = V_0;
		float L_27 = L_26.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		float L_29 = L_28.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = V_0;
		float L_31 = L_30.___b_2;
		Vignette_t77147DD5FEEB4476AF22BD98255F8010738985DC* L_32 = __this->___m_Vignette_46;
		NullCheck(L_32);
		BoolParameter_tAA460C5A72ADBDDB4519BFF0BA040EC202E14E95* L_33 = L_32->___rounded_11;
		NullCheck(L_33);
		bool L_34;
		L_34 = VirtualFuncInvoker0< bool >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Boolean>::get_value() */, L_33);
		G_B9_0 = L_31;
		G_B9_1 = L_29;
		G_B9_2 = L_27;
		G_B9_3 = (&V_3);
		if (L_34)
		{
			G_B10_0 = L_31;
			G_B10_1 = L_29;
			G_B10_2 = L_27;
			G_B10_3 = (&V_3);
			goto IL_00ac;
		}
	}
	{
		G_B11_0 = (1.0f);
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		G_B11_4 = G_B9_3;
		goto IL_00ad;
	}

IL_00ac:
	{
		float L_35 = V_2;
		G_B11_0 = L_35;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
	}

IL_00ad:
	{
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline(G_B11_4, G_B11_3, G_B11_2, G_B11_1, G_B11_0, NULL);
		// var v2 = new Vector4(
		//     center.x, center.y,
		//     m_Vignette.intensity.value * 3f,
		//     m_Vignette.smoothness.value * 5f
		// );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_1;
		float L_37 = L_36.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_1;
		float L_39 = L_38.___y_1;
		Vignette_t77147DD5FEEB4476AF22BD98255F8010738985DC* L_40 = __this->___m_Vignette_46;
		NullCheck(L_40);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_41 = L_40->___intensity_9;
		NullCheck(L_41);
		float L_42;
		L_42 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_41);
		Vignette_t77147DD5FEEB4476AF22BD98255F8010738985DC* L_43 = __this->___m_Vignette_46;
		NullCheck(L_43);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_44 = L_43->___smoothness_10;
		NullCheck(L_44);
		float L_45;
		L_45 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_44);
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_4), L_37, L_39, ((float)il2cpp_codegen_multiply(L_42, (3.0f))), ((float)il2cpp_codegen_multiply(L_45, (5.0f))), NULL);
		// material.SetVector(ShaderConstants._Vignette_Params1, v1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = ___material0;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_47 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Vignette_Params1_29;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_48 = V_3;
		NullCheck(L_46);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_46, L_47, L_48, NULL);
		// material.SetVector(ShaderConstants._Vignette_Params2, v2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = ___material0;
		int32_t L_50 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Vignette_Params2_30;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_51 = V_4;
		NullCheck(L_49);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_49, L_50, L_51, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupColorGrading(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.Universal.RenderingData&,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupColorGrading_m6FF0296D87AA0C6F079012989E9E971D3B05599A (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* ___renderingData1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t G_B2_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	int32_t G_B3_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_2 = NULL;
	{
		// ref var postProcessingData = ref renderingData.postProcessingData;
		RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* L_0 = ___renderingData1;
		PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4* L_1 = (&L_0->___postProcessingData_4);
		V_0 = L_1;
		// bool hdr = postProcessingData.gradingMode == ColorGradingMode.HighDynamicRange;
		PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4* L_2 = V_0;
		int32_t L_3 = L_2->___gradingMode_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		// int lutHeight = postProcessingData.lutSize;
		PostProcessingData_tFA75BF22951C600258B2707AF7A113E4EDA49BD4* L_4 = V_0;
		int32_t L_5 = L_4->___lutSize_1;
		V_2 = L_5;
		// int lutWidth = lutHeight * lutHeight;
		int32_t L_6 = V_2;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_6, L_7));
		// float postExposureLinear = Mathf.Pow(2f, m_ColorAdjustments.postExposure.value);
		ColorAdjustments_t97EE64C6DB384E5F6BC48C3FA13C207E8FC87A86* L_8 = __this->___m_ColorAdjustments_48;
		NullCheck(L_8);
		FloatParameter_t566B623CD21B2F957A20BA790ACEF6684A712106* L_9 = L_8->___postExposure_7;
		NullCheck(L_9);
		float L_10;
		L_10 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_9);
		float L_11;
		L_11 = powf((2.0f), L_10);
		V_4 = L_11;
		// cmd.SetGlobalTexture(ShaderConstants._InternalLut, m_InternalLut.nameID);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_12 = ___cmd0;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_13 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____InternalLut_34;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_14 = __this->___m_InternalLut_33;
		NullCheck(L_14);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_15;
		L_15 = RTHandle_get_nameID_m30AF2567853494DB845D83A8B37D0FB523DA76E9(L_14, NULL);
		NullCheck(L_12);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_12, L_13, L_15, NULL);
		// material.SetVector(ShaderConstants._Lut_Params, new Vector4(1f / lutWidth, 1f / lutHeight, lutHeight - 1f, postExposureLinear));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = ___material2;
		int32_t L_17 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Lut_Params_32;
		int32_t L_18 = V_3;
		int32_t L_19 = V_2;
		int32_t L_20 = V_2;
		float L_21 = V_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_22), ((float)((1.0f)/((float)L_18))), ((float)((1.0f)/((float)L_19))), ((float)il2cpp_codegen_subtract(((float)L_20), (1.0f))), L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_16, L_17, L_22, NULL);
		// material.SetTexture(ShaderConstants._UserLut, m_ColorLookup.texture.value);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = ___material2;
		int32_t L_24 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____UserLut_35;
		ColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C* L_25 = __this->___m_ColorLookup_47;
		NullCheck(L_25);
		TextureParameter_t8989581983DE4A463CBB1A19F90D9E27BF7EC28A* L_26 = L_25->___texture_7;
		NullCheck(L_26);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_27;
		L_27 = VirtualFuncInvoker0< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Texture>::get_value() */, L_26);
		NullCheck(L_23);
		Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD(L_23, L_24, L_27, NULL);
		// material.SetVector(ShaderConstants._UserLut_Params, !m_ColorLookup.IsActive()
		//     ? Vector4.zero
		//     : new Vector4(1f / m_ColorLookup.texture.value.width,
		//         1f / m_ColorLookup.texture.value.height,
		//         m_ColorLookup.texture.value.height - 1f,
		//         m_ColorLookup.contribution.value)
		// );
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = ___material2;
		int32_t L_29 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____UserLut_Params_33;
		ColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C* L_30 = __this->___m_ColorLookup_47;
		NullCheck(L_30);
		bool L_31;
		L_31 = ColorLookup_IsActive_m7264066E811F24C5EAEFAFB79F2110C089F2465A(L_30, NULL);
		G_B1_0 = L_29;
		G_B1_1 = L_28;
		if (!L_31)
		{
			G_B2_0 = L_29;
			G_B2_1 = L_28;
			goto IL_0115;
		}
	}
	{
		ColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C* L_32 = __this->___m_ColorLookup_47;
		NullCheck(L_32);
		TextureParameter_t8989581983DE4A463CBB1A19F90D9E27BF7EC28A* L_33 = L_32->___texture_7;
		NullCheck(L_33);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_34;
		L_34 = VirtualFuncInvoker0< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Texture>::get_value() */, L_33);
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_34);
		ColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C* L_36 = __this->___m_ColorLookup_47;
		NullCheck(L_36);
		TextureParameter_t8989581983DE4A463CBB1A19F90D9E27BF7EC28A* L_37 = L_36->___texture_7;
		NullCheck(L_37);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_38;
		L_38 = VirtualFuncInvoker0< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Texture>::get_value() */, L_37);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_38);
		ColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C* L_40 = __this->___m_ColorLookup_47;
		NullCheck(L_40);
		TextureParameter_t8989581983DE4A463CBB1A19F90D9E27BF7EC28A* L_41 = L_40->___texture_7;
		NullCheck(L_41);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_42;
		L_42 = VirtualFuncInvoker0< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Texture>::get_value() */, L_41);
		NullCheck(L_42);
		int32_t L_43;
		L_43 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_42);
		ColorLookup_t01A600A6D30CFBF1BA4A82FE2C2E97586B5D393C* L_44 = __this->___m_ColorLookup_47;
		NullCheck(L_44);
		ClampedFloatParameter_tCD9F742962EAA50F658BC77595AB025D9EF8DEB8* L_45 = L_44->___contribution_8;
		NullCheck(L_45);
		float L_46;
		L_46 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, L_45);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_47), ((float)((1.0f)/((float)L_35))), ((float)((1.0f)/((float)L_39))), ((float)il2cpp_codegen_subtract(((float)L_43), (1.0f))), L_46, /*hidden argument*/NULL);
		G_B3_0 = L_47;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_011a;
	}

IL_0115:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_48;
		L_48 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		G_B3_0 = L_48;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_011a:
	{
		NullCheck(G_B3_2);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(G_B3_2, G_B3_1, G_B3_0, NULL);
		// if (hdr)
		bool L_49 = V_1;
		V_5 = L_49;
		bool L_50 = V_5;
		if (!L_50)
		{
			goto IL_0137;
		}
	}
	{
		// material.EnableKeyword(ShaderKeywordStrings.HDRGrading);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51 = ___material2;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_52 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___HDRGrading_42;
		NullCheck(L_51);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_51, L_52, NULL);
		goto IL_017b;
	}

IL_0137:
	{
		// switch (m_Tonemapping.mode.value)
		Tonemapping_tB71CED262B25FC58B0259FD05DD32821C2858DBA* L_53 = __this->___m_Tonemapping_49;
		NullCheck(L_53);
		TonemappingModeParameter_t0F6AAE0B6FFB371E2035BB0C739AF87C37E1760A* L_54 = L_53->___mode_7;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Rendering.Universal.TonemappingMode>::get_value() */, L_54);
		V_7 = L_55;
		int32_t L_56 = V_7;
		V_6 = L_56;
		int32_t L_57 = V_6;
		if ((((int32_t)L_57) == ((int32_t)1)))
		{
			goto IL_015c;
		}
	}
	{
		goto IL_0155;
	}

IL_0155:
	{
		int32_t L_58 = V_6;
		if ((((int32_t)L_58) == ((int32_t)2)))
		{
			goto IL_016a;
		}
	}
	{
		goto IL_0178;
	}

IL_015c:
	{
		// case TonemappingMode.Neutral: material.EnableKeyword(ShaderKeywordStrings.TonemapNeutral); break;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59 = ___material2;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_60 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___TonemapNeutral_44;
		NullCheck(L_59);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_59, L_60, NULL);
		// case TonemappingMode.Neutral: material.EnableKeyword(ShaderKeywordStrings.TonemapNeutral); break;
		goto IL_017a;
	}

IL_016a:
	{
		// case TonemappingMode.ACES: material.EnableKeyword(ShaderKeywordStrings.TonemapACES); break;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_61 = ___material2;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_62 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___TonemapACES_43;
		NullCheck(L_61);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_61, L_62, NULL);
		// case TonemappingMode.ACES: material.EnableKeyword(ShaderKeywordStrings.TonemapACES); break;
		goto IL_017a;
	}

IL_0178:
	{
		// default: break; // None
		goto IL_017a;
	}

IL_017a:
	{
	}

IL_017b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupGrain(UnityEngine.Rendering.Universal.CameraData&,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupGrain_m949060E3A47FD58C37EC07BF3D0E15258FA05B57 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* ___cameraData0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!m_HasFinalPass && m_FilmGrain.IsActive())
		bool L_0 = __this->___m_HasFinalPass_65;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		FilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172* L_1 = __this->___m_FilmGrain_50;
		NullCheck(L_1);
		bool L_2;
		L_2 = FilmGrain_IsActive_m9251CA64E6E5E1FB8609260F85CEB07BA04B4BA9(L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		// material.EnableKeyword(ShaderKeywordStrings.FilmGrain);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___material1;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_5 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___FilmGrain_45;
		NullCheck(L_4);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_4, L_5, NULL);
		// PostProcessUtils.ConfigureFilmGrain(
		//     m_Data,
		//     m_FilmGrain,
		//     cameraData.pixelWidth, cameraData.pixelHeight,
		//     material
		// );
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_6 = __this->___m_Data_39;
		FilmGrain_t87D5F559E2E345EE7BD347456D99BC8E232A5172* L_7 = __this->___m_FilmGrain_50;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_8 = ___cameraData0;
		int32_t L_9 = L_8->___pixelWidth_7;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_10 = ___cameraData0;
		int32_t L_11 = L_10->___pixelHeight_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___material1;
		PostProcessUtils_ConfigureFilmGrain_m9AFEDA4B679AB1D1D47F8EC440BADA369715A85B(L_6, L_7, L_9, L_11, L_12, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::SetupDithering(UnityEngine.Rendering.Universal.CameraData&,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_SetupDithering_m229F0AADDAB308E22BF57F2946D2B4F316A95306 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* ___cameraData0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!m_HasFinalPass && cameraData.isDitheringEnabled)
		bool L_0 = __this->___m_HasFinalPass_65;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_1 = ___cameraData0;
		bool L_2 = L_1->___isDitheringEnabled_28;
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		// material.EnableKeyword(ShaderKeywordStrings.Dithering);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = ___material1;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_5 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___Dithering_47;
		NullCheck(L_4);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_4, L_5, NULL);
		// m_DitheringTextureIndex = PostProcessUtils.ConfigureDithering(
		//     m_Data,
		//     m_DitheringTextureIndex,
		//     cameraData.pixelWidth, cameraData.pixelHeight,
		//     material
		// );
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_6 = __this->___m_Data_39;
		int32_t L_7 = __this->___m_DitheringTextureIndex_58;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_8 = ___cameraData0;
		int32_t L_9 = L_8->___pixelWidth_7;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_10 = ___cameraData0;
		int32_t L_11 = L_10->___pixelHeight_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___material1;
		int32_t L_13;
		L_13 = PostProcessUtils_ConfigureDithering_m4EDD6C3D556383E75451522FF1E51E3B47DACD9C(L_6, L_7, L_9, L_11, L_12, NULL);
		__this->___m_DitheringTextureIndex_58 = L_13;
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::RenderFinalPass(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.Universal.RenderingData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_RenderFinalPass_mF69E5F1F2DC1DA64F0467D0DF45E75A80E13171F (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* ___renderingData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderingUtils_t4E40200449A82FA3A172A563C490DF11FADA2BE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_10;
	memset((&V_10), 0, sizeof(V_10));
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B V_11;
	memset((&V_11), 0, sizeof(V_11));
	DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4* G_B6_0 = NULL;
	DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4* G_B5_0 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B19_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B G_B26_0;
	memset((&G_B26_0), 0, sizeof(G_B26_0));
	{
		// ref var cameraData = ref renderingData.cameraData;
		RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* L_0 = ___renderingData1;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_1 = (&L_0->___cameraData_1);
		V_0 = L_1;
		// var material = m_Materials.finalPass;
		MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* L_2 = __this->___m_Materials_38;
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = L_2->___finalPass_8;
		V_1 = L_3;
		// material.shaderKeywords = null;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = V_1;
		NullCheck(L_4);
		Material_set_shaderKeywords_mD650CF82B2DBB75F001E373E2E1ACA30876F3AB8(L_4, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		// if (cameraData.antialiasing == AntialiasingMode.FastApproximateAntialiasing)
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_5 = V_0;
		int32_t L_6 = L_5->___antialiasing_29;
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// material.EnableKeyword(ShaderKeywordStrings.Fxaa);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_9 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___Fxaa_46;
		NullCheck(L_8);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_8, L_9, NULL);
	}

IL_0035:
	{
		// PostProcessUtils.SetSourceSize(cmd, cameraData.cameraTargetDescriptor);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_10 = ___cmd0;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_11 = V_0;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_12 = L_11->___cameraTargetDescriptor_5;
		PostProcessUtils_SetSourceSize_m5EF5F2F3FE68CFDEFF201F07CBD403BBD96F0E35(L_10, L_12, NULL);
		// SetupGrain(cameraData, material);
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_13 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = V_1;
		PostProcessPass_SetupGrain_m949060E3A47FD58C37EC07BF3D0E15258FA05B57(__this, L_13, L_14, NULL);
		// SetupDithering(cameraData, material);
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_15 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = V_1;
		PostProcessPass_SetupDithering_m229F0AADDAB308E22BF57F2946D2B4F316A95306(__this, L_15, L_16, NULL);
		// if (RequireSRGBConversionBlitToBackBuffer(cameraData))
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_17 = V_0;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E L_18 = (*(CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E*)L_17);
		bool L_19;
		L_19 = PostProcessPass_RequireSRGBConversionBlitToBackBuffer_mFFF0A97570D59F4A86CD4C20FC6C188E022F75D7(__this, L_18, NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		// material.EnableKeyword(ShaderKeywordStrings.LinearToSRGBConversion);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var);
		String_t* L_22 = ((ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_StaticFields*)il2cpp_codegen_static_fields_for(ShaderKeywordStrings_t2E3A486F4EA470C576FF26DEC16CDB5C9FBB7A14_il2cpp_TypeInfo_var))->___LinearToSRGBConversion_22;
		NullCheck(L_21);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_21, L_22, NULL);
	}

IL_0072:
	{
		// GetActiveDebugHandler(renderingData)?.UpdateShaderGlobalPropertiesForFinalValidationPass(cmd, ref cameraData, m_IsFinalPass);
		RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71* L_23 = ___renderingData1;
		RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71 L_24 = (*(RenderingData_tAAA01190551D6D5954314E3E1E85B58DD45EED71*)L_23);
		DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4* L_25;
		L_25 = ScriptableRenderPass_GetActiveDebugHandler_m1B3D8D7F93DEF1415F494EEF46687F21DE379448(__this, L_24, NULL);
		DebugHandler_t3A09E2CFD1CA6F5C192968A6FF19EE4863F44DA4* L_26 = L_25;
		G_B5_0 = L_26;
		if (L_26)
		{
			G_B6_0 = L_26;
			goto IL_0084;
		}
	}
	{
		goto IL_0092;
	}

IL_0084:
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_27 = ___cmd0;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_28 = V_0;
		bool L_29 = __this->___m_IsFinalPass_64;
		NullCheck(G_B6_0);
		DebugHandler_UpdateShaderGlobalPropertiesForFinalValidationPass_m70191758CEDBFFA4ED2D26A58FDD0680BBAFAC25(G_B6_0, L_27, L_28, L_29, NULL);
	}

IL_0092:
	{
		// if (m_UseSwapBuffer)
		bool L_30 = __this->___m_UseSwapBuffer_70;
		V_5 = L_30;
		bool L_31 = V_5;
		if (!L_31)
		{
			goto IL_00b0;
		}
	}
	{
		// m_Source = cameraData.renderer.GetCameraColorBackBuffer(cmd);
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_32 = V_0;
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* L_33 = L_32->___renderer_31;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_34 = ___cmd0;
		NullCheck(L_33);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_35;
		L_35 = VirtualFuncInvoker1< RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B*, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* >::Invoke(7 /* UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.ScriptableRenderer::GetCameraColorBackBuffer(UnityEngine.Rendering.CommandBuffer) */, L_33, L_34);
		__this->___m_Source_30 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Source_30), (void*)L_35);
	}

IL_00b0:
	{
		// cmd.SetGlobalTexture(ShaderPropertyId.sourceTex, m_Source);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_36 = ___cmd0;
		il2cpp_codegen_runtime_class_init_inline(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var);
		int32_t L_37 = ((ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var))->___sourceTex_33;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_38 = __this->___m_Source_30;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_39;
		L_39 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_38, NULL);
		NullCheck(L_36);
		CommandBuffer_SetGlobalTexture_m65E012CB3C35EA43533CB4FF4C6F6498FDE229CD(L_36, L_37, L_39, NULL);
		// var colorLoadAction = cameraData.isDefaultViewport ? RenderBufferLoadAction.DontCare : RenderBufferLoadAction.Load;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_40 = V_0;
		bool L_41 = L_40->___isDefaultViewport_13;
		if (L_41)
		{
			goto IL_00d2;
		}
	}
	{
		G_B12_0 = 0;
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B12_0 = 2;
	}

IL_00d3:
	{
		V_2 = G_B12_0;
		// if (cameraData.xr.enabled)
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_42 = V_0;
		XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_43 = L_42->___xr_20;
		NullCheck(L_43);
		bool L_44;
		L_44 = XRPass_get_enabled_mC2CF12F8D66EB1EE2560B4DD1FB9343D5E598155(L_43, NULL);
		V_6 = L_44;
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_01ad;
		}
	}
	{
		// RenderTargetIdentifier cameraTarget = cameraData.xr.renderTarget;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_46 = V_0;
		XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_47 = L_46->___xr_20;
		NullCheck(L_47);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_48;
		L_48 = XRPass_get_renderTarget_m595B27BD6972FE1F74FCE71CB29088F159E84B18_inline(L_47, NULL);
		V_7 = L_48;
		// bool isRenderToBackBufferTarget = cameraTarget == cameraData.xr.renderTarget && !cameraData.xr.renderTargetIsRenderTexture;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_49 = V_7;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_50 = V_0;
		XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_51 = L_50->___xr_20;
		NullCheck(L_51);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_52;
		L_52 = XRPass_get_renderTarget_m595B27BD6972FE1F74FCE71CB29088F159E84B18_inline(L_51, NULL);
		bool L_53;
		L_53 = RenderTargetIdentifier_op_Equality_mD9FD6667F4C385F2379E9DEAAA8F91B7A1D50A1F(L_49, L_52, NULL);
		if (!L_53)
		{
			goto IL_011a;
		}
	}
	{
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_54 = V_0;
		XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* L_55 = L_54->___xr_20;
		NullCheck(L_55);
		bool L_56;
		L_56 = XRPass_get_renderTargetIsRenderTexture_m79E6747B91048C48ED200D3A99B96621D0BFB67A_inline(L_55, NULL);
		G_B16_0 = ((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
		goto IL_011b;
	}

IL_011a:
	{
		G_B16_0 = 0;
	}

IL_011b:
	{
		V_8 = (bool)G_B16_0;
		// bool yflip = isRenderToBackBufferTarget && SystemInfo.graphicsUVStartsAtTop;
		bool L_57 = V_8;
		if (!L_57)
		{
			goto IL_0128;
		}
	}
	{
		bool L_58;
		L_58 = SystemInfo_get_graphicsUVStartsAtTop_m152BEEFFF20719C9EAB612AD238114BD0B3BFE4B(NULL);
		G_B19_0 = ((int32_t)(L_58));
		goto IL_0129;
	}

IL_0128:
	{
		G_B19_0 = 0;
	}

IL_0129:
	{
		V_9 = (bool)G_B19_0;
		// Vector4 scaleBias = yflip ? new Vector4(1, -1, 0, 1) : new Vector4(1, 1, 0, 0);
		bool L_59 = V_9;
		if (L_59)
		{
			goto IL_014a;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_60), (1.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		G_B22_0 = L_60;
		goto IL_0163;
	}

IL_014a:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_61), (1.0f), (-1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		G_B22_0 = L_61;
	}

IL_0163:
	{
		V_10 = G_B22_0;
		// cmd.SetRenderTarget(new RenderTargetIdentifier(cameraTarget, 0, CubemapFace.Unknown, -1),
		//     colorLoadAction, RenderBufferStoreAction.Store, RenderBufferLoadAction.DontCare, RenderBufferStoreAction.DontCare);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_62 = ___cmd0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_63 = V_7;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_64;
		memset((&L_64), 0, sizeof(L_64));
		RenderTargetIdentifier__ctor_m79A7348AF351A912E617BF9C8A44A766648C80FB((&L_64), L_63, 0, (-1), (-1), /*hidden argument*/NULL);
		int32_t L_65 = V_2;
		NullCheck(L_62);
		CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C(L_62, L_64, L_65, 0, 2, 3, NULL);
		// cmd.SetViewport(cameraData.pixelRect);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_66 = ___cmd0;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_67 = V_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_68 = L_67->___pixelRect_6;
		NullCheck(L_66);
		CommandBuffer_SetViewport_m3BCCABB7493369D88DB15EE43C41D9858AE2574D(L_66, L_68, NULL);
		// cmd.SetGlobalVector(ShaderPropertyId.scaleBias, scaleBias);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_69 = ___cmd0;
		il2cpp_codegen_runtime_class_init_inline(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var);
		int32_t L_70 = ((ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_StaticFields*)il2cpp_codegen_static_fields_for(ShaderPropertyId_tAA7B64E0C225CFD70D9837D0733FDE84DC3310D2_il2cpp_TypeInfo_var))->___scaleBias_34;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_71 = V_10;
		NullCheck(L_69);
		CommandBuffer_SetGlobalVector_mBE497AA5F5C9E71A3F353BA1BDB97D8AC4B75FDA(L_69, L_70, L_71, NULL);
		// cmd.DrawProcedural(Matrix4x4.identity, material, 0, MeshTopology.Quads, 4, 1, null);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_72 = ___cmd0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_73;
		L_73 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74 = V_1;
		NullCheck(L_72);
		CommandBuffer_DrawProcedural_m460EDBBEDA84E4743CA09A2F0EF44A6149C4EBD7(L_72, L_73, L_74, 0, 2, 4, 1, (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)NULL, NULL);
		goto IL_023c;
	}

IL_01ad:
	{
		// RenderTargetIdentifier cameraTarget = (cameraData.targetTexture != null) ? new RenderTargetIdentifier(cameraData.targetTexture) : BuiltinRenderTextureType.CameraTarget;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_75 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_76 = L_75->___targetTexture_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_77;
		L_77 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_76, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_77)
		{
			goto IL_01c4;
		}
	}
	{
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_78;
		L_78 = RenderTargetIdentifier_op_Implicit_m3E2366E36F14173DBEED75591978EBE1F01A1325(2, NULL);
		G_B26_0 = L_78;
		goto IL_01cf;
	}

IL_01c4:
	{
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_79 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_80 = L_79->___targetTexture_4;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_81;
		memset((&L_81), 0, sizeof(L_81));
		RenderTargetIdentifier__ctor_mD6E20FA134EEBCE40A8B5E64C505DE8A0DC96BDF((&L_81), L_80, /*hidden argument*/NULL);
		G_B26_0 = L_81;
	}

IL_01cf:
	{
		V_11 = G_B26_0;
		// cmd.SetRenderTarget(cameraTarget, colorLoadAction, RenderBufferStoreAction.Store, RenderBufferLoadAction.DontCare, RenderBufferStoreAction.DontCare);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_82 = ___cmd0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_83 = V_11;
		int32_t L_84 = V_2;
		NullCheck(L_82);
		CommandBuffer_SetRenderTarget_m00472C42F4BAE11802652921705D554E158D926C(L_82, L_83, L_84, 0, 2, 3, NULL);
		// cmd.SetViewProjectionMatrices(Matrix4x4.identity, Matrix4x4.identity);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_85 = ___cmd0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_86;
		L_86 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_87;
		L_87 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		NullCheck(L_85);
		CommandBuffer_SetViewProjectionMatrices_m50A472F193C13207D81B5EC8FB007F76E36A8C75(L_85, L_86, L_87, NULL);
		// cmd.SetViewport(cameraData.pixelRect);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_88 = ___cmd0;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_89 = V_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_90 = L_89->___pixelRect_6;
		NullCheck(L_88);
		CommandBuffer_SetViewport_m3BCCABB7493369D88DB15EE43C41D9858AE2574D(L_88, L_90, NULL);
		// cmd.DrawMesh(RenderingUtils.fullscreenMesh, Matrix4x4.identity, material);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_91 = ___cmd0;
		il2cpp_codegen_runtime_class_init_inline(RenderingUtils_t4E40200449A82FA3A172A563C490DF11FADA2BE1_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_92;
		L_92 = RenderingUtils_get_fullscreenMesh_m6593C7C1C240A56AC8BD7C112DD672EEDE28F34E(NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_93;
		L_93 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94 = V_1;
		NullCheck(L_91);
		CommandBuffer_DrawMesh_m45BA88D4388EC7E5CDAABD42CD6CE29A5120042C(L_91, L_92, L_93, L_94, NULL);
		// cmd.SetViewProjectionMatrices(cameraData.camera.worldToCameraMatrix, cameraData.camera.projectionMatrix);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_95 = ___cmd0;
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_96 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_97 = L_96->___camera_2;
		NullCheck(L_97);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_98;
		L_98 = Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40(L_97, NULL);
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_99 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_100 = L_99->___camera_2;
		NullCheck(L_100);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_101;
		L_101 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_100, NULL);
		NullCheck(L_95);
		CommandBuffer_SetViewProjectionMatrices_m50A472F193C13207D81B5EC8FB007F76E36A8C75(L_95, L_98, L_101, NULL);
		// cameraData.renderer.ConfigureCameraTarget(cameraTarget, cameraTarget);
		CameraData_tC27AE109CD20677486A4AC19C0CF014AE0F50C3E* L_102 = V_0;
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* L_103 = L_102->___renderer_31;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_104 = V_11;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_105 = V_11;
		NullCheck(L_103);
		ScriptableRenderer_ConfigureCameraTarget_m4067416B1E8D785A5BADBEFB1E73FDA7A6A0D440(L_103, L_104, L_105, NULL);
	}

IL_023c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass__cctor_mB308D890BD844B665CCB542C97698B87256087DA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB13FC67A490243407C31B667439121EE0D06846D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD43BE2E9022947EFE17627374058F5286CB8905B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilingSampler m_ProfilingRenderPostProcessing = new ProfilingSampler(k_RenderPostProcessingTag);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_0 = (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE*)il2cpp_codegen_object_new(ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ProfilingSampler__ctor_m26500989FCDB07FA33C9A3BB7F215CBD892F5BB7(L_0, _stringLiteralB13FC67A490243407C31B667439121EE0D06846D, NULL);
		((PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_StaticFields*)il2cpp_codegen_static_fields_for(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var))->___m_ProfilingRenderPostProcessing_36 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_StaticFields*)il2cpp_codegen_static_fields_for(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var))->___m_ProfilingRenderPostProcessing_36), (void*)L_0);
		// private static readonly ProfilingSampler m_ProfilingRenderFinalPostProcessing = new ProfilingSampler(k_RenderFinalPostProcessingTag);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_1 = (ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE*)il2cpp_codegen_object_new(ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ProfilingSampler__ctor_m26500989FCDB07FA33C9A3BB7F215CBD892F5BB7(L_1, _stringLiteralD43BE2E9022947EFE17627374058F5286CB8905B, NULL);
		((PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_StaticFields*)il2cpp_codegen_static_fields_for(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var))->___m_ProfilingRenderFinalPostProcessing_37 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_StaticFields*)il2cpp_codegen_static_fields_for(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var))->___m_ProfilingRenderFinalPostProcessing_37), (void*)L_1);
		// internal static readonly Matrix4x4[] viewProjMatrixStereo = new Matrix4x4[2];
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_2 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)2);
		((PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_StaticFields*)il2cpp_codegen_static_fields_for(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var))->___viewProjMatrixStereo_74 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_StaticFields*)il2cpp_codegen_static_fields_for(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var))->___viewProjMatrixStereo_74), (void*)L_2);
		return;
	}
}
// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.PostProcessPass::<Render>g__GetSource|60_0(UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c__DisplayClass60_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* PostProcessPass_U3CRenderU3Eg__GetSourceU7C60_0_mAF2EFC98E40F74B4BE7B638A8A07ADE5700BC542 (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* p0, const RuntimeMethod* method) 
{
	{
		// RTHandle GetSource() => source;
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_0 = p0;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_1 = L_0->___source_0;
		return L_1;
	}
}
// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.PostProcessPass::<Render>g__GetDestination|60_1(UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c__DisplayClass60_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* PostProcessPass_U3CRenderU3Eg__GetDestinationU7C60_1_m7CA5DE57A11DA8DBA33C9D43DDC6CEB36B4503EE (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B7_0 = 0;
	{
		// if (m_UseSwapBuffer)
		bool L_0 = __this->___m_UseSwapBuffer_70;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return destination;
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_2 = p0;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_3 = L_2->___destination_2;
		V_1 = L_3;
		goto IL_00ba;
	}

IL_0017:
	{
		// if (destination.nameID == BuiltinRenderTextureType.CameraTarget)
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_4 = p0;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_5 = L_4->___destination_2;
		NullCheck(L_5);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_6;
		L_6 = RTHandle_get_nameID_m30AF2567853494DB845D83A8B37D0FB523DA76E9(L_5, NULL);
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_7;
		L_7 = RenderTargetIdentifier_op_Implicit_m3E2366E36F14173DBEED75591978EBE1F01A1325(2, NULL);
		bool L_8;
		L_8 = RenderTargetIdentifier_op_Equality_mD9FD6667F4C385F2379E9DEAAA8F91B7A1D50A1F(L_6, L_7, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		// cmd.GetTemporaryRT(ShaderConstants._TempTarget, GetCompatibleDescriptor(), FilterMode.Bilinear);
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_10 = p0;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_11 = L_10->___cmd_3;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_12 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____TempTarget_0;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_13;
		L_13 = PostProcessPass_GetCompatibleDescriptor_m22DFDB00C3012A4AADFBC8F5A483E6139BBD42BC(__this, NULL);
		NullCheck(L_11);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_11, L_12, L_13, 1, NULL);
		// destination = m_TempTarget;
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_14 = p0;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_15 = __this->___m_TempTarget_71;
		L_14->___destination_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___destination_2), (void*)L_15);
		// tempTargetUsed = true;
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_16 = p0;
		L_16->___tempTargetUsed_4 = (bool)1;
		goto IL_00b1;
	}

IL_0061:
	{
		// else if (destination == m_Source && m_Descriptor.msaaSamples > 1)
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_17 = p0;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_18 = L_17->___destination_2;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_19 = __this->___m_Source_30;
		if ((!(((RuntimeObject*)(RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B*)L_18) == ((RuntimeObject*)(RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B*)L_19))))
		{
			goto IL_007f;
		}
	}
	{
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_20 = (&__this->___m_Descriptor_29);
		int32_t L_21;
		L_21 = RenderTextureDescriptor_get_msaaSamples_mFCC33643AFF2265C8305DCFD79ED8774A1A8FA22_inline(L_20, NULL);
		G_B7_0 = ((((int32_t)L_21) > ((int32_t)1))? 1 : 0);
		goto IL_0080;
	}

IL_007f:
	{
		G_B7_0 = 0;
	}

IL_0080:
	{
		V_3 = (bool)G_B7_0;
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_00b1;
		}
	}
	{
		// cmd.GetTemporaryRT(ShaderConstants._TempTarget2, GetCompatibleDescriptor(), FilterMode.Bilinear);
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_23 = p0;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_24 = L_23->___cmd_3;
		il2cpp_codegen_runtime_class_init_inline(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		int32_t L_25 = ((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____TempTarget2_1;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_26;
		L_26 = PostProcessPass_GetCompatibleDescriptor_m22DFDB00C3012A4AADFBC8F5A483E6139BBD42BC(__this, NULL);
		NullCheck(L_24);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_24, L_25, L_26, 1, NULL);
		// destination = m_TempTarget2;
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_27 = p0;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_28 = __this->___m_TempTarget2_72;
		L_27->___destination_2 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___destination_2), (void*)L_28);
		// tempTarget2Used = true;
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_29 = p0;
		L_29->___tempTarget2Used_5 = (bool)1;
	}

IL_00b1:
	{
		// return destination;
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_30 = p0;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_31 = L_30->___destination_2;
		V_1 = L_31;
		goto IL_00ba;
	}

IL_00ba:
	{
		// }
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_32 = V_1;
		return L_32;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass::<Render>g__Swap|60_2(UnityEngine.Rendering.Universal.ScriptableRenderer&,UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c__DisplayClass60_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostProcessPass_U3CRenderU3Eg__SwapU7C60_2_m6E4963751FB3FA1E6B8D486FE572A42D8003233E (PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286* __this, ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** ___r0, U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreUtils_Swap_TisRTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B_m90EAC541E53A878FAD361EEA8BC135CEB507E9E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		// --amountOfPassesRemaining;
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_0 = p1;
		int32_t L_1 = L_0->___amountOfPassesRemaining_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_2 = p1;
		int32_t L_3 = V_0;
		L_2->___amountOfPassesRemaining_6 = L_3;
		// if (m_UseSwapBuffer)
		bool L_4 = __this->___m_UseSwapBuffer_70;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006e;
		}
	}
	{
		// r.SwapColorBuffer(cmd);
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** L_6 = ___r0;
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* L_7 = *((ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892**)L_6);
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_8 = p1;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_9 = L_8->___cmd_3;
		NullCheck(L_7);
		VirtualActionInvoker1< CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* >::Invoke(13 /* System.Void UnityEngine.Rendering.Universal.ScriptableRenderer::SwapColorBuffer(UnityEngine.Rendering.CommandBuffer) */, L_7, L_9);
		// source = r.cameraColorTargetHandle;
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_10 = p1;
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** L_11 = ___r0;
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* L_12 = *((ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892**)L_11);
		NullCheck(L_12);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_13;
		L_13 = ScriptableRenderer_get_cameraColorTargetHandle_mB0B32CF50F711E4B41822F4F6BBCE2091C608A6D(L_12, NULL);
		L_10->___source_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___source_0), (void*)L_13);
		// if (amountOfPassesRemaining == 0 && !m_HasFinalPass)
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_14 = p1;
		int32_t L_15 = L_14->___amountOfPassesRemaining_6;
		if (L_15)
		{
			goto IL_004a;
		}
	}
	{
		bool L_16 = __this->___m_HasFinalPass_65;
		G_B4_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_004b;
	}

IL_004a:
	{
		G_B4_0 = 0;
	}

IL_004b:
	{
		V_2 = (bool)G_B4_0;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0058;
		}
	}
	{
		// r.EnableSwapBufferMSAA(true);
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** L_18 = ___r0;
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* L_19 = *((ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892**)L_18);
		NullCheck(L_19);
		VirtualActionInvoker1< bool >::Invoke(14 /* System.Void UnityEngine.Rendering.Universal.ScriptableRenderer::EnableSwapBufferMSAA(System.Boolean) */, L_19, (bool)1);
	}

IL_0058:
	{
		// destination = r.GetCameraColorFrontBuffer(cmd);
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_20 = p1;
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892** L_21 = ___r0;
		ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892* L_22 = *((ScriptableRenderer_tF15B95BB85F26BE4B4719901D909831B89DC8892**)L_21);
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_23 = p1;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_24 = L_23->___cmd_3;
		NullCheck(L_22);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_25;
		L_25 = VirtualFuncInvoker1< RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B*, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* >::Invoke(6 /* UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.ScriptableRenderer::GetCameraColorFrontBuffer(UnityEngine.Rendering.CommandBuffer) */, L_22, L_24);
		L_20->___destination_2 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___destination_2), (void*)L_25);
		goto IL_0082;
	}

IL_006e:
	{
		// CoreUtils.Swap(ref source, ref destination);
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_26 = p1;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** L_27 = (&L_26->___source_0);
		U3CU3Ec__DisplayClass60_0_tB0E5DF23B709657C9D93BAC377FAA1E268DED681* L_28 = p1;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** L_29 = (&L_28->___destination_2);
		il2cpp_codegen_runtime_class_init_inline(CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		CoreUtils_Swap_TisRTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B_m90EAC541E53A878FAD361EEA8BC135CEB507E9E6(L_27, L_29, CoreUtils_Swap_TisRTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B_m90EAC541E53A878FAD361EEA8BC135CEB507E9E6_RuntimeMethod_var);
	}

IL_0082:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::.ctor(UnityEngine.Rendering.Universal.PostProcessData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialLibrary__ctor_mA85804FBE3A866F53E0193EB243B7E615FC48CC7 (MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* __this, PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* ___data0, const RuntimeMethod* method) 
{
	{
		// public MaterialLibrary(PostProcessData data)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// stopNaN = Load(data.shaders.stopNanPS);
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_0 = ___data0;
		NullCheck(L_0);
		ShaderResources_t5CFF4C7697343EC59BAE5094B637F9EC23CE6D59* L_1 = L_0->___shaders_4;
		NullCheck(L_1);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = L_1->___stopNanPS_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = MaterialLibrary_Load_mE88D2915A87998139CF7455C07F5F69D0226BC69(__this, L_2, NULL);
		__this->___stopNaN_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stopNaN_0), (void*)L_3);
		// subpixelMorphologicalAntialiasing = Load(data.shaders.subpixelMorphologicalAntialiasingPS);
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_4 = ___data0;
		NullCheck(L_4);
		ShaderResources_t5CFF4C7697343EC59BAE5094B637F9EC23CE6D59* L_5 = L_4->___shaders_4;
		NullCheck(L_5);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6 = L_5->___subpixelMorphologicalAntialiasingPS_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = MaterialLibrary_Load_mE88D2915A87998139CF7455C07F5F69D0226BC69(__this, L_6, NULL);
		__this->___subpixelMorphologicalAntialiasing_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subpixelMorphologicalAntialiasing_1), (void*)L_7);
		// gaussianDepthOfField = Load(data.shaders.gaussianDepthOfFieldPS);
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_8 = ___data0;
		NullCheck(L_8);
		ShaderResources_t5CFF4C7697343EC59BAE5094B637F9EC23CE6D59* L_9 = L_8->___shaders_4;
		NullCheck(L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = L_9->___gaussianDepthOfFieldPS_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = MaterialLibrary_Load_mE88D2915A87998139CF7455C07F5F69D0226BC69(__this, L_10, NULL);
		__this->___gaussianDepthOfField_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gaussianDepthOfField_2), (void*)L_11);
		// bokehDepthOfField = Load(data.shaders.bokehDepthOfFieldPS);
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_12 = ___data0;
		NullCheck(L_12);
		ShaderResources_t5CFF4C7697343EC59BAE5094B637F9EC23CE6D59* L_13 = L_12->___shaders_4;
		NullCheck(L_13);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_14 = L_13->___bokehDepthOfFieldPS_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = MaterialLibrary_Load_mE88D2915A87998139CF7455C07F5F69D0226BC69(__this, L_14, NULL);
		__this->___bokehDepthOfField_3 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bokehDepthOfField_3), (void*)L_15);
		// cameraMotionBlur = Load(data.shaders.cameraMotionBlurPS);
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_16 = ___data0;
		NullCheck(L_16);
		ShaderResources_t5CFF4C7697343EC59BAE5094B637F9EC23CE6D59* L_17 = L_16->___shaders_4;
		NullCheck(L_17);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_18 = L_17->___cameraMotionBlurPS_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19;
		L_19 = MaterialLibrary_Load_mE88D2915A87998139CF7455C07F5F69D0226BC69(__this, L_18, NULL);
		__this->___cameraMotionBlur_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraMotionBlur_4), (void*)L_19);
		// paniniProjection = Load(data.shaders.paniniProjectionPS);
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_20 = ___data0;
		NullCheck(L_20);
		ShaderResources_t5CFF4C7697343EC59BAE5094B637F9EC23CE6D59* L_21 = L_20->___shaders_4;
		NullCheck(L_21);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_22 = L_21->___paniniProjectionPS_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23;
		L_23 = MaterialLibrary_Load_mE88D2915A87998139CF7455C07F5F69D0226BC69(__this, L_22, NULL);
		__this->___paniniProjection_5 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paniniProjection_5), (void*)L_23);
		// bloom = Load(data.shaders.bloomPS);
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_24 = ___data0;
		NullCheck(L_24);
		ShaderResources_t5CFF4C7697343EC59BAE5094B637F9EC23CE6D59* L_25 = L_24->___shaders_4;
		NullCheck(L_25);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_26 = L_25->___bloomPS_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27;
		L_27 = MaterialLibrary_Load_mE88D2915A87998139CF7455C07F5F69D0226BC69(__this, L_26, NULL);
		__this->___bloom_6 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bloom_6), (void*)L_27);
		// uber = Load(data.shaders.uberPostPS);
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_28 = ___data0;
		NullCheck(L_28);
		ShaderResources_t5CFF4C7697343EC59BAE5094B637F9EC23CE6D59* L_29 = L_28->___shaders_4;
		NullCheck(L_29);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_30 = L_29->___uberPostPS_10;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31;
		L_31 = MaterialLibrary_Load_mE88D2915A87998139CF7455C07F5F69D0226BC69(__this, L_30, NULL);
		__this->___uber_7 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uber_7), (void*)L_31);
		// finalPass = Load(data.shaders.finalPostPassPS);
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_32 = ___data0;
		NullCheck(L_32);
		ShaderResources_t5CFF4C7697343EC59BAE5094B637F9EC23CE6D59* L_33 = L_32->___shaders_4;
		NullCheck(L_33);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_34 = L_33->___finalPostPassPS_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35;
		L_35 = MaterialLibrary_Load_mE88D2915A87998139CF7455C07F5F69D0226BC69(__this, L_34, NULL);
		__this->___finalPass_8 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___finalPass_8), (void*)L_35);
		// lensFlareDataDriven = Load(data.shaders.LensFlareDataDrivenPS);
		PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* L_36 = ___data0;
		NullCheck(L_36);
		ShaderResources_t5CFF4C7697343EC59BAE5094B637F9EC23CE6D59* L_37 = L_36->___shaders_4;
		NullCheck(L_37);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_38 = L_37->___LensFlareDataDrivenPS_9;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39;
		L_39 = MaterialLibrary_Load_mE88D2915A87998139CF7455C07F5F69D0226BC69(__this, L_38, NULL);
		__this->___lensFlareDataDriven_9 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lensFlareDataDriven_9), (void*)L_39);
		// }
		return;
	}
}
// UnityEngine.Material UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::Load(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* MaterialLibrary_Load_mE88D2915A87998139CF7455C07F5F69D0226BC69 (MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A55890C1107C5FD772CC1ABA7EBE78909195995);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BAABDF048F39D7B1B75DA1936FA10BB87C330E9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	bool V_2 = false;
	{
		// if (shader == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = ___shader0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// Debug.LogErrorFormat($"Missing shader. {GetType().DeclaringType.Name} render pass will not execute. Check for missing reference in the renderer resources.");
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_3);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral7BAABDF048F39D7B1B75DA1936FA10BB87C330E9, L_5, _stringLiteral5A55890C1107C5FD772CC1ABA7EBE78909195995, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(L_6, L_7, NULL);
		// return null;
		V_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		goto IL_0056;
	}

IL_003b:
	{
		// else if (!shader.isSupported)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = ___shader0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Shader_get_isSupported_m21C3D0F1819054101DFE0C0C062A24464FA5CAE5(L_8, NULL);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		// return null;
		V_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		goto IL_0056;
	}

IL_004d:
	{
		// return CoreUtils.CreateEngineMaterial(shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_11 = ___shader0;
		il2cpp_codegen_runtime_class_init_inline(CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = CoreUtils_CreateEngineMaterial_m81DECC0AF6901F95B5041A00ED588F5230546AD2(L_11, NULL);
		V_1 = L_12;
		goto IL_0056;
	}

IL_0056:
	{
		// }
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = V_1;
		return L_13;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass/MaterialLibrary::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialLibrary_Cleanup_m649B692A57B9C055331E47F4967348B9B7942DF9 (MaterialLibrary_t26A52613184B7F43DFA5C0A540947385EFA6E4ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CoreUtils.Destroy(stopNaN);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___stopNaN_0;
		il2cpp_codegen_runtime_class_init_inline(CoreUtils_tEE57AB2B0DAE9561F4954B08800A8F957850B038_il2cpp_TypeInfo_var);
		CoreUtils_Destroy_mD2FDD299C528530E4CC5F99EFBAF90ABC7B02C69(L_0, NULL);
		// CoreUtils.Destroy(subpixelMorphologicalAntialiasing);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___subpixelMorphologicalAntialiasing_1;
		CoreUtils_Destroy_mD2FDD299C528530E4CC5F99EFBAF90ABC7B02C69(L_1, NULL);
		// CoreUtils.Destroy(gaussianDepthOfField);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___gaussianDepthOfField_2;
		CoreUtils_Destroy_mD2FDD299C528530E4CC5F99EFBAF90ABC7B02C69(L_2, NULL);
		// CoreUtils.Destroy(bokehDepthOfField);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___bokehDepthOfField_3;
		CoreUtils_Destroy_mD2FDD299C528530E4CC5F99EFBAF90ABC7B02C69(L_3, NULL);
		// CoreUtils.Destroy(cameraMotionBlur);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___cameraMotionBlur_4;
		CoreUtils_Destroy_mD2FDD299C528530E4CC5F99EFBAF90ABC7B02C69(L_4, NULL);
		// CoreUtils.Destroy(paniniProjection);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___paniniProjection_5;
		CoreUtils_Destroy_mD2FDD299C528530E4CC5F99EFBAF90ABC7B02C69(L_5, NULL);
		// CoreUtils.Destroy(bloom);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___bloom_6;
		CoreUtils_Destroy_mD2FDD299C528530E4CC5F99EFBAF90ABC7B02C69(L_6, NULL);
		// CoreUtils.Destroy(uber);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___uber_7;
		CoreUtils_Destroy_mD2FDD299C528530E4CC5F99EFBAF90ABC7B02C69(L_7, NULL);
		// CoreUtils.Destroy(finalPass);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___finalPass_8;
		CoreUtils_Destroy_mD2FDD299C528530E4CC5F99EFBAF90ABC7B02C69(L_8, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass/ShaderConstants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderConstants__cctor_m731061C522A444A3DE1A9CC98132FF7C57A05933 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02AA5CF1C80B0DF618D084F879CD23859F1E374B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07B171B1C8D7DBEA8D8A335E16FF04529ED4C296);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1831D6AF0034BFD62502B7DAAE7F161CCE2152E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral187B550E326EA78EDB32157988FA6DE7B6BB5C85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18F9F20DBB46D16A736FD871D499B91C8B8AD52A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B9EFBFC3B2698A75AE9060E2CA3F4703BAA46DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D6B2F5769B37B64ED1CF89C6872C4C70E115DA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral228C7CE59F61DC4634C693698A1F1F9A09B84345);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral236EF4A9D84C6C0908DB95675FDA65CBA7AB2165);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D37F43E99EB6C0790ED0EA5E97AE868BD7DAD4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral395532A2CA3FFB4E35DA4816E48F5D38866FD3A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F839ECBA8AC470BFFE9349EECF4319425E9777E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FAF1DA4444E4B6AD59D12D507B263672C20EC08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42E48670FB7AC0A2FDE591B7E2E6725B2F6A4BF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral431B60EF974BB8E5F0F8EC2A455F97E801E2D0DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44C2668500869CC2081E76ACB924F307C180BEFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A0F84CABDBAA807ED74BAE97A3B37809D5BBDC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8A139418EF0697974054E94254DECA0AE09AAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral577B724681B6E49F462DA98700A79269E1C87123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C8716309FF255E33DEB3745CD6DA72452B5B635);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral708F66D2AD87776F5B7E546381F1E73EB9DDB090);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7605E990BDF3D9FE837E8A654F08CA6BEA25F21E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7987DF7BA4C266E69980DE0831B635B3EF700BF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral817B818885135BEF736D2338DB6B5420E379E536);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral862A9879517D02316ADA3EF22C673885DB64148D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8938AED977E803D8E07BA49BDBD9BE350D907CF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97DD384485F1826C8BDA793DE10EBDF2F802A88A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA48E3026A883B72EC7928644F7CC3A8CB1CF4450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9E6683E605E25CCA0564720D2361F0374DE6BD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEA2C29107B397E134D3442DBC70E1733AC3113A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB01016D4685B6A6555F7E20D2F432EE29F969DA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB362EB5CD5FC34BC0C938BF79ACBF6DDAC632CE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3E3DADCE6E7B32E1B630C2110EE36F91D6E999B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4EBE57C49598AA2CE2A6F4F37A57543F7D538EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1B8FEF67A4B5CEC7AF8D68A4845C6CEB59E9BE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA67D590521B2AE2F3BD3F775DE1AB089187B32B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC2E32F2767D7908897EBC0EB050EBC46381662F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCD11BB1712DB6382A048B4AE3EADE730E885FFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD107AB84C3C7CAEF9C83EC57E99F64A0D1D246C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2105439EFE4A4A8D6E5E9FCDFB969C23C532D04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD51FF53FBBCE7298F312420D698228910BE37C28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE3D4B9AAA347D492D840D37A56CCE204D06B4CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE078582BB0F722460DE31693A931059066547B83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE97DC9C8E192370B0AD2F71BCAB9828CB1B88F0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF933CA13CDF0D40118EC4F0A27CE7F086936DE3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA2AF3C657E8CFA51F4969D5C814257C925AD3EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFD55C761D363A2D2DE1D3DCCA7A3F010ADE1A1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int _TempTarget = Shader.PropertyToID("_TempTarget");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral7605E990BDF3D9FE837E8A654F08CA6BEA25F21E, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____TempTarget_0 = L_0;
		// public static readonly int _TempTarget2 = Shader.PropertyToID("_TempTarget2");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral236EF4A9D84C6C0908DB95675FDA65CBA7AB2165, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____TempTarget2_1 = L_1;
		// public static readonly int _StencilRef = Shader.PropertyToID("_StencilRef");
		int32_t L_2;
		L_2 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral4D8A139418EF0697974054E94254DECA0AE09AAC, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____StencilRef_2 = L_2;
		// public static readonly int _StencilMask = Shader.PropertyToID("_StencilMask");
		int32_t L_3;
		L_3 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral3FAF1DA4444E4B6AD59D12D507B263672C20EC08, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____StencilMask_3 = L_3;
		// public static readonly int _FullCoCTexture = Shader.PropertyToID("_FullCoCTexture");
		int32_t L_4;
		L_4 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral817B818885135BEF736D2338DB6B5420E379E536, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullCoCTexture_4 = L_4;
		// public static readonly int _HalfCoCTexture = Shader.PropertyToID("_HalfCoCTexture");
		int32_t L_5;
		L_5 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral3F839ECBA8AC470BFFE9349EECF4319425E9777E, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____HalfCoCTexture_5 = L_5;
		// public static readonly int _DofTexture = Shader.PropertyToID("_DofTexture");
		int32_t L_6;
		L_6 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralE97DC9C8E192370B0AD2F71BCAB9828CB1B88F0C, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____DofTexture_6 = L_6;
		// public static readonly int _CoCParams = Shader.PropertyToID("_CoCParams");
		int32_t L_7;
		L_7 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral44C2668500869CC2081E76ACB924F307C180BEFA, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____CoCParams_7 = L_7;
		// public static readonly int _BokehKernel = Shader.PropertyToID("_BokehKernel");
		int32_t L_8;
		L_8 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralF933CA13CDF0D40118EC4F0A27CE7F086936DE3D, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BokehKernel_8 = L_8;
		// public static readonly int _BokehConstants = Shader.PropertyToID("_BokehConstants");
		int32_t L_9;
		L_9 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral97DD384485F1826C8BDA793DE10EBDF2F802A88A, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BokehConstants_9 = L_9;
		// public static readonly int _PongTexture = Shader.PropertyToID("_PongTexture");
		int32_t L_10;
		L_10 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralFFD55C761D363A2D2DE1D3DCCA7A3F010ADE1A1E, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PongTexture_10 = L_10;
		// public static readonly int _PingTexture = Shader.PropertyToID("_PingTexture");
		int32_t L_11;
		L_11 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralE078582BB0F722460DE31693A931059066547B83, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____PingTexture_11 = L_11;
		// public static readonly int _Metrics = Shader.PropertyToID("_Metrics");
		int32_t L_12;
		L_12 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral577B724681B6E49F462DA98700A79269E1C87123, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Metrics_12 = L_12;
		// public static readonly int _AreaTexture = Shader.PropertyToID("_AreaTexture");
		int32_t L_13;
		L_13 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral07B171B1C8D7DBEA8D8A335E16FF04529ED4C296, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____AreaTexture_13 = L_13;
		// public static readonly int _SearchTexture = Shader.PropertyToID("_SearchTexture");
		int32_t L_14;
		L_14 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral1D6B2F5769B37B64ED1CF89C6872C4C70E115DA4, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____SearchTexture_14 = L_14;
		// public static readonly int _EdgeTexture = Shader.PropertyToID("_EdgeTexture");
		int32_t L_15;
		L_15 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral1831D6AF0034BFD62502B7DAAE7F161CCE2152E9, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____EdgeTexture_15 = L_15;
		// public static readonly int _BlendTexture = Shader.PropertyToID("_BlendTexture");
		int32_t L_16;
		L_16 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral1B9EFBFC3B2698A75AE9060E2CA3F4703BAA46DB, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____BlendTexture_16 = L_16;
		// public static readonly int _ColorTexture = Shader.PropertyToID("_ColorTexture");
		int32_t L_17;
		L_17 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral228C7CE59F61DC4634C693698A1F1F9A09B84345, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____ColorTexture_17 = L_17;
		// public static readonly int _Params = Shader.PropertyToID("_Params");
		int32_t L_18;
		L_18 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralF873D6748545B7516CD56A7A617453AEC82E7C8D, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Params_18 = L_18;
		// public static readonly int _SourceTexLowMip = Shader.PropertyToID("_SourceTexLowMip");
		int32_t L_19;
		L_19 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral431B60EF974BB8E5F0F8EC2A455F97E801E2D0DB, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____SourceTexLowMip_19 = L_19;
		// public static readonly int _Bloom_Params = Shader.PropertyToID("_Bloom_Params");
		int32_t L_20;
		L_20 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral4A0F84CABDBAA807ED74BAE97A3B37809D5BBDC3, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Bloom_Params_20 = L_20;
		// public static readonly int _Bloom_RGBM = Shader.PropertyToID("_Bloom_RGBM");
		int32_t L_21;
		L_21 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral5C8716309FF255E33DEB3745CD6DA72452B5B635, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Bloom_RGBM_21 = L_21;
		// public static readonly int _Bloom_Texture = Shader.PropertyToID("_Bloom_Texture");
		int32_t L_22;
		L_22 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral42E48670FB7AC0A2FDE591B7E2E6725B2F6A4BF7, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Bloom_Texture_22 = L_22;
		// public static readonly int _LensDirt_Texture = Shader.PropertyToID("_LensDirt_Texture");
		int32_t L_23;
		L_23 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralC1B8FEF67A4B5CEC7AF8D68A4845C6CEB59E9BE1, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____LensDirt_Texture_23 = L_23;
		// public static readonly int _LensDirt_Params = Shader.PropertyToID("_LensDirt_Params");
		int32_t L_24;
		L_24 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral862A9879517D02316ADA3EF22C673885DB64148D, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____LensDirt_Params_24 = L_24;
		// public static readonly int _LensDirt_Intensity = Shader.PropertyToID("_LensDirt_Intensity");
		int32_t L_25;
		L_25 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralCA67D590521B2AE2F3BD3F775DE1AB089187B32B, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____LensDirt_Intensity_25 = L_25;
		// public static readonly int _Distortion_Params1 = Shader.PropertyToID("_Distortion_Params1");
		int32_t L_26;
		L_26 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralA48E3026A883B72EC7928644F7CC3A8CB1CF4450, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Distortion_Params1_26 = L_26;
		// public static readonly int _Distortion_Params2 = Shader.PropertyToID("_Distortion_Params2");
		int32_t L_27;
		L_27 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral395532A2CA3FFB4E35DA4816E48F5D38866FD3A0, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Distortion_Params2_27 = L_27;
		// public static readonly int _Chroma_Params = Shader.PropertyToID("_Chroma_Params");
		int32_t L_28;
		L_28 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral18F9F20DBB46D16A736FD871D499B91C8B8AD52A, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Chroma_Params_28 = L_28;
		// public static readonly int _Vignette_Params1 = Shader.PropertyToID("_Vignette_Params1");
		int32_t L_29;
		L_29 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral7987DF7BA4C266E69980DE0831B635B3EF700BF2, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Vignette_Params1_29 = L_29;
		// public static readonly int _Vignette_Params2 = Shader.PropertyToID("_Vignette_Params2");
		int32_t L_30;
		L_30 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralDE3D4B9AAA347D492D840D37A56CCE204D06B4CB, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Vignette_Params2_30 = L_30;
		// public static readonly int _Vignette_ParamsXR = Shader.PropertyToID("_Vignette_ParamsXR");
		int32_t L_31;
		L_31 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralB01016D4685B6A6555F7E20D2F432EE29F969DA2, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Vignette_ParamsXR_31 = L_31;
		// public static readonly int _Lut_Params = Shader.PropertyToID("_Lut_Params");
		int32_t L_32;
		L_32 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralA9E6683E605E25CCA0564720D2361F0374DE6BD5, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____Lut_Params_32 = L_32;
		// public static readonly int _UserLut_Params = Shader.PropertyToID("_UserLut_Params");
		int32_t L_33;
		L_33 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralB3E3DADCE6E7B32E1B630C2110EE36F91D6E999B, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____UserLut_Params_33 = L_33;
		// public static readonly int _InternalLut = Shader.PropertyToID("_InternalLut");
		int32_t L_34;
		L_34 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralB4EBE57C49598AA2CE2A6F4F37A57543F7D538EC, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____InternalLut_34 = L_34;
		// public static readonly int _UserLut = Shader.PropertyToID("_UserLut");
		int32_t L_35;
		L_35 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralD2105439EFE4A4A8D6E5E9FCDFB969C23C532D04, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____UserLut_35 = L_35;
		// public static readonly int _DownSampleScaleFactor = Shader.PropertyToID("_DownSampleScaleFactor");
		int32_t L_36;
		L_36 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralCD107AB84C3C7CAEF9C83EC57E99F64A0D1D246C, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____DownSampleScaleFactor_36 = L_36;
		// public static readonly int _FlareOcclusionTex = Shader.PropertyToID("_FlareOcclusionTex");
		int32_t L_37;
		L_37 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralB362EB5CD5FC34BC0C938BF79ACBF6DDAC632CE3, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareOcclusionTex_37 = L_37;
		// public static readonly int _FlareOcclusionIndex = Shader.PropertyToID("_FlareOcclusionIndex");
		int32_t L_38;
		L_38 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral8938AED977E803D8E07BA49BDBD9BE350D907CF1, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareOcclusionIndex_38 = L_38;
		// public static readonly int _FlareTex = Shader.PropertyToID("_FlareTex");
		int32_t L_39;
		L_39 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral708F66D2AD87776F5B7E546381F1E73EB9DDB090, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareTex_39 = L_39;
		// public static readonly int _FlareColorValue = Shader.PropertyToID("_FlareColorValue");
		int32_t L_40;
		L_40 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralFA2AF3C657E8CFA51F4969D5C814257C925AD3EF, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareColorValue_40 = L_40;
		// public static readonly int _FlareData0 = Shader.PropertyToID("_FlareData0");
		int32_t L_41;
		L_41 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral187B550E326EA78EDB32157988FA6DE7B6BB5C85, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareData0_41 = L_41;
		// public static readonly int _FlareData1 = Shader.PropertyToID("_FlareData1");
		int32_t L_42;
		L_42 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral02AA5CF1C80B0DF618D084F879CD23859F1E374B, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareData1_42 = L_42;
		// public static readonly int _FlareData2 = Shader.PropertyToID("_FlareData2");
		int32_t L_43;
		L_43 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralAEA2C29107B397E134D3442DBC70E1733AC3113A, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareData2_43 = L_43;
		// public static readonly int _FlareData3 = Shader.PropertyToID("_FlareData3");
		int32_t L_44;
		L_44 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralD51FF53FBBCE7298F312420D698228910BE37C28, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareData3_44 = L_44;
		// public static readonly int _FlareData4 = Shader.PropertyToID("_FlareData4");
		int32_t L_45;
		L_45 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral2D37F43E99EB6C0790ED0EA5E97AE868BD7DAD4A, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareData4_45 = L_45;
		// public static readonly int _FlareData5 = Shader.PropertyToID("_FlareData5");
		int32_t L_46;
		L_46 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralCC2E32F2767D7908897EBC0EB050EBC46381662F, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FlareData5_46 = L_46;
		// public static readonly int _FullscreenProjMat = Shader.PropertyToID("_FullscreenProjMat");
		int32_t L_47;
		L_47 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralCCD11BB1712DB6382A048B4AE3EADE730E885FFA, NULL);
		((ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_StaticFields*)il2cpp_codegen_static_fields_for(ShaderConstants_tD0F4CA31162ABAB2DA66CBBD07ED52A4C1CAD3FC_il2cpp_TypeInfo_var))->____FullscreenProjMat_47 = L_47;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m390410074407915D96223D48ACACBBC46BEA1905 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D* L_0 = (U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D*)il2cpp_codegen_object_new(U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mB26E3080A715C814D9B9A5C71A85B7862B203076(L_0, NULL);
		((U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB26E3080A715C814D9B9A5C71A85B7862B203076 (U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single UnityEngine.Rendering.Universal.Internal.PostProcessPass/<>c::<DoLensFlareDatadriven>b__69_0(UnityEngine.Light,UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CDoLensFlareDatadrivenU3Eb__69_0_m806687F2794508799B69BD9A750001C858762BE5 (U3CU3Ec_t3284589A02BB4D190E3BABE34DE8A00BACDB390D* __this, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___wo2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// (Light light, Camera cam, Vector3 wo) => { return GetLensFlareLightAttenuation(light, cam, wo); },
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___light0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = ___cam1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___wo2;
		il2cpp_codegen_runtime_class_init_inline(PostProcessPass_tC4EC25E25E2972BF5409B546D4F7F15D681AD286_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = PostProcessPass_GetLensFlareLightAttenuation_mC42080722051CE28B6AF96E9CC2959E48D6F5D6D(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		// (Light light, Camera cam, Vector3 wo) => { return GetLensFlareLightAttenuation(light, cam, wo); },
		float L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.Internal.PreviousFrameData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviousFrameData__ctor_m4BA4BAFE319AE140BE7AC1557C9E7D65C5E6459A (PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Matrix4x4[] m_ViewProjectionMatrixStereo = new Matrix4x4[2];
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___m_ViewProjectionMatrixStereo_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ViewProjectionMatrixStereo_4), (void*)L_0);
		// Matrix4x4[] m_PreviousViewProjectionMatrixStereo = new Matrix4x4[2];
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___m_PreviousViewProjectionMatrixStereo_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PreviousViewProjectionMatrixStereo_5), (void*)L_1);
		// internal PreviousFrameData()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_IsFirstFrame = true;
		__this->___m_IsFirstFrame_0 = (bool)1;
		// m_LastFrameActive = -1;
		__this->___m_LastFrameActive_1 = (-1);
		// m_viewProjectionMatrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___m_viewProjectionMatrix_2 = L_2;
		// m_PreviousViewProjectionMatrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___m_PreviousViewProjectionMatrix_3 = L_3;
		// }
		return;
	}
}
// System.Boolean UnityEngine.Rendering.Universal.Internal.PreviousFrameData::get_isFirstFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PreviousFrameData_get_isFirstFrame_mF029B9F2B8D5DD47D84ED0C0D47539BFC2200A8F (PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_IsFirstFrame;
		bool L_0 = __this->___m_IsFirstFrame_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PreviousFrameData::set_isFirstFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviousFrameData_set_isFirstFrame_m5F39498C2EB3CBDA971660D9D0D6C33442D863DD (PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_IsFirstFrame = value;
		bool L_0 = ___value0;
		__this->___m_IsFirstFrame_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.Internal.PreviousFrameData::get_lastFrameActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PreviousFrameData_get_lastFrameActive_mA449569F2E7EF8AB912E90A8542D18CA457360B0 (PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LastFrameActive;
		int32_t L_0 = __this->___m_LastFrameActive_1;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PreviousFrameData::set_lastFrameActive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviousFrameData_set_lastFrameActive_m6FE2215CD1FD9FB2C44537959B214C692D7FB541 (PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LastFrameActive = value;
		int32_t L_0 = ___value0;
		__this->___m_LastFrameActive_1 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.Internal.PreviousFrameData::get_viewProjectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 PreviousFrameData_get_viewProjectionMatrix_mECF0F93F29285FEEA0E331BDEE8FA6A4AD2A7644 (PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_viewProjectionMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = __this->___m_viewProjectionMatrix_2;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PreviousFrameData::set_viewProjectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviousFrameData_set_viewProjectionMatrix_m91992F05C4F48FDBA125837433B9B2D1E902CD7A (PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_viewProjectionMatrix = value;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___value0;
		__this->___m_viewProjectionMatrix_2 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.Internal.PreviousFrameData::get_previousViewProjectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 PreviousFrameData_get_previousViewProjectionMatrix_m2146F35A2E409EF47E866D824D30FEFC3508DFE0 (PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PreviousViewProjectionMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = __this->___m_PreviousViewProjectionMatrix_3;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PreviousFrameData::set_previousViewProjectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviousFrameData_set_previousViewProjectionMatrix_mF0EB6232775DFFCF0CA898D8D04002A2E55252F5 (PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PreviousViewProjectionMatrix = value;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___value0;
		__this->___m_PreviousViewProjectionMatrix_3 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.Internal.PreviousFrameData::get_previousViewProjectionMatrixStereo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* PreviousFrameData_get_previousViewProjectionMatrixStereo_m59DDCF88DC7FE565EA8FA5F88C59989B3323826E (PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PreviousViewProjectionMatrixStereo;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = __this->___m_PreviousViewProjectionMatrixStereo_5;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PreviousFrameData::set_previousViewProjectionMatrixStereo(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviousFrameData_set_previousViewProjectionMatrixStereo_m5E3EACE57C3D455FED464719C770C9FB944D2E5C (PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PreviousViewProjectionMatrixStereo = value;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ___value0;
		__this->___m_PreviousViewProjectionMatrixStereo_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PreviousViewProjectionMatrixStereo_5), (void*)L_0);
		return;
	}
}
// UnityEngine.Matrix4x4[] UnityEngine.Rendering.Universal.Internal.PreviousFrameData::get_viewProjectionMatrixStereo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* PreviousFrameData_get_viewProjectionMatrixStereo_m98130965866DF48C518E31E273A679DDEA46A5C5 (PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ViewProjectionMatrixStereo;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = __this->___m_ViewProjectionMatrixStereo_4;
		return L_0;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.PreviousFrameData::set_viewProjectionMatrixStereo(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviousFrameData_set_viewProjectionMatrixStereo_m9996238F3EC229EC742098E5739B08AAF1DD53FD (PreviousFrameData_t990E8070F97119F296A9A59DE5E700725864C4EF* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ViewProjectionMatrixStereo = value;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ___value0;
		__this->___m_ViewProjectionMatrixStereo_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ViewProjectionMatrixStereo_4), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer& UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::get_backBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* RenderTargetBufferSystem_get_backBuffer_mF7305DBD196865D17A0029AC212E8CC02D8205A2 (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* V_0 = NULL;
	SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* G_B3_0 = NULL;
	{
		// ref SwapBuffer backBuffer { get { return ref m_AisBackBuffer ? ref m_A : ref m_B; } }
		il2cpp_codegen_runtime_class_init_inline(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		bool L_0 = ((RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_StaticFields*)il2cpp_codegen_static_fields_for(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var))->___m_AisBackBuffer_2;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_1 = (&__this->___m_B_1);
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0010:
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_2 = (&__this->___m_A_0);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		// ref SwapBuffer backBuffer { get { return ref m_AisBackBuffer ? ref m_A : ref m_B; } }
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer& UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::get_frontBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* RenderTargetBufferSystem_get_frontBuffer_mDD8E09139E41F59A682216AD6C0A94AE4387E11A (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* V_0 = NULL;
	SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* G_B3_0 = NULL;
	{
		// ref SwapBuffer frontBuffer { get { return ref m_AisBackBuffer ? ref m_B : ref m_A; } }
		il2cpp_codegen_runtime_class_init_inline(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		bool L_0 = ((RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_StaticFields*)il2cpp_codegen_static_fields_for(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var))->___m_AisBackBuffer_2;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_1 = (&__this->___m_A_0);
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0010:
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_2 = (&__this->___m_B_1);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		// ref SwapBuffer frontBuffer { get { return ref m_AisBackBuffer ? ref m_B : ref m_A; } }
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetBufferSystem__ctor_m86BE218D4CA2ED16CC91EEAE8A08BE67A5E860BE (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool m_AllowMSAA = true;
		__this->___m_AllowMSAA_5 = (bool)1;
		// public RenderTargetBufferSystem(string name)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_A.name = name + "A";
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_0 = (&__this->___m_A_0);
		String_t* L_1 = ___name0;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003, NULL);
		L_0->___name_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___name_2), (void*)L_2);
		// m_B.name = name + "B";
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_3 = (&__this->___m_B_1);
		String_t* L_4 = ___name0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F, NULL);
		L_3->___name_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___name_2), (void*)L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetBufferSystem_Dispose_m1C3AC5DA450F8B824721316FAC28EBAE5377DBC6 (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, const RuntimeMethod* method) 
{
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* G_B2_0 = NULL;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* G_B1_0 = NULL;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* G_B5_0 = NULL;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* G_B4_0 = NULL;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* G_B8_0 = NULL;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* G_B7_0 = NULL;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* G_B11_0 = NULL;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* G_B10_0 = NULL;
	{
		// m_A.rtMSAA?.Release();
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_0 = (&__this->___m_A_0);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_1 = L_0->___rtMSAA_0;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		goto IL_0018;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		RTHandle_Release_m743C2A22FD95D177D2D425E9DF1F3088161F387B(G_B2_0, NULL);
	}

IL_0018:
	{
		// m_B.rtMSAA?.Release();
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_3 = (&__this->___m_B_1);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_4 = L_3->___rtMSAA_0;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_0029;
		}
	}
	{
		goto IL_002f;
	}

IL_0029:
	{
		NullCheck(G_B5_0);
		RTHandle_Release_m743C2A22FD95D177D2D425E9DF1F3088161F387B(G_B5_0, NULL);
	}

IL_002f:
	{
		// m_A.rtResolve?.Release();
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_6 = (&__this->___m_A_0);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_7 = L_6->___rtResolve_1;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_8 = L_7;
		G_B7_0 = L_8;
		if (L_8)
		{
			G_B8_0 = L_8;
			goto IL_0040;
		}
	}
	{
		goto IL_0046;
	}

IL_0040:
	{
		NullCheck(G_B8_0);
		RTHandle_Release_m743C2A22FD95D177D2D425E9DF1F3088161F387B(G_B8_0, NULL);
	}

IL_0046:
	{
		// m_B.rtResolve?.Release();
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_9 = (&__this->___m_B_1);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_10 = L_9->___rtResolve_1;
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_11 = L_10;
		G_B10_0 = L_11;
		if (L_11)
		{
			G_B11_0 = L_11;
			goto IL_0057;
		}
	}
	{
		goto IL_005d;
	}

IL_0057:
	{
		NullCheck(G_B11_0);
		RTHandle_Release_m743C2A22FD95D177D2D425E9DF1F3088161F387B(G_B11_0, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::PeekBackBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* RenderTargetBufferSystem_PeekBackBuffer_m5496A9F37497CE9915D760AD5F44FEA5EE304941 (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, const RuntimeMethod* method) 
{
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* V_0 = NULL;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* G_B4_0 = NULL;
	{
		// return (m_AllowMSAA && backBuffer.msaa > 1) ? backBuffer.rtMSAA : backBuffer.rtResolve;
		bool L_0 = __this->___m_AllowMSAA_5;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_1;
		L_1 = RenderTargetBufferSystem_get_backBuffer_mF7305DBD196865D17A0029AC212E8CC02D8205A2(__this, NULL);
		int32_t L_2 = L_1->___msaa_3;
		if ((((int32_t)L_2) > ((int32_t)1)))
		{
			goto IL_0024;
		}
	}

IL_0017:
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_3;
		L_3 = RenderTargetBufferSystem_get_backBuffer_mF7305DBD196865D17A0029AC212E8CC02D8205A2(__this, NULL);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_4 = L_3->___rtResolve_1;
		G_B4_0 = L_4;
		goto IL_002f;
	}

IL_0024:
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_5;
		L_5 = RenderTargetBufferSystem_get_backBuffer_mF7305DBD196865D17A0029AC212E8CC02D8205A2(__this, NULL);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_6 = L_5->___rtMSAA_0;
		G_B4_0 = L_6;
	}

IL_002f:
	{
		V_0 = G_B4_0;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::GetBackBuffer(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* RenderTargetBufferSystem_GetBackBuffer_m5783C133D632176EB13AA0B5651723B212AAE3B1 (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, const RuntimeMethod* method) 
{
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* V_0 = NULL;
	{
		// ReAllocate(cmd);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ___cmd0;
		RenderTargetBufferSystem_ReAllocate_m21F112E4C9D22893403D2BDC60ED8D41312AE0D9(__this, L_0, NULL);
		// return PeekBackBuffer();
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_1;
		L_1 = RenderTargetBufferSystem_PeekBackBuffer_m5496A9F37497CE9915D760AD5F44FEA5EE304941(__this, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::GetFrontBuffer(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* RenderTargetBufferSystem_GetFrontBuffer_m85150875CDE3FB4ED1E33FFABD9B9F1893DEA2D1 (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* V_1 = NULL;
	int32_t G_B3_0 = 0;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* G_B9_0 = NULL;
	{
		// if (!m_AllowMSAA && frontBuffer.msaa > 1)
		bool L_0 = __this->___m_AllowMSAA_5;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_1;
		L_1 = RenderTargetBufferSystem_get_frontBuffer_mDD8E09139E41F59A682216AD6C0A94AE4387E11A(__this, NULL);
		int32_t L_2 = L_1->___msaa_3;
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)1))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// frontBuffer.msaa = 1;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_4;
		L_4 = RenderTargetBufferSystem_get_frontBuffer_mDD8E09139E41F59A682216AD6C0A94AE4387E11A(__this, NULL);
		L_4->___msaa_3 = 1;
	}

IL_002a:
	{
		// ReAllocate(cmd);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_5 = ___cmd0;
		RenderTargetBufferSystem_ReAllocate_m21F112E4C9D22893403D2BDC60ED8D41312AE0D9(__this, L_5, NULL);
		// return (m_AllowMSAA && frontBuffer.msaa > 1) ? frontBuffer.rtMSAA : frontBuffer.rtResolve;
		bool L_6 = __this->___m_AllowMSAA_5;
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_7;
		L_7 = RenderTargetBufferSystem_get_frontBuffer_mDD8E09139E41F59A682216AD6C0A94AE4387E11A(__this, NULL);
		int32_t L_8 = L_7->___msaa_3;
		if ((((int32_t)L_8) > ((int32_t)1)))
		{
			goto IL_0055;
		}
	}

IL_0048:
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_9;
		L_9 = RenderTargetBufferSystem_get_frontBuffer_mDD8E09139E41F59A682216AD6C0A94AE4387E11A(__this, NULL);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_10 = L_9->___rtResolve_1;
		G_B9_0 = L_10;
		goto IL_0060;
	}

IL_0055:
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_11;
		L_11 = RenderTargetBufferSystem_get_frontBuffer_mDD8E09139E41F59A682216AD6C0A94AE4387E11A(__this, NULL);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_12 = L_11->___rtMSAA_0;
		G_B9_0 = L_12;
	}

IL_0060:
	{
		V_1 = G_B9_0;
		goto IL_0063;
	}

IL_0063:
	{
		// }
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_13 = V_1;
		return L_13;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::Swap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetBufferSystem_Swap_m3D2279D4D03B17F4BA36717BAB07360C6F2C6D31 (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_AisBackBuffer = !m_AisBackBuffer;
		il2cpp_codegen_runtime_class_init_inline(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		bool L_0 = ((RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_StaticFields*)il2cpp_codegen_static_fields_for(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var))->___m_AisBackBuffer_2;
		((RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_StaticFields*)il2cpp_codegen_static_fields_for(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var))->___m_AisBackBuffer_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::ReAllocate(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetBufferSystem_ReAllocate_m21F112E4C9D22893403D2BDC60ED8D41312AE0D9 (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderingUtils_t4E40200449A82FA3A172A563C490DF11FADA2BE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		// var desc = m_Desc;
		il2cpp_codegen_runtime_class_init_inline(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_0 = ((RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_StaticFields*)il2cpp_codegen_static_fields_for(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var))->___m_Desc_3;
		V_0 = L_0;
		// desc.msaaSamples = m_A.msaa;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_1 = (&__this->___m_A_0);
		int32_t L_2 = L_1->___msaa_3;
		RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline((&V_0), L_2, NULL);
		// if (desc.msaaSamples > 1)
		int32_t L_3;
		L_3 = RenderTextureDescriptor_get_msaaSamples_mFCC33643AFF2265C8305DCFD79ED8774A1A8FA22_inline((&V_0), NULL);
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)1))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// RenderingUtils.ReAllocateIfNeeded(ref m_A.rtMSAA, desc, m_FilterMode, TextureWrapMode.Clamp, name: m_A.name);
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_5 = (&__this->___m_A_0);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** L_6 = (&L_5->___rtMSAA_0);
		int32_t L_7 = __this->___m_FilterMode_4;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_8 = (&__this->___m_A_0);
		String_t* L_9 = L_8->___name_2;
		il2cpp_codegen_runtime_class_init_inline(RenderingUtils_t4E40200449A82FA3A172A563C490DF11FADA2BE1_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = RenderingUtils_ReAllocateIfNeeded_mDE48AE1C4158076D30E8D4D9322A9EE4219C2812(L_6, (&V_0), L_7, 1, (bool)0, 1, (0.0f), L_9, NULL);
	}

IL_0054:
	{
		// desc.msaaSamples = m_B.msaa;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_11 = (&__this->___m_B_1);
		int32_t L_12 = L_11->___msaa_3;
		RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline((&V_0), L_12, NULL);
		// if (desc.msaaSamples > 1)
		int32_t L_13;
		L_13 = RenderTextureDescriptor_get_msaaSamples_mFCC33643AFF2265C8305DCFD79ED8774A1A8FA22_inline((&V_0), NULL);
		V_2 = (bool)((((int32_t)L_13) > ((int32_t)1))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_00a1;
		}
	}
	{
		// RenderingUtils.ReAllocateIfNeeded(ref m_B.rtMSAA, desc, m_FilterMode, TextureWrapMode.Clamp, name: m_B.name);
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_15 = (&__this->___m_B_1);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** L_16 = (&L_15->___rtMSAA_0);
		int32_t L_17 = __this->___m_FilterMode_4;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_18 = (&__this->___m_B_1);
		String_t* L_19 = L_18->___name_2;
		il2cpp_codegen_runtime_class_init_inline(RenderingUtils_t4E40200449A82FA3A172A563C490DF11FADA2BE1_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = RenderingUtils_ReAllocateIfNeeded_mDE48AE1C4158076D30E8D4D9322A9EE4219C2812(L_16, (&V_0), L_17, 1, (bool)0, 1, (0.0f), L_19, NULL);
	}

IL_00a1:
	{
		// desc.msaaSamples = 1;
		RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline((&V_0), 1, NULL);
		// RenderingUtils.ReAllocateIfNeeded(ref m_A.rtResolve, desc, m_FilterMode, TextureWrapMode.Clamp, name: m_A.name);
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_21 = (&__this->___m_A_0);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** L_22 = (&L_21->___rtResolve_1);
		int32_t L_23 = __this->___m_FilterMode_4;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_24 = (&__this->___m_A_0);
		String_t* L_25 = L_24->___name_2;
		il2cpp_codegen_runtime_class_init_inline(RenderingUtils_t4E40200449A82FA3A172A563C490DF11FADA2BE1_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = RenderingUtils_ReAllocateIfNeeded_mDE48AE1C4158076D30E8D4D9322A9EE4219C2812(L_22, (&V_0), L_23, 1, (bool)0, 1, (0.0f), L_25, NULL);
		// RenderingUtils.ReAllocateIfNeeded(ref m_B.rtResolve, desc, m_FilterMode, TextureWrapMode.Clamp, name: m_B.name);
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_27 = (&__this->___m_B_1);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B** L_28 = (&L_27->___rtResolve_1);
		int32_t L_29 = __this->___m_FilterMode_4;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_30 = (&__this->___m_B_1);
		String_t* L_31 = L_30->___name_2;
		bool L_32;
		L_32 = RenderingUtils_ReAllocateIfNeeded_mDE48AE1C4158076D30E8D4D9322A9EE4219C2812(L_28, (&V_0), L_29, 1, (bool)0, 1, (0.0f), L_31, NULL);
		// cmd.SetGlobalTexture(m_A.name, m_A.rtResolve);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_33 = ___cmd0;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_34 = (&__this->___m_A_0);
		String_t* L_35 = L_34->___name_2;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_36 = (&__this->___m_A_0);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_37 = L_36->___rtResolve_1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_38;
		L_38 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_37, NULL);
		NullCheck(L_33);
		CommandBuffer_SetGlobalTexture_mD6F1CC7E87FA88B5838D5EDAFBA602EF94FE1F69(L_33, L_35, L_38, NULL);
		// cmd.SetGlobalTexture(m_B.name, m_B.rtResolve);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_39 = ___cmd0;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_40 = (&__this->___m_B_1);
		String_t* L_41 = L_40->___name_2;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_42 = (&__this->___m_B_1);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_43 = L_42->___rtResolve_1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_44;
		L_44 = RTHandle_op_Implicit_m2462183372B0496DE475889924EDCAAAD2011B54(L_43, NULL);
		NullCheck(L_39);
		CommandBuffer_SetGlobalTexture_mD6F1CC7E87FA88B5838D5EDAFBA602EF94FE1F69(L_39, L_41, L_44, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::Clear(UnityEngine.Rendering.CommandBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetBufferSystem_Clear_mF7870361FAA8E01DD173A72369C4000146FD4B2E (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* G_B2_0 = NULL;
	RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* G_B3_1 = NULL;
	{
		// m_AisBackBuffer = true;
		il2cpp_codegen_runtime_class_init_inline(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		((RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_StaticFields*)il2cpp_codegen_static_fields_for(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var))->___m_AisBackBuffer_2 = (bool)1;
		// m_AllowMSAA = m_A.msaa > 1 || m_B.msaa > 1;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_0 = (&__this->___m_A_0);
		int32_t L_1 = L_0->___msaa_3;
		G_B1_0 = __this;
		if ((((int32_t)L_1) > ((int32_t)1)))
		{
			G_B2_0 = __this;
			goto IL_0026;
		}
	}
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_2 = (&__this->___m_B_1);
		int32_t L_3 = L_2->___msaa_3;
		G_B3_0 = ((((int32_t)L_3) > ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0027:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_AllowMSAA_5 = (bool)G_B3_0;
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::SetCameraSettings(UnityEngine.Rendering.CommandBuffer,UnityEngine.RenderTextureDescriptor,UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetBufferSystem_SetCameraSettings_m4F044D93AEF67F3B7A749EBE855DF16AF3280C35 (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___desc1, int32_t ___filterMode2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Clear(cmd); //SetCameraSettings is called when new stack starts rendering. Make sure the targets are updated to use the new descriptor.
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ___cmd0;
		RenderTargetBufferSystem_Clear_mF7870361FAA8E01DD173A72369C4000146FD4B2E(__this, L_0, NULL);
		// desc.depthBufferBits = 0;
		RenderTextureDescriptor_set_depthBufferBits_mA3710C0D6E485BA6465B328CD8B1954F0E4C5819((&___desc1), 0, NULL);
		// m_Desc = desc;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_1 = ___desc1;
		il2cpp_codegen_runtime_class_init_inline(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		((RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_StaticFields*)il2cpp_codegen_static_fields_for(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var))->___m_Desc_3 = L_1;
		// m_FilterMode = filterMode;
		int32_t L_2 = ___filterMode2;
		__this->___m_FilterMode_4 = L_2;
		// m_A.msaa = m_Desc.msaaSamples;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_3 = (&__this->___m_A_0);
		int32_t L_4;
		L_4 = RenderTextureDescriptor_get_msaaSamples_mFCC33643AFF2265C8305DCFD79ED8774A1A8FA22_inline((&((RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_StaticFields*)il2cpp_codegen_static_fields_for(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var))->___m_Desc_3), NULL);
		L_3->___msaa_3 = L_4;
		// m_B.msaa = m_Desc.msaaSamples;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_5 = (&__this->___m_B_1);
		int32_t L_6;
		L_6 = RenderTextureDescriptor_get_msaaSamples_mFCC33643AFF2265C8305DCFD79ED8774A1A8FA22_inline((&((RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_StaticFields*)il2cpp_codegen_static_fields_for(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var))->___m_Desc_3), NULL);
		L_5->___msaa_3 = L_6;
		// if (m_Desc.msaaSamples > 1)
		int32_t L_7;
		L_7 = RenderTextureDescriptor_get_msaaSamples_mFCC33643AFF2265C8305DCFD79ED8774A1A8FA22_inline((&((RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_StaticFields*)il2cpp_codegen_static_fields_for(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var))->___m_Desc_3), NULL);
		V_0 = (bool)((((int32_t)L_7) > ((int32_t)1))? 1 : 0);
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		// EnableMSAA(true);
		RenderTargetBufferSystem_EnableMSAA_mFACEC550EEF2910AC94C1F22C0DA146DBE36F3CA(__this, (bool)1, NULL);
	}

IL_0062:
	{
		// ReAllocate(cmd);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_9 = ___cmd0;
		RenderTargetBufferSystem_ReAllocate_m21F112E4C9D22893403D2BDC60ED8D41312AE0D9(__this, L_9, NULL);
		// }
		return;
	}
}
// UnityEngine.Rendering.RTHandle UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::GetBufferA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* RenderTargetBufferSystem_GetBufferA_m0E904787365B2DC88C4966E4D5B530B2A3639241 (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, const RuntimeMethod* method) 
{
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* V_0 = NULL;
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* G_B4_0 = NULL;
	{
		// return (m_AllowMSAA && m_A.msaa > 1) ? m_A.rtMSAA : m_A.rtResolve;
		bool L_0 = __this->___m_AllowMSAA_5;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_1 = (&__this->___m_A_0);
		int32_t L_2 = L_1->___msaa_3;
		if ((((int32_t)L_2) > ((int32_t)1)))
		{
			goto IL_0024;
		}
	}

IL_0017:
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_3 = (&__this->___m_A_0);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_4 = L_3->___rtResolve_1;
		G_B4_0 = L_4;
		goto IL_002f;
	}

IL_0024:
	{
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_5 = (&__this->___m_A_0);
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_6 = L_5->___rtMSAA_0;
		G_B4_0 = L_6;
	}

IL_002f:
	{
		V_0 = G_B4_0;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::EnableMSAA(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetBufferSystem_EnableMSAA_mFACEC550EEF2910AC94C1F22C0DA146DBE36F3CA (RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13* __this, bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_AllowMSAA = enable;
		bool L_0 = ___enable0;
		__this->___m_AllowMSAA_5 = L_0;
		// if (enable)
		bool L_1 = ___enable0;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// m_A.msaa = m_Desc.msaaSamples;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_3 = (&__this->___m_A_0);
		il2cpp_codegen_runtime_class_init_inline(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = RenderTextureDescriptor_get_msaaSamples_mFCC33643AFF2265C8305DCFD79ED8774A1A8FA22_inline((&((RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_StaticFields*)il2cpp_codegen_static_fields_for(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var))->___m_Desc_3), NULL);
		L_3->___msaa_3 = L_4;
		// m_B.msaa = m_Desc.msaaSamples;
		SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4* L_5 = (&__this->___m_B_1);
		int32_t L_6;
		L_6 = RenderTextureDescriptor_get_msaaSamples_mFCC33643AFF2265C8305DCFD79ED8774A1A8FA22_inline((&((RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_StaticFields*)il2cpp_codegen_static_fields_for(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var))->___m_Desc_3), NULL);
		L_5->___msaa_3 = L_6;
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTargetBufferSystem__cctor_m43224CB0048305175C0E52072E876BEFD934F869 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static bool m_AisBackBuffer = true;
		((RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_StaticFields*)il2cpp_codegen_static_fields_for(RenderTargetBufferSystem_tB98B680006BB96E6EBC6311583EE31302F16EC13_il2cpp_TypeInfo_var))->___m_AisBackBuffer_2 = (bool)1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer
IL2CPP_EXTERN_C void SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4_marshal_pinvoke(const SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4& unmarshaled, SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___rtMSAA_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'rtMSAA' of type 'SwapBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___rtMSAA_0Exception, NULL);
}
IL2CPP_EXTERN_C void SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4_marshal_pinvoke_back(const SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4_marshaled_pinvoke& marshaled, SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4& unmarshaled)
{
	Exception_t* ___rtMSAA_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'rtMSAA' of type 'SwapBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___rtMSAA_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer
IL2CPP_EXTERN_C void SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4_marshal_pinvoke_cleanup(SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer
IL2CPP_EXTERN_C void SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4_marshal_com(const SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4& unmarshaled, SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4_marshaled_com& marshaled)
{
	Exception_t* ___rtMSAA_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'rtMSAA' of type 'SwapBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___rtMSAA_0Exception, NULL);
}
IL2CPP_EXTERN_C void SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4_marshal_com_back(const SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4_marshaled_com& marshaled, SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4& unmarshaled)
{
	Exception_t* ___rtMSAA_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'rtMSAA' of type 'SwapBuffer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___rtMSAA_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer
IL2CPP_EXTERN_C void SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4_marshal_com_cleanup(SwapBuffer_t431F23072C45F1BEE6FF42872627D5393B39A7C4_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRenderPass_set_profilingSampler_mFD238B85B68DED586BA8C678141BEEAF229FBF2D_inline (ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0* __this, ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___value0, const RuntimeMethod* method) 
{
	{
		// protected internal ProfilingSampler profilingSampler { get; set; }
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_0 = ___value0;
		__this->___U3CprofilingSamplerU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprofilingSamplerU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRenderPass_set_renderPassEvent_m63FA581FFDE1C69C2E1358BD0B8DB30275334960_inline (ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public RenderPassEvent renderPassEvent { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CrenderPassEventU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRenderPass_set_useNativeRenderPass_m1D60C30BB1CF1B4D383FFCABC1F57EA755626895_inline (ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal bool useNativeRenderPass { get; set; }
		bool L_0 = ___value0;
		__this->___U3CuseNativeRenderPassU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRenderPass_set_overrideCameraTarget_mC7A5FB7FB9D32C88226E81992DAD058174C99D95_inline (ScriptableRenderPass_tEA38F6C7AD8D111A2251E4C2A7530BCEE7D6D2B0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal bool overrideCameraTarget { get; set; }
		bool L_0 = ___value0;
		__this->___U3CoverrideCameraTargetU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* VolumeManager_get_stack_m5F7B366D1E7FE168EF4CA04A17531D34DD200266_inline (VolumeManager_tC1135CDD73B47230FE58646CB8242E6B324DA621* __this, const RuntimeMethod* method) 
{
	{
		// public VolumeStack stack { get; set; }
		VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* L_0 = __this->___U3CstackU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CwidthU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CheightU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CmsaaSamplesU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CwidthU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CheightU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B XRPass_get_renderTarget_m595B27BD6972FE1F74FCE71CB29088F159E84B18_inline (XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* __this, const RuntimeMethod* method) 
{
	{
		// internal RenderTargetIdentifier  renderTarget     { get; private set; }
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_0 = __this->___U3CrenderTargetU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRPass_get_renderTargetIsRenderTexture_m79E6747B91048C48ED200D3A99B96621D0BFB67A_inline (XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* __this, const RuntimeMethod* method) 
{
	{
		// internal bool                    renderTargetIsRenderTexture { get; private set; }
		bool L_0 = __this->___U3CrenderTargetIsRenderTextureU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_msaaSamples_mFCC33643AFF2265C8305DCFD79ED8774A1A8FA22_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmsaaSamplesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v0;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PostProcessPass_GetMaxBokehRadiusInPixels_m56705A12AE2306C52AA6C96D28D09A5F6F2EC2F4_inline (float ___viewportHeight0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return Mathf.Min(0.05f, kRadiusInPixels / viewportHeight);
		float L_0 = ___viewportHeight0;
		float L_1;
		L_1 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((0.0500000007f), ((float)((14.0f)/L_0)), NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m1FD55F67090B321AC9488CA325A72E454E6BCA37_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		__this->___z_3 = (0.0f);
		__this->___w_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRPass_get_multipassId_mC66149857F511ED441A9C8647C3EF0DD7167F15A_inline (XRPass_t0A618D61DBC9E3F8BC970B7C9D2679375C6C8A24* __this, const RuntimeMethod* method) 
{
	{
		// internal int multipassId    { get; private set; }
		int32_t L_0 = __this->___U3CmultipassIdU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Log_m116F062EEBF1C53EC8D18C9B1748E999EF9424EF_inline (float ___f0, float ___p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = ___f0;
		float L_1 = ___p1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Log_m5A3BBBF06AB82F25C885812E07D27B473CF43054(((double)L_0), ((double)L_1), NULL);
		V_0 = ((float)L_2);
		goto IL_000e;
	}

IL_000e:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = __this->___r_0;
		float L_1;
		L_1 = Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F(L_0, NULL);
		float L_2 = __this->___g_1;
		float L_3;
		L_3 = Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F(L_2, NULL);
		float L_4 = __this->___b_2;
		float L_5;
		L_5 = Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F(L_4, NULL);
		float L_6 = __this->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0030;
	}

IL_0030:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		float L_2 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a0;
		float L_4 = L_3.___g_1;
		float L_5 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___b_2;
		float L_8 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___a_3;
		float L_11 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector4_op_Implicit_m6673D431FBCA5AFB6CF06CD9783D07A4C90CC2AA_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
