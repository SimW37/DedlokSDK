#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkOriginQuantizedVector.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EClimbRopeState_t.hpp"
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
        // Size: 0xe78
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CNetworkOriginQuantizedVector m_vTop"
        // static metadata: MNetworkVarNames "CNetworkOriginQuantizedVector m_vBottom"
        // static metadata: MNetworkVarNames "bool m_bRequestStopClimbing"
        // static metadata: MNetworkVarNames "bool m_bRequestJumpToRoof"
        // static metadata: MNetworkVarNames "GameTime_t m_flMoveDownStartTime"
        // static metadata: MNetworkVarNames "EClimbRopeState_t m_eClimbState"
        #pragma pack(push, 1)
        class CCitadel_Ability_Climb_Rope : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::CNetworkOriginQuantizedVector m_vTop; // 0xdc0            
            uint8_t _pad0de8[0x8]; // 0xde8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::CNetworkOriginQuantizedVector m_vBottom; // 0xdf0            
            uint8_t _pad0e18[0x8]; // 0xe18
            source2sdk::entity2::GameTime_t m_flActivatePressTime; // 0xe20            
            source2sdk::entity2::GameTime_t m_flDisconnectTime; // 0xe24            
            source2sdk::entity2::GameTime_t m_flClimbStartTime; // 0xe28            
            Vector m_vLastPos; // 0xe2c            
            uint8_t _pad0e38[0x14]; // 0xe38
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bRequestStopClimbing; // 0xe4c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bRequestJumpToRoof; // 0xe4d            
            uint8_t _pad0e4e[0x2]; // 0xe4e
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flMoveDownStartTime; // 0xe50            
            // metadata: MNetworkEnable
            source2sdk::client::EClimbRopeState_t m_eClimbState; // 0xe54            
            uint8_t _pad0e58[0x20];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Climb_Rope because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Climb_Rope) == 0xe78);
    };
};
