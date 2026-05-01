#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0xfc0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flDashAngle"
        // static metadata: MNetworkVarNames "GameTime_t m_GroundDashExecuteTime"
        // static metadata: MNetworkVarNames "GameTime_t m_GroundDashCancelExecuteTime"
        // static metadata: MNetworkVarNames "int m_nLastGroundDashTick"
        // static metadata: MNetworkVarNames "GameTime_t m_flAirDashCastTime"
        // static metadata: MNetworkVarNames "Vector m_flAirDashStartPos"
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
            float m_flDashAngle; // 0xf90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_GroundDashExecuteTime; // 0xf94            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_GroundDashCancelExecuteTime; // 0xf98            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nLastGroundDashTick; // 0xf9c            
            bool m_bTagCanActivateGroundDash; // 0xfa0            
            uint8_t _pad0fa1[0x3]; // 0xfa1
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAirDashCastTime; // 0xfa4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_flAirDashStartPos; // 0xfa8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAirDashDragStartTime; // 0xfb4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveAirDashes; // 0xfb8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveDownDashes; // 0xfb9            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bDownAirDash; // 0xfba            
            uint8_t _pad0fbb[0x1]; // 0xfbb
            source2sdk::entity2::GameTime_t m_flAirDashDelayedEffectsTime; // 0xfbc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Dash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Dash) == 0xfc0);
    };
};
