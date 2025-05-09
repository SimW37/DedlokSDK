#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xe30
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flBonusDamage"
    // static metadata: MNetworkVarNames "GameTime_t m_NextBonusDamageDecayTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Frank_ShockTarget : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xba0[0x280]; // 0xba0
        // metadata: MNetworkEnable
        float m_flBonusDamage; // 0xe20        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_NextBonusDamageDecayTime; // 0xe24        
        server::CBaseEntity* m_CachedTarget; // 0xe28        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Frank_ShockTarget because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Frank_ShockTarget) == 0xe30);
};
