#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ETelepunchState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x10b0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vecTeleportPosition"
        // static metadata: MNetworkVarNames "Vector m_vecTeleportPositionNormal"
        // static metadata: MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Viscous_Telepunch : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0x2c0]; // 0xdc0
            // metadata: MNetworkEnable
            Vector m_vecTeleportPosition; // 0x1080            
            // metadata: MNetworkEnable
            Vector m_vecTeleportPositionNormal; // 0x108c            
            // metadata: MNetworkEnable
            source2sdk::client::ETelepunchState_t m_eTelepunchState; // 0x1098            
            uint8_t _pad1099[0x3]; // 0x1099
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flNextStateTime; // 0x109c            
            uint8_t _pad10a0[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Viscous_Telepunch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Viscous_Telepunch) == 0x10b0);
    };
};
