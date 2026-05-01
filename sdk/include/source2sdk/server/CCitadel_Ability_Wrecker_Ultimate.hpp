#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x11c0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "QAngle m_angBeamAngles"
        #pragma pack(push, 1)
        class CCitadel_Ability_Wrecker_Ultimate : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x20]; // 0xf90
            // metadata: MNetworkEnable
            QAngle m_angBeamAngles; // 0xfb0            
            uint8_t _pad0fbc[0x204];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Wrecker_Ultimate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Wrecker_Ultimate) == 0x11c0);
    };
};
