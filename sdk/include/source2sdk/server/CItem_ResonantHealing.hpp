#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xc98
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iRegenStacks"
        #pragma pack(push, 1)
        class CItem_ResonantHealing : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0ba0[0x2c]; // 0xba0
            bool m_bForceModUpdate; // 0xbcc            
            uint8_t _pad0bcd[0x3]; // 0xbcd
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_iRegenStacks; // 0xbd0            
            uint8_t _pad0bd4[0xc4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItem_ResonantHealing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItem_ResonantHealing) == 0xc98);
    };
};
