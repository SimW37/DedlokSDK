#pragma once
#include "source2sdk/client/CCitadel_Item.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xee8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iShotsToCreate"
    // static metadata: MNetworkVarNames "bool m_bIsInExpressShot"
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_ExpressShot : public client::CCitadel_Item
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x100]; // 0xdc0
        // metadata: MNetworkEnable
        int32_t m_iShotsToCreate; // 0xec0        
        // metadata: MNetworkEnable
        bool m_bIsInExpressShot; // 0xec4        
        [[maybe_unused]] std::uint8_t pad_0xec5[0x3]; // 0xec5
        entity2::GameTime_t m_tNextShotTime; // 0xec8        
        [[maybe_unused]] std::uint8_t pad_0xecc[0x1c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_ExpressShot because it is not a standard-layout class
    static_assert(sizeof(CCitadel_WeaponUpgrade_ExpressShot) == 0xee8);
};
