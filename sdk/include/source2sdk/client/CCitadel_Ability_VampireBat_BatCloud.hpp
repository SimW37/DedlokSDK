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
    // Size: 0xfa8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_VampireBat_BatCloud : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x20]; // 0xdc0
        entity2::GameTime_t m_flBatCloudEndTime; // 0xde0        
        [[maybe_unused]] std::uint8_t pad_0xde4[0x1c4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatCloud because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_VampireBat_BatCloud) == 0xfa8);
};
