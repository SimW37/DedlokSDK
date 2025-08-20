#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd10
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iShotsToCreate"
        // static metadata: MNetworkVarNames "bool m_bIsInExpressShot"
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_ExpressShot : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0ba0[0x140]; // 0xba0
            // metadata: MNetworkEnable
            std::int32_t m_iShotsToCreate; // 0xce0            
            // metadata: MNetworkEnable
            bool m_bIsInExpressShot; // 0xce4            
            uint8_t _pad0ce5[0x3]; // 0xce5
            source2sdk::entity2::GameTime_t m_tNextShotTime; // 0xce8            
            uint8_t _pad0cec[0x1c]; // 0xcec
            bool m_bIsPrimaryProc; // 0xd08            
            uint8_t _pad0d09[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_ExpressShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_WeaponUpgrade_ExpressShot) == 0xd10);
    };
};
