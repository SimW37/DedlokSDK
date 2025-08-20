#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xe58
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flParryStartTime"
        // static metadata: MNetworkVarNames "bool m_bAttackParried"
        // static metadata: MNetworkVarNames "GameTime_t m_flParrySuccessTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_MeleeParry : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nActiveFX; // 0xd88            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flParryStartTime; // 0xd8c            
            // metadata: MNetworkEnable
            bool m_bAttackParried; // 0xd90            
            uint8_t _pad0d91[0x3]; // 0xd91
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flParrySuccessTime; // 0xd94            
            uint8_t _pad0d98[0xc0];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_MeleeParry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_MeleeParry) == 0xe58);
    };
};
