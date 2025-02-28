#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe00
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Gunslinger_KnockbackBlast : public client::C_CitadelBaseAbility
    {
    public:
        Vector m_vecKnockbackDirection; // 0xc50        
        [[maybe_unused]] std::uint8_t pad_0xc5c[0x4]; // 0xc5c
        // m_vecKnockbackedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecKnockbackedUnits;
        char m_vecKnockbackedUnits[0x18]; // 0xc60        
        [[maybe_unused]] std::uint8_t pad_0xc78[0x188];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Gunslinger_KnockbackBlast because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Gunslinger_KnockbackBlast) == 0xe00);
};
