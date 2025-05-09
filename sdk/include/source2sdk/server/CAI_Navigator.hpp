#pragma once
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/client/CSimTimer.hpp"
#include "source2sdk/client/StanceType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/AI_NavGoal_t.hpp"
#include "source2sdk/server/AI_NavSetGoalFlags_t.hpp"
#include "source2sdk/server/CAI_WaypointList.hpp"
#include "source2sdk/server/CNavSmartGoalHelper.hpp"
#include "source2sdk/server/Navigation_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CAI_Path;
};

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x320
    // Has VTable
    #pragma pack(push, 1)
    class CAI_Navigator : public client::CAI_Component
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x40[0x8]; // 0x40
        float m_flGoalStoppingDistance; // 0x48        
        server::Navigation_t m_navType; // 0x4c        
        bool m_bNavComplete; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x27]; // 0x51
        server::CAI_Path* m_pPath; // 0x78        
        // m_hLosTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLosTarget;
        char m_hLosTarget[0x4]; // 0x80        
        Vector m_vThreatPos; // 0x84        
        server::CAI_WaypointList m_interruptPathWaypoints; // 0x90        
        entity2::GameTime_t m_flLastSuccessfulSimplifyTime; // 0x98        
        entity2::GameTime_t m_flTimeLastAvoidanceTriangulate; // 0x9c        
        entity2::GameTime_t m_flStartWaitingForFacingTime; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa4[0x4]; // 0xa4
        server::AI_NavGoal_t m_queuedGoal; // 0xa8        
        server::AI_NavSetGoalFlags_t m_queuedGoalFlags; // 0x160        
        bool m_bQueuedGoalSuccess; // 0x164        
        [[maybe_unused]] std::uint8_t pad_0x165[0x3]; // 0x165
        CGlobalSymbol m_sQueuedGoalName; // 0x168        
        bool m_bPeerMoveWait; // 0x170        
        [[maybe_unused]] std::uint8_t pad_0x171[0x3]; // 0x171
        // m_hPeerWaitingOn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPeerWaitingOn;
        char m_hPeerWaitingOn[0x4]; // 0x174        
        client::CSimTimer m_PeerWaitMoveTimer; // 0x178        
        client::CSimTimer m_PeerWaitClearTimer; // 0x184        
        client::CSimTimer m_NextSidestepTimer; // 0x190        
        // m_hBigStepGroundEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBigStepGroundEnt;
        char m_hBigStepGroundEnt[0x4]; // 0x19c        
        // m_hLastBlockingEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastBlockingEnt;
        char m_hLastBlockingEnt[0x4]; // 0x1a0        
        Vector m_vPosBeginFailedSteer; // 0x1a4        
        entity2::GameTime_t m_timeBeginFailedSteer; // 0x1b0        
        int32_t m_nNavFailCounter; // 0x1b4        
        entity2::GameTime_t m_flLastNavFailTime; // 0x1b8        
        bool m_bShouldBruteForceFailedNav; // 0x1bc        
        bool m_bNavChangedAlongPath; // 0x1bd        
        [[maybe_unused]] std::uint8_t pad_0x1be[0x2]; // 0x1be
        int32_t m_nPreviousCollisionGroup; // 0x1c0        
        entity2::GameTime_t m_flLastNpcOverlapTime; // 0x1c4        
        float m_flGoalTolerance; // 0x1c8        
        float m_flWaypointTolerance; // 0x1cc        
        Vector m_vGoalDirection; // 0x1d0        
        // m_hGoalDirectionTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGoalDirectionTarget;
        char m_hGoalDirectionTarget[0x4]; // 0x1dc        
        float m_flGoalDirectionToleranceDot; // 0x1e0        
        client::StanceType_t m_eGoalStance; // 0x1e4        
        float m_flArrivalFlyingSpeedScale; // 0x1e8        
        float m_flPathEndGoalRange; // 0x1ec        
        float m_flPathEndGoalRange_Repathing; // 0x1f0        
        float m_flGoalMaxPathLength; // 0x1f4        
        float m_flGoalMaxTravelDist; // 0x1f8        
        [[maybe_unused]] std::uint8_t pad_0x1fc[0x4]; // 0x1fc
        CUtlString m_pathRestrictionTag; // 0x200        
        [[maybe_unused]] std::uint8_t pad_0x208[0x18]; // 0x208
        server::CNavSmartGoalHelper m_smartGoalHelper; // 0x220        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_Navigator because it is not a standard-layout class
    static_assert(sizeof(CAI_Navigator) == 0x320);
};
