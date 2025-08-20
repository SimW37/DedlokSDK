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
        // Size: 0xda8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_HealthSwap : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0xb98            
            uint8_t _pad0b9c[0x1c4]; // 0xb9c
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPostCastHoldEndTime; // 0xd60            
            uint8_t _pad0d64[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_HealthSwap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_HealthSwap) == 0xda8);
    };
};
