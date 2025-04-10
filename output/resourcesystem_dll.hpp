// Generated using https://github.com/a2x/cs2-dumper
// 2024-10-14 03:58:43.757095900 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: resourcesystem.dll
        // Class count: 59
        // Enum count: 2
        namespace resourcesystem_dll {
            // Alignment: 1
            // Member count: 9
            enum class FuseVariableType_t : uint8_t {
                INVALID = 0x0,
                BOOL = 0x1,
                INT8 = 0x2,
                INT16 = 0x3,
                INT32 = 0x4,
                UINT8 = 0x5,
                UINT16 = 0x6,
                UINT32 = 0x7,
                FLOAT32 = 0x8
            };
            // Alignment: 1
            // Member count: 2
            enum class FuseVariableAccess_t : uint8_t {
                WRITABLE = 0x0,
                READ_ONLY = 0x1
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCNmIKRig {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCResponseRulesList {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCDotaItemDefinitionResource {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCMorphSetData {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCChoreoSceneFileData {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVSoundStackScriptList {
            }
            // Parent: None
            // Field count: 2
            namespace PackedAABB_t {
                constexpr std::ptrdiff_t m_nPackedMin = 0x0; // 
                constexpr std::ptrdiff_t m_nPackedMax = 0x4; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVPhysXSurfacePropertiesList {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeManifestTestResource_t {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ConstantInfo_t {
                constexpr std::ptrdiff_t m_name = 0x0; // 
                constexpr std::ptrdiff_t m_nameToken = 0x8; // 
                constexpr std::ptrdiff_t m_flValue = 0xC; // 
            }
            // Parent: None
            // Field count: 1
            namespace FuseFunctionIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCGcExportableExternalData {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIAnimGraphModelBinding {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCJavaScriptResource {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFuseSymbolTable {
                constexpr std::ptrdiff_t m_constants = 0x0; // 
                constexpr std::ptrdiff_t m_variables = 0x18; // 
                constexpr std::ptrdiff_t m_functions = 0x30; // 
                constexpr std::ptrdiff_t m_constantMap = 0x48; // 
                constexpr std::ptrdiff_t m_variableMap = 0x68; // 
                constexpr std::ptrdiff_t m_functionMap = 0x88; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCRenderMesh {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVoxelVisibility {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TestResource_t {
                constexpr std::ptrdiff_t m_name = 0x0; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPhysAggregateData {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCNmClip {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeWorld_t {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeProceduralTestResource_t {
            }
            // Parent: None
            // Field count: 2
            namespace AABB_t {
                constexpr std::ptrdiff_t m_vMinBounds = 0x0; // 
                constexpr std::ptrdiff_t m_vMaxBounds = 0xC; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPostProcessingResource {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VariableInfo_t {
                constexpr std::ptrdiff_t m_name = 0x0; // 
                constexpr std::ptrdiff_t m_nameToken = 0x8; // 
                constexpr std::ptrdiff_t m_nIndex = 0xC; // 
                constexpr std::ptrdiff_t m_nNumComponents = 0xE; // 
                constexpr std::ptrdiff_t m_eVarType = 0xF; // 
                constexpr std::ptrdiff_t m_eAccess = 0x10; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIParticleSnapshot {
            }
            // Parent: None
            // Field count: 4
            namespace FourQuaternions {
                constexpr std::ptrdiff_t x = 0x0; // 
                constexpr std::ptrdiff_t y = 0x10; // 
                constexpr std::ptrdiff_t z = 0x20; // 
                constexpr std::ptrdiff_t w = 0x30; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPanoramaLayout {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCTypeScriptResource {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCNmSkeleton {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeTestResource_t {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCAnimationGroup {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVSoundEventScriptList {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVoiceContainerBase {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPanoramaStyle {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCWorldNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCNmGraphVariation {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCCSGOEconItem {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCNmGraphDefinition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCSmartProp {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFuseProgram {
                constexpr std::ptrdiff_t m_programBuffer = 0x0; // 
                constexpr std::ptrdiff_t m_variablesRead = 0x18; // 
                constexpr std::ptrdiff_t m_variablesWritten = 0x30; // 
                constexpr std::ptrdiff_t m_nMaxTempVarsUsed = 0x48; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCCompositeMaterialKit {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVMixListResource {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCAnimData {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIMaterial2 {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIVectorGraphic {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPanoramaDynamicImages {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIPulseGraphDef {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FunctionInfo_t {
                constexpr std::ptrdiff_t m_name = 0x8; // 
                constexpr std::ptrdiff_t m_nameToken = 0x10; // 
                constexpr std::ptrdiff_t m_nParamCount = 0x14; // 
                constexpr std::ptrdiff_t m_nIndex = 0x18; // 
                constexpr std::ptrdiff_t m_bIsPure = 0x1A; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVDataResource {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCModel {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCDOTANovelsList {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCTextureBase {
            }
            // Parent: None
            // Field count: 1
            namespace FuseVariableIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIParticleSystemDefinition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCSequenceGroupData {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ManifestTestResource_t {
                constexpr std::ptrdiff_t m_name = 0x0; // 
                constexpr std::ptrdiff_t m_child = 0x8; // 
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCEntityLump {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCDOTAPatchNotesList {
            }
        }
    }
}
