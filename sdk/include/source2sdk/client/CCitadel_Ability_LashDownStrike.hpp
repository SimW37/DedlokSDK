#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x10a8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vStrikeVel"
        // static metadata: MNetworkVarNames "float m_flStartHeight"
        #pragma pack(push, 1)
        class CCitadel_Ability_LashDownStrike : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0xc0]; // 0xdc0
            source2sdk::entity2::GameTime_t m_ImpactTime; // 0xe80            
            Vector m_vDamagePos; // 0xe84            
            uint8_t _pad0e90[0x4]; // 0xe90
            source2sdk::client::ParticleIndex_t m_PreviewEffect; // 0xe94            
            uint8_t _pad0e98[0x200]; // 0xe98
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStrikeVel; // 0x1098            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flStartHeight; // 0x10a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_LashDownStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_LashDownStrike) == 0x10a8);
    };
};
