#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncMover_Move_t.hpp"
#include "source2sdk/server/CFuncMover_OrientationUpdate_t.hpp"
#include "source2sdk/server/CFuncMover_TransitionToPathNodeAction_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CMoverPathNode;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPathMover;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa68
        // Has VTable
        #pragma pack(push, 1)
        class CFuncMover : public source2sdk::server::CBaseModelEntity
        {
        public:
            CUtlSymbolLarge m_iszPathName; // 0x7d0            
            // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPathMover;
            char m_hPathMover[0x4]; // 0x7d8            
            uint8_t _pad07dc[0x4]; // 0x7dc
            CUtlSymbolLarge m_iszPathNodeStart; // 0x7e0            
            CUtlSymbolLarge m_iszPathNodeEnd; // 0x7e8            
            source2sdk::server::CFuncMover_Move_t m_eMoveType; // 0x7f0            
            bool m_bIsReversing; // 0x7f4            
            uint8_t _pad07f5[0x3]; // 0x7f5
            Vector m_vTarget; // 0x7f8            
            float m_flStartSpeed; // 0x804            
            float m_flPathLocation; // 0x808            
            float m_flT; // 0x80c            
            std::int32_t m_nCurrentNodeIndex; // 0x810            
            std::int32_t m_nPreviousNodeIndex; // 0x814            
            source2sdk::client::SolidType_t m_eSolidType; // 0x818            
            bool m_bIsMoving; // 0x819            
            uint8_t _pad081a[0x2]; // 0x81a
            float m_flTimeToReachMaxSpeed; // 0x81c            
            float m_flDistanceToReachMaxSpeed; // 0x820            
            float m_flTimeToReachZeroSpeed; // 0x824            
            float m_flDistanceToReachZeroSpeed; // 0x828            
            source2sdk::entity2::GameTime_t m_flTimeMovementStart; // 0x82c            
            source2sdk::entity2::GameTime_t m_flTimeMovementStop; // 0x830            
            // m_hStopAtNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CMoverPathNode> m_hStopAtNode;
            char m_hStopAtNode[0x4]; // 0x834            
            float m_flPathLocationToBeginStop; // 0x838            
            uint8_t _pad083c[0x4]; // 0x83c
            CUtlSymbolLarge m_iszStartForwardSound; // 0x840            
            CUtlSymbolLarge m_iszLoopForwardSound; // 0x848            
            CUtlSymbolLarge m_iszStopForwardSound; // 0x850            
            CUtlSymbolLarge m_iszStartReverseSound; // 0x858            
            CUtlSymbolLarge m_iszLoopReverseSound; // 0x860            
            CUtlSymbolLarge m_iszStopReverseSound; // 0x868            
            CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x870            
            uint8_t _pad0878[0x18]; // 0x878
            source2sdk::entity2::CEntityIOOutput m_OnMovementEnd; // 0x890            
            bool m_bStartAtClosestPoint; // 0x8b8            
            bool m_bStartAtEnd; // 0x8b9            
            uint8_t _pad08ba[0x2]; // 0x8ba
            source2sdk::server::CFuncMover_OrientationUpdate_t m_eOrientationUpdate; // 0x8bc            
            source2sdk::entity2::GameTime_t m_flTimeStartOrientationChange; // 0x8c0            
            float m_flTimeToBlendToNewOrientation; // 0x8c4            
            float m_flDurationBlendToNewOrientationRan; // 0x8c8            
            std::int32_t m_nOriginalOrientationIndex; // 0x8cc            
            bool m_bCreateMovableNavMesh; // 0x8d0            
            bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x8d1            
            uint8_t _pad08d2[0x6]; // 0x8d2
            source2sdk::entity2::CEntityIOOutput m_OnNodePassed; // 0x8d8            
            CUtlSymbolLarge m_iszOrientationMatchEntityName; // 0x900            
            // m_hOrientationMatchEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationMatchEntity;
            char m_hOrientationMatchEntity[0x4]; // 0x908            
            float m_flTimeToTraverseToNextNode; // 0x90c            
            Vector m_vLerpToNewPosStartInPathEntitySpace; // 0x910            
            Vector m_vLerpToNewPosEndInPathEntitySpace; // 0x91c            
            float m_flLerpToPositionT; // 0x928            
            float m_flLerpToPositionDeltaT; // 0x92c            
            source2sdk::entity2::CEntityIOOutput m_OnLerpToPositionComplete; // 0x930            
            bool m_bIsPaused; // 0x958            
            uint8_t _pad0959[0x3]; // 0x959
            source2sdk::server::CFuncMover_TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // 0x95c            
            std::int32_t m_nDelayedTeleportToNode; // 0x960            
            bool m_bIsVerboseLogging; // 0x964            
            uint8_t _pad0965[0x3]; // 0x965
            // m_hFollowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFollowEntity;
            char m_hFollowEntity[0x4]; // 0x968            
            float m_flFollowDistance; // 0x96c            
            float m_flFollowMinimumSpeed; // 0x970            
            float m_flCurFollowEntityT; // 0x974            
            float m_flCurFollowSpeed; // 0x978            
            uint8_t _pad097c[0x4]; // 0x97c
            source2sdk::entity2::CEntityIOOutput m_OnStart; // 0x980            
            source2sdk::entity2::CEntityIOOutput m_OnStartForward; // 0x9a8            
            source2sdk::entity2::CEntityIOOutput m_OnStartReverse; // 0x9d0            
            source2sdk::entity2::CEntityIOOutput m_OnStop; // 0x9f8            
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0xa20            
            bool m_bNextNodeReturnsCurrent; // 0xa48            
            bool m_bStartedMoving; // 0xa49            
            uint8_t _pad0a4a[0x1e];
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartReverse; // 0x0
            // void InputStop; // 0x0
            // void InputToggle; // 0x0
            // void InputToggleDirection; // 0x0
            // void InputPause; // 0x0
            // void InputUnpause; // 0x0
            // CUtlSymbolLarge InputTeleportToPathNode; // 0x0
            // CUtlSymbolLarge InputMoveToPathNode; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNode; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNodeStartForward; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNodeStartReverse; // 0x0
            // float InputSetSpeed; // 0x0
            // float InputSetSpeedImmediate; // 0x0
            // float InputSetTimeToReachMaxSpeed; // 0x0
            // float InputSetTimeToBlendToNewOrientation; // 0x0
            // int32_t InputSetOrientationMode; // 0x0
            // CUtlSymbolLarge InputSetFollowEntity; // 0x0
            // float InputSetFollowDistance; // 0x0
            // float InputSetFollowMinimumSpeed; // 0x0
            // float InputSetTimeToTraverseToNextNode; // 0x0
            // void CFuncMoverMoveThink; // 0x0
            // void CFuncMoverLerpToNewPosition; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMover because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMover) == 0xa68);
    };
};
