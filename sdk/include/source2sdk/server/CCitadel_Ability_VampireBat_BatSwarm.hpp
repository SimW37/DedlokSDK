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
        // Size: 0x1ac0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iBonusBats"
        // static metadata: MNetworkVarNames "int m_iBatCountOnCast"
        // static metadata: MNetworkVarNames "float m_flChannelTime"
        // static metadata: MNetworkVarNames "bool m_bPauseChannel"
        // static metadata: MNetworkVarNames "float m_flLastRemainingChannelTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_VampireBat_BatSwarm : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iBonusBats; // 0xf90            
            // metadata: MNetworkEnable
            std::int32_t m_iBatCountOnCast; // 0xf94            
            // metadata: MNetworkEnable
            float m_flChannelTime; // 0xf98            
            // metadata: MNetworkEnable
            bool m_bPauseChannel; // 0xf9c            
            uint8_t _pad0f9d[0x3]; // 0xf9d
            // metadata: MNetworkEnable
            float m_flLastRemainingChannelTime; // 0xfa0            
            uint8_t _pad0fa4[0xc]; // 0xfa4
            source2sdk::entity2::GameTime_t m_flNextBatTime; // 0xfb0            
            uint8_t _pad0fb4[0xb0c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatSwarm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_VampireBat_BatSwarm) == 0x1ac0);
    };
};
