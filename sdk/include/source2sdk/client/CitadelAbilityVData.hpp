#pragma once
#include "source2sdk/client/AbilityCastEvent_t.hpp"
#include "source2sdk/client/AbilityTooltipDetails_t.hpp"
#include "source2sdk/client/AbilityUpgrade_t.hpp"
#include "source2sdk/client/AdditionalAbilities_t.hpp"
#include "source2sdk/client/CBaseModifier.hpp"
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
    // Size: 0x15c8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataOverlayType "2"
    #pragma pack(push, 1)
    class CitadelAbilityVData : public client::CEntitySubclassVDataBase
    {
    public:
        // metadata: MPropertyStartGroup "Meta"
        client::EAbilityType_t m_eAbilityType; // 0x28        
        // metadata: MPropertyStartGroup "Meta"
        client::EItemSlotTypes_t m_eItemSlotType; // 0x29        
        bool m_bDisabled; // 0x2a        
        bool m_bInDevelopment; // 0x2b        
        bool m_bStartTrained; // 0x2c        
        [[maybe_unused]] std::uint8_t pad_0x2d[0x3]; // 0x2d
        int32_t m_iMaxLevel; // 0x30        
        int32_t m_nAbilityPointsCost; // 0x34        
        int32_t m_nAbillityUnlocksCost; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4]; // 0x3c
        uint64_t m_iUpdateTime; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x48[0x4]; // 0x48
        // metadata: MPropertyStartGroup "Behavior"
        // m_AbilityBehaviorsBits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CBitVecEnum<client::EAbilityBehavior_t> m_AbilityBehaviorsBits;
        char m_AbilityBehaviorsBits[0xc]; // 0x4c        
        client::EAbilityTargetingLocation_t m_eAbilityTargetingLocation; // 0x58        
        client::EAbilityTargetingShape_t m_eAbilityTargetingShape; // 0x5c        
        // metadata: MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
        float m_flTargetingConeAngle; // 0x60        
        // metadata: MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
        float m_flTargetingConeHalfWidth; // 0x64        
        // metadata: MPropertyDescription "When true, we will do an extra trace with the same cone shape, but with the cone laying flat in XY"
        // metadata: MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
        bool m_bIncludeExtra2DCone; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x69[0x3]; // 0x69
        client::EAbilityActivation_t m_eAbilityActivation; // 0x6c        
        // metadata: MPropertyDescription "If set, this button must be down in addition to our trigger button (be default the slot button) in order to activate this ability."
        client::InputBitMask_t m_TriggerButtonPreReqButton; // 0x70        
        // metadata: MPropertyDescription "If set, this is the button requierd to be pressed to activate this ability."
        client::InputBitMask_t m_TriggerButtonOverride; // 0x78        
        client::EAbilitySpectatePriority m_eAbilitySpectatePriority; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x81[0x3]; // 0x81
        // m_bitsInterruptingStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CBitVecEnum<client::EModifierState> m_bitsInterruptingStates;
        char m_bitsInterruptingStates[0x1c]; // 0x84        
        client::IncompatibleFilter_t m_IncompatibleFilter; // 0xa0        
        client::CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0xb4        
        client::CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0xb8        
        // metadata: MPropertyDescription "During post-cast, what modifier states are set."
        // m_bitsPostCastEnabledStateMask has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CBitVecEnum<client::EModifierState> m_bitsPostCastEnabledStateMask;
        char m_bitsPostCastEnabledStateMask[0x1c]; // 0xbc        
        // metadata: MPropertyDescription "This ability provides these types of ability target effects."
        client::ECitadelTargetAbilityEffects m_TargetAbilityEffectsToApply; // 0xd8        
        // metadata: MPropertyDescription "Scale Damage to Objectives by this amount"
        float m_flBossDamageScale; // 0xdc        
        bool m_bShowTargetingPreviewWhileChanneling; // 0xe0        
        bool m_bShowTargetingPreviewWhileCasting; // 0xe1        
        [[maybe_unused]] std::uint8_t pad_0xe2[0x6]; // 0xe2
        // metadata: MPropertyStartGroup
        // metadata: MPropertyFriendlyName "Weapon Info"
        client::CCitadelWeaponInfo m_WeaponInfo; // 0xe8        
        // metadata: MPropertyFriendlyName "Projectile Info"
        client::ProjectileInfo_t m_projectileInfo; // 0x778        
        // metadata: MPropertyFriendlyName "Deployment Info"
        client::DeploymentInfo_t m_deploymentInfo; // 0xb18        
        // metadata: MPropertyStartGroup
        // m_mapAbilityProperties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<CUtlString,client::CitadelAbilityProperty_t> m_mapAbilityProperties;
        char m_mapAbilityProperties[0x28]; // 0xd00        
        // m_vecDependentAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSubclassName<4>> m_vecDependentAbilities;
        char m_vecDependentAbilities[0x18]; // 0xd28        
        // m_vecAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::AbilityUpgrade_t> m_vecAbilityUpgrades;
        char m_vecAbilityUpgrades[0x18]; // 0xd40        
        [[maybe_unused]] std::uint8_t pad_0xd58[0x20]; // 0xd58
        // metadata: MPropertyStartGroup "AnimGraph1"
        CGlobalSymbol m_strCastAnimGraphParam; // 0xd78        
        // metadata: MPropertyDescription "If set, this will be the value passed to the animgraph when this ability is selected instead of the ability name."
        CUtlString m_strSelectionNameOverride; // 0xd80        
        CUtlString m_strCastAnimSequenceName; // 0xd88        
        // metadata: MPropertyStartGroup "AnimGraph2"
        // metadata: MPropertyDescription "When true, suppress the out of combat anim state for 2s on cast."
        bool m_bSuppressOutOfCombatOnCast; // 0xd90        
        // metadata: MPropertyDescription "When true, suppress the out of combat anim state while channeling and for 2s after."
        bool m_bSuppressOutOfCombatWhileChanneling; // 0xd91        
        [[maybe_unused]] std::uint8_t pad_0xd92[0x6]; // 0xd92
        // metadata: MPropertyFriendlyName "action_source value when doing an action"
        // metadata: MPropertyDescription "By default uses the ability name.  Set this to use a custom name."
        CGlobalSymbol m_strAG2SourceName; // 0xd98        
        // metadata: MPropertyFriendlyName "Casting action_state value"
        // metadata: MPropertyDescription "Value to set "action_state" to set when casting. "action_source" will be set to this ability's name"
        CGlobalSymbol m_strAG2CastingAction; // 0xda0        
        // metadata: MPropertyFriendlyName "Channeling action_state value"
        // metadata: MPropertyDescription "Value to set "action_state" to set when channeling. "action_source" will be set to this ability's name"
        CGlobalSymbol m_strAG2ChannelingAction; // 0xda8        
        // metadata: MPropertyStartGroup "UI"
        // metadata: MPropertySuppressExpr "m_bIsSignatureAbility == false"
        client::AbilityTooltipDetails_t m_AbilityTooltipDetails; // 0xdb0        
        CUtlString m_strCSSClass; // 0xde0        
        CPanoramaImageName m_strAbilityImage; // 0xde8        
        CUtlString m_strMoviePreviewPath; // 0xdf8        
        client::CitadelAbilityHUDPanel_t m_HUDPanel; // 0xe00        
        bool m_bShowInPassiveItemsArea; // 0xe38        
        bool m_bForceShowHUDPanel; // 0xe39        
        bool m_bUsesFlightControls; // 0xe3a        
        [[maybe_unused]] std::uint8_t pad_0xe3b[0x5]; // 0xe3b
        CUtlString m_strFlyUpLocString; // 0xe40        
        CUtlString m_strFlyDownLocString; // 0xe48        
        // metadata: MPropertyFriendlyName "Additional Abilities"
        client::AdditionalAbilities_t m_additionalAbilities; // 0xe50        
        CUtlString m_strSecondaryStatName; // 0xe70        
        // metadata: MPropertyDescription "Used by button hints as labels for 'casting' (ex. cast, throw, deploy)."
        CUtlString m_strCastButtonLocToken; // 0xe78        
        // metadata: MPropertyDescription "Used by button hints as labels for 'alt-casting' (ex. cast on self, bring allies, heal teammate)."
        CUtlString m_strAltCastButtonLocToken; // 0xe80        
        // metadata: MPropertyStartGroup "Camera"
        // metadata: MPropertyDescription "Camera sequence that plays when casting starts and stops when casting completes, unless the bool below is un-checked"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceCastStart; // 0xe88        
        // metadata: MPropertyDescription "By default, we stop the sequence from 'Sequence Cast Start' once the cast completes successfully.  Un-check this to allow it to continue past the cast."
        bool m_bEndCastStartSequenceOnCastComplete; // 0xf10        
        [[maybe_unused]] std::uint8_t pad_0xf11[0x7]; // 0xf11
        // metadata: MPropertyDescription "Camera sequence that plays when casting completes."
        client::CitadelCameraOperationsSequence_t m_cameraSequenceCastComplete; // 0xf18        
        // metadata: MPropertyDescription "Camera sequence that plays when channeling starts and is stopped when channeling ends, unless the bool below is un-checked."
        client::CitadelCameraOperationsSequence_t m_cameraSequenceChannelStart; // 0xfa0        
        // metadata: MPropertyDescription "By default, we stop the sequence from 'Sequence Channel Start' once the channel completes successfully.  Un-check this to allow it to continue past the channel duration."
        bool m_bEndChannelStartSequenceOnChannelComplete; // 0x1028        
        [[maybe_unused]] std::uint8_t pad_0x1029[0x3]; // 0x1029
        float m_flCameraPreviewOffset; // 0x102c        
        float m_flCameraPreviewDistance; // 0x1030        
        float m_flCameraPreviewSpeed; // 0x1034        
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyDescription "Preview particle attaching to the caster before cast"
        // m_previewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_previewParticle;
        char m_previewParticle[0xe0]; // 0x1038        
        // metadata: MPropertyDescription "Name of particle control point config to use for preview particle effect (empty means use 'preview' config)"
        CUtlString m_strPreviewParticleEffectConfig; // 0x1118        
        // metadata: MPropertyDescription "Preview path particle shows ability's custom path"
        // m_PreviewPathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PreviewPathParticle;
        char m_PreviewPathParticle[0xe0]; // 0x1120        
        // metadata: MPropertyDescription "Particle attaching to the caster on cast event"
        // m_mapCastEventParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::AbilityCastEvent_t,CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>> m_mapCastEventParticles;
        char m_mapCastEventParticles[0x28]; // 0x1200        
        // metadata: MPropertyDescription "Trace particle when hit an enemy with targeted ability"
        // m_skillshotHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_skillshotHitParticle;
        char m_skillshotHitParticle[0xe0]; // 0x1228        
        // metadata: MPropertyDescription "Trace particle when missed an enemy with targeted ability"
        // m_skillshotMissParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_skillshotMissParticle;
        char m_skillshotMissParticle[0xe0]; // 0x1308        
        // metadata: MPropertyDescription "Preview particle on attaching to targets of this ability"
        // m_TargetingPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingPreviewParticle;
        char m_TargetingPreviewParticle[0xe0]; // 0x13e8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strSelectedSound; // 0x14c8        
        CSoundEventName m_strUnselectedSound; // 0x14d8        
        CSoundEventName m_strSelectedLoopSound; // 0x14e8        
        CSoundEventName m_strCastSound; // 0x14f8        
        CSoundEventName m_strChannelSound; // 0x1508        
        CSoundEventName m_strChannelLoopSound; // 0x1518        
        CSoundEventName m_strCastDelaySound; // 0x1528        
        CSoundEventName m_strCastDelayLoopSound; // 0x1538        
        // metadata: MPropertyDescription "plays for local player attacker dealing damage with this ability"
        CSoundEventName m_strHitConfirmationSound; // 0x1548        
        // metadata: MPropertyDescription "plays for local player victim taking damage from this ability"
        CSoundEventName m_strDamageTakenSound; // 0x1558        
        CSoundEventName m_strAbilityOffCooldownSound; // 0x1568        
        CSoundEventName m_strAbilityChargeReadySound; // 0x1578        
        bool m_bPlayMeepMop; // 0x1588        
        [[maybe_unused]] std::uint8_t pad_0x1589[0x7]; // 0x1589
        // metadata: MPropertyStartGroup "Modifiers"
        // m_AutoChannelModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_AutoChannelModifier;
        char m_AutoChannelModifier[0x10]; // 0x1590        
        // m_AutoCastDelayModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_AutoCastDelayModifier;
        char m_AutoCastDelayModifier[0x10]; // 0x15a0        
        // m_AutoIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEmbeddedSubclass<client::CBaseModifier>> m_AutoIntrinsicModifiers;
        char m_AutoIntrinsicModifiers[0x18]; // 0x15b0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CitadelAbilityVData because it is not a standard-layout class
    static_assert(sizeof(CitadelAbilityVData) == 0x15c8);
};
