#pragma once
#include "source2sdk/client/CVectorExponentialMovingAverage.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x40
    // Has VTable
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CMovementStatsProperty
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        int32_t m_nUseCounter; // 0x10        
        client::CVectorExponentialMovingAverage m_emaMovementDirection; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMovementStatsProperty, m_nUseCounter) == 0x10);
    static_assert(offsetof(CMovementStatsProperty, m_emaMovementDirection) == 0x14);
    
    static_assert(sizeof(CMovementStatsProperty) == 0x40);
};
