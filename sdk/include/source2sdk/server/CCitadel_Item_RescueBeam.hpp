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
    // Size: 0xbb0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bCanPull"
    #pragma pack(push, 1)
    class CCitadel_Item_RescueBeam : public server::CCitadel_Item
    {
    public:
        // metadata: MNetworkEnable
        bool m_bCanPull; // 0xba8        
        [[maybe_unused]] std::uint8_t pad_0xba9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_RescueBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_RescueBeam) == 0xbb0);
};
