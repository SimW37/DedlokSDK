#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifierAura_Cone.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1f8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Fathom_ScaldingSpray_Aura : public server::CCitadelModifierAura_Cone
    {
    public:
        QAngle m_playerAngles; // 0xe0        
        bool m_bHasAnyTargets; // 0xec        
        [[maybe_unused]] std::uint8_t pad_0xed[0x3]; // 0xed
        entity2::GameTime_t m_flLastStackTime; // 0xf0        
        client::ParticleIndex_t m_ConeParticle; // 0xf4        
        [[maybe_unused]] std::uint8_t pad_0xf8[0x100];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Fathom_ScaldingSpray_Aura because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Fathom_ScaldingSpray_Aura) == 0x1f8);
};
