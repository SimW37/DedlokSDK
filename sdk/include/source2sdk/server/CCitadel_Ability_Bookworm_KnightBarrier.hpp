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
        // Size: 0xda8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Bookworm_KnightBarrier : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x200]; // 0xb98
            source2sdk::client::ParticleIndex_t m_nCastParticleIndex; // 0xd98            
            std::int32_t m_iPendingBonusTargets; // 0xd9c            
            uint8_t _pad0da0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bookworm_KnightBarrier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Bookworm_KnightBarrier) == 0xda8);
    };
};
