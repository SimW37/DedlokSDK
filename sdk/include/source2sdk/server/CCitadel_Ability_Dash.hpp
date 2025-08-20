#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
        // Size: 0xbd8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flDashAngle"
        // static metadata: MNetworkVarNames "int m_nLastGroundDashTick"
        // static metadata: MNetworkVarNames "GameTime_t m_flGroundDashCastTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAirDashCastTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAirDashDragStartTime"
        // static metadata: MNetworkVarNames "int8 m_nConsecutiveAirDashes"
        // static metadata: MNetworkVarNames "int8 m_nConsecutiveDownDashes"
        // static metadata: MNetworkVarNames "bool m_bDownAirDash"
        #pragma pack(push, 1)
        class CCitadel_Ability_Dash : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flDashAngle; // 0xb98            
            source2sdk::entity2::GameTime_t m_GroundDashExecuteTime; // 0xb9c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nLastGroundDashTick; // 0xba0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flGroundDashCastTime; // 0xba4            
            bool m_bTagCanActivateGroundDash; // 0xba8            
            uint8_t _pad0ba9[0x7]; // 0xba9
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flGroundDashEndTime; // 0xbb0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAirDashCastTime; // 0xbc8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAirDashDragStartTime; // 0xbcc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveAirDashes; // 0xbd0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveDownDashes; // 0xbd1            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bDownAirDash; // 0xbd2            
            uint8_t _pad0bd3[0x1]; // 0xbd3
            source2sdk::entity2::GameTime_t m_flAirDashDelayedEffectsTime; // 0xbd4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Dash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Dash) == 0xbd8);
    };
};
