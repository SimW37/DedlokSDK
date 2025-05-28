#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ESwingState_t.hpp"
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
        // Size: 0xeb0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "ESwingState_t m_eSwingState"
        // static metadata: MNetworkVarNames "GameTime_t m_SwingStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_SwingEndTime"
        // static metadata: MNetworkVarNames "Vector m_vecSwingPoint"
        // static metadata: MNetworkVarNames "float m_flIdealSpringLength"
        #pragma pack(push, 1)
        class CCitadel_Ability_SkyRunner_SwingLine : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::ESwingState_t m_eSwingState; // 0xdc0            
            uint8_t _pad0dc1[0x3]; // 0xdc1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_SwingStartTime; // 0xdc4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_SwingEndTime; // 0xdc8            
            // metadata: MNetworkEnable
            Vector m_vecSwingPoint; // 0xdcc            
            Vector m_vecCurrentPosition; // 0xdd8            
            // metadata: MNetworkEnable
            float m_flIdealSpringLength; // 0xde4            
            uint8_t _pad0de8[0xc8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_SkyRunner_SwingLine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_SkyRunner_SwingLine) == 0xeb0);
    };
};
