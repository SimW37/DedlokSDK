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
        // Size: 0x1018
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsInRecast"
        // static metadata: MNetworkVarNames "GameTime_t m_RecastEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_KillSummon : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x82]; // 0xf90
            // metadata: MNetworkEnable
            bool m_bIsInRecast; // 0x1012            
            uint8_t _pad1013[0x1]; // 0x1013
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_RecastEndTime; // 0x1014            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_KillSummon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Necro_KillSummon) == 0x1018);
    };
};
