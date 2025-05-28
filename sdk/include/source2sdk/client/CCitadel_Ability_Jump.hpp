#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ECitadelAbilityOrders.hpp"
#include "source2sdk/client/EJumpType_t.hpp"
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
        // Size: 0xf80
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
        class CCitadel_Ability_Jump : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastTimeOnZipLine; // 0xdc0            
            source2sdk::entity2::GameTime_t m_flLastOnGroundTime; // 0xdc4            
            source2sdk::entity2::GameTime_t m_flPhaseStartTime; // 0xdc8            
            source2sdk::entity2::GameTime_t m_flJumpTime; // 0xdcc            
            source2sdk::entity2::GameTime_t m_flWallJumpFatigueStartTime; // 0xdd0            
            float m_flLastWallJumpFatigueStrength; // 0xdd4            
            source2sdk::client::EJumpType_t m_LastJumpType; // 0xdd8            
            bool m_bShouldCreateAirJumpEffects; // 0xdd9            
            uint8_t _pad0dda[0x2]; // 0xdda
            source2sdk::entity2::GameTime_t m_flDoubleJumpFailTime; // 0xddc            
            source2sdk::client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xde0            
            Vector m_vWallJumpNormalUsed; // 0xde4            
            uint8_t _pad0df0[0x140]; // 0xdf0
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xf30            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xf48            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bJumped; // 0xf60            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanDashJump; // 0xf61            
            uint8_t _pad0f62[0x2]; // 0xf62
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nDesiredAirJumpCount; // 0xf64            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nExecutedAirJumpCount; // 0xf68            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInSlideJump; // 0xf6c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveAirJumps; // 0xf6d            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveWallJumps; // 0xf6e            
            uint8_t _pad0f6f[0x1]; // 0xf6f
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLateralInputSuppressEndTime; // 0xf70            
            Vector m_vLastWallCollidedWithNormal; // 0xf74            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Jump) == 0xf80);
    };
};
