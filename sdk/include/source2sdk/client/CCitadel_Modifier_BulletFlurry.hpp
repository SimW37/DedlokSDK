#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0x150
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_BulletFlurry : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x80]; // 0xc0
        client::ParticleIndex_t m_nEffectId; // 0x140        
        entity2::GameTime_t m_flNextSequenceChange; // 0x144        
        int32_t m_nCurrentPose; // 0x148        
        [[maybe_unused]] std::uint8_t pad_0x14c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BulletFlurry because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BulletFlurry) == 0x150);
};
