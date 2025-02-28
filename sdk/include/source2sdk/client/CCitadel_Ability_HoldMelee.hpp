#pragma once
#include "source2sdk/client/CCitadel_Ability_Melee_Base.hpp"
#include "source2sdk/client/EMeleeHold_AttackState.hpp"
#include "source2sdk/client/EMeleeHold_AttackType.hpp"
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
    // Size: 0xd20
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flParryWindowEndTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextParryTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flStateStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flDashStartTime"
    // static metadata: MNetworkVarNames "EMeleeHold_AttackState m_eCurrentAttackState"
    // static metadata: MNetworkVarNames "EMeleeHold_AttackType m_eCurrentAttackType"
    // static metadata: MNetworkVarNames "Vector m_vAirDashDir"
    // static metadata: MNetworkVarNames "bool m_bAttackStartedWhileSliding"
    // static metadata: MNetworkVarNames "GameTime_t m_flLightChainEndTime"
    // static metadata: MNetworkVarNames "int m_nLightChainCount"
    #pragma pack(push, 1)
    class CCitadel_Ability_HoldMelee : public client::CCitadel_Ability_Melee_Base
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flParryWindowEndTime; // 0xcd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextParryTime; // 0xcd4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flStateStartTime; // 0xcd8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flDashStartTime; // 0xcdc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EMeleeHold_AttackState m_eCurrentAttackState; // 0xce0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EMeleeHold_AttackType m_eCurrentAttackType; // 0xce4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vAirDashDir; // 0xce8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bAttackStartedWhileSliding; // 0xcf4        
        [[maybe_unused]] std::uint8_t pad_0xcf5[0x3]; // 0xcf5
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flLightChainEndTime; // 0xcf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nLightChainCount; // 0xcfc        
        bool m_bCreatedChargeEffects; // 0xd00        
        [[maybe_unused]] std::uint8_t pad_0xd01[0x3]; // 0xd01
        QAngle m_angForced; // 0xd04        
        [[maybe_unused]] std::uint8_t pad_0xd10[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HoldMelee because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_HoldMelee) == 0xd20);
};
