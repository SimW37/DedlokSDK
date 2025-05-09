#pragma once
#include "source2sdk/client/CCitadelModifierAura_Cone.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x148
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Bull_Heal_Aura : public client::CCitadelModifierAura_Cone
    {
    public:
        QAngle m_playerAngles; // 0xf8        
        client::ParticleIndex_t m_ConeParticle; // 0x104        
        [[maybe_unused]] std::uint8_t pad_0x108[0x40];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Bull_Heal_Aura because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Bull_Heal_Aura) == 0x148);
};
