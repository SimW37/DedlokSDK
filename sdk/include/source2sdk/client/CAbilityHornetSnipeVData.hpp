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
        // Size: 0x1b08
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
            char m_AssassinateShotParticle[0xe0]; // 0x1700            
            // m_AssassinateShotParticleOwnerOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AssassinateShotParticleOwnerOnly;
            char m_AssassinateShotParticleOwnerOnly[0xe0]; // 0x17e0            
            // m_LaserSightParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticle;
            char m_LaserSightParticle[0xe0]; // 0x18c0            
            // m_LaserSightParticleOwnerOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticleOwnerOnly;
            char m_LaserSightParticleOwnerOnly[0xe0]; // 0x19a0            
            // metadata: MPropertyGroupName "Modifiers"
            // m_SnipeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SnipeModifier;
            char m_SnipeModifier[0x10]; // 0x1a80            
            // m_BuffOnKillModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BuffOnKillModifier;
            char m_BuffOnKillModifier[0x10]; // 0x1a90            
            // m_GlowEnemyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_GlowEnemyModifier;
            char m_GlowEnemyModifier[0x10]; // 0x1aa0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSnipeImpactSound; // 0x1ab0            
            CSoundEventName m_strZoomIn; // 0x1ac0            
            CSoundEventName m_strZoomOut; // 0x1ad0            
            // metadata: MPropertyStartGroup "+Snipe Properties"
            float m_flMinScopeTimeToShoot; // 0x1ae0            
            float m_flFadeToBlackTime; // 0x1ae4            
            float m_flFoVChangeTime; // 0x1ae8            
            uint8_t _pad1aec[0x4]; // 0x1aec
            // m_ScopeFoV has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_ScopeFoV;
            char m_ScopeFoV[0x18]; // 0x1af0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityHornetSnipeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityHornetSnipeVData) == 0x1b08);
    };
};
