#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0xed0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bAirRaiding"
        #pragma pack(push, 1)
        class CCitadel_Ability_PowerJump : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0x4]; // 0xdc0
            source2sdk::client::ParticleIndex_t m_nTargetingParticleIndex; // 0xdc4            
            // metadata: MNetworkEnable
            bool m_bAirRaiding; // 0xdc8            
            uint8_t _pad0dc9[0x107];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PowerJump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PowerJump) == 0xed0);
    };
};
