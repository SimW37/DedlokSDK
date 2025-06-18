#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityCastEvent_t.hpp"
#include "source2sdk/client/AbilityTooltipDetails_t.hpp"
#include "source2sdk/client/AbilityUpgrade_t.hpp"
#include "source2sdk/client/AdditionalAbilities_t.hpp"
#include "source2sdk/client/CCitadelWeaponInfo.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "source2sdk/client/CitadelAbilityHUDPanel_t.hpp"
#include "source2sdk/client/CitadelAbilityProperty_t.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/DeploymentInfo_t.hpp"
#include "source2sdk/client/EAbilityActivation_t.hpp"
#include "source2sdk/client/EAbilityBehavior_t.hpp"
#include "source2sdk/client/EAbilitySpectatePriority.hpp"
#include "source2sdk/client/EAbilityTargetingLocation_t.hpp"
#include "source2sdk/client/EAbilityTargetingShape_t.hpp"
#include "source2sdk/client/EAbilityType_t.hpp"
#include "source2sdk/client/ECitadelTargetAbilityEffects.hpp"
#include "source2sdk/client/EItemSlotTypes_t.hpp"
#include "source2sdk/client/EModifierState.hpp"
#include "source2sdk/client/IncompatibleFilter_t.hpp"
#include "source2sdk/client/InputBitMask_t.hpp"
#include "source2sdk/client/ProjectileInfo_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"

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
        // Size: 0x15e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataOverlayType "2"
        #pragma pack(push, 1)
        class CitadelAbilityVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // metadata: MPropertyStartGroup "Meta"
            source2sdk::client::EAbilityType_t m_eAbilityType; // 0x28            
            // metadata: MPropertyStartGroup "Meta"
            source2sdk::client::EItemSlotTypes_t m_eItemSlotType; // 0x29            
            bool m_bDisabled; // 0x2a            
            bool m_bDisabledOnExperimental; // 0x2b            
            bool m_bInDevelopment; // 0x2c            
            bool m_bStartTrained; // 0x2d            
            uint8_t _pad002e[0x2]; // 0x2e
            std::int32_t m_iMaxLevel; // 0x30            
            std::int32_t m_nAbilityPointsCost; // 0x34            
            std::int32_t m_nAbillityUnlocksCost; // 0x38            
            uint8_t _pad003c[0x4]; // 0x3c
            std::uint64_t m_iUpdateTime; // 0x40            
            uint8_t _pad0048[0x4]; // 0x48
            // metadata: MPropertyStartGroup "Behavior"
            // m_AbilityBehaviorsBits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVecEnum<source2sdk::client::EAbilityBehavior_t> m_AbilityBehaviorsBits;
            char m_AbilityBehaviorsBits[0xc]; // 0x4c            
            source2sdk::client::EAbilityTargetingLocation_t m_eAbilityTargetingLocation; // 0x58            
            source2sdk::client::EAbilityTargetingShape_t m_eAbilityTargetingShape; // 0x5c            
            // metadata: MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
            float m_flTargetingConeAngle; // 0x60            
            // metadata: MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
            float m_flTargetingConeHalfWidth; // 0x64            
            // metadata: MPropertyDescription "When true, we will do an extra trace with the same cone shape, but with the cone laying flat in XY"
            // metadata: MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
            bool m_bIncludeExtra2DCone; // 0x68            
            uint8_t _pad0069[0x3]; // 0x69
            source2sdk::client::EAbilityActivation_t m_eAbilityActivation; // 0x6c            
            // metadata: MPropertyDescription "If set, this button must be down in addition to our trigger button (be default the slot button) in order to activate this ability."
            source2sdk::client::InputBitMask_t m_TriggerButtonPreReqButton; // 0x70            
            // metadata: MPropertyDescription "If set, this is the button requierd to be pressed to activate this ability."
            source2sdk::client::InputBitMask_t m_TriggerButtonOverride; // 0x78            
            source2sdk::client::EAbilitySpectatePriority m_eAbilitySpectatePriority; // 0x80            
            uint8_t _pad0081[0x3]; // 0x81
            // m_bitsInterruptingStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVecEnum<source2sdk::client::EModifierState> m_bitsInterruptingStates;
            char m_bitsInterruptingStates[0x1c]; // 0x84            
            source2sdk::client::IncompatibleFilter_t m_IncompatibleFilter; // 0xa0            
            source2sdk::client::CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0xb4            
            source2sdk::client::CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0xb8            
            // metadata: MPropertyDescription "During post-cast, what modifier states are set."
            // m_bitsPostCastEnabledStateMask has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVecEnum<source2sdk::client::EModifierState> m_bitsPostCastEnabledStateMask;
            char m_bitsPostCastEnabledStateMask[0x1c]; // 0xbc            
            // metadata: MPropertyDescription "This ability provides these types of ability target effects."
            source2sdk::client::ECitadelTargetAbilityEffects m_TargetAbilityEffectsToApply; // 0xd8            
            // metadata: MPropertyDescription "Scale Damage to Objectives by this amount"
            float m_flBossDamageScale; // 0xdc            
            bool m_bShowTargetingPreviewWhileChanneling; // 0xe0            
            bool m_bShowTargetingPreviewWhileCasting; // 0xe1            
            uint8_t _pad00e2[0x6]; // 0xe2
            // metadata: MPropertyStartGroup
            // metadata: MPropertyFriendlyName "Weapon Info"
            source2sdk::client::CCitadelWeaponInfo m_WeaponInfo; // 0xe8            
            // metadata: MPropertyFriendlyName "Projectile Info"
            source2sdk::client::ProjectileInfo_t m_projectileInfo; // 0x778            
            // metadata: MPropertyFriendlyName "Deployment Info"
            source2sdk::client::DeploymentInfo_t m_deploymentInfo; // 0xb18            
            // metadata: MPropertyStartGroup
            // m_mapAbilityProperties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,source2sdk::client::CitadelAbilityProperty_t> m_mapAbilityProperties;
            char m_mapAbilityProperties[0x28]; // 0xd18            
            // m_vecDependentAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSubclassName<4>> m_vecDependentAbilities;
            char m_vecDependentAbilities[0x18]; // 0xd40            
            // m_vecAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AbilityUpgrade_t> m_vecAbilityUpgrades;
            char m_vecAbilityUpgrades[0x18]; // 0xd58            
            uint8_t _pad0d70[0x20]; // 0xd70
            // metadata: MPropertyStartGroup "AnimGraph1"
            CGlobalSymbol m_strCastAnimGraphParam; // 0xd90            
            // metadata: MPropertyDescription "If set, this will be the value passed to the animgraph when this ability is selected instead of the ability name."
            CUtlString m_strSelectionNameOverride; // 0xd98            
            CUtlString m_strCastAnimSequenceName; // 0xda0            
            // metadata: MPropertyStartGroup "AnimGraph2"
            // metadata: MPropertyDescription "When true, suppress the out of combat anim state for 2s on cast."
            bool m_bSuppressOutOfCombatOnCast; // 0xda8            
            // metadata: MPropertyDescription "When true, suppress the out of combat anim state while channeling and for 2s after."
            bool m_bSuppressOutOfCombatWhileChanneling; // 0xda9            
            uint8_t _pad0daa[0x6]; // 0xdaa
            // metadata: MPropertyFriendlyName "hero_action_source value when doing an action"
            // metadata: MPropertyDescription "By default uses the ability name.  Set this to use a custom name."
            CGlobalSymbol m_strAG2SourceName; // 0xdb0            
            // metadata: MPropertyFriendlyName "Casting "hero_action" value"
            // metadata: MPropertyDescription "Value to set "hero_action" to set when casting. "hero_action_source" will be set to this ability's name"
            CGlobalSymbol m_strAG2CastingAction; // 0xdb8            
            // metadata: MPropertyFriendlyName "Channeling "hero_action" value"
            // metadata: MPropertyDescription "Value to set "hero_action" to set when channeling. "hero_action_source" will be set to this ability's name"
            CGlobalSymbol m_strAG2ChannelingAction; // 0xdc0            
            // metadata: MPropertyFriendlyName "Cast Completed "hero_action" value"
            // metadata: MPropertyDescription "Value to set "hero_action" to when casting completes. "hero_action_source" will be set to this ability's name"
            CGlobalSymbol m_strAG2CastCompletedAction; // 0xdc8            
            // metadata: MPropertyStartGroup "UI"
            // metadata: MPropertySuppressExpr "m_bIsSignatureAbility == false"
            source2sdk::client::AbilityTooltipDetails_t m_AbilityTooltipDetails; // 0xdd0            
            CUtlString m_strCSSClass; // 0xe00            
            CPanoramaImageName m_strAbilityImage; // 0xe08            
            CUtlString m_strMoviePreviewPath; // 0xe18            
            source2sdk::client::CitadelAbilityHUDPanel_t m_HUDPanel; // 0xe20            
            bool m_bShowInPassiveItemsArea; // 0xe58            
            bool m_bForceShowHUDPanel; // 0xe59            
            bool m_bUsesFlightControls; // 0xe5a            
            uint8_t _pad0e5b[0x5]; // 0xe5b
            CUtlString m_strFlyUpLocString; // 0xe60            
            CUtlString m_strFlyDownLocString; // 0xe68            
            // metadata: MPropertyFriendlyName "Additional Abilities"
            source2sdk::client::AdditionalAbilities_t m_additionalAbilities; // 0xe70            
            CUtlString m_strSecondaryStatName; // 0xe90            
            // metadata: MPropertyDescription "Used by button hints as labels for 'casting' (ex. cast, throw, deploy)."
            CUtlString m_strCastButtonLocToken; // 0xe98            
            // metadata: MPropertyDescription "Used by button hints as labels for 'alt-casting' (ex. cast on self, bring allies, heal teammate)."
            CUtlString m_strAltCastButtonLocToken; // 0xea0            
            // metadata: MPropertyStartGroup "Camera"
            // metadata: MPropertyDescription "Camera sequence that plays when casting starts and stops when casting completes, unless the bool below is un-checked"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceCastStart; // 0xea8            
            // metadata: MPropertyDescription "By default, we stop the sequence from 'Sequence Cast Start' once the cast completes successfully.  Un-check this to allow it to continue past the cast."
            bool m_bEndCastStartSequenceOnCastComplete; // 0xf30            
            uint8_t _pad0f31[0x7]; // 0xf31
            // metadata: MPropertyDescription "Camera sequence that plays when casting completes."
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceCastComplete; // 0xf38            
            // metadata: MPropertyDescription "Camera sequence that plays when channeling starts and is stopped when channeling ends, unless the bool below is un-checked."
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceChannelStart; // 0xfc0            
            // metadata: MPropertyDescription "By default, we stop the sequence from 'Sequence Channel Start' once the channel completes successfully.  Un-check this to allow it to continue past the channel duration."
            bool m_bEndChannelStartSequenceOnChannelComplete; // 0x1048            
            uint8_t _pad1049[0x3]; // 0x1049
            float m_flCameraPreviewOffset; // 0x104c            
            float m_flCameraPreviewDistance; // 0x1050            
            float m_flCameraPreviewSpeed; // 0x1054            
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyDescription "Preview particle attaching to the caster before cast"
            // m_previewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_previewParticle;
            char m_previewParticle[0xe0]; // 0x1058            
            // metadata: MPropertyDescription "Name of particle control point config to use for preview particle effect (empty means use 'preview' config)"
            CUtlString m_strPreviewParticleEffectConfig; // 0x1138            
            // metadata: MPropertyDescription "Preview path particle shows ability's custom path"
            // m_PreviewPathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PreviewPathParticle;
            char m_PreviewPathParticle[0xe0]; // 0x1140            
            // metadata: MPropertyDescription "Particle attaching to the caster on cast event"
            // m_mapCastEventParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::AbilityCastEvent_t,CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>> m_mapCastEventParticles;
            char m_mapCastEventParticles[0x28]; // 0x1220            
            // metadata: MPropertyDescription "Trace particle when hit an enemy with targeted ability"
            // m_skillshotHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_skillshotHitParticle;
            char m_skillshotHitParticle[0xe0]; // 0x1248            
            // metadata: MPropertyDescription "Trace particle when missed an enemy with targeted ability"
            // m_skillshotMissParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_skillshotMissParticle;
            char m_skillshotMissParticle[0xe0]; // 0x1328            
            // metadata: MPropertyDescription "Preview particle on attaching to targets of this ability"
            // m_TargetingPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingPreviewParticle;
            char m_TargetingPreviewParticle[0xe0]; // 0x1408            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSelectedSound; // 0x14e8            
            CSoundEventName m_strUnselectedSound; // 0x14f8            
            CSoundEventName m_strSelectedLoopSound; // 0x1508            
            CSoundEventName m_strCastSound; // 0x1518            
            CSoundEventName m_strChannelSound; // 0x1528            
            CSoundEventName m_strChannelLoopSound; // 0x1538            
            CSoundEventName m_strCastDelaySound; // 0x1548            
            CSoundEventName m_strCastDelayLoopSound; // 0x1558            
            // metadata: MPropertyDescription "plays for local player attacker dealing damage with this ability"
            CSoundEventName m_strHitConfirmationSound; // 0x1568            
            // metadata: MPropertyDescription "plays for local player victim taking damage from this ability"
            CSoundEventName m_strDamageTakenSound; // 0x1578            
            CSoundEventName m_strAbilityOffCooldownSound; // 0x1588            
            CSoundEventName m_strAbilityChargeReadySound; // 0x1598            
            bool m_bPlayMeepMop; // 0x15a8            
            uint8_t _pad15a9[0x7]; // 0x15a9
            // metadata: MPropertyStartGroup "Modifiers"
            // m_AutoChannelModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_AutoChannelModifier;
            char m_AutoChannelModifier[0x10]; // 0x15b0            
            // m_AutoCastDelayModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_AutoCastDelayModifier;
            char m_AutoCastDelayModifier[0x10]; // 0x15c0            
            // m_AutoIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEmbeddedSubclass<source2sdk::server::CBaseModifier>> m_AutoIntrinsicModifiers;
            char m_AutoIntrinsicModifiers[0x18]; // 0x15d0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CitadelAbilityVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CitadelAbilityVData) == 0x15e8);
    };
};
