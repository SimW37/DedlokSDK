#pragma once
#include "source2sdk/server/CCitadel_Modifier_Stunned.hpp"
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
    // Size: 0x180
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_GarbageAuraTarget : public server::CCitadel_Modifier_Stunned
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x80]; // 0xc8
        float m_flMaxDist; // 0x148        
        Vector m_vecOffsetDir; // 0x14c        
        Vector m_vecStartPosition; // 0x158        
        float m_flAOERadius; // 0x164        
        [[maybe_unused]] std::uint8_t pad_0x168[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_GarbageAuraTarget because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_GarbageAuraTarget) == 0x180);
};
