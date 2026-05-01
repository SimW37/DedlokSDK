#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CFuncBrush.hpp"

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
        // Size: 0x7f8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelZapTrigger : public source2sdk::server::CFuncBrush
        {
        public:
            float m_flShootAfterEnteringTime; // 0x798            
            float m_flWaitForNextShootTime; // 0x79c            
            float m_flPercentMaxHealthDamage; // 0x7a0            
            uint8_t _pad07a4[0x4]; // 0x7a4
            CUtlSymbolLarge m_strShootOrigin; // 0x7a8            
            uint8_t _pad07b0[0x48];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelZapTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelZapTrigger) == 0x7f8);
    };
};
