#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1a8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_WingBlastApply : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0xc0]; // 0xc0
        Vector m_vStart; // 0x180        
        Vector m_vEnd; // 0x18c        
        Vector m_vPush; // 0x198        
        [[maybe_unused]] std::uint8_t pad_0x1a4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_WingBlastApply because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_WingBlastApply) == 0x1a8);
};
