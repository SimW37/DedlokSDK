#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xd60
        // Has VTable
        #pragma pack(push, 1)
        class CAbility_Operative_UmbrellaManeuver : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_ChannelParticle; // 0xb98            
            uint8_t _pad0b9c[0x1c4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Operative_UmbrellaManeuver because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Operative_UmbrellaManeuver) == 0xd60);
    };
};
