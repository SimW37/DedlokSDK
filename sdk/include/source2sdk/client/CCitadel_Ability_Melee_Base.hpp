#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xe50
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkVarNames "bool m_bUsingThisMelee"
        // static metadata: MNetworkVarNames "bool m_bUsingMeleeTagActive"
        // static metadata: MNetworkVarNames "bool m_bHitWithThisAttack"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastActivateTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextAttackAllowedTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAttackTriggeredTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Melee_Base : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bUsingThisMelee; // 0xdc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bUsingMeleeTagActive; // 0xdc1            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bHitWithThisAttack; // 0xdc2            
            uint8_t _pad0dc3[0x1]; // 0xdc3
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLastActivateTime; // 0xdc4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttackAllowedTime; // 0xdc8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAttackTriggeredTime; // 0xdcc            
            uint8_t _pad0dd0[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Melee_Base because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Melee_Base) == 0xe50);
    };
};
