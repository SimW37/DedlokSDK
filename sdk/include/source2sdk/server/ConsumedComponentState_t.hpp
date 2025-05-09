#pragma once
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
    // Size: 0x48
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "AbilityID_t m_unComponentID"
    // static metadata: MNetworkVarNames "int m_nRefCount"
    // static metadata: MNetworkVarNames "bool m_bPurchased"
    #pragma pack(push, 1)
    struct ConsumedComponentState_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        CUtlStringToken m_unComponentID; // 0x30        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nRefCount; // 0x34        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bPurchased; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x39[0xf];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ConsumedComponentState_t, m_unComponentID) == 0x30);
    static_assert(offsetof(ConsumedComponentState_t, m_nRefCount) == 0x34);
    static_assert(offsetof(ConsumedComponentState_t, m_bPurchased) == 0x38);
    
    static_assert(sizeof(ConsumedComponentState_t) == 0x48);
};
