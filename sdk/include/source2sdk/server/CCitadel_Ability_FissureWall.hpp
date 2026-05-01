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
        // Size: 0x1200
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "VectorWS m_vecPosition"
        // static metadata: MNetworkVarNames "VectorWS m_vecTravellingPosition"
        // static metadata: MNetworkVarNames "VectorWS m_vecInitialPosition"
        // static metadata: MNetworkVarNames "GameTime_t m_CastTime"
        // static metadata: MNetworkVarNames "Vector m_vecDirection"
        // static metadata: MNetworkVarNames "Vector m_vecLeft"
        // static metadata: MNetworkVarNames "float m_Length"
        // static metadata: MNetworkVarNames "bool m_bTraveling"
        // static metadata: MNetworkVarNames "bool m_bPreview"
        #pragma pack(push, 1)
        class CCitadel_Ability_FissureWall : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x210]; // 0xf90
            // metadata: MNetworkEnable
            VectorWS m_vecPosition; // 0x11a0            
            // metadata: MNetworkEnable
            VectorWS m_vecTravellingPosition; // 0x11ac            
            // metadata: MNetworkEnable
            VectorWS m_vecInitialPosition; // 0x11b8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_CastTime; // 0x11c4            
            // metadata: MNetworkEnable
            Vector m_vecDirection; // 0x11c8            
            // metadata: MNetworkEnable
            Vector m_vecLeft; // 0x11d4            
            // metadata: MNetworkEnable
            float m_Length; // 0x11e0            
            uint8_t _pad11e4[0x16]; // 0x11e4
            // metadata: MNetworkEnable
            bool m_bTraveling; // 0x11fa            
            // metadata: MNetworkEnable
            bool m_bPreview; // 0x11fb            
            uint8_t _pad11fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_FissureWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_FissureWall) == 0x1200);
    };
};
