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
        // Size: 0x12f0
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
            uint8_t _pad0f90[0x308]; // 0xf90
            // metadata: MNetworkEnable
            std::int32_t m_iRemainingCasts; // 0x1298            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "BlinkStateChanged"
            bool m_bIsBlinking; // 0x129c            
            uint8_t _pad129d[0x3]; // 0x129d
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_RecastEndTime; // 0x12a0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_BlinkEndTime; // 0x12a4            
            uint8_t _pad12a8[0x48];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatBlink because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_VampireBat_BatBlink) == 0x12f0);
    };
};
