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
        class CAbilityHookVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SelfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SelfModifier;
            char m_SelfModifier[0x10]; // 0x15e8            
            // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_TargetModifier;
            char m_TargetModifier[0x10]; // 0x15f8            
            // m_BulletAmpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BulletAmpModifier;
            char m_BulletAmpModifier[0x10]; // 0x1608            
            // metadata: MPropertyStartGroup "Visuals"
            // m_HookOutParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookOutParticle;
            char m_HookOutParticle[0xe0]; // 0x1618            
            // m_PrecastHookParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PrecastHookParticle;
            char m_PrecastHookParticle[0xe0]; // 0x16f8            
            // m_HookRetrieveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookRetrieveParticle;
            char m_HookRetrieveParticle[0xe0]; // 0x17d8            
            // m_HookServerImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookServerImpactParticle;
            char m_HookServerImpactParticle[0xe0]; // 0x18b8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strHookSuccessSound; // 0x1998            
            CSoundEventName m_strHookAllySound; // 0x19a8            
            CSoundEventName m_strHookMissSound; // 0x19b8            
            CSoundEventName m_strHookImpactGeoSound; // 0x19c8            
            CSoundEventName m_SelfBuffCastSound; // 0x19d8            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flTrooperHitRadius; // 0x19e8            
            float m_flFriendlyHookIgnoreRange; // 0x19ec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityHookVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityHookVData) == 0x19f0);
    };
};
