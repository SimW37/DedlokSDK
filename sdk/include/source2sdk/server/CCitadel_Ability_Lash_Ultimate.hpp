#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ELashGrappleState.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseLockonAbility.hpp"

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
        // Size: 0xf38
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "ELashGrappleState m_EGrappleState"
        // static metadata: MNetworkVarNames "GameTime_t m_flStateEnterTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flBoostEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Lash_Ultimate : public source2sdk::server::CCitadelBaseLockonAbility
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::ELashGrappleState m_EGrappleState; // 0xd88            
            uint8_t _pad0d89[0x3]; // 0xd89
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStateEnterTime; // 0xd8c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flNextStateTime; // 0xd90            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flBoostEndTime; // 0xd94            
            uint8_t _pad0d98[0x1a0];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Lash_Ultimate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Lash_Ultimate) == 0xf38);
    };
};
