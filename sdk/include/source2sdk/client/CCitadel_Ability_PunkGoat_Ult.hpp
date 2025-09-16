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
        // Size: 0x10e8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint8 m_nSlamTravelType"
        // static metadata: MNetworkVarNames "float m_flDistanceToTravel"
        // static metadata: MNetworkVarNames "bool m_bHoldingAbilityButton"
        #pragma pack(push, 1)
        class CCitadel_Ability_PunkGoat_Ult : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d88[0x14]; // 0xd88
            // metadata: MNetworkEnable
            std::uint8_t m_nSlamTravelType; // 0xd9c            
            uint8_t _pad0d9d[0x3]; // 0xd9d
            // metadata: MNetworkEnable
            float m_flDistanceToTravel; // 0xda0            
            // metadata: MNetworkEnable
            bool m_bHoldingAbilityButton; // 0xda4            
            uint8_t _pad0da5[0x343];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PunkGoat_Ult because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PunkGoat_Ult) == 0x10e8);
    };
};
