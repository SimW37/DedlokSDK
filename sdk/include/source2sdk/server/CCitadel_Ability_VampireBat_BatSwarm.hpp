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
        // Size: 0xf30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iBonusBats"
        // static metadata: MNetworkVarNames "int m_iBatCountOnCast"
        #pragma pack(push, 1)
        class CCitadel_Ability_VampireBat_BatSwarm : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iBonusBats; // 0xba0            
            // metadata: MNetworkEnable
            std::int32_t m_iBatCountOnCast; // 0xba4            
            uint8_t _pad0ba8[0x4]; // 0xba8
            source2sdk::entity2::GameTime_t m_flNextBatTime; // 0xbac            
            uint8_t _pad0bb0[0x380];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatSwarm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_VampireBat_BatSwarm) == 0xf30);
    };
};
