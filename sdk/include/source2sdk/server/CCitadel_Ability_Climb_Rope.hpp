#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkOriginQuantizedVector.hpp"
#include "source2sdk/client/EClimbRopeState_t.hpp"
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
        // Size: 0x1028
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CNetworkOriginQuantizedVector m_vTop"
        // static metadata: MNetworkVarNames "CNetworkOriginQuantizedVector m_vBottom"
        // static metadata: MNetworkVarNames "bool m_bRequestStopClimbing"
        // static metadata: MNetworkVarNames "bool m_bRequestJumpToRoof"
        // static metadata: MNetworkVarNames "GameTime_t m_flMoveDownStartTime"
        // static metadata: MNetworkVarNames "EClimbRopeState_t m_eClimbState"
        #pragma pack(push, 1)
        class CCitadel_Ability_Climb_Rope : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::CNetworkOriginQuantizedVector m_vTop; // 0xf90            
            uint8_t _pad0fb8[0x8]; // 0xfb8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::CNetworkOriginQuantizedVector m_vBottom; // 0xfc0            
            uint8_t _pad0fe8[0x8]; // 0xfe8
            source2sdk::entity2::GameTime_t m_flActivatePressTime; // 0xff0            
            source2sdk::entity2::GameTime_t m_flDisconnectTime; // 0xff4            
            source2sdk::entity2::GameTime_t m_flClimbStartTime; // 0xff8            
            Vector m_vLastPos; // 0xffc            
            uint8_t _pad1008[0x14]; // 0x1008
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bRequestStopClimbing; // 0x101c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bRequestJumpToRoof; // 0x101d            
            uint8_t _pad101e[0x2]; // 0x101e
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flMoveDownStartTime; // 0x1020            
            // metadata: MNetworkEnable
            source2sdk::client::EClimbRopeState_t m_eClimbState; // 0x1024            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Climb_Rope because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Climb_Rope) == 0x1028);
    };
};
