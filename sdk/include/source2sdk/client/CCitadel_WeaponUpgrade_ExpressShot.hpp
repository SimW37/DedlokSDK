#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iShotsToCreate"
        // static metadata: MNetworkVarNames "bool m_bIsInExpressShot"
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_ExpressShot : public source2sdk::client::CCitadel_Item
        {
        public:
            uint8_t _pad0dc0[0x140]; // 0xdc0
            // metadata: MNetworkEnable
            std::int32_t m_iShotsToCreate; // 0xf00            
            // metadata: MNetworkEnable
            bool m_bIsInExpressShot; // 0xf04            
            uint8_t _pad0f05[0x3]; // 0xf05
            source2sdk::entity2::GameTime_t m_tNextShotTime; // 0xf08            
            uint8_t _pad0f0c[0x1c]; // 0xf0c
            bool m_bIsPrimaryProc; // 0xf28            
            uint8_t _pad0f29[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_ExpressShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_WeaponUpgrade_ExpressShot) == 0xf30);
    };
};
