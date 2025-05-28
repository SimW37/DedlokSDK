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
        // Size: 0x9a0
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerSave : public source2sdk::server::CBaseTrigger
        {
        public:
            bool m_bForceNewLevelUnit; // 0x990            
            uint8_t _pad0991[0x3]; // 0x991
            float m_fDangerousTimer; // 0x994            
            std::int32_t m_minHitPoints; // 0x998            
            uint8_t _pad099c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerSave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerSave) == 0x9a0);
    };
};
