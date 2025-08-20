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
        // Size: 0x1820
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityGooGrenadeVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_GooGrenadeImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_GooGrenadeImpactModifier;
            char m_GooGrenadeImpactModifier[0x10]; // 0x1618            
            // m_GooGrenadePuddleAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_GooGrenadePuddleAuraModifier;
            char m_GooGrenadePuddleAuraModifier[0x10]; // 0x1628            
            // metadata: MPropertyStartGroup "Particles"
            // m_GooGrenadeSkipParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GooGrenadeSkipParticle;
            char m_GooGrenadeSkipParticle[0xe0]; // 0x1638            
            // m_GooGrenadeExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GooGrenadeExplodeParticle;
            char m_GooGrenadeExplodeParticle[0xe0]; // 0x1718            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_GrenadeHitImpactSound; // 0x17f8            
            CSoundEventName m_GrenadeMissImpactSound; // 0x1808            
            // metadata: MPropertyStartGroup "BounceSettings"
            float m_flMinRestitution; // 0x1818            
            float m_flMaxRestitution; // 0x181c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityGooGrenadeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityGooGrenadeVData) == 0x1820);
    };
};
