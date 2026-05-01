#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1980
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Fencer_ThrowBlade : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            Vector m_vCastPosition; // 0x11d8            
            QAngle m_qCastAngles; // 0x11e4            
            source2sdk::client::ParticleIndex_t m_nMarkParticleIndex; // 0x11f0            
            source2sdk::client::ParticleIndex_t m_nLingerParticleIndex; // 0x11f4            
            source2sdk::client::ParticleIndex_t m_nExplodeParticleIndex; // 0x11f8            
            bool m_bHitEnemyPlayer; // 0x11fc            
            uint8_t _pad11fd[0x783];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Fencer_ThrowBlade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Fencer_ThrowBlade) == 0x1980);
    };
};
