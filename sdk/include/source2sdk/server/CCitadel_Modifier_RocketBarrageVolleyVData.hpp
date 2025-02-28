#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x828
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_RocketBarrageVolleyVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strFireSound; // 0x658        
        // metadata: MPropertyStartGroup "Visuals"
        // m_RocketLaunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RocketLaunchParticle;
        char m_RocketLaunchParticle[0xe0]; // 0x668        
        // m_RocketLaunchAmbientParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RocketLaunchAmbientParticle;
        char m_RocketLaunchAmbientParticle[0xe0]; // 0x748        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_RocketBarrageVolleyVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_RocketBarrageVolleyVData) == 0x828);
};
