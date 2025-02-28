#pragma once
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
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
    // Size: 0x1478
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bPlayingIdle"
    // static metadata: MNetworkVarNames "bool m_bShieldActive"
    // static metadata: MNetworkVarNames "int m_iVaultState"
    #pragma pack(push, 1)
    class C_NPC_TrooperNeutral : public client::C_AI_CitadelNPC
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPlayingIdleChanged"
        bool m_bPlayingIdle; // 0x1428        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnShieldActiveChanged"
        bool m_bShieldActive; // 0x1429        
        [[maybe_unused]] std::uint8_t pad_0x142a[0x2e]; // 0x142a
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnVaultStateChanged"
        int32_t m_iVaultState; // 0x1458        
        [[maybe_unused]] std::uint8_t pad_0x145c[0x1c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NPC_TrooperNeutral because it is not a standard-layout class
    static_assert(sizeof(C_NPC_TrooperNeutral) == 0x1478);
};
