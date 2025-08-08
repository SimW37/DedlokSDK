#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x18f0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityHornetLeapVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            float m_flChannelingAirDrag; // 0x1620            
            float m_flChannelingMaxFallSpeed; // 0x1624            
            float m_flVerticalMoveSpeedPercent; // 0x1628            
            float m_flAirDrag; // 0x162c            
            float m_flAirAcceleration; // 0x1630            
            float m_flLaunchAirDrag; // 0x1634            
            float m_flLaunchTime; // 0x1638            
            float m_flMoveSpeedAboveBaseScale; // 0x163c            
            // metadata: MPropertyGroupName "Modifiers"
            // m_LeapModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_LeapModifier;
            char m_LeapModifier[0x10]; // 0x1640            
            // metadata: MPropertyStartGroup "Visuals"
            // m_DustParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DustParticle;
            char m_DustParticle[0xe0]; // 0x1650            
            // m_TrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TrailParticle;
            char m_TrailParticle[0xe0]; // 0x1730            
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x1810            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityHornetLeapVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityHornetLeapVData) == 0x18f0);
    };
};
