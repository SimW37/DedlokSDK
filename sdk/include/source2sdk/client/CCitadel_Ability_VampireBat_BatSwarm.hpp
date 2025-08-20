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
        // Size: 0x12f0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iBonusBats"
        // static metadata: MNetworkVarNames "int m_iBatCountOnCast"
        // static metadata: MNetworkVarNames "float m_flChannelTime"
        // static metadata: MNetworkVarNames "bool m_bPauseChannel"
        // static metadata: MNetworkVarNames "float m_flLastRemainingChannelTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_VampireBat_BatSwarm : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iBonusBats; // 0xd88            
            // metadata: MNetworkEnable
            std::int32_t m_iBatCountOnCast; // 0xd8c            
            // metadata: MNetworkEnable
            float m_flChannelTime; // 0xd90            
            // metadata: MNetworkEnable
            bool m_bPauseChannel; // 0xd94            
            uint8_t _pad0d95[0x3]; // 0xd95
            // metadata: MNetworkEnable
            float m_flLastRemainingChannelTime; // 0xd98            
            uint8_t _pad0d9c[0x8]; // 0xd9c
            source2sdk::entity2::GameTime_t m_flNextBatTime; // 0xda4            
            uint8_t _pad0da8[0x548];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatSwarm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_VampireBat_BatSwarm) == 0x12f0);
    };
};
