#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECitadelAbilityOrders.hpp"
#include "source2sdk/client/EJumpType_t.hpp"
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
        // Size: 0xd60
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpStartTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpEndTime"
        // static metadata: MNetworkVarNames "bool m_bJumped"
        // static metadata: MNetworkVarNames "bool m_bCanDashJump"
        // static metadata: MNetworkVarNames "int m_nDesiredAirJumpCount"
        // static metadata: MNetworkVarNames "int m_nExecutedAirJumpCount"
        // static metadata: MNetworkVarNames "bool m_bInSlideJump"
        // static metadata: MNetworkVarNames "int8 m_nConsecutiveAirJumps"
        // static metadata: MNetworkVarNames "int8 m_nConsecutiveWallJumps"
        // static metadata: MNetworkVarNames "GameTime_t m_flLateralInputSuppressEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Jump : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastTimeOnZipLine; // 0xba0            
            source2sdk::entity2::GameTime_t m_flLastOnGroundTime; // 0xba4            
            source2sdk::entity2::GameTime_t m_flPhaseStartTime; // 0xba8            
            source2sdk::entity2::GameTime_t m_flJumpTime; // 0xbac            
            source2sdk::entity2::GameTime_t m_flWallJumpFatigueStartTime; // 0xbb0            
            float m_flLastWallJumpFatigueStrength; // 0xbb4            
            source2sdk::client::EJumpType_t m_LastJumpType; // 0xbb8            
            bool m_bShouldCreateAirJumpEffects; // 0xbb9            
            uint8_t _pad0bba[0x2]; // 0xbba
            source2sdk::entity2::GameTime_t m_flDoubleJumpFailTime; // 0xbbc            
            source2sdk::client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xbc0            
            Vector m_vWallJumpNormalUsed; // 0xbc4            
            uint8_t _pad0bd0[0x140]; // 0xbd0
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xd10            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xd28            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bJumped; // 0xd40            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanDashJump; // 0xd41            
            uint8_t _pad0d42[0x2]; // 0xd42
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nDesiredAirJumpCount; // 0xd44            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nExecutedAirJumpCount; // 0xd48            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInSlideJump; // 0xd4c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveAirJumps; // 0xd4d            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveWallJumps; // 0xd4e            
            uint8_t _pad0d4f[0x1]; // 0xd4f
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLateralInputSuppressEndTime; // 0xd50            
            Vector m_vLastWallCollidedWithNormal; // 0xd54            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Jump) == 0xd60);
    };
};
