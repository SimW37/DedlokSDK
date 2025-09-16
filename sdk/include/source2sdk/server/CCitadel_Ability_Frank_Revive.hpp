#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0xeb8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bReviveIsActive"
        // static metadata: MNetworkVarNames "GameTime_t m_TimeOfDeath"
        // static metadata: MNetworkVarNames "GameTime_t m_TimeOfRevive"
        // static metadata: MNetworkVarNames "float m_flTotalPendingHeal"
        #pragma pack(push, 1)
        class CCitadel_Ability_Frank_Revive : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x2]; // 0xb98
            // metadata: MNetworkEnable
            bool m_bReviveIsActive; // 0xb9a            
            uint8_t _pad0b9b[0x1]; // 0xb9b
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_TimeOfDeath; // 0xb9c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_TimeOfRevive; // 0xba0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flTotalPendingHeal; // 0xba4            
            uint8_t _pad0ba8[0x310];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Frank_Revive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Frank_Revive) == 0xeb8);
    };
};
