#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ELeapState_t.hpp"
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
        // Size: 0xff8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bBraceParamTriggered"
        // static metadata: MNetworkVarNames "float m_flBoostYaw"
        // static metadata: MNetworkVarNames "Vector m_vecCrashPosition"
        // static metadata: MNetworkVarNames "Vector m_vecCrashDirection"
        // static metadata: MNetworkVarNames "ELeapState_t m_eLeapState"
        // static metadata: MNetworkVarNames "GameTime_t m_flStateEnterTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Bull_Leap : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bBraceParamTriggered; // 0xdc0            
            uint8_t _pad0dc1[0x3]; // 0xdc1
            // metadata: MNetworkEnable
            float m_flBoostYaw; // 0xdc4            
            // metadata: MNetworkEnable
            Vector m_vecCrashPosition; // 0xdc8            
            // metadata: MNetworkEnable
            Vector m_vecCrashDirection; // 0xdd4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnLeapStateChanged"
            source2sdk::client::ELeapState_t m_eLeapState; // 0xde0            
            uint8_t _pad0de1[0x3]; // 0xde1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStateEnterTime; // 0xde4            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flNextStateTime; // 0xde8            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flBoostEndTime; // 0xe00            
            uint8_t _pad0e18[0x1cc]; // 0xe18
            Vector m_vecLastVel; // 0xfe4            
            uint8_t _pad0ff0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bull_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Bull_Leap) == 0xff8);
    };
};
