#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Silenced.hpp"

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
        // Size: 0x168
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Bubble : public source2sdk::server::CCitadel_Modifier_Silenced
        {
        public:
            float m_flDampingFactor; // 0xd8            
            uint8_t _pad00dc[0x84]; // 0xdc
            source2sdk::client::ParticleIndex_t m_ParticleIndex; // 0x160            
            uint8_t _pad0164[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Bubble because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Bubble) == 0x168);
    };
};
