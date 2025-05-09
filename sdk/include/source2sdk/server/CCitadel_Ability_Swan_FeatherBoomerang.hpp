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
    // Size: 0xcc8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Swan_FeatherBoomerang : public server::CCitadelBaseAbility
    {
    public:
        // m_vecHitTargetList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHitTargetList;
        char m_vecHitTargetList[0x18]; // 0xba0        
        [[maybe_unused]] std::uint8_t pad_0xbb8[0x110];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Swan_FeatherBoomerang because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Swan_FeatherBoomerang) == 0xcc8);
};
