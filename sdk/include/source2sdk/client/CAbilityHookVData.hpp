#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x19f8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityHookVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SelfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SelfModifier;
        char m_SelfModifier[0x10]; // 0x15f0        
        // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_TargetModifier;
        char m_TargetModifier[0x10]; // 0x1600        
        // m_BulletAmpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BulletAmpModifier;
        char m_BulletAmpModifier[0x10]; // 0x1610        
        // metadata: MPropertyStartGroup "Visuals"
        // m_HookOutParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookOutParticle;
        char m_HookOutParticle[0xe0]; // 0x1620        
        // m_PrecastHookParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PrecastHookParticle;
        char m_PrecastHookParticle[0xe0]; // 0x1700        
        // m_HookRetrieveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookRetrieveParticle;
        char m_HookRetrieveParticle[0xe0]; // 0x17e0        
        // m_HookServerImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookServerImpactParticle;
        char m_HookServerImpactParticle[0xe0]; // 0x18c0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strHookSuccessSound; // 0x19a0        
        CSoundEventName m_strHookAllySound; // 0x19b0        
        CSoundEventName m_strHookMissSound; // 0x19c0        
        CSoundEventName m_strHookImpactGeoSound; // 0x19d0        
        CSoundEventName m_SelfBuffCastSound; // 0x19e0        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flTrooperHitRadius; // 0x19f0        
        float m_flFriendlyHookIgnoreRange; // 0x19f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityHookVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityHookVData) == 0x19f8);
};
