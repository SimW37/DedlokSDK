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
        // Size: 0xe78
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
            source2sdk::client::ESwingState_t m_eSwingState; // 0xd88            
            uint8_t _pad0d89[0x3]; // 0xd89
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_SwingStartTime; // 0xd8c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_SwingEndTime; // 0xd90            
            // metadata: MNetworkEnable
            Vector m_vecSwingPoint; // 0xd94            
            Vector m_vecCurrentPosition; // 0xda0            
            // metadata: MNetworkEnable
            float m_flIdealSpringLength; // 0xdac            
            uint8_t _pad0db0[0xc8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_SkyRunner_SwingLine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_SkyRunner_SwingLine) == 0xe78);
    };
};
