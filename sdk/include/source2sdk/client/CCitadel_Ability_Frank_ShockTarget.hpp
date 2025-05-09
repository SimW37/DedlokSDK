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
    // Size: 0x1050
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flBonusDamage"
    // static metadata: MNetworkVarNames "GameTime_t m_NextBonusDamageDecayTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Frank_ShockTarget : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x280]; // 0xdc0
        // metadata: MNetworkEnable
        float m_flBonusDamage; // 0x1040        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_NextBonusDamageDecayTime; // 0x1044        
        client::C_BaseEntity* m_CachedTarget; // 0x1048        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Frank_ShockTarget because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Frank_ShockTarget) == 0x1050);
};
