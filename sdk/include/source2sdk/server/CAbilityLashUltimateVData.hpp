#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseLockonAbilityVData.hpp"
#include "source2sdk/server/CCitadel_Modifier_LashGrappleEnemy_Debuff.hpp"

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
        // Size: 0x1ac8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityLashUltimateVData : public source2sdk::server::CBaseLockonAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_TargetPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetPreviewParticle;
            char m_TargetPreviewParticle[0xe0]; // 0x1608            
            // m_LaunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaunchParticle;
            char m_LaunchParticle[0xe0]; // 0x16e8            
            // m_UltimateCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UltimateCastParticle;
            char m_UltimateCastParticle[0xe0]; // 0x17c8            
            // m_UltimateCastEnemyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UltimateCastEnemyParticle;
            char m_UltimateCastEnemyParticle[0xe0]; // 0x18a8            
            // m_AllyIndicatorParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AllyIndicatorParticle;
            char m_AllyIndicatorParticle[0xe0]; // 0x1988            
            // metadata: MPropertyStartGroup "Animation"
            // metadata: MPropertyLeafSuggestionProviderFn
            CGlobalSymbol m_strThrowEnemyAnimGraphParam; // 0x1a68            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_GrappleEnemyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadel_Modifier_LashGrappleEnemy_Debuff> m_GrappleEnemyModifier;
            char m_GrappleEnemyModifier[0x10]; // 0x1a70            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_GrabSound; // 0x1a80            
            CSoundEventName m_MissSound; // 0x1a90            
            CSoundEventName m_ThrowSound; // 0x1aa0            
            // metadata: MPropertyStartGroup "+Ultimate Properties"
            float m_flAirSpeedMax; // 0x1ab0            
            float m_flFallSpeedMax; // 0x1ab4            
            float m_flAirDrag; // 0x1ab8            
            float m_flMaxPitchRangeScale; // 0x1abc            
            float m_flThrowAnimTossPoint; // 0x1ac0            
            uint8_t _pad1ac4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityLashUltimateVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityLashUltimateVData) == 0x1ac8);
    };
};
