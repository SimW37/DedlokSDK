#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xe8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Sleep : public source2sdk::server::CCitadelModifier
        {
        public:
            // m_vecSleepModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CModifierHandleTyped<source2sdk::server::CCitadelModifier>> m_vecSleepModifiers;
            char m_vecSleepModifiers[0x18]; // 0xc0            
            bool m_bIsWakingUp; // 0xd8            
            uint8_t _pad00d9[0x3]; // 0xd9
            float m_flMinSleepTime; // 0xdc            
            float m_flWakeUpDelay; // 0xe0            
            uint8_t _pad00e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Sleep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Sleep) == 0xe8);
    };
};
