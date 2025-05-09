#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xcd0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iShotsToCreate"
    // static metadata: MNetworkVarNames "bool m_bIsInExpressShot"
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_ExpressShot : public server::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xba8[0x100]; // 0xba8
        // metadata: MNetworkEnable
        int32_t m_iShotsToCreate; // 0xca8        
        // metadata: MNetworkEnable
        bool m_bIsInExpressShot; // 0xcac        
        [[maybe_unused]] std::uint8_t pad_0xcad[0x3]; // 0xcad
        entity2::GameTime_t m_tNextShotTime; // 0xcb0        
        [[maybe_unused]] std::uint8_t pad_0xcb4[0x1c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_ExpressShot because it is not a standard-layout class
    static_assert(sizeof(CCitadel_WeaponUpgrade_ExpressShot) == 0xcd0);
};
