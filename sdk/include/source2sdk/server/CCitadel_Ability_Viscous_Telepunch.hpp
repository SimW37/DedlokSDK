#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ETelepunchState_t.hpp"
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
        // Size: 0xe90
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vecTeleportPosition"
        // static metadata: MNetworkVarNames "Vector m_vecTeleportPositionNormal"
        // static metadata: MNetworkVarNames "ETelepunchState_t m_eTelepunchState"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Viscous_Telepunch : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x2c0]; // 0xba0
            // metadata: MNetworkEnable
            Vector m_vecTeleportPosition; // 0xe60            
            // metadata: MNetworkEnable
            Vector m_vecTeleportPositionNormal; // 0xe6c            
            // metadata: MNetworkEnable
            source2sdk::client::ETelepunchState_t m_eTelepunchState; // 0xe78            
            uint8_t _pad0e79[0x3]; // 0xe79
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flNextStateTime; // 0xe7c            
            uint8_t _pad0e80[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Viscous_Telepunch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Viscous_Telepunch) == 0xe90);
    };
};
