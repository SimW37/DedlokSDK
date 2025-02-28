#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1740
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityHookVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SelfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_SelfModifier;
        char m_SelfModifier[0x10]; // 0x15c8        
        // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_TargetModifier;
        char m_TargetModifier[0x10]; // 0x15d8        
        // m_BulletAmpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BulletAmpModifier;
        char m_BulletAmpModifier[0x10]; // 0x15e8        
        // m_ShieldModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ShieldModifier;
        char m_ShieldModifier[0x10]; // 0x15f8        
        // metadata: MPropertyStartGroup "Visuals"
        // m_HookOutParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookOutParticle;
        char m_HookOutParticle[0xe0]; // 0x1608        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strHookSuccessSound; // 0x16e8        
        CSoundEventName m_strHookAllySound; // 0x16f8        
        CSoundEventName m_strHookMissSound; // 0x1708        
        CSoundEventName m_strHookImpactGeoSound; // 0x1718        
        CSoundEventName m_SelfBuffCastSound; // 0x1728        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flTrooperHitRadius; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityHookVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityHookVData) == 0x1740);
};
