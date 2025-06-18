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
        // Size: 0x19f0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityHornetSnipeVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_AssassinateShotParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AssassinateShotParticle;
            char m_AssassinateShotParticle[0xe0]; // 0x15e8            
            // m_AssassinateShotParticleOwnerOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AssassinateShotParticleOwnerOnly;
            char m_AssassinateShotParticleOwnerOnly[0xe0]; // 0x16c8            
            // m_LaserSightParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticle;
            char m_LaserSightParticle[0xe0]; // 0x17a8            
            // m_LaserSightParticleOwnerOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticleOwnerOnly;
            char m_LaserSightParticleOwnerOnly[0xe0]; // 0x1888            
            // metadata: MPropertyGroupName "Modifiers"
            // m_SnipeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SnipeModifier;
            char m_SnipeModifier[0x10]; // 0x1968            
            // m_BuffOnKillModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BuffOnKillModifier;
            char m_BuffOnKillModifier[0x10]; // 0x1978            
            // m_GlowEnemyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GlowEnemyModifier;
            char m_GlowEnemyModifier[0x10]; // 0x1988            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSnipeImpactSound; // 0x1998            
            CSoundEventName m_strZoomIn; // 0x19a8            
            CSoundEventName m_strZoomOut; // 0x19b8            
            // metadata: MPropertyStartGroup "+Snipe Properties"
            float m_flMinScopeTimeToShoot; // 0x19c8            
            float m_flFadeToBlackTime; // 0x19cc            
            float m_flFoVChangeTime; // 0x19d0            
            uint8_t _pad19d4[0x4]; // 0x19d4
            // m_ScopeFoV has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_ScopeFoV;
            char m_ScopeFoV[0x18]; // 0x19d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityHornetSnipeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityHornetSnipeVData) == 0x19f0);
    };
};
