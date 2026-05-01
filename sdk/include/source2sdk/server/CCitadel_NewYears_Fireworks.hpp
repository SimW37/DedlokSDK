#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDynamicProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xda0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_NewYears_Fireworks : public source2sdk::server::CDynamicProp
        {
        public:
            std::uint32_t m_unShowDurationSeconds; // 0xcc0            
            std::uint32_t m_unShowDelaySeconds; // 0xcc4            
            float m_flFireworkIntervalMin; // 0xcc8            
            float m_flFireworkIntervalMax; // 0xccc            
            CUtlString m_sFireworkParticle1; // 0xcd0            
            CUtlString m_sFireworkParticle2; // 0xcd8            
            CUtlString m_sFireworkParticle3; // 0xce0            
            CUtlString m_sFireworkParticle4; // 0xce8            
            CUtlString m_sFireworkParticle5; // 0xcf0            
            CUtlString m_sFireworkParticle6; // 0xcf8            
            CUtlString m_sFireworkParticle7; // 0xd00            
            CUtlString m_sFireworkParticle8; // 0xd08            
            CUtlSymbolLarge m_iszSoundName; // 0xd10            
            float m_flStartSoundVerticalOffset; // 0xd18            
            uint8_t _pad0d1c[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_NewYears_Fireworks because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_NewYears_Fireworks) == 0xda0);
    };
};
