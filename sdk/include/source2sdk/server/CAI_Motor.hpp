#pragma once
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/client/CSimpleSimTimer.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph.hpp"
#include "source2sdk/server/CAI_MotorNavLink.hpp"
#include "source2sdk/server/CAI_MotorTransition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4c8
    // Has VTable
    #pragma pack(push, 1)
    class CAI_Motor : public client::CAI_Component
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x40[0x10]; // 0x40
        float m_flMoveInterval; // 0x50        
        float m_flYawSpeed; // 0x54        
        Vector m_vMoveVel; // 0x58        
        Vector m_vMoveVelNavigation; // 0x64        
        Vector m_vecAngularVelocity; // 0x70        
        client::CSimpleSimTimer m_timerFloorPointCached; // 0x7c        
        Vector m_vFloorPointCached; // 0x84        
        bool m_bFloorPointCachingEnabled; // 0x90        
        bool m_bAllowFlyingAnimMovement; // 0x91        
        [[maybe_unused]] std::uint8_t pad_0x92[0x2a]; // 0x92
        float m_flSpeed; // 0xbc        
        bool m_bMovementActive; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc1[0x3]; // 0xc1
        Vector m_vBoundaryDistCachedPos; // 0xc4        
        float m_flBoundaryDistCached; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd4[0x4]; // 0xd4
        server::CAI_MotorNavLink m_motorNavLink; // 0xd8        
        server::CAI_MotorTransition m_motorTransition; // 0x150        
        server::CAI_MotorGroundAnimGraph m_motorGroundAnimgraph; // 0x1b0        
        bool m_bIsExecutingMoveSolve; // 0x4c0        
        [[maybe_unused]] std::uint8_t pad_0x4c1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_Motor because it is not a standard-layout class
    static_assert(sizeof(CAI_Motor) == 0x4c8);
};
