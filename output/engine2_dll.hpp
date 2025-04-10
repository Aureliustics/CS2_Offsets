// Generated using https://github.com/a2x/cs2-dumper
// 2024-10-14 03:58:43.757095900 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: engine2.dll
        // Class count: 48
        // Enum count: 4
        namespace engine2_dll {
            // Alignment: 4
            // Member count: 3
            enum class EntityDormancyType_t : uint32_t {
                ENTITY_NOT_DORMANT = 0x0,
                ENTITY_DORMANT = 0x1,
                ENTITY_SUSPENDED = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class EntityIOTargetType_t : uint32_t {
                ENTITY_IO_TARGET_INVALID = 0xFFFFFFFFFFFFFFFF,
                ENTITY_IO_TARGET_ENTITYNAME = 0x2,
                ENTITY_IO_TARGET_EHANDLE = 0x6,
                ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7
            };
            // Alignment: 4
            // Member count: 3
            enum class SpawnDebugOverrideState_t : uint32_t {
                SPAWN_DEBUG_OVERRIDE_NONE = 0x0,
                SPAWN_DEBUG_OVERRIDE_FORCE_ENABLED = 0x1,
                SPAWN_DEBUG_OVERRIDE_FORCE_DISABLED = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class SpawnDebugRestrictionOverrideState_t : uint32_t {
                SPAWN_DEBUG_RESTRICT_NONE = 0x0,
                SPAWN_DEBUG_RESTRICT_IGNORE_MANAGER_DISTANCE_REQS = 0x1,
                SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_DISTANCE_LOS_REQS = 0x2,
                SPAWN_DEBUG_RESTRICT_IGNORE_TEMPLATE_COOLDOWN_LIMITS = 0x4,
                SPAWN_DEBUG_RESTRICT_IGNORE_TARGET_COOLDOWN_LIMITS = 0x8
            };
            // Parent: EventSimulate_t
            // Field count: 0
            namespace EventClientPostSimulate_t {
            }
            // Parent: None
            // Field count: 3
            namespace EventSimpleLoopFrameUpdate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // 
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // 
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // 
            }
            // Parent: EventSimulate_t
            // Field count: 4
            namespace EventPostAdvanceTick_t {
                constexpr std::ptrdiff_t m_nCurrentTick = 0x30; // 
                constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x34; // 
                constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x38; // 
                constexpr std::ptrdiff_t m_nTotalTicks = 0x3C; // 
            }
            // Parent: None
            // Field count: 1
            namespace CEntityIOOutput {
                constexpr std::ptrdiff_t m_Value = 0x18; // 
            }
            // Parent: None
            // Field count: 1
            namespace EventClientSceneSystemThreadStateChange_t {
                constexpr std::ptrdiff_t m_bThreadsActive = 0x0; // 
            }
            // Parent: None
            // Field count: 5
            namespace EventClientOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // 
                constexpr std::ptrdiff_t m_flRenderTime = 0x28; // 
                constexpr std::ptrdiff_t m_flRealTime = 0x2C; // 
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x30; // 
                constexpr std::ptrdiff_t m_bRenderOnly = 0x34; // 
            }
            // Parent: EventSimulate_t
            // Field count: 0
            namespace EventServerPostSimulate_t {
            }
            // Parent: None
            // Field count: 4
            namespace CEntityComponentHelper {
                constexpr std::ptrdiff_t m_flags = 0x8; // 
                constexpr std::ptrdiff_t m_pInfo = 0x10; // 
                constexpr std::ptrdiff_t m_nPriority = 0x18; // 
                constexpr std::ptrdiff_t m_pNext = 0x20; // 
            }
            // Parent: None
            // Field count: 1
            namespace GameTime_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // 
            }
            // Parent: None
            // Field count: 0
            namespace EventServerEndAsyncPostTickWork_t {
            }
            // Parent: EventAdvanceTick_t
            // Field count: 0
            namespace EventClientAdvanceTick_t {
            }
            // Parent: None
            // Field count: 0
            namespace EntInput_t {
            }
            // Parent: None
            // Field count: 1
            namespace CNetworkVarChainer {
                constexpr std::ptrdiff_t m_PathIndex = 0x20; // 
            }
            // Parent: EventSimulate_t
            // Field count: 0
            namespace EventClientSimulate_t {
            }
            // Parent: None
            // Field count: 5
            namespace EventClientPostOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // 
                constexpr std::ptrdiff_t m_flRenderTime = 0x28; // 
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30; // 
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x34; // 
                constexpr std::ptrdiff_t m_bRenderOnly = 0x38; // 
            }
            // Parent: None
            // Field count: 1
            namespace GameTick_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // 
            }
            // Parent: None
            // Field count: 2
            namespace EventClientPollInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // 
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // 
            }
            // Parent: None
            // Field count: 1
            namespace EventPreDataUpdate_t {
                constexpr std::ptrdiff_t m_nCount = 0x0; // 
            }
            // Parent: None
            // Field count: 3
            namespace EventClientProcessGameInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // 
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // 
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // 
            }
            // Parent: None
            // Field count: 1
            namespace EventFrameBoundary_t {
                constexpr std::ptrdiff_t m_flFrameTime = 0x0; // 
            }
            // Parent: None
            // Field count: 1
            namespace EventAppShutdown_t {
                constexpr std::ptrdiff_t m_nDummy0 = 0x0; // 
            }
            // Parent: EventSimulate_t
            // Field count: 0
            namespace EventServerSimulate_t {
            }
            // Parent: EventPostAdvanceTick_t
            // Field count: 0
            namespace EventServerPostAdvanceTick_t {
            }
            // Parent: None
            // Field count: 1
            namespace EventProfileStorageAvailable_t {
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x0; // 
            }
            // Parent: None
            // Field count: 1
            namespace EventPostDataUpdate_t {
                constexpr std::ptrdiff_t m_nCount = 0x0; // 
            }
            // Parent: EventSimulate_t
            // Field count: 0
            namespace EventClientPreSimulate_t {
            }
            // Parent: EventSimulate_t
            // Field count: 0
            namespace EventClientPauseSimulate_t {
            }
            // Parent: None
            // Field count: 1
            namespace EventClientProcessNetworking_t {
                constexpr std::ptrdiff_t m_nTickCount = 0x0; // 
            }
            // Parent: EventSimulate_t
            // Field count: 4
            namespace EventAdvanceTick_t {
                constexpr std::ptrdiff_t m_nCurrentTick = 0x30; // 
                constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x34; // 
                constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x38; // 
                constexpr std::ptrdiff_t m_nTotalTicks = 0x3C; // 
            }
            // Parent: None
            // Field count: 0
            namespace EventSplitScreenStateChanged_t {
            }
            // Parent: EventPostAdvanceTick_t
            // Field count: 0
            namespace EventClientPostAdvanceTick_t {
            }
            // Parent: None
            // Field count: 0
            namespace CVariantDefaultAllocator {
            }
            // Parent: None
            // Field count: 0
            namespace EventModInitialized_t {
            }
            // Parent: None
            // Field count: 6
            namespace EventClientPreOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // 
                constexpr std::ptrdiff_t m_flRenderTime = 0x28; // 
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30; // 
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x38; // 
                constexpr std::ptrdiff_t m_flRealTime = 0x40; // 
                constexpr std::ptrdiff_t m_bRenderOnly = 0x44; // 
            }
            // Parent: None
            // Field count: 4
            namespace EventClientFrameSimulate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // 
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // 
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // 
                constexpr std::ptrdiff_t m_bScheduleSendTickPacket = 0x30; // 
            }
            // Parent: EventAdvanceTick_t
            // Field count: 0
            namespace EventServerAdvanceTick_t {
            }
            // Parent: None
            // Field count: 8
            namespace EventSetTime_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // 
                constexpr std::ptrdiff_t m_nClientOutputFrames = 0x28; // 
                constexpr std::ptrdiff_t m_flRealTime = 0x30; // 
                constexpr std::ptrdiff_t m_flRenderTime = 0x38; // 
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x40; // 
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x48; // 
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnscaled = 0x50; // 
                constexpr std::ptrdiff_t m_flTickRemainder = 0x58; // 
            }
            // Parent: None
            // Field count: 0
            namespace EntOutput_t {
            }
            // Parent: None
            // Field count: 3
            namespace EventSimulate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // 
                constexpr std::ptrdiff_t m_bFirstTick = 0x28; // 
                constexpr std::ptrdiff_t m_bLastTick = 0x29; // 
            }
            // Parent: None
            // Field count: 0
            namespace EventClientAdvanceNonRenderedFrame_t {
            }
            // Parent: EventSimulate_t
            // Field count: 0
            namespace EventServerProcessNetworking_t {
            }
            // Parent: None
            // Field count: 0
            namespace CEmptyEntityInstance {
            }
            // Parent: None
            // Field count: 7
            namespace EntComponentInfo_t {
                constexpr std::ptrdiff_t m_pName = 0x0; // 
                constexpr std::ptrdiff_t m_pCPPClassname = 0x8; // 
                constexpr std::ptrdiff_t m_pNetworkDataReferencedDescription = 0x10; // 
                constexpr std::ptrdiff_t m_pNetworkDataReferencedPtrPropDescription = 0x18; // 
                constexpr std::ptrdiff_t m_nRuntimeIndex = 0x20; // 
                constexpr std::ptrdiff_t m_nFlags = 0x24; // 
                constexpr std::ptrdiff_t m_pBaseClassComponentHelper = 0x60; // 
            }
            // Parent: None
            // Field count: 4
            namespace EngineLoopState_t {
                constexpr std::ptrdiff_t m_nPlatWindowWidth = 0x18; // 
                constexpr std::ptrdiff_t m_nPlatWindowHeight = 0x1C; // 
                constexpr std::ptrdiff_t m_nRenderWidth = 0x20; // 
                constexpr std::ptrdiff_t m_nRenderHeight = 0x24; // 
            }
            // Parent: None
            // Field count: 1
            namespace EventClientPollNetworking_t {
                constexpr std::ptrdiff_t m_nTickCount = 0x0; // 
            }
            // Parent: EventPostAdvanceTick_t
            // Field count: 0
            namespace EventServerBeginAsyncPostTickWork_t {
            }
            // Parent: None
            // Field count: 4
            namespace EventClientProcessInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // 
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // 
                constexpr std::ptrdiff_t m_flTickInterval = 0x2C; // 
                constexpr std::ptrdiff_t m_flTickStartTime = 0x30; // 
            }
            // Parent: EventSimulate_t
            // Field count: 0
            namespace EventServerPollNetworking_t {
            }
        }
    }
}
