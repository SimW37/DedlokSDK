#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/CCitadel_Ability_CardToss_Card_t.hpp"

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
        // Size: 0xed0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bCardIsFlying"
        #pragma pack(push, 1)
        class CCitadel_Ability_CardToss : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_vecCards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CCitadel_Ability_CardToss_Card_t> m_vecCards;
            char m_vecCards[0x18]; // 0xb98            
            uint8_t _pad0bb0[0x318]; // 0xbb0
            // metadata: MNetworkEnable
            bool m_bCardIsFlying; // 0xec8            
            uint8_t _pad0ec9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_CardToss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_CardToss) == 0xed0);
    };
};
