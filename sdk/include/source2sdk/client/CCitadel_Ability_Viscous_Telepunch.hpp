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
        // Size: 0x10b8
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
            uint8_t _pad0d88[0x300]; // 0xd88
            // metadata: MNetworkEnable
            Vector m_vecTeleportPosition; // 0x1088            
            // metadata: MNetworkEnable
            Vector m_vecTeleportPositionNormal; // 0x1094            
            // metadata: MNetworkEnable
            source2sdk::client::ETelepunchState_t m_eTelepunchState; // 0x10a0            
            uint8_t _pad10a1[0x3]; // 0x10a1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flNextStateTime; // 0x10a4            
            uint8_t _pad10a8[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Viscous_Telepunch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Viscous_Telepunch) == 0x10b8);
    };
};
