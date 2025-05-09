#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf50
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Bookworm_KnightCharge : public server::CCitadelBaseAbility
    {
    public:
        Vector m_vKnightChargePos; // 0xba0        
        Vector m_vKnightChargeDir; // 0xbac        
        // m_vecKnightChargedEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecKnightChargedEnemies;
        char m_vecKnightChargedEnemies[0x18]; // 0xbb8        
        [[maybe_unused]] std::uint8_t pad_0xbd0[0x380];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bookworm_KnightCharge because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bookworm_KnightCharge) == 0xf50);
};
