#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1b8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_HookTarget : public source2sdk::server::CCitadelModifier
        {
        public:
            float m_flCurrentVerticalSpeed; // 0xc0            
            bool m_bSuccess; // 0xc4            
            bool m_bSameTeam; // 0xc5            
            bool m_bPlayedApproachingWhoosh; // 0xc6            
            uint8_t _pad00c7[0x1]; // 0xc7
            float m_flInitialTravelDistance; // 0xc8            
            source2sdk::entity2::GameTime_t m_flStuckStartTime; // 0xcc            
            Vector m_vLastPos; // 0xd0            
            uint8_t _pad00dc[0xdc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_HookTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_HookTarget) == 0x1b8);
    };
};
