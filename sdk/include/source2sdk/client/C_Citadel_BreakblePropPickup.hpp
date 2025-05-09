#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xce8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "CUtlString m_sPickupName"
    // static metadata: MNetworkVarNames "int m_nNameOffset"
    // static metadata: MNetworkVarNames "CUtlString m_sAmbientNoise"
    #pragma pack(push, 1)
    class C_Citadel_BreakblePropPickup : public client::CBaseAnimGraph
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnActiveChanged"
        bool m_bActive; // 0xcb0        
        [[maybe_unused]] std::uint8_t pad_0xcb1[0x7]; // 0xcb1
        // metadata: MNetworkEnable
        CUtlString m_sPickupName; // 0xcb8        
        // metadata: MNetworkEnable
        int32_t m_nNameOffset; // 0xcc0        
        [[maybe_unused]] std::uint8_t pad_0xcc4[0x4]; // 0xcc4
        // metadata: MNetworkEnable
        CUtlString m_sAmbientNoise; // 0xcc8        
        [[maybe_unused]] std::uint8_t pad_0xcd0[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_BreakblePropPickup because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_BreakblePropPickup) == 0xce8);
};
