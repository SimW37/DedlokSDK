#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
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
        // Size: 0x1b28
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityLashDownStrikeVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_TargetPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetPreviewParticle;
            char m_TargetPreviewParticle[0xe0]; // 0x1618            
            // metadata: MPropertyLeafSuggestionProviderFn
            CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x16f8            
            // metadata: MPropertyLeafSuggestionProviderFn
            CGlobalSymbol m_strAirCastAnimGraphParam; // 0x1700            
            // m_StompParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompParticle;
            char m_StompParticle[0xe0]; // 0x1708            
            // m_StompLineParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineParticle;
            char m_StompLineParticle[0xe0]; // 0x17e8            
            // m_StompLineObstructedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineObstructedParticle;
            char m_StompLineObstructedParticle[0xe0]; // 0x18c8            
            // m_StompImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactParticle;
            char m_StompImpactParticle[0xe0]; // 0x19a8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_StompExplosionSound; // 0x1a88            
            CSoundEventName m_StompEnemyImpactSound; // 0x1a98            
            CSoundEventName m_strFallCollideImpactSound; // 0x1aa8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DownStrikeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_DownStrikeModifier;
            char m_DownStrikeModifier[0x10]; // 0x1ab8            
            // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_ImpactModifier;
            char m_ImpactModifier[0x10]; // 0x1ac8            
            // m_DragModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_DragModifier;
            char m_DragModifier[0x10]; // 0x1ad8            
            // metadata: MPropertyStartGroup "+Down Strike Params"
            float m_flHeightUILingerTime; // 0x1ae8            
            float m_flDamageFrustumHalfWidth; // 0x1aec            
            float m_flDamageFrustumAngle; // 0x1af0            
            float m_flDamageWaveSpeed; // 0x1af4            
            float m_flDamageTraceProbeDamageRadius; // 0x1af8            
            float m_flDamageTraceProbeWorldRadius; // 0x1afc            
            float m_flDamageTraceProbeStepUpHeight; // 0x1b00            
            float m_flDamageTraceProbeStepDownHeight; // 0x1b04            
            float m_flDamageTraceProbeDropDownRate; // 0x1b08            
            float m_flInitialDamageRadiusInMeters; // 0x1b0c            
            std::int32_t m_nGroundCrackGap; // 0x1b10            
            float m_flGroupLengthTolerance; // 0x1b14            
            float m_flDamageEffectScaleMin; // 0x1b18            
            float m_flDamageEffectScaleMax; // 0x1b1c            
            float m_flTrackAmount; // 0x1b20            
            float m_flCollideRadius; // 0x1b24            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityLashDownStrikeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityLashDownStrikeVData) == 0x1b28);
    };
};
