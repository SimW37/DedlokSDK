#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0xa00
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerItemShopSafeZone : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad0990[0x20]; // 0x990
            source2sdk::entity2::CEntityIOOutput m_OnContested; // 0x9b0            
            source2sdk::entity2::CEntityIOOutput m_OnNotContested; // 0x9d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerItemShopSafeZone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerItemShopSafeZone) == 0xa00);
    };
};
