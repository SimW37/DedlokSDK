#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0x1130
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "QAngle m_anglesCharging"
        // static metadata: MNetworkVarNames "GameTime_t m_flChargeStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flFastChargeStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
        // static metadata: MNetworkVarNames "bool m_bHitAPlayer"
        #pragma pack(push, 1)
        class CCitadel_Ability_Bull_Charge : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0x340]; // 0xdc0
            // metadata: MNetworkEnable
            QAngle m_anglesCharging; // 0x1100            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnChargingStateChanged"
            source2sdk::entity2::GameTime_t m_flChargeStartTime; // 0x110c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFastChargeStartTime; // 0x1110            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFastChargeEndTime; // 0x1114            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bHitAPlayer; // 0x1118            
            uint8_t _pad1119[0x3]; // 0x1119
            bool m_bFirstTick; // 0x111c            
            uint8_t _pad111d[0x3]; // 0x111d
            Vector m_vGoalDir; // 0x1120            
            uint8_t _pad112c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bull_Charge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Bull_Charge) == 0x1130);
    };
};
