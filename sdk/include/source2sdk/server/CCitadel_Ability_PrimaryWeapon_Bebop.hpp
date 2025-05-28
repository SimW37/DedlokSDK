#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Ability_PrimaryWeapon_BeamWeapon.hpp"

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
        // Size: 0x10b0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flStartWindUpTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartFiringTime"
        // static metadata: MNetworkVarNames "bool m_bFiring"
        #pragma pack(push, 1)
        class CCitadel_Ability_PrimaryWeapon_Bebop : public source2sdk::server::CCitadel_Ability_PrimaryWeapon_BeamWeapon
        {
        public:
            uint8_t _pad0c60[0x2d8]; // 0xc60
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartWindUpTime; // 0xf38            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartFiringTime; // 0xf3c            
            // metadata: MNetworkEnable
            bool m_bFiring; // 0xf40            
            uint8_t _pad0f41[0x16f];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_Bebop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PrimaryWeapon_Bebop) == 0x10b0);
    };
};
