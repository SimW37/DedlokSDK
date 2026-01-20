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
        // Size: 0xe60
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_NewYears_Fireworks : public source2sdk::server::CDynamicProp
        {
        public:
            std::uint32_t m_unShowDurationSeconds; // 0xd80            
            std::uint32_t m_unShowDelaySeconds; // 0xd84            
            float m_flFireworkIntervalMin; // 0xd88            
            float m_flFireworkIntervalMax; // 0xd8c            
            CUtlString m_sFireworkParticle1; // 0xd90            
            CUtlString m_sFireworkParticle2; // 0xd98            
            CUtlString m_sFireworkParticle3; // 0xda0            
            CUtlString m_sFireworkParticle4; // 0xda8            
            CUtlString m_sFireworkParticle5; // 0xdb0            
            CUtlString m_sFireworkParticle6; // 0xdb8            
            CUtlString m_sFireworkParticle7; // 0xdc0            
            CUtlString m_sFireworkParticle8; // 0xdc8            
            CUtlSymbolLarge m_iszSoundName; // 0xdd0            
            float m_flStartSoundVerticalOffset; // 0xdd8            
            uint8_t _pad0ddc[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_NewYears_Fireworks because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_NewYears_Fireworks) == 0xe60);
    };
};
