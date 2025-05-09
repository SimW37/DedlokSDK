#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x160
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_FireBomb : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x80]; // 0xc0
        float m_flSideMoveSpeed; // 0x140        
        Vector m_vReturnPosition; // 0x144        
        QAngle m_vReturnAngles; // 0x150        
        [[maybe_unused]] std::uint8_t pad_0x15c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_FireBomb because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_FireBomb) == 0x160);
};
