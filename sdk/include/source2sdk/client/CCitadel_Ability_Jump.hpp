#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ECitadelAbilityOrders.hpp"
#include "source2sdk/client/EJumpType_t.hpp"
#include "source2sdk/client/EWallJumpFacing.hpp"
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
        // Size: 0xf88
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
            source2sdk::entity2::GameTime_t m_flLastTimeOnZipLine; // 0xd88            
            source2sdk::entity2::GameTime_t m_flLastOnGroundTime; // 0xd8c            
            source2sdk::entity2::GameTime_t m_flPhaseStartTime; // 0xd90            
            source2sdk::entity2::GameTime_t m_flJumpTime; // 0xd94            
            source2sdk::entity2::GameTime_t m_flWallJumpFatigueStartTime; // 0xd98            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0xd9c            
            Vector m_vCurrentWallNormal; // 0xda0            
            Vector m_vLastWallCollidedWithNormal; // 0xdac            
            Vector m_vLastValidWallJumpNormal; // 0xdb8            
            Vector m_vLastValidWallJumpNormal_PlayerPosition; // 0xdc4            
            source2sdk::entity2::GameTime_t m_flLastWallJumpTime; // 0xdd0            
            Vector m_vWallJumpFacingDir; // 0xdd4            
            source2sdk::client::EWallJumpFacing m_eWallJumpFacing; // 0xde0            
            uint8_t _pad0de2[0x2]; // 0xde2
            float m_flLastWallJumpFatigueStrength; // 0xde4            
            source2sdk::client::EJumpType_t m_LastJumpType; // 0xde8            
            bool m_bShouldCreateAirJumpEffects; // 0xde9            
            uint8_t _pad0dea[0x2]; // 0xdea
            source2sdk::entity2::GameTime_t m_flDoubleJumpFailTime; // 0xdec            
            source2sdk::client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xdf0            
            Vector m_vWallJumpNormalUsed; // 0xdf4            
            uint8_t _pad0e00[0x140]; // 0xe00
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xf40            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xf58            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bJumped; // 0xf70            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanDashJump; // 0xf71            
            uint8_t _pad0f72[0x2]; // 0xf72
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nDesiredAirJumpCount; // 0xf74            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nExecutedAirJumpCount; // 0xf78            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInSlideJump; // 0xf7c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveAirJumps; // 0xf7d            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveWallJumps; // 0xf7e            
            uint8_t _pad0f7f[0x1]; // 0xf7f
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLateralInputSuppressEndTime; // 0xf80            
            uint8_t _pad0f84[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Jump) == 0xf88);
    };
};
