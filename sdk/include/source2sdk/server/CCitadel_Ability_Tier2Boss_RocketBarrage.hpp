#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbilityServerOnly.hpp"

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
        // Size: 0xe20
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Tier2Boss_RocketBarrage : public source2sdk::server::CCitadelBaseAbilityServerOnly
        {
        public:
            std::int32_t m_nGrenadeIndex; // 0xb98            
            std::int32_t m_nTotalGrenades; // 0xb9c            
            uint8_t _pad0ba0[0x280];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tier2Boss_RocketBarrage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Tier2Boss_RocketBarrage) == 0xe20);
    };
};
