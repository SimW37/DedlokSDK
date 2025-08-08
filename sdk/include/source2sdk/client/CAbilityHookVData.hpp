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
        // Size: 0x1a28
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityHookVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SelfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SelfModifier;
            char m_SelfModifier[0x10]; // 0x1620            
            // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_TargetModifier;
            char m_TargetModifier[0x10]; // 0x1630            
            // m_BulletAmpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BulletAmpModifier;
            char m_BulletAmpModifier[0x10]; // 0x1640            
            // metadata: MPropertyStartGroup "Visuals"
            // m_HookOutParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookOutParticle;
            char m_HookOutParticle[0xe0]; // 0x1650            
            // m_PrecastHookParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PrecastHookParticle;
            char m_PrecastHookParticle[0xe0]; // 0x1730            
            // m_HookRetrieveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookRetrieveParticle;
            char m_HookRetrieveParticle[0xe0]; // 0x1810            
            // m_HookServerImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookServerImpactParticle;
            char m_HookServerImpactParticle[0xe0]; // 0x18f0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strHookSuccessSound; // 0x19d0            
            CSoundEventName m_strHookAllySound; // 0x19e0            
            CSoundEventName m_strHookMissSound; // 0x19f0            
            CSoundEventName m_strHookImpactGeoSound; // 0x1a00            
            CSoundEventName m_SelfBuffCastSound; // 0x1a10            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flTrooperHitRadius; // 0x1a20            
            float m_flFriendlyHookIgnoreRange; // 0x1a24            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityHookVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityHookVData) == 0x1a28);
    };
};
