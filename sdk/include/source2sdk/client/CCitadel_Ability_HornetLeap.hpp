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
        // Size: 0x1018
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bLeaping"
        // static metadata: MNetworkVarNames "GameTime_t m_flLeapStartTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_HornetLeap : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d88[0x2]; // 0xd88
            // metadata: MNetworkEnable
            bool m_bLeaping; // 0xd8a            
            uint8_t _pad0d8b[0x1]; // 0xd8b
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLeapStartTime; // 0xd8c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0xd90            
            uint8_t _pad0d94[0x284];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_HornetLeap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_HornetLeap) == 0x1018);
    };
};
