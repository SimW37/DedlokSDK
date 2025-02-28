#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
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
    // Size: 0x1ad8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityLashDownStrikeVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_TargetPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetPreviewParticle;
        char m_TargetPreviewParticle[0xe0]; // 0x15c8        
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x16a8        
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strAirCastAnimGraphParam; // 0x16b0        
        // m_StompParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompParticle;
        char m_StompParticle[0xe0]; // 0x16b8        
        // m_StompLineParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineParticle;
        char m_StompLineParticle[0xe0]; // 0x1798        
        // m_StompLineObstructedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineObstructedParticle;
        char m_StompLineObstructedParticle[0xe0]; // 0x1878        
        // m_StompImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactParticle;
        char m_StompImpactParticle[0xe0]; // 0x1958        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_StompExplosionSound; // 0x1a38        
        CSoundEventName m_StompEnemyImpactSound; // 0x1a48        
        CSoundEventName m_strFallCollideImpactSound; // 0x1a58        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DownStrikeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_DownStrikeModifier;
        char m_DownStrikeModifier[0x10]; // 0x1a68        
        // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_ImpactModifier;
        char m_ImpactModifier[0x10]; // 0x1a78        
        // m_DragModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_DragModifier;
        char m_DragModifier[0x10]; // 0x1a88        
        // metadata: MPropertyStartGroup "+Down Strike Params"
        float m_flHeightUILingerTime; // 0x1a98        
        float m_flDamageFrustumHalfWidth; // 0x1a9c        
        float m_flDamageFrustumAngle; // 0x1aa0        
        float m_flDamageWaveSpeed; // 0x1aa4        
        float m_flDamageTraceProbeDamageRadius; // 0x1aa8        
        float m_flDamageTraceProbeWorldRadius; // 0x1aac        
        float m_flDamageTraceProbeStepUpHeight; // 0x1ab0        
        float m_flDamageTraceProbeStepDownHeight; // 0x1ab4        
        float m_flDamageTraceProbeDropDownRate; // 0x1ab8        
        float m_flInitialDamageRadiusInMeters; // 0x1abc        
        int32_t m_nGroundCrackGap; // 0x1ac0        
        float m_flGroupLengthTolerance; // 0x1ac4        
        float m_flDamageEffectScaleMin; // 0x1ac8        
        float m_flDamageEffectScaleMax; // 0x1acc        
        float m_flTrackAmount; // 0x1ad0        
        float m_flCollideRadius; // 0x1ad4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityLashDownStrikeVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityLashDownStrikeVData) == 0x1ad8);
};
