#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
        // Size: 0x948
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_DecayingShieldTrackerVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_WeaponImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeaponImpactParticle;
            char m_WeaponImpactParticle[0xe0]; // 0x660            
            // m_TechImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TechImpactParticle;
            char m_TechImpactParticle[0xe0]; // 0x740            
            // m_ShieldBreakParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldBreakParticle;
            char m_ShieldBreakParticle[0xe0]; // 0x820            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_ShieldBreakSound; // 0x900            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_TechImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_TechImpactModifier;
            char m_TechImpactModifier[0x10]; // 0x910            
            float m_flShieldImpactEffectDuration; // 0x920            
            uint8_t _pad0924[0x4]; // 0x924
            // m_ProcEffectModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ProcEffectModifier;
            char m_ProcEffectModifier[0x10]; // 0x928            
            // metadata: MPropertyStartGroup "Gameplay"
            // metadata: MPropertyDescription "How much time from last 'proc' before sheild begins to decay"
            float m_flDecayPause; // 0x938            
            // metadata: MPropertyDescription "How much HP is Drained Per second after initial decay Pause"
            float m_flDecayRate; // 0x93c            
            float m_flTickRate; // 0x940            
            uint8_t _pad0944[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_DecayingShieldTrackerVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_DecayingShieldTrackerVData) == 0x948);
    };
};
