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
        // Size: 0x118
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Familiar_SpotlightRevealAura : public source2sdk::client::CCitadelModifierAura
        {
        public:
            uint8_t _pad0110[0x8];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Familiar_SpotlightRevealAura) == 0x118);
    };
};
