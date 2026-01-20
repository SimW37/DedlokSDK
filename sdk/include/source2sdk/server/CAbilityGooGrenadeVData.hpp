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
        // Size: 0x1908
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityGooGrenadeVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_GooGrenadeImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GooGrenadeImpactModifier;
            char m_GooGrenadeImpactModifier[0x10]; // 0x1700            
            // m_GooGrenadePuddleAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GooGrenadePuddleAuraModifier;
            char m_GooGrenadePuddleAuraModifier[0x10]; // 0x1710            
            // metadata: MPropertyStartGroup "Particles"
            // m_GooGrenadeSkipParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GooGrenadeSkipParticle;
            char m_GooGrenadeSkipParticle[0xe0]; // 0x1720            
            // m_GooGrenadeExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GooGrenadeExplodeParticle;
            char m_GooGrenadeExplodeParticle[0xe0]; // 0x1800            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_GrenadeHitImpactSound; // 0x18e0            
            CSoundEventName m_GrenadeMissImpactSound; // 0x18f0            
            // metadata: MPropertyStartGroup "BounceSettings"
            float m_flMinRestitution; // 0x1900            
            float m_flMaxRestitution; // 0x1904            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityGooGrenadeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityGooGrenadeVData) == 0x1908);
    };
};
