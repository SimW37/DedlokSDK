#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xe30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bLeaping"
        // static metadata: MNetworkVarNames "GameTime_t m_flLeapStartTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_HornetLeap : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x2]; // 0xb98
            // metadata: MNetworkEnable
            bool m_bLeaping; // 0xb9a            
            uint8_t _pad0b9b[0x1]; // 0xb9b
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLeapStartTime; // 0xb9c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0xba0            
            uint8_t _pad0ba4[0x284]; // 0xba4
            source2sdk::client::ParticleIndex_t m_TrailFX; // 0xe28            
            uint8_t _pad0e2c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_HornetLeap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_HornetLeap) == 0xe30);
    };
};
