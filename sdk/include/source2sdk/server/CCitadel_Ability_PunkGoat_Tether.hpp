#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0xd50
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bTetheringActive"
        #pragma pack(push, 1)
        class CCitadel_Ability_PunkGoat_Tether : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x18]; // 0xb98
            source2sdk::entity2::GameTime_t m_tTetherEndTime; // 0xbb0            
            uint8_t _pad0bb4[0x14]; // 0xbb4
            // metadata: MNetworkEnable
            bool m_bTetheringActive; // 0xbc8            
            uint8_t _pad0bc9[0x187];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PunkGoat_Tether because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PunkGoat_Tether) == 0xd50);
    };
};
