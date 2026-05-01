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
        // Size: 0x12d0
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
            source2sdk::entity2::GameTime_t m_flLastTimeOnZipLine; // 0xf90            
            source2sdk::entity2::GameTime_t m_flLastOnGroundTime; // 0xf94            
            source2sdk::entity2::GameTime_t m_flPhaseStartTime; // 0xf98            
            source2sdk::entity2::GameTime_t m_flJumpTime; // 0xf9c            
            source2sdk::entity2::GameTime_t m_flWallJumpFatigueStartTime; // 0xfa0            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0xfa4            
            Vector m_vCurrentWallNormal; // 0xfa8            
            Vector m_vLastWallCollidedWithNormal; // 0xfb4            
            Vector m_vLastValidWallJumpNormal; // 0xfc0            
            Vector m_vLastValidWallJumpNormal_PlayerPosition; // 0xfcc            
            source2sdk::entity2::GameTime_t m_flLastWallJumpTime; // 0xfd8            
            Vector m_vWallJumpFacingDir; // 0xfdc            
            source2sdk::client::EWallJumpFacing m_eWallJumpFacing; // 0xfe8            
            uint8_t _pad0fea[0x2]; // 0xfea
            float m_flLastWallJumpFatigueStrength; // 0xfec            
            source2sdk::client::EJumpType_t m_LastJumpType; // 0xff0            
            bool m_bShouldCreateAirJumpEffects; // 0xff1            
            uint8_t _pad0ff2[0x2]; // 0xff2
            source2sdk::entity2::GameTime_t m_flDoubleJumpFailTime; // 0xff4            
            source2sdk::client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xff8            
            Vector m_vWallJumpNormalUsed; // 0xffc            
            uint8_t _pad1008[0x280]; // 0x1008
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0x1288            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0x12a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bJumped; // 0x12b8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanDashJump; // 0x12b9            
            uint8_t _pad12ba[0x2]; // 0x12ba
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nDesiredAirJumpCount; // 0x12bc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nExecutedAirJumpCount; // 0x12c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInSlideJump; // 0x12c4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveAirJumps; // 0x12c5            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveWallJumps; // 0x12c6            
            uint8_t _pad12c7[0x1]; // 0x12c7
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLateralInputSuppressEndTime; // 0x12c8            
            uint8_t _pad12cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Jump) == 0x12d0);
    };
};
