#pragma once
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ECitadelAbilityOrders.hpp"
#include "source2sdk/client/EJumpType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xde0
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
    #pragma pack(push, 1)
    class CCitadel_Ability_Jump : public client::C_CitadelBaseAbility
    {
    public:
        entity2::GameTime_t m_flLastTimeOnZipLine; // 0xc50        
        entity2::GameTime_t m_flLastOnGroundTime; // 0xc54        
        entity2::GameTime_t m_flPhaseStartTime; // 0xc58        
        entity2::GameTime_t m_flJumpTime; // 0xc5c        
        client::EJumpType_t m_LastJumpType; // 0xc60        
        bool m_bShouldCreateAirJumpEffects; // 0xc61        
        [[maybe_unused]] std::uint8_t pad_0xc62[0x2]; // 0xc62
        entity2::GameTime_t m_flDoubleJumpFailTime; // 0xc64        
        client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xc68        
        Vector m_vWallJumpNormalUsed; // 0xc6c        
        [[maybe_unused]] std::uint8_t pad_0xc78[0x118]; // 0xc78
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xd90        
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xda8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bJumped; // 0xdc0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bCanDashJump; // 0xdc1        
        [[maybe_unused]] std::uint8_t pad_0xdc2[0x2]; // 0xdc2
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nDesiredAirJumpCount; // 0xdc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nExecutedAirJumpCount; // 0xdc8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bInSlideJump; // 0xdcc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int8_t m_nConsecutiveAirJumps; // 0xdcd        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int8_t m_nConsecutiveWallJumps; // 0xdce        
        [[maybe_unused]] std::uint8_t pad_0xdcf[0x1]; // 0xdcf
        Vector m_vLastWallCollidedWithNormal; // 0xdd0        
        [[maybe_unused]] std::uint8_t pad_0xddc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Jump) == 0xde0);
};
