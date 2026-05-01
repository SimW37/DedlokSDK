#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadel_Ability_Frank_ShockTarget;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x150
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Frank_StoredDamageWatcher : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x70]; // 0xd0
            source2sdk::server::CCitadel_Ability_Frank_ShockTarget* pShockTarget; // 0x140            
            source2sdk::client::ParticleIndex_t m_nStoredDamageFXIndex; // 0x148            
            uint8_t _pad014c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Frank_StoredDamageWatcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Frank_StoredDamageWatcher) == 0x150);
    };
};
