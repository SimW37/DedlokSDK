#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
#include "source2sdk/client/C_NPC_SimpleAnimatingAI.hpp"

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
        // Size: 0xe98
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        // static metadata: MNetworkVarNames "float m_flAttackRange"
        // static metadata: MNetworkVarNames "float m_flAimPitch"
        #pragma pack(push, 1)
        class C_NPC_ShieldedSentry : public source2sdk::client::C_NPC_SimpleAnimatingAI
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xcb8            
            uint8_t _pad0e88[0x4]; // 0xe88
            // metadata: MNetworkEnable
            float m_flAttackRange; // 0xe8c            
            // metadata: MNetworkEnable
            float m_flAimPitch; // 0xe90            
            uint8_t _pad0e94[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_ShieldedSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_ShieldedSentry) == 0xe98);
    };
};
