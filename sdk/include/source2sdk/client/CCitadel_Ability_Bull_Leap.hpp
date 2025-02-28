#pragma once
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ELeapState_t.hpp"
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
    // Size: 0xe10
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flBoostYaw"
    // static metadata: MNetworkVarNames "Vector m_vecCrashPosition"
    // static metadata: MNetworkVarNames "Vector m_vecCrashDirection"
    // static metadata: MNetworkVarNames "ELeapState_t m_eLeapState"
    // static metadata: MNetworkVarNames "GameTime_t m_flStateEnterTime"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bull_Leap : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        float m_flBoostYaw; // 0xc50        
        // metadata: MNetworkEnable
        Vector m_vecCrashPosition; // 0xc54        
        // metadata: MNetworkEnable
        Vector m_vecCrashDirection; // 0xc60        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnLeapStateChanged"
        client::ELeapState_t m_eLeapState; // 0xc6c        
        [[maybe_unused]] std::uint8_t pad_0xc6d[0x3]; // 0xc6d
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStateEnterTime; // 0xc70        
        [[maybe_unused]] std::uint8_t pad_0xc74[0x4]; // 0xc74
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flNextStateTime; // 0xc78        
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flBoostEndTime; // 0xc90        
        [[maybe_unused]] std::uint8_t pad_0xca8[0x158]; // 0xca8
        Vector m_vecLastVel; // 0xe00        
        [[maybe_unused]] std::uint8_t pad_0xe0c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bull_Leap because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bull_Leap) == 0xe10);
};
