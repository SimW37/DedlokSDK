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
    // Size: 0xdf8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bWantsSlow"
    // static metadata: MNetworkVarNames "GameTime_t m_flLatchedTimeScaleFracChangeTime"
    // static metadata: MNetworkVarNames "float m_flLatchedTimeScaleFrac"
    // static metadata: MNetworkVarNames "GameTime_t m_flSpeedBoostEndTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flShotTimeScaleEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Gunslinger_DemonCarbine : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bWantsSlow; // 0xc50        
        [[maybe_unused]] std::uint8_t pad_0xc51[0x3]; // 0xc51
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flLatchedTimeScaleFracChangeTime; // 0xc54        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flLatchedTimeScaleFrac; // 0xc58        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flSpeedBoostEndTime; // 0xc5c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flShotTimeScaleEndTime; // 0xc60        
        [[maybe_unused]] std::uint8_t pad_0xc64[0x4]; // 0xc64
        float m_flStoredPowerPct; // 0xc68        
        [[maybe_unused]] std::uint8_t pad_0xc6c[0x18c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Gunslinger_DemonCarbine because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Gunslinger_DemonCarbine) == 0xdf8);
};
