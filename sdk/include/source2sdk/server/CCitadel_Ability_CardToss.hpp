#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EWraithCardType.hpp"
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
        // Size: 0x1a90
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bCardIsFlying"
        #pragma pack(push, 1)
        class CCitadel_Ability_CardToss : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            std::int32_t m_nPreviousMaxCharges; // 0xf90            
            uint8_t _pad0f94[0x4]; // 0xf94
            // m_vecCards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CCitadel_Ability_CardToss_Card_t> m_vecCards;
            char m_vecCards[0x18]; // 0xf98            
            // m_vecFlyingCards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CCitadel_Ability_CardToss_Card_t> m_vecFlyingCards;
            char m_vecFlyingCards[0x18]; // 0xfb0            
            // m_vCardList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::EWraithCardType> m_vCardList;
            char m_vCardList[0x18]; // 0xfc8            
            uint8_t _pad0fe0[0xa98]; // 0xfe0
            // metadata: MNetworkEnable
            bool m_bCardIsFlying; // 0x1a78            
            uint8_t _pad1a79[0x17];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_CardToss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_CardToss) == 0x1a90);
    };
};
