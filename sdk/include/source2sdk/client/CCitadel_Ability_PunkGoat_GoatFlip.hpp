#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/PG_RisingRamState.hpp"
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
        // Size: 0x12d8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "PG_RisingRamState m_eState"
        // static metadata: MNetworkVarNames "GameTime_t m_tStateStartTime"
        // static metadata: MNetworkVarNames "float m_flGoingUpTargetElevation"
        // static metadata: MNetworkVarNames "float m_flGoingUpStartElevation"
        #pragma pack(push, 1)
        class CCitadel_Ability_PunkGoat_GoatFlip : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d88[0x540]; // 0xd88
            // metadata: MNetworkEnable
            source2sdk::client::PG_RisingRamState m_eState; // 0x12c8            
            uint8_t _pad12c9[0x3]; // 0x12c9
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tStateStartTime; // 0x12cc            
            // metadata: MNetworkEnable
            float m_flGoingUpTargetElevation; // 0x12d0            
            // metadata: MNetworkEnable
            float m_flGoingUpStartElevation; // 0x12d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PunkGoat_GoatFlip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PunkGoat_GoatFlip) == 0x12d8);
    };
};
