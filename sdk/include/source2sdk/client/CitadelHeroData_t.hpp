#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelStatsDisplay_t.hpp"
#include "source2sdk/client/EAbilityResourceType.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"
#include "source2sdk/client/EHeroType.hpp"
#include "source2sdk/client/EItemSlotTypes_t.hpp"
#include "source2sdk/client/EModifierValue.hpp"
#include "source2sdk/client/EStatsType.hpp"
#include "source2sdk/client/HeroAnimGraphDefaultValueOverride_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/HeroLevel_t.hpp"
#include "source2sdk/client/HeroPurchaseBonus_t.hpp"
#include "source2sdk/client/HeroScalingStat_t.hpp"
#include "source2sdk/client/HeroStatsDisplay_t.hpp"
#include "source2sdk/client/HeroStatsUI_t.hpp"
#include "source2sdk/client/ItemSlotInfo_t.hpp"
#include "source2sdk/client/ModCostBonuses_t.hpp"
#include "source2sdk/client/RecommendedUpgradeHints_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCVSoundEventScriptList.hpp"
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
        // Standard-layout class: true
        // Size: 0xff8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataAssociatedFile
        // static metadata: MVDataOverlayType "1"
        #pragma pack(push, 1)
        struct CitadelHeroData_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_vecAnimGraphDefaultValueOverrides has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroAnimGraphDefaultValueOverride_t> m_vecAnimGraphDefaultValueOverrides;
            char m_vecAnimGraphDefaultValueOverrides[0x18]; // 0x8            
            uint8_t _pad0020[0x8]; // 0x20
            source2sdk::client::HeroID_t m_HeroID; // 0x28            
            uint8_t _pad002c[0x4]; // 0x2c
            CUtlString m_strHeroSortName; // 0x30            
            // metadata: MPropertyStartGroup "AnimGraph2"
            // metadata: MPropertyFriendlyName "AnimGraph2 Variant Name"
            // m_sAG2VariationName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition>> m_sAG2VariationName;
            char m_sAG2VariationName[0xe0]; // 0x38            
            // metadata: MPropertyStartGroup "Screen Space Particle FX"
            // m_hDamageTakenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hDamageTakenParticle;
            char m_hDamageTakenParticle[0xe0]; // 0x118            
            // m_hGroundDamageTakenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hGroundDamageTakenParticle;
            char m_hGroundDamageTakenParticle[0xe0]; // 0x1f8            
            // m_hDeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hDeathParticle;
            char m_hDeathParticle[0xe0]; // 0x2d8            
            // m_hLowHealthParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hLowHealthParticle;
            char m_hLowHealthParticle[0xe0]; // 0x3b8            
            // metadata: MPropertyStartGroup "Visuals"
            CPanoramaImageName m_strSelectionImage; // 0x498            
            CPanoramaImageName m_strIconImageSmall; // 0x4a8            
            CPanoramaImageName m_strIconHeroCard; // 0x4b8            
            CPanoramaImageName m_strMinimapImage; // 0x4c8            
            CPanoramaImageName m_strTopBarImage; // 0x4d8            
            CPanoramaImageName m_strTopBarVertical; // 0x4e8            
            // m_hRespawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hRespawnParticle;
            char m_hRespawnParticle[0xe0]; // 0x4f8            
            Color m_colorUI; // 0x5d8            
            Color m_colorGlowFriendly; // 0x5dc            
            Color m_colorGlowEnemy; // 0x5e0            
            Color m_colorGlowTeam1; // 0x5e4            
            Color m_colorGlowTeam2; // 0x5e8            
            uint8_t _pad05ec[0x4]; // 0x5ec
            // m_strModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strModelName;
            char m_strModelName[0xe0]; // 0x5f0            
            std::int32_t m_nModelSkin; // 0x6d0            
            uint8_t _pad06d4[0x4]; // 0x6d4
            // metadata: MPropertyDescription "If specified, this model will be used if convar citadel_use_wip_models is true."
            // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
            char m_strWIPModelName[0xe0]; // 0x6d8            
            // metadata: MPropertyDescription "If specified, this model will be used in main instead of 'Model Name'."
            // m_strMainOnlyModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strMainOnlyModelName;
            char m_strMainOnlyModelName[0xe0]; // 0x7b8            
            // metadata: MPropertyStartGroup "UI"
            std::uint64_t m_iAddedTime; // 0x898            
            // metadata: MPropertyAttributeEditor "AssetBrowse( vmap )"
            CUtlString m_strUIPortraitMap; // 0x8a0            
            // metadata: MPropertyAttributeEditor "AssetBrowse( vmap )"
            CUtlString m_strUIShoppingMap; // 0x8a8            
            source2sdk::client::HeroStatsUI_t m_heroStatsUI; // 0x8b0            
            source2sdk::client::HeroStatsDisplay_t m_heroStatsDisplay; // 0x8e0            
            source2sdk::client::CitadelStatsDisplay_t m_ShopStatDisplay; // 0x970            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDeathSound; // 0xa18            
            CSoundEventName m_strLastHitSound; // 0xa28            
            CSoundEventName m_strRosterSelectedSound; // 0xa38            
            CSoundEventName m_strRosterRemovedSound; // 0xa48            
            CSoundEventName m_strLowHealthSound; // 0xa58            
            CSoundEventName m_strHeroSpecificLowHealthSound; // 0xa68            
            CSoundEventName m_strMovementLoop; // 0xa78            
            CSoundEventName m_strPostGameVictorySound; // 0xa88            
            CSoundEventName m_strPostGameDefeatSound; // 0xa98            
            // metadata: MPropertyDescription "Teammate footstep sounds are relative to whoever we're spectating."
            // m_hGameSoundEventScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCVSoundEventScriptList>> m_hGameSoundEventScript;
            char m_hGameSoundEventScript[0xe0]; // 0xaa8            
            // m_hGeneratedVOEventScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCVSoundEventScriptList>> m_hGeneratedVOEventScript;
            char m_hGeneratedVOEventScript[0xe0]; // 0xb88            
            float m_flStealthSpeedMetersPerSecond; // 0xc68            
            // metadata: MPropertyStartGroup
            float m_flCollisionRadius; // 0xc6c            
            float m_flCollisionHeight; // 0xc70            
            float m_flStepHeight; // 0xc74            
            bool m_bInDevelopment; // 0xc78            
            bool m_bAssignedPlayersOnly; // 0xc79            
            bool m_bNewPlayerRecommended; // 0xc7a            
            bool m_bLaneTestingRecommended; // 0xc7b            
            bool m_bNeedsTesting; // 0xc7c            
            bool m_bLimitedTesting; // 0xc7d            
            bool m_bDisabled; // 0xc7e            
            bool m_bPlayerSelectable; // 0xc7f            
            bool m_bPrereleaseOnly; // 0xc80            
            uint8_t _pad0c81[0x3]; // 0xc81
            std::int32_t m_nComplexity; // 0xc84            
            // metadata: MPropertyDescription "Minimum bot match difficulty for this hero to appear as an ally bot. -1 = never."
            // metadata: MPropertyAttributeRange "-1 4"
            std::int32_t m_nAllyBotDifficulty; // 0xc88            
            // metadata: MPropertyDescription "Minimum bot match difficulty for this hero to appear as an enemy bot. -1 = never."
            // metadata: MPropertyAttributeRange "-1 4"
            std::int32_t m_nEnemyBotDifficulty; // 0xc8c            
            // metadata: MPropertyStartGroup "Low Health Settings"
            // metadata: MPropertyDescription "Percentage of health to be considered low health"
            // metadata: MPropertyAttributeRange "0 1"
            float m_flMinLowHealthPercentage; // 0xc90            
            // metadata: MPropertyDescription "Percentage of health to be considered low health when you have high max health."
            // metadata: MPropertyAttributeRange "0 1"
            float m_flMaxLowHealthPercentage; // 0xc94            
            // metadata: MPropertyDescription "Percentage of health to be considered mid health"
            // metadata: MPropertyAttributeRange "0 1"
            float m_flMinMidHealthPercentage; // 0xc98            
            // metadata: MPropertyDescription "Percentage of health to be considered mid health when you have high max health."
            // metadata: MPropertyAttributeRange "0 1"
            float m_flMaxMidHealthPercentage; // 0xc9c            
            // metadata: MPropertyDescription "Min Max Health for Remapped Value"
            float m_flMinHealthForThreshold; // 0xca0            
            // metadata: MPropertyDescription "Max Max Health for remapped value"
            float m_flMaxHealthForThreshold; // 0xca4            
            // metadata: MPropertyDescription "How long a player is deemed in combat taking or dealing damage to a player"
            float m_flInCombatWithHeroDuration; // 0xca8            
            // metadata: MPropertyDescription "How long a player is deemed in combat taking or dealing damage to a non-player"
            float m_flInCombatWithNonHeroDuration; // 0xcac            
            // metadata: MPropertyStartGroup
            // m_mapStartingStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EStatsType,float> m_mapStartingStats;
            char m_mapStartingStats[0x28]; // 0xcb0            
            // m_mapScalingStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EStatsType,source2sdk::client::HeroScalingStat_t> m_mapScalingStats;
            char m_mapScalingStats[0x28]; // 0xcd8            
            CPiecewiseCurve m_groundDashPositionCurve; // 0xd00            
            // m_mapModCostBonuses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EItemSlotTypes_t,CUtlVector<source2sdk::client::ModCostBonuses_t>> m_mapModCostBonuses;
            char m_mapModCostBonuses[0x28]; // 0xd40            
            uint8_t _pad0d68[0x18]; // 0xd68
            // m_mapBoundAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities;
            char m_mapBoundAbilities[0x28]; // 0xd80            
            // m_mapWIPAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EAbilitySlots_t,CSubclassName<4>> m_mapWIPAbilities;
            char m_mapWIPAbilities[0x28]; // 0xda8            
            // m_mapItemSlotInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EItemSlotTypes_t,source2sdk::client::ItemSlotInfo_t> m_mapItemSlotInfo;
            char m_mapItemSlotInfo[0x28]; // 0xdd0            
            // m_mapRecommendedUpgradeHints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,source2sdk::client::RecommendedUpgradeHints_t> m_mapRecommendedUpgradeHints;
            char m_mapRecommendedUpgradeHints[0x28]; // 0xdf8            
            uint8_t _pad0e20[0x28]; // 0xe20
            // m_RecommendedUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSubclassName<4>> m_RecommendedUpgrades;
            char m_RecommendedUpgrades[0x18]; // 0xe48            
            uint8_t _pad0e60[0x18]; // 0xe60
            // m_RecommendedUpgradeTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_RecommendedUpgradeTags;
            char m_RecommendedUpgradeTags[0x18]; // 0xe78            
            uint8_t _pad0e90[0x68]; // 0xe90
            // m_RecommendedAbilityOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSubclassName<4>> m_RecommendedAbilityOrder;
            char m_RecommendedAbilityOrder[0x18]; // 0xef8            
            uint8_t _pad0f10[0x18]; // 0xf10
            source2sdk::client::EAbilityResourceType m_eAbilityResourceType; // 0xf28            
            uint8_t _pad0f2c[0x4]; // 0xf2c
            CUtlString m_strGunTag; // 0xf30            
            // m_vecHeroTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecHeroTags;
            char m_vecHeroTags[0x18]; // 0xf38            
            source2sdk::client::EHeroType m_eHeroType; // 0xf50            
            uint8_t _pad0f54[0x4]; // 0xf54
            CUtlString m_strRosterBackgroundLayout; // 0xf58            
            CUtlString m_strHideoutRichPresence; // 0xf60            
            uint8_t _pad0f68[0x18]; // 0xf68
            // m_mapStandardLevelUpUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EModifierValue,float> m_mapStandardLevelUpUpgrades;
            char m_mapStandardLevelUpUpgrades[0x28]; // 0xf80            
            // m_mapLevelInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<std::int32_t,source2sdk::client::HeroLevel_t> m_mapLevelInfo;
            char m_mapLevelInfo[0x28]; // 0xfa8            
            // m_mapPurchaseBonuses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EItemSlotTypes_t,CUtlVector<source2sdk::client::HeroPurchaseBonus_t>> m_mapPurchaseBonuses;
            char m_mapPurchaseBonuses[0x28]; // 0xfd0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_vecAnimGraphDefaultValueOverrides) == 0x8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_HeroID) == 0x28);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strHeroSortName) == 0x30);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_sAG2VariationName) == 0x38);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hDamageTakenParticle) == 0x118);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hGroundDamageTakenParticle) == 0x1f8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hDeathParticle) == 0x2d8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hLowHealthParticle) == 0x3b8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strSelectionImage) == 0x498);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strIconImageSmall) == 0x4a8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strIconHeroCard) == 0x4b8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strMinimapImage) == 0x4c8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strTopBarImage) == 0x4d8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strTopBarVertical) == 0x4e8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hRespawnParticle) == 0x4f8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_colorUI) == 0x5d8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_colorGlowFriendly) == 0x5dc);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_colorGlowEnemy) == 0x5e0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_colorGlowTeam1) == 0x5e4);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_colorGlowTeam2) == 0x5e8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strModelName) == 0x5f0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_nModelSkin) == 0x6d0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strWIPModelName) == 0x6d8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strMainOnlyModelName) == 0x7b8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_iAddedTime) == 0x898);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strUIPortraitMap) == 0x8a0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strUIShoppingMap) == 0x8a8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_heroStatsUI) == 0x8b0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_heroStatsDisplay) == 0x8e0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_ShopStatDisplay) == 0x970);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strDeathSound) == 0xa18);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strLastHitSound) == 0xa28);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strRosterSelectedSound) == 0xa38);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strRosterRemovedSound) == 0xa48);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strLowHealthSound) == 0xa58);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strHeroSpecificLowHealthSound) == 0xa68);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strMovementLoop) == 0xa78);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strPostGameVictorySound) == 0xa88);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strPostGameDefeatSound) == 0xa98);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hGameSoundEventScript) == 0xaa8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hGeneratedVOEventScript) == 0xb88);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flStealthSpeedMetersPerSecond) == 0xc68);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flCollisionRadius) == 0xc6c);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flCollisionHeight) == 0xc70);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flStepHeight) == 0xc74);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bInDevelopment) == 0xc78);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bAssignedPlayersOnly) == 0xc79);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bNewPlayerRecommended) == 0xc7a);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bLaneTestingRecommended) == 0xc7b);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bNeedsTesting) == 0xc7c);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bLimitedTesting) == 0xc7d);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bDisabled) == 0xc7e);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bPlayerSelectable) == 0xc7f);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bPrereleaseOnly) == 0xc80);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_nComplexity) == 0xc84);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_nAllyBotDifficulty) == 0xc88);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_nEnemyBotDifficulty) == 0xc8c);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMinLowHealthPercentage) == 0xc90);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMaxLowHealthPercentage) == 0xc94);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMinMidHealthPercentage) == 0xc98);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMaxMidHealthPercentage) == 0xc9c);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMinHealthForThreshold) == 0xca0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMaxHealthForThreshold) == 0xca4);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flInCombatWithHeroDuration) == 0xca8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flInCombatWithNonHeroDuration) == 0xcac);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapStartingStats) == 0xcb0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapScalingStats) == 0xcd8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_groundDashPositionCurve) == 0xd00);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapModCostBonuses) == 0xd40);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapBoundAbilities) == 0xd80);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapWIPAbilities) == 0xda8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapItemSlotInfo) == 0xdd0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapRecommendedUpgradeHints) == 0xdf8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_RecommendedUpgrades) == 0xe48);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_RecommendedUpgradeTags) == 0xe78);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_RecommendedAbilityOrder) == 0xef8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_eAbilityResourceType) == 0xf28);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strGunTag) == 0xf30);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_vecHeroTags) == 0xf38);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_eHeroType) == 0xf50);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strRosterBackgroundLayout) == 0xf58);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strHideoutRichPresence) == 0xf60);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapStandardLevelUpUpgrades) == 0xf80);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapLevelInfo) == 0xfa8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapPurchaseBonuses) == 0xfd0);
        
        static_assert(sizeof(source2sdk::client::CitadelHeroData_t) == 0xff8);
    };
};
