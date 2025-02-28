#pragma once
#include "source2sdk/client/EAbilitySlots_t.hpp"
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
    // Alignment: 0x2
    // Standard-layout class: true
    // Size: 0x10
    // Has VTable
    // Has Trivial Destructor
    // 
    // static metadata: MNetworkVarNames "EAbilitySlots_t m_eStolenSlot"
    // static metadata: MNetworkVarNames "bool m_bIsActivelyStolen"
    #pragma pack(push, 1)
    struct CitadelStolenAbilitySlot_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        client::EAbilitySlots_t m_eStolenSlot; // 0x8        
        // metadata: MNetworkEnable
        bool m_bIsActivelyStolen; // 0xa        
        [[maybe_unused]] std::uint8_t pad_0x0b[0x5];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelStolenAbilitySlot_t, m_eStolenSlot) == 0x8);
    static_assert(offsetof(CitadelStolenAbilitySlot_t, m_bIsActivelyStolen) == 0xa);
    
    static_assert(sizeof(CitadelStolenAbilitySlot_t) == 0x10);
};
