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
        // Size: 0x128
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Containment_Victim : public source2sdk::server::CCitadelModifier
        {
        public:
            float m_flGoalHeight; // 0xc0            
            float m_flFallRate; // 0xc4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0xc8            
            source2sdk::client::ParticleIndex_t m_nFXIndexVictim; // 0xcc            
            source2sdk::client::ParticleIndex_t m_nChainFxIndex; // 0xd0            
            float m_flTetherRadius; // 0xd4            
            Vector m_vecOrigin; // 0xd8            
            uint8_t _pad00e4[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Containment_Victim because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Containment_Victim) == 0x128);
    };
};
