#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1128
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "QAngle m_anglesCharging"
    // static metadata: MNetworkVarNames "GameTime_t m_flChargeStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
    // static metadata: MNetworkVarNames "bool m_bHitAPlayer"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bull_Charge : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x340]; // 0xdc0
        // metadata: MNetworkEnable
        QAngle m_anglesCharging; // 0x1100        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnChargingStateChanged"
        entity2::GameTime_t m_flChargeStartTime; // 0x110c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFastChargeEndTime; // 0x1110        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bHitAPlayer; // 0x1114        
        [[maybe_unused]] std::uint8_t pad_0x1115[0x3]; // 0x1115
        bool m_bFirstTick; // 0x1118        
        [[maybe_unused]] std::uint8_t pad_0x1119[0x3]; // 0x1119
        Vector m_vGoalDir; // 0x111c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bull_Charge because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bull_Charge) == 0x1128);
};
