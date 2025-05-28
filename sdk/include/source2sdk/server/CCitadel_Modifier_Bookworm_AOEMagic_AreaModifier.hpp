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
        // Size: 0x248
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::client::ParticleIndex_t m_hAOEWarningParticle; // 0xc0            
            uint8_t _pad00c4[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier) == 0x248);
    };
};
