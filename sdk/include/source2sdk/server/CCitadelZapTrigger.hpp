#pragma once
#include "source2sdk/server/CFuncBrush.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x850
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelZapTrigger : public server::CFuncBrush
    {
    public:
        float m_flShootAfterEnteringTime; // 0x7f0        
        float m_flWaitForNextShootTime; // 0x7f4        
        float m_flPercentMaxHealthDamage; // 0x7f8        
        [[maybe_unused]] std::uint8_t pad_0x7fc[0x4]; // 0x7fc
        CUtlSymbolLarge m_strShootOrigin; // 0x800        
        [[maybe_unused]] std::uint8_t pad_0x808[0x48];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelZapTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelZapTrigger) == 0x850);
};
