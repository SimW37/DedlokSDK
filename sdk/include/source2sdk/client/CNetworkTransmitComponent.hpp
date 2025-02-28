#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x1c8
    // Has VTable
    #pragma pack(push, 1)
    class CNetworkTransmitComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x184]; // 0x0
        uint8_t m_nTransmitStateOwnedCounter; // 0x184        
        [[maybe_unused]] std::uint8_t pad_0x185[0x43];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNetworkTransmitComponent, m_nTransmitStateOwnedCounter) == 0x184);
    
    static_assert(sizeof(CNetworkTransmitComponent) == 0x1c8);
};
