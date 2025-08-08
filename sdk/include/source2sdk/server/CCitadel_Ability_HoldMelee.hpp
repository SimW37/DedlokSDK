#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EMeleeHold_AttackState.hpp"
#include "source2sdk/client/EMeleeHold_AttackType.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Ability_Melee_Base.hpp"

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
        // Size: 0xcb8
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
        class CCitadel_Ability_HoldMelee : public source2sdk::server::CCitadel_Ability_Melee_Base
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flParryWindowEndTime; // 0xc50            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextParryTime; // 0xc54            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStateStartTime; // 0xc58            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDashStartTime; // 0xc5c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EMeleeHold_AttackState m_eCurrentAttackState; // 0xc60            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EMeleeHold_AttackType m_eCurrentAttackType; // 0xc64            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vAirDashDir; // 0xc68            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bAttackStartedWhileSliding; // 0xc74            
            uint8_t _pad0c75[0x3]; // 0xc75
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLightChainEndTime; // 0xc78            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nLightChainCount; // 0xc7c            
            bool m_bCreatedChargeEffects; // 0xc80            
            uint8_t _pad0c81[0x3]; // 0xc81
            QAngle m_angForced; // 0xc84            
            Vector m_vGoalDir; // 0xc90            
            uint8_t _pad0c9c[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_HoldMelee because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_HoldMelee) == 0xcb8);
    };
};
