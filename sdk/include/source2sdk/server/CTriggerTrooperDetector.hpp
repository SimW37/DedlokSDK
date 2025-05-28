#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x9f8
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerTrooperDetector : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad0990[0x60]; // 0x990
            float m_flRadius; // 0x9f0            
            uint8_t _pad09f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerTrooperDetector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerTrooperDetector) == 0x9f8);
    };
};
