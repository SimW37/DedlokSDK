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
    // Size: 0xcc0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Drifter_Hunger : public server::CCitadelBaseAbility
    {
    public:
        // m_vecCurrentTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecCurrentTargets;
        char m_vecCurrentTargets[0x18]; // 0xba0        
        [[maybe_unused]] std::uint8_t pad_0xbb8[0x108];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Drifter_Hunger because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Drifter_Hunger) == 0xcc0);
};
