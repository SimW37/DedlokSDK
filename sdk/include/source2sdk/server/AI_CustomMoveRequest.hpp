#pragma once
#include "source2sdk/server/CAI_InterestTarget.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x50
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class AI_CustomMoveRequest
    {
    public:
        CGlobalSymbol m_sType; // 0x0        
        server::CAI_InterestTarget m_interestTarget; // 0x8        
        bool m_bForceInterrupt; // 0x3c        
        [[maybe_unused]] std::uint8_t pad_0x3d[0x3]; // 0x3d
        float m_flMinPathLength; // 0x40        
        Vector m_vTargetPosition; // 0x44        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AI_CustomMoveRequest, m_sType) == 0x0);
    static_assert(offsetof(AI_CustomMoveRequest, m_interestTarget) == 0x8);
    static_assert(offsetof(AI_CustomMoveRequest, m_bForceInterrupt) == 0x3c);
    static_assert(offsetof(AI_CustomMoveRequest, m_flMinPathLength) == 0x40);
    static_assert(offsetof(AI_CustomMoveRequest, m_vTargetPosition) == 0x44);
    
    static_assert(sizeof(AI_CustomMoveRequest) == 0x50);
};
