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
        // Size: 0x850
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelZapTrigger : public source2sdk::server::CFuncBrush
        {
        public:
            float m_flShootAfterEnteringTime; // 0x7f0            
            float m_flWaitForNextShootTime; // 0x7f4            
            float m_flPercentMaxHealthDamage; // 0x7f8            
            uint8_t _pad07fc[0x4]; // 0x7fc
            CUtlSymbolLarge m_strShootOrigin; // 0x800            
            uint8_t _pad0808[0x48];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelZapTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelZapTrigger) == 0x850);
    };
};
