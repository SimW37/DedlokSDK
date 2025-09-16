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
        // Size: 0xf20
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bTetheringActive"
        #pragma pack(push, 1)
        class CCitadel_Ability_PunkGoat_Tether : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d88[0x14]; // 0xd88
            // metadata: MNetworkEnable
            bool m_bTetheringActive; // 0xd9c            
            uint8_t _pad0d9d[0x183];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PunkGoat_Tether because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PunkGoat_Tether) == 0xf20);
    };
};
