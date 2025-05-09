#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1150
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iBonusBats"
    // static metadata: MNetworkVarNames "int m_iBatCountOnCast"
    #pragma pack(push, 1)
    class CCitadel_Ability_VampireBat_BatSwarm : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iBonusBats; // 0xdc0        
        // metadata: MNetworkEnable
        int32_t m_iBatCountOnCast; // 0xdc4        
        [[maybe_unused]] std::uint8_t pad_0xdc8[0x4]; // 0xdc8
        entity2::GameTime_t m_flNextBatTime; // 0xdcc        
        [[maybe_unused]] std::uint8_t pad_0xdd0[0x380];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatSwarm because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_VampireBat_BatSwarm) == 0x1150);
};
