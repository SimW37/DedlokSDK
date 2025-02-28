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
    // Size: 0x19a0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityWreckerTeleportVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_SpectatingProjectileParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpectatingProjectileParticle;
        char m_SpectatingProjectileParticle[0xe0]; // 0x15c8        
        // m_ExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplosionParticle;
        char m_ExplosionParticle[0xe0]; // 0x16a8        
        // m_ChannelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChannelParticle;
        char m_ChannelParticle[0xe0]; // 0x1788        
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x1868        
        float m_ArrowOffsetX; // 0x1948        
        float m_ArrowCameraDistance; // 0x194c        
        float m_ArrowCameraHeightOffset; // 0x1950        
        float m_ArrowInitialPitch; // 0x1954        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_GuidingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_GuidingModifier;
        char m_GuidingModifier[0x10]; // 0x1958        
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x1968        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strExplodeSound; // 0x1978        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flTrackAmount; // 0x1988        
        float m_flSpeedAccel; // 0x198c        
        float m_flSpeedDeccel; // 0x1990        
        float m_flBaseProjectileSpeed; // 0x1994        
        float m_flMaxProjectileSpeed; // 0x1998        
        [[maybe_unused]] std::uint8_t pad_0x199c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityWreckerTeleportVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityWreckerTeleportVData) == 0x19a0);
};
