#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1638
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint8 m_nSlamTravelType"
        // static metadata: MNetworkVarNames "float m_flDistanceToTravel"
        // static metadata: MNetworkVarNames "bool m_bHoldingAbilityButton"
        #pragma pack(push, 1)
        class CCitadel_Ability_PunkGoat_Ult : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nBatChargingFX; // 0xf90            
            uint8_t _pad0f94[0x14]; // 0xf94
            // metadata: MNetworkEnable
            std::uint8_t m_nSlamTravelType; // 0xfa8            
            uint8_t _pad0fa9[0x3]; // 0xfa9
            // metadata: MNetworkEnable
            float m_flDistanceToTravel; // 0xfac            
            // metadata: MNetworkEnable
            bool m_bHoldingAbilityButton; // 0xfb0            
            bool m_bFirstFrameGoingDown; // 0xfb1            
            uint8_t _pad0fb2[0x686];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PunkGoat_Ult because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PunkGoat_Ult) == 0x1638);
    };
};
