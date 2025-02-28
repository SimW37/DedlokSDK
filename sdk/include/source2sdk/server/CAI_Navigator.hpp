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
    // Size: 0x2b0
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
        server::AI_NavSetGoalFlags_t m_queuedGoalFlags; // 0x128        
        bool m_bQueuedGoalSuccess; // 0x12c        
        [[maybe_unused]] std::uint8_t pad_0x12d[0x3]; // 0x12d
        CGlobalSymbol m_sQueuedGoalName; // 0x130        
        bool m_bPeerMoveWait; // 0x138        
        [[maybe_unused]] std::uint8_t pad_0x139[0x3]; // 0x139
        // m_hPeerWaitingOn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPeerWaitingOn;
        char m_hPeerWaitingOn[0x4]; // 0x13c        
        client::CSimTimer m_PeerWaitMoveTimer; // 0x140        
        client::CSimTimer m_PeerWaitClearTimer; // 0x14c        
        client::CSimTimer m_NextSidestepTimer; // 0x158        
        // m_hBigStepGroundEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBigStepGroundEnt;
        char m_hBigStepGroundEnt[0x4]; // 0x164        
        // m_hLastBlockingEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastBlockingEnt;
        char m_hLastBlockingEnt[0x4]; // 0x168        
        Vector m_vPosBeginFailedSteer; // 0x16c        
        entity2::GameTime_t m_timeBeginFailedSteer; // 0x178        
        int32_t m_nNavFailCounter; // 0x17c        
        entity2::GameTime_t m_flLastNavFailTime; // 0x180        
        bool m_bShouldBruteForceFailedNav; // 0x184        
        bool m_bNavChangedAlongPath; // 0x185        
        [[maybe_unused]] std::uint8_t pad_0x186[0x2]; // 0x186
        int32_t m_nPreviousCollisionGroup; // 0x188        
        entity2::GameTime_t m_flLastNpcOverlapTime; // 0x18c        
        float m_flGoalTolerance; // 0x190        
        float m_flWaypointTolerance; // 0x194        
        Vector m_vGoalDirection; // 0x198        
        // m_hGoalDirectionTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGoalDirectionTarget;
        char m_hGoalDirectionTarget[0x4]; // 0x1a4        
        float m_flGoalDirectionToleranceDot; // 0x1a8        
        client::StanceType_t m_eGoalStance; // 0x1ac        
        float m_flArrivalFlyingSpeedScale; // 0x1b0        
        float m_flPathEndGoalRange; // 0x1b4        
        float m_flPathEndGoalRange_Repathing; // 0x1b8        
        float m_flGoalMaxPathLength; // 0x1bc        
        float m_flGoalMaxTravelDist; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        CUtlString m_pathRestrictionTag; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1d0[0x18]; // 0x1d0
        server::CNavSmartGoalHelper m_smartGoalHelper; // 0x1e8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_Navigator because it is not a standard-layout class
    static_assert(sizeof(CAI_Navigator) == 0x2b0);
};
