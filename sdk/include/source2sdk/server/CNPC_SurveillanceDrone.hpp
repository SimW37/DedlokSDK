#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNPC_FlyingDrone.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1b20
        // Has VTable
        #pragma pack(push, 1)
        class CNPC_SurveillanceDrone : public source2sdk::server::CNPC_FlyingDrone
        {
        public:
            // metadata: MNotSaved
            std::int32_t m_iMinionHealth; // 0x1ac0            
            // metadata: MNotSaved
            float m_flLifetime; // 0x1ac4            
            uint8_t _pad1ac8[0xc]; // 0x1ac8
            // metadata: MNotSaved
            Vector m_vecHome; // 0x1ad4            
            uint8_t _pad1ae0[0x10]; // 0x1ae0
            // metadata: MNotSaved
            std::int32_t m_nAbilityLevel; // 0x1af0            
            uint8_t _pad1af4[0x2c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_SurveillanceDrone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_SurveillanceDrone) == 0x1b20);
    };
};
