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
        // Size: 0xf68
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
            bool m_bWantsSlow; // 0xd88            
            uint8_t _pad0d89[0x3]; // 0xd89
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLatchedTimeScaleFracChangeTime; // 0xd8c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flLatchedTimeScaleFrac; // 0xd90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSpeedBoostEndTime; // 0xd94            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flShotTimeScaleEndTime; // 0xd98            
            uint8_t _pad0d9c[0x4]; // 0xd9c
            float m_flStoredPowerPct; // 0xda0            
            uint8_t _pad0da4[0x1c4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Gunslinger_DemonCarbine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Gunslinger_DemonCarbine) == 0xf68);
    };
};
