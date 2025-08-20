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
        // Size: 0xec8
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
            uint8_t _pad0b98[0x300]; // 0xb98
            // metadata: MNetworkEnable
            Vector m_vecTeleportPosition; // 0xe98            
            // metadata: MNetworkEnable
            Vector m_vecTeleportPositionNormal; // 0xea4            
            // metadata: MNetworkEnable
            source2sdk::client::ETelepunchState_t m_eTelepunchState; // 0xeb0            
            uint8_t _pad0eb1[0x3]; // 0xeb1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flNextStateTime; // 0xeb4            
            uint8_t _pad0eb8[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Viscous_Telepunch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Viscous_Telepunch) == 0xec8);
    };
};
