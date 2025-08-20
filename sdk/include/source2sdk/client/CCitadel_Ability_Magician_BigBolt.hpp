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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xfe0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Magician_BigBolt : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d88[0x248]; // 0xd88
            source2sdk::entity2::GameTime_t m_flNextShootTime; // 0xfd0            
            std::int32_t m_iBoltsFired; // 0xfd4            
            std::int32_t m_iRemainingBolts; // 0xfd8            
            bool m_bPreppingShoot; // 0xfdc            
            uint8_t _pad0fdd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Magician_BigBolt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Magician_BigBolt) == 0xfe0);
    };
};
