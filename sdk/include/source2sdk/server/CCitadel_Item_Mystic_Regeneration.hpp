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
    // Size: 0xc60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iRegenStacks"
    #pragma pack(push, 1)
    class CCitadel_Item_Mystic_Regeneration : public server::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xba8[0x2c]; // 0xba8
        bool m_bForceModUpdate; // 0xbd4        
        [[maybe_unused]] std::uint8_t pad_0xbd5[0x3]; // 0xbd5
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_iRegenStacks; // 0xbd8        
        [[maybe_unused]] std::uint8_t pad_0xbdc[0x84];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_Mystic_Regeneration because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_Mystic_Regeneration) == 0xc60);
};
