#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1040
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_NewYears_Fireworks : public source2sdk::client::C_DynamicProp
        {
        public:
            std::uint32_t m_unShowDurationSeconds; // 0xf60            
            std::uint32_t m_unShowDelaySeconds; // 0xf64            
            float m_flFireworkIntervalMin; // 0xf68            
            float m_flFireworkIntervalMax; // 0xf6c            
            CUtlString m_sFireworkParticle1; // 0xf70            
            CUtlString m_sFireworkParticle2; // 0xf78            
            CUtlString m_sFireworkParticle3; // 0xf80            
            CUtlString m_sFireworkParticle4; // 0xf88            
            CUtlString m_sFireworkParticle5; // 0xf90            
            CUtlString m_sFireworkParticle6; // 0xf98            
            CUtlString m_sFireworkParticle7; // 0xfa0            
            CUtlString m_sFireworkParticle8; // 0xfa8            
            CUtlSymbolLarge m_iszSoundName; // 0xfb0            
            float m_flStartSoundVerticalOffset; // 0xfb8            
            uint8_t _pad0fbc[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_NewYears_Fireworks because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_NewYears_Fireworks) == 0x1040);
    };
};
