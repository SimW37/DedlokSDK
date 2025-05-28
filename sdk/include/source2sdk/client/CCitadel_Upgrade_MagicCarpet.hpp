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
        // Size: 0xe50
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bFlying"
        // static metadata: MNetworkVarNames "bool m_bSummoning"
        #pragma pack(push, 1)
        class CCitadel_Upgrade_MagicCarpet : public source2sdk::client::CCitadel_Item
        {
        public:
            source2sdk::entity2::GameTime_t m_flFlyingStartTime; // 0xdc0            
            uint8_t _pad0dc4[0x84]; // 0xdc4
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bFlying; // 0xe48            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSummoning; // 0xe49            
            uint8_t _pad0e4a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Upgrade_MagicCarpet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Upgrade_MagicCarpet) == 0xe50);
    };
};
