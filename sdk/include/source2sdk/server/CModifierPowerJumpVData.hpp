#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x750
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierPowerJumpVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_FloatParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FloatParticle;
            char m_FloatParticle[0xe0]; // 0x660            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flAirDrag; // 0x740            
            float m_flVerticalCameraOffset; // 0x744            
            float m_flVerticalCameraOffsetLerpTime; // 0x748            
            float m_flVerticalCameraOffsetBias; // 0x74c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierPowerJumpVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifierPowerJumpVData) == 0x750);
    };
};
