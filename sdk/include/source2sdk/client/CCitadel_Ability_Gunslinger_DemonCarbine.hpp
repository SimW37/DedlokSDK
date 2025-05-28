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
        // Size: 0xfa0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bWantsSlow"
        // static metadata: MNetworkVarNames "GameTime_t m_flLatchedTimeScaleFracChangeTime"
        // static metadata: MNetworkVarNames "float m_flLatchedTimeScaleFrac"
        // static metadata: MNetworkVarNames "GameTime_t m_flSpeedBoostEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flShotTimeScaleEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Gunslinger_DemonCarbine : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bWantsSlow; // 0xdc0            
            uint8_t _pad0dc1[0x3]; // 0xdc1
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLatchedTimeScaleFracChangeTime; // 0xdc4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flLatchedTimeScaleFrac; // 0xdc8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSpeedBoostEndTime; // 0xdcc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flShotTimeScaleEndTime; // 0xdd0            
            uint8_t _pad0dd4[0x4]; // 0xdd4
            float m_flStoredPowerPct; // 0xdd8            
            uint8_t _pad0ddc[0x1c4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Gunslinger_DemonCarbine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Gunslinger_DemonCarbine) == 0xfa0);
    };
};
