#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierAura_Cone.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x210
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Fathom_ScaldingSpray_Aura : public source2sdk::client::CCitadelModifierAura_Cone
        {
        public:
            QAngle m_playerAngles; // 0xf8            
            bool m_bHasAnyTargets; // 0x104            
            uint8_t _pad0105[0x3]; // 0x105
            source2sdk::entity2::GameTime_t m_flLastStackTime; // 0x108            
            source2sdk::client::ParticleIndex_t m_ConeParticle; // 0x10c            
            uint8_t _pad0110[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Fathom_ScaldingSpray_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Fathom_ScaldingSpray_Aura) == 0x210);
    };
};
