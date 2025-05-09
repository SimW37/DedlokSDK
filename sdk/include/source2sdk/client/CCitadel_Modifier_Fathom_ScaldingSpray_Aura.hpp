#pragma once
#include "source2sdk/client/CCitadelModifierAura_Cone.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x210
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Fathom_ScaldingSpray_Aura : public client::CCitadelModifierAura_Cone
    {
    public:
        QAngle m_playerAngles; // 0xf8        
        bool m_bHasAnyTargets; // 0x104        
        [[maybe_unused]] std::uint8_t pad_0x105[0x3]; // 0x105
        entity2::GameTime_t m_flLastStackTime; // 0x108        
        client::ParticleIndex_t m_ConeParticle; // 0x10c        
        [[maybe_unused]] std::uint8_t pad_0x110[0x100];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Fathom_ScaldingSpray_Aura because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Fathom_ScaldingSpray_Aura) == 0x210);
};
