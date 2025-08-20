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
        // Size: 0xee8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "QAngle m_angFacing"
        #pragma pack(push, 1)
        class CCitadel_Ability_Bounce_Pad : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            Vector m_vForward; // 0xd88            
            bool m_bShouldDeploy; // 0xd94            
            bool m_bAnglesSet; // 0xd95            
            bool m_bCanCancel; // 0xd96            
            uint8_t _pad0d97[0x141]; // 0xd97
            // metadata: MNetworkEnable
            QAngle m_angFacing; // 0xed8            
            uint8_t _pad0ee4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bounce_Pad because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Bounce_Pad) == 0xee8);
    };
};
