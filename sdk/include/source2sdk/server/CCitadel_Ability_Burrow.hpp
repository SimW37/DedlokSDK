#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcd0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bInGround"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastDamageTime"
    // static metadata: MNetworkVarNames "GameTime_t m_SpinEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Burrow : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb00[0x1c0]; // 0xb00
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bInGround; // 0xcc0        
        [[maybe_unused]] std::uint8_t pad_0xcc1[0x3]; // 0xcc1
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastDamageTime; // 0xcc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_SpinEndTime; // 0xcc8        
        client::ParticleIndex_t m_nBurrowEffect; // 0xccc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Burrow because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Burrow) == 0xcd0);
};
