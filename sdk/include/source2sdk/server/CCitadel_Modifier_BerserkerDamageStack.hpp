#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x108
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_BerserkerDamageStack : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::client::ParticleIndex_t m_nBuffParticle; // 0xc0            
            source2sdk::client::ParticleIndex_t m_nBuffParticleEnemy; // 0xc4            
            uint8_t _pad00c8[0x40];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_BerserkerDamageStack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_BerserkerDamageStack) == 0x108);
    };
};
