#pragma once
#include "source2sdk/server/CCitadel_Ability_PrimaryWeapon.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCitadelPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcf0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Frank_PrimaryWeapon : public server::CCitadel_Ability_PrimaryWeapon
    {
    public:
        server::CCitadelPlayerPawn* m_pNextShooter; // 0xc60        
        [[maybe_unused]] std::uint8_t pad_0xc68[0x88];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Frank_PrimaryWeapon because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Frank_PrimaryWeapon) == 0xcf0);
};
