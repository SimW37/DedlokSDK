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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xed8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Nano_ClusterGrenade : public client::C_CitadelBaseAbility
    {
    public:
        // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecHitEnemies;
        char m_vecHitEnemies[0x18]; // 0xc50        
        entity2::GameTime_t m_flNextProjectileTime; // 0xc68        
        [[maybe_unused]] std::uint8_t pad_0xc6c[0x26c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Nano_ClusterGrenade because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Nano_ClusterGrenade) == 0xed8);
};
