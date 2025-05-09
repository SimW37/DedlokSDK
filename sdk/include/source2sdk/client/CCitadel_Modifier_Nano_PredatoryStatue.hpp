#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x380
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Nano_PredatoryStatue : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x58]; // 0xc0
        entity2::GameTime_t m_GameTimeEnabled; // 0x118        
        entity2::GameTime_t m_LastCatInAreaTime; // 0x11c        
        bool m_bIsAttacking; // 0x120        
        [[maybe_unused]] std::uint8_t pad_0x121[0x3]; // 0x121
        int32_t m_iTargetID; // 0x124        
        [[maybe_unused]] std::uint8_t pad_0x128[0x258];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Nano_PredatoryStatue because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Nano_PredatoryStatue) == 0x380);
};
