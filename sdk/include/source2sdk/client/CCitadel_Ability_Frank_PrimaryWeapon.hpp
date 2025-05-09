#pragma once
#include "source2sdk/client/CCitadel_Ability_PrimaryWeapon.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_CitadelPlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf40
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Frank_PrimaryWeapon : public client::CCitadel_Ability_PrimaryWeapon
    {
    public:
        client::C_CitadelPlayerPawn* m_pNextShooter; // 0xeb0        
        [[maybe_unused]] std::uint8_t pad_0xeb8[0x88];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Frank_PrimaryWeapon because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Frank_PrimaryWeapon) == 0xf40);
};
