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
    // Size: 0x748
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierPowerJumpVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_FloatParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FloatParticle;
        char m_FloatParticle[0xe0]; // 0x658        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flAirDrag; // 0x738        
        float m_flVerticalCameraOffset; // 0x73c        
        float m_flVerticalCameraOffsetLerpTime; // 0x740        
        float m_flVerticalCameraOffsetBias; // 0x744        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierPowerJumpVData because it is not a standard-layout class
    static_assert(sizeof(CModifierPowerJumpVData) == 0x748);
};
