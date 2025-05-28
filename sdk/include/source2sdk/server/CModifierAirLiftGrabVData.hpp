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
        // Size: 0x758
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierAirLiftGrabVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_GrabEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GrabEffect;
            char m_GrabEffect[0xe0]; // 0x660            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flLiftHorizontal; // 0x740            
            float m_flLiftHeight; // 0x744            
            float m_flFollowDampingFactor; // 0x748            
            float m_flFollowDistance; // 0x74c            
            float m_flAllyGrabCancelTime; // 0x750            
            float m_flAllyPossibleStuckDistance; // 0x754            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierAirLiftGrabVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifierAirLiftGrabVData) == 0x758);
    };
};
