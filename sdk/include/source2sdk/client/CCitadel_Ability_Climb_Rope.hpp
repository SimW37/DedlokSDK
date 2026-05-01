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
        // Size: 0x1290
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
            source2sdk::client::CNetworkOriginQuantizedVector m_vTop; // 0x11d8            
            uint8_t _pad1200[0x8]; // 0x1200
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::CNetworkOriginQuantizedVector m_vBottom; // 0x1208            
            uint8_t _pad1230[0x8]; // 0x1230
            source2sdk::entity2::GameTime_t m_flActivatePressTime; // 0x1238            
            source2sdk::entity2::GameTime_t m_flDisconnectTime; // 0x123c            
            source2sdk::entity2::GameTime_t m_flClimbStartTime; // 0x1240            
            Vector m_vLastPos; // 0x1244            
            uint8_t _pad1250[0x14]; // 0x1250
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bRequestStopClimbing; // 0x1264            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bRequestJumpToRoof; // 0x1265            
            uint8_t _pad1266[0x2]; // 0x1266
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flMoveDownStartTime; // 0x1268            
            // metadata: MNetworkEnable
            source2sdk::client::EClimbRopeState_t m_eClimbState; // 0x126c            
            uint8_t _pad1270[0x20];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Climb_Rope because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Climb_Rope) == 0x1290);
    };
};
