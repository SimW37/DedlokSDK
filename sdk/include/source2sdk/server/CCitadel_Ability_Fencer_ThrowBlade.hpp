#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1738
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Fencer_ThrowBlade : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            Vector m_vCastPosition; // 0xf90            
            QAngle m_qCastAngles; // 0xf9c            
            source2sdk::client::ParticleIndex_t m_nMarkParticleIndex; // 0xfa8            
            source2sdk::client::ParticleIndex_t m_nLingerParticleIndex; // 0xfac            
            source2sdk::client::ParticleIndex_t m_nExplodeParticleIndex; // 0xfb0            
            bool m_bHitEnemyPlayer; // 0xfb4            
            uint8_t _pad0fb5[0x783];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Fencer_ThrowBlade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Fencer_ThrowBlade) == 0x1738);
    };
};
