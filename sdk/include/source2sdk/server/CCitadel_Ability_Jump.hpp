#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECitadelAbilityOrders.hpp"
#include "source2sdk/client/EJumpType_t.hpp"
#include "source2sdk/client/EWallJumpFacing.hpp"
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
        // Size: 0xd98
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
            source2sdk::entity2::GameTime_t m_flLastTimeOnZipLine; // 0xb98            
            source2sdk::entity2::GameTime_t m_flLastOnGroundTime; // 0xb9c            
            source2sdk::entity2::GameTime_t m_flPhaseStartTime; // 0xba0            
            source2sdk::entity2::GameTime_t m_flJumpTime; // 0xba4            
            source2sdk::entity2::GameTime_t m_flWallJumpFatigueStartTime; // 0xba8            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0xbac            
            Vector m_vCurrentWallNormal; // 0xbb0            
            Vector m_vLastWallCollidedWithNormal; // 0xbbc            
            Vector m_vLastValidWallJumpNormal; // 0xbc8            
            Vector m_vLastValidWallJumpNormal_PlayerPosition; // 0xbd4            
            source2sdk::entity2::GameTime_t m_flLastWallJumpTime; // 0xbe0            
            Vector m_vWallJumpFacingDir; // 0xbe4            
            source2sdk::client::EWallJumpFacing m_eWallJumpFacing; // 0xbf0            
            uint8_t _pad0bf2[0x2]; // 0xbf2
            float m_flLastWallJumpFatigueStrength; // 0xbf4            
            source2sdk::client::EJumpType_t m_LastJumpType; // 0xbf8            
            bool m_bShouldCreateAirJumpEffects; // 0xbf9            
            uint8_t _pad0bfa[0x2]; // 0xbfa
            source2sdk::entity2::GameTime_t m_flDoubleJumpFailTime; // 0xbfc            
            source2sdk::client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xc00            
            Vector m_vWallJumpNormalUsed; // 0xc04            
            uint8_t _pad0c10[0x140]; // 0xc10
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xd50            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xd68            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bJumped; // 0xd80            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanDashJump; // 0xd81            
            uint8_t _pad0d82[0x2]; // 0xd82
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nDesiredAirJumpCount; // 0xd84            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nExecutedAirJumpCount; // 0xd88            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInSlideJump; // 0xd8c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveAirJumps; // 0xd8d            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveWallJumps; // 0xd8e            
            uint8_t _pad0d8f[0x1]; // 0xd8f
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLateralInputSuppressEndTime; // 0xd90            
            uint8_t _pad0d94[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Jump) == 0xd98);
    };
};
