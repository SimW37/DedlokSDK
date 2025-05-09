#pragma once
#include "source2sdk/client/CCitadel_Modifier_Intrinsic_Base.hpp"
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
    // Size: 0x198
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ConeWaveProjectile : public client::CCitadel_Modifier_Intrinsic_Base
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0xc0]; // 0xc0
        Vector m_vInitialCastPosition; // 0x180        
        float m_flProjectileSpeed; // 0x18c        
        client::ParticleIndex_t m_iParticleEffect; // 0x190        
        [[maybe_unused]] std::uint8_t pad_0x194[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ConeWaveProjectile because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ConeWaveProjectile) == 0x198);
};
