#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SatVolumeIndex_t.hpp"
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
        // Size: 0x348
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_StormCloud : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x8]; // 0xc0
            float m_flDamageInterval; // 0xc8            
            bool m_bGrowing; // 0xcc            
            uint8_t _pad00cd[0x3]; // 0xcd
            source2sdk::entity2::GameTime_t m_flLastDamageWaveTime; // 0xd0            
            std::int32_t m_nNumPlayersKilled; // 0xd4            
            source2sdk::entity2::GameTime_t m_flNextRandomLightningStrike; // 0xd8            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xdc            
            float m_flRadiusIncrementPerSecond; // 0xe0            
            Vector m_vCastPosition; // 0xe4            
            bool m_bFiredEndingSoonSound; // 0xf0            
            uint8_t _pad00f1[0x3]; // 0xf1
            std::int32_t m_nLastTickForLightningCenterCalc; // 0xf4            
            Vector m_vecLightningCenter; // 0xf8            
            source2sdk::client::SatVolumeIndex_t m_nSatVolumeIndex; // 0x104            
            uint8_t _pad0108[0x240];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_StormCloud because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_StormCloud) == 0x348);
    };
};
