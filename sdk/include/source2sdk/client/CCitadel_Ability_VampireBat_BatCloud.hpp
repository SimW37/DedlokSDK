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
        // Size: 0xfa8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_VampireBat_BatCloud : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0x20]; // 0xdc0
            source2sdk::entity2::GameTime_t m_flBatCloudEndTime; // 0xde0            
            uint8_t _pad0de4[0x1c4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatCloud because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_VampireBat_BatCloud) == 0xfa8);
    };
};
