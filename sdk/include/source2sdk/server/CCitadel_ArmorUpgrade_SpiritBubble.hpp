#pragma once
#include "source2sdk/server/CCitadel_Item.hpp"
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
    // Size: 0xc80
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_ArmorUpgrade_SpiritBubble : public server::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xba8[0xd8];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_ArmorUpgrade_SpiritBubble) == 0xc80);
};
