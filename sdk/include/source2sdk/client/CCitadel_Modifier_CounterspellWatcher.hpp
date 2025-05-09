#pragma once
#include "source2sdk/client/CCitadel_Modifier_Intrinsic_Base.hpp"
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
    // Size: 0x148
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_CounterspellWatcher : public client::CCitadel_Modifier_Intrinsic_Base
    {
    public:
        bool m_bSpellBlockActivated; // 0xc0        
        bool m_bSpellBlocked; // 0xc1        
        [[maybe_unused]] std::uint8_t pad_0xc2[0x86];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_CounterspellWatcher because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_CounterspellWatcher) == 0x148);
};
