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
        // Size: 0xd10
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iRemainingCasts"
        // static metadata: MNetworkVarNames "bool m_bIsBlinking"
        // static metadata: MNetworkVarNames "GameTime_t m_RecastEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_BlinkEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_VampireBat_BatBlink : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x148]; // 0xba0
            // metadata: MNetworkEnable
            std::int32_t m_iRemainingCasts; // 0xce8            
            // metadata: MNetworkEnable
            bool m_bIsBlinking; // 0xcec            
            uint8_t _pad0ced[0x3]; // 0xced
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_RecastEndTime; // 0xcf0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_BlinkEndTime; // 0xcf4            
            uint8_t _pad0cf8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatBlink because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_VampireBat_BatBlink) == 0xd10);
    };
};
