#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierAura.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x108
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Cadence_Crescendo_AOE : public source2sdk::client::CCitadelModifierAura
        {
        public:
            uint8_t _pad00f8[0x8]; // 0xf8
            std::int32_t m_nTicks; // 0x100            
            uint8_t _pad0104[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Cadence_Crescendo_AOE because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Cadence_Crescendo_AOE) == 0x108);
    };
};
