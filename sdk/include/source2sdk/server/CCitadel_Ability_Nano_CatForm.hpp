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
        // Size: 0x1450
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsInCatform"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDamageTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flTransformStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flTransformEndTime"
        // static metadata: MNetworkVarNames "float m_flStoredDamageAmp"
        #pragma pack(push, 1)
        class CCitadel_Ability_Nano_CatForm : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x2c]; // 0xf90
            // metadata: MNetworkEnable
            bool m_bIsInCatform; // 0xfbc            
            uint8_t _pad0fbd[0x3]; // 0xfbd
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0xfc0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTransformStartTime; // 0xfc4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTransformEndTime; // 0xfc8            
            // metadata: MNetworkEnable
            float m_flStoredDamageAmp; // 0xfcc            
            uint8_t _pad0fd0[0x480];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Nano_CatForm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Nano_CatForm) == 0x1450);
    };
};
