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
        // Size: 0xf40
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Wrecker_Ultimate : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d88[0x20]; // 0xd88
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkChangeCallback "OnGrabBeamAnglesChanged"
            QAngle m_angBeamAngles; // 0xda8            
            uint8_t _pad0db4[0x84]; // 0xdb4
            bool m_bNeedsBeamReset; // 0xe38            
            uint8_t _pad0e39[0x107];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Wrecker_Ultimate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Wrecker_Ultimate) == 0xf40);
    };
};
