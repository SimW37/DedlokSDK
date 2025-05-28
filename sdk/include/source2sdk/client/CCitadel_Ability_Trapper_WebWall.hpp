#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"

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
        // Size: 0xf30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vecCastPosition"
        // static metadata: MNetworkVarNames "Vector m_vecCastPositionNormal"
        // static metadata: MNetworkVarNames "Vector m_vecEndPosition"
        // static metadata: MNetworkVarNames "Vector m_vecEndPositionNormal"
        #pragma pack(push, 1)
        class CCitadel_Ability_Trapper_WebWall : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0x140]; // 0xdc0
            // metadata: MNetworkEnable
            Vector m_vecCastPosition; // 0xf00            
            // metadata: MNetworkEnable
            Vector m_vecCastPositionNormal; // 0xf0c            
            // metadata: MNetworkEnable
            Vector m_vecEndPosition; // 0xf18            
            // metadata: MNetworkEnable
            Vector m_vecEndPositionNormal; // 0xf24            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Trapper_WebWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Trapper_WebWall) == 0xf30);
    };
};
