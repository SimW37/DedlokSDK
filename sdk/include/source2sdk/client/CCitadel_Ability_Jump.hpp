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
        // Size: 0xf48
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
            float m_flLastWallJumpFatigueStrength; // 0xd9c            
            source2sdk::client::EJumpType_t m_LastJumpType; // 0xda0            
            bool m_bShouldCreateAirJumpEffects; // 0xda1            
            uint8_t _pad0da2[0x2]; // 0xda2
            source2sdk::entity2::GameTime_t m_flDoubleJumpFailTime; // 0xda4            
            source2sdk::client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xda8            
            Vector m_vWallJumpNormalUsed; // 0xdac            
            uint8_t _pad0db8[0x140]; // 0xdb8
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xef8            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xf10            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bJumped; // 0xf28            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanDashJump; // 0xf29            
            uint8_t _pad0f2a[0x2]; // 0xf2a
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nDesiredAirJumpCount; // 0xf2c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nExecutedAirJumpCount; // 0xf30            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInSlideJump; // 0xf34            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveAirJumps; // 0xf35            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveWallJumps; // 0xf36            
            uint8_t _pad0f37[0x1]; // 0xf37
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLateralInputSuppressEndTime; // 0xf38            
            Vector m_vLastWallCollidedWithNormal; // 0xf3c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Jump) == 0xf48);
    };
};
