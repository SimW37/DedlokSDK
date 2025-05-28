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
        // Size: 0x3a8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_RocketBarrageVolley : public source2sdk::server::CCitadelModifier
        {
        public:
            float m_flFiringInterval; // 0xc0            
            source2sdk::entity2::GameTime_t m_flCastTime; // 0xc4            
            source2sdk::entity2::GameTime_t m_flNextRocketTime; // 0xc8            
            std::int32_t m_nGrenadesLeft; // 0xcc            
            uint8_t _pad00d0[0x2d8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_RocketBarrageVolley because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_RocketBarrageVolley) == 0x3a8);
    };
};
