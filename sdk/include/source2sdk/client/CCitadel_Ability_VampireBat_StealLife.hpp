#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"

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
        // Size: 0x11b8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bFloating"
        #pragma pack(push, 1)
        class CCitadel_Ability_VampireBat_StealLife : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d88[0x2e8]; // 0xd88
            // metadata: MNetworkEnable
            bool m_bFloating; // 0x1070            
            uint8_t _pad1071[0x147];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_StealLife because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_VampireBat_StealLife) == 0x11b8);
    };
};
