#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1a20
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityHornetSnipeVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_AssassinateShotParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AssassinateShotParticle;
            char m_AssassinateShotParticle[0xe0]; // 0x1618            
            // m_AssassinateShotParticleOwnerOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AssassinateShotParticleOwnerOnly;
            char m_AssassinateShotParticleOwnerOnly[0xe0]; // 0x16f8            
            // m_LaserSightParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticle;
            char m_LaserSightParticle[0xe0]; // 0x17d8            
            // m_LaserSightParticleOwnerOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticleOwnerOnly;
            char m_LaserSightParticleOwnerOnly[0xe0]; // 0x18b8            
            // metadata: MPropertyGroupName "Modifiers"
            // m_SnipeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SnipeModifier;
            char m_SnipeModifier[0x10]; // 0x1998            
            // m_BuffOnKillModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BuffOnKillModifier;
            char m_BuffOnKillModifier[0x10]; // 0x19a8            
            // m_GlowEnemyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_GlowEnemyModifier;
            char m_GlowEnemyModifier[0x10]; // 0x19b8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSnipeImpactSound; // 0x19c8            
            CSoundEventName m_strZoomIn; // 0x19d8            
            CSoundEventName m_strZoomOut; // 0x19e8            
            // metadata: MPropertyStartGroup "+Snipe Properties"
            float m_flMinScopeTimeToShoot; // 0x19f8            
            float m_flFadeToBlackTime; // 0x19fc            
            float m_flFoVChangeTime; // 0x1a00            
            uint8_t _pad1a04[0x4]; // 0x1a04
            // m_ScopeFoV has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_ScopeFoV;
            char m_ScopeFoV[0x18]; // 0x1a08            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityHornetSnipeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityHornetSnipeVData) == 0x1a20);
    };
};
