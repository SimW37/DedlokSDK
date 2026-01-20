#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackData_t.hpp"
#include "source2sdk/client/CAbilityMeleeVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/EMeleeHold_AttackType.hpp"
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
        // Size: 0x1bb0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityHoldMelee_VData : public source2sdk::client::CAbilityMeleeVData
        {
        public:
            // m_mapAttacks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EMeleeHold_AttackType,source2sdk::client::AttackData_t> m_mapAttacks;
            char m_mapAttacks[0x28]; // 0x1730            
            float m_flLightMeleeAnimChainTime; // 0x1758            
            float m_flNextAttackOnParry; // 0x175c            
            float m_flParryWindow; // 0x1760            
            float m_flParryStunTime; // 0x1764            
            float m_flParryResistedStunTime; // 0x1768            
            float m_flParryCooldown; // 0x176c            
            float m_flMinDashTime; // 0x1770            
            bool m_bUseCasterFacing; // 0x1774            
            uint8_t _pad1775[0x3]; // 0x1775
            source2sdk::client::CRemapFloat m_AirMeleeUpScale; // 0x1778            
            CPiecewiseCurve m_HeavyTurnSpeedCurve; // 0x1788            
            float m_flCameraMaxTurnRate; // 0x17c8            
            float m_flHeavyMeleeMaxTurnRate; // 0x17cc            
            // metadata: MPropertyStartGroup "Visuals"
            // m_HoldBeginEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoldBeginEffect;
            char m_HoldBeginEffect[0xe0]; // 0x17d0            
            // m_SuccessfulParryParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SuccessfulParryParticle;
            char m_SuccessfulParryParticle[0xe0]; // 0x18b0            
            // m_ParryActivateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ParryActivateParticle;
            char m_ParryActivateParticle[0xe0]; // 0x1990            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // 0x1a70            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // 0x1af8            
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyDescription "Sound to play when starting the hold"
            CSoundEventName m_strHoldBegin; // 0x1b80            
            CSoundEventName m_strSuccessfulParrySound; // 0x1b90            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ParryVictimModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ParryVictimModifier;
            char m_ParryVictimModifier[0x10]; // 0x1ba0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityHoldMelee_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityHoldMelee_VData) == 0x1bb0);
    };
};
