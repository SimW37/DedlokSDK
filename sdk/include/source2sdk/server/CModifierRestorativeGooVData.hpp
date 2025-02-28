#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x7a8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierRestorativeGooVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_RestorativeGooEndParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RestorativeGooEndParticle;
        char m_RestorativeGooEndParticle[0xe0]; // 0x658        
        float m_flDistanceCameraOffsetLerpTime; // 0x738        
        float m_flDistanceCameraOffsetBias; // 0x73c        
        float m_flDistanceCameraOffset; // 0x740        
        [[maybe_unused]] std::uint8_t pad_0x744[0x4]; // 0x744
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BreakoutProgressBarModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BreakoutProgressBarModifier;
        char m_BreakoutProgressBarModifier[0x10]; // 0x748        
        // m_PostCubeBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_PostCubeBuffModifier;
        char m_PostCubeBuffModifier[0x10]; // 0x758        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_NonTargetLoopingSound; // 0x768        
        CSoundEventName m_TargetLoopingSound; // 0x778        
        CSoundEventName m_LightMeleeImpact; // 0x788        
        CSoundEventName m_HeavyMeleeImpact; // 0x798        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierRestorativeGooVData because it is not a standard-layout class
    static_assert(sizeof(CModifierRestorativeGooVData) == 0x7a8);
};
