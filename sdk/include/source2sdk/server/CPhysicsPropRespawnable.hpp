#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysicsProp.hpp"

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
        // Size: 0xe60
        // Has VTable
        #pragma pack(push, 1)
        class CPhysicsPropRespawnable : public source2sdk::server::CPhysicsProp
        {
        public:
            Vector m_vOriginalSpawnOrigin; // 0xe28            
            QAngle m_vOriginalSpawnAngles; // 0xe34            
            Vector m_vOriginalMins; // 0xe40            
            Vector m_vOriginalMaxs; // 0xe4c            
            float m_flRespawnDuration; // 0xe58            
            uint8_t _pad0e5c[0x4];
            
            // Datamap fields:
            // void CPhysicsPropRespawnableMaterialize; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsPropRespawnable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsPropRespawnable) == 0xe60);
    };
};
