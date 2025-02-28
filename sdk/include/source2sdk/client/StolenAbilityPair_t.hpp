#pragma once
#include "source2sdk/client/EAbilitySlots_t.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x38
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EAbilitySlots_t m_ItemSlotType"
    // static metadata: MNetworkVarNames "AbilityID_t m_StolenAbilityID"
    #pragma pack(push, 1)
    struct StolenAbilityPair_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        client::EAbilitySlots_t m_ItemSlotType; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x32[0x2]; // 0x32
        // metadata: MNetworkEnable
        CUtlStringToken m_StolenAbilityID; // 0x34        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(StolenAbilityPair_t, m_ItemSlotType) == 0x30);
    static_assert(offsetof(StolenAbilityPair_t, m_StolenAbilityID) == 0x34);
    
    static_assert(sizeof(StolenAbilityPair_t) == 0x38);
};
