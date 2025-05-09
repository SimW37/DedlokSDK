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
    // Size: 0xd80
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_HornetSting : public server::CCitadelBaseAbility
    {
    public:
        int32_t m_BounceCount; // 0xba0        
        bool m_bHitHero; // 0xba4        
        [[maybe_unused]] std::uint8_t pad_0xba5[0x3]; // 0xba5
        // m_vecValidBounceTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecValidBounceTargets;
        char m_vecValidBounceTargets[0x18]; // 0xba8        
        [[maybe_unused]] std::uint8_t pad_0xbc0[0x1c0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HornetSting because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_HornetSting) == 0xd80);
};
