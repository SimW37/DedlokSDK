#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xee0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vStrikeVel"
    // static metadata: MNetworkVarNames "float m_flStartHeight"
    #pragma pack(push, 1)
    class CCitadel_Ability_LashDownStrike : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc50[0xa8]; // 0xc50
        entity2::GameTime_t m_ImpactTime; // 0xcf8        
        Vector m_vDamagePos; // 0xcfc        
        [[maybe_unused]] std::uint8_t pad_0xd08[0x4]; // 0xd08
        client::ParticleIndex_t m_PreviewEffect; // 0xd0c        
        [[maybe_unused]] std::uint8_t pad_0xd10[0x1c0]; // 0xd10
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vStrikeVel; // 0xed0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flStartHeight; // 0xedc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_LashDownStrike because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_LashDownStrike) == 0xee0);
};
