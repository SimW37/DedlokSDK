#pragma once
#include "source2sdk/client/CitadelStatsDisplay_t.hpp"
#include "source2sdk/client/EAbilityResourceType.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"
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
    // Standard-layout class: true
    // Size: 0xf58
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // m_vecAnimGraphDefaultValueOverrides has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::HeroAnimGraphDefaultValueOverride_t> m_vecAnimGraphDefaultValueOverrides;
        char m_vecAnimGraphDefaultValueOverrides[0x18]; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x20[0x8]; // 0x20
        client::HeroID_t m_HeroID; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4]; // 0x2c
        // metadata: MPropertyStartGroup "AnimGraph2"
        // metadata: MPropertyFriendlyName "AnimGraph2 Variant Name"
        // m_sAG2VariationName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCNmGraphDefinition>> m_sAG2VariationName;
        char m_sAG2VariationName[0xe0]; // 0x30        
        // metadata: MPropertyStartGroup "Screen Space Particle FX"
        // m_hDamageTakenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hDamageTakenParticle;
        char m_hDamageTakenParticle[0xe0]; // 0x110        
        // m_hGroundDamageTakenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hGroundDamageTakenParticle;
        char m_hGroundDamageTakenParticle[0xe0]; // 0x1f0        
        // m_hDeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hDeathParticle;
        char m_hDeathParticle[0xe0]; // 0x2d0        
        // m_hLowHealthParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hLowHealthParticle;
        char m_hLowHealthParticle[0xe0]; // 0x3b0        
        // metadata: MPropertyStartGroup "Visuals"
        CPanoramaImageName m_strSelectionImage; // 0x490        
        CPanoramaImageName m_strIconImageSmall; // 0x4a0        
        CPanoramaImageName m_strIconHeroCard; // 0x4b0        
        CPanoramaImageName m_strMinimapImage; // 0x4c0        
        CPanoramaImageName m_strTopBarImage; // 0x4d0        
        CPanoramaImageName m_strTopBarVertical; // 0x4e0        
        // m_hRespawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hRespawnParticle;
        char m_hRespawnParticle[0xe0]; // 0x4f0        
        Color m_colorUI; // 0x5d0        
        Color m_colorGlowFriendly; // 0x5d4        
        Color m_colorGlowEnemy; // 0x5d8        
        Color m_colorGlowTeam1; // 0x5dc        
        Color m_colorGlowTeam2; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5e4[0x4]; // 0x5e4
        // m_strModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strModelName;
        char m_strModelName[0xe0]; // 0x5e8        
        int32_t m_nModelSkin; // 0x6c8        
        [[maybe_unused]] std::uint8_t pad_0x6cc[0x4]; // 0x6cc
        // metadata: MPropertyDescription "If specified, this model will be used if convar citadel_use_wip_models is true."
        // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
        char m_strWIPModelName[0xe0]; // 0x6d0        
        // metadata: MPropertyDescription "If specified, this model will be used in main instead of 'Model Name'."
        // m_strMainOnlyModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strMainOnlyModelName;
        char m_strMainOnlyModelName[0xe0]; // 0x7b0        
        // metadata: MPropertyStartGroup "UI"
        uint64_t m_iAddedTime; // 0x890        
        // metadata: MPropertyAttributeEditor "AssetBrowse( vmap )"
        CUtlString m_strUIPortraitMap; // 0x898        
        // metadata: MPropertyAttributeEditor "AssetBrowse( vmap )"
        CUtlString m_strUIShoppingMap; // 0x8a0        
        client::HeroStatsUI_t m_heroStatsUI; // 0x8a8        
        client::HeroStatsDisplay_t m_heroStatsDisplay; // 0x8d8        
        client::CitadelStatsDisplay_t m_ShopStatDisplay; // 0x968        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDeathSound; // 0xa10        
        CSoundEventName m_strLastHitSound; // 0xa20        
        CSoundEventName m_strRosterSelectedSound; // 0xa30        
        CSoundEventName m_strRosterRemovedSound; // 0xa40        
        CSoundEventName m_strLowHealthSound; // 0xa50        
        CSoundEventName m_strHeroSpecificLowHealthSound; // 0xa60        
        CSoundEventName m_strMovementLoop; // 0xa70        
        // metadata: MPropertyDescription "Teammate footstep sounds are relative to whoever we're spectating."
        // m_hGameSoundEventScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCVSoundEventScriptList>> m_hGameSoundEventScript;
        char m_hGameSoundEventScript[0xe0]; // 0xa80        
        // m_hGeneratedVOEventScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCVSoundEventScriptList>> m_hGeneratedVOEventScript;
        char m_hGeneratedVOEventScript[0xe0]; // 0xb60        
        float m_flStealthSpeedMetersPerSecond; // 0xc40        
        // metadata: MPropertyStartGroup
        float m_flCollisionRadius; // 0xc44        
        float m_flCollisionHeight; // 0xc48        
        float m_flStepHeight; // 0xc4c        
        bool m_bInDevelopment; // 0xc50        
        bool m_bAssignedPlayersOnly; // 0xc51        
        bool m_bNewPlayerRecommended; // 0xc52        
        bool m_bLaneTestingRecommended; // 0xc53        
        bool m_bNeedsTesting; // 0xc54        
        bool m_bLimitedTesting; // 0xc55        
        bool m_bDisabled; // 0xc56        
        bool m_bPlayerSelectable; // 0xc57        
        bool m_bAvailableInHeroLabs; // 0xc58        
        [[maybe_unused]] std::uint8_t pad_0xc59[0x3]; // 0xc59
        int32_t m_nComplexity; // 0xc5c        
        // metadata: MPropertyDescription "Minimum bot match difficulty for this hero to appear as an ally bot. -1 = never."
        // metadata: MPropertyAttributeRange "-1 4"
        int32_t m_nAllyBotDifficulty; // 0xc60        
        // metadata: MPropertyDescription "Minimum bot match difficulty for this hero to appear as an enemy bot. -1 = never."
        // metadata: MPropertyAttributeRange "-1 4"
        int32_t m_nEnemyBotDifficulty; // 0xc64        
        // metadata: MPropertyStartGroup "Low Health Settings"
        // metadata: MPropertyDescription "Percentage of health to be considered low health"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flMinLowHealthPercentage; // 0xc68        
        // metadata: MPropertyDescription "Percentage of health to be considered low health when you have high max health."
        // metadata: MPropertyAttributeRange "0 1"
        float m_flMaxLowHealthPercentage; // 0xc6c        
        // metadata: MPropertyDescription "Percentage of health to be considered mid health"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flMinMidHealthPercentage; // 0xc70        
        // metadata: MPropertyDescription "Percentage of health to be considered mid health when you have high max health."
        // metadata: MPropertyAttributeRange "0 1"
        float m_flMaxMidHealthPercentage; // 0xc74        
        // metadata: MPropertyDescription "Min Max Health for Remapped Value"
        float m_flMinHealthForThreshold; // 0xc78        
        // metadata: MPropertyDescription "Max Max Health for remapped value"
        float m_flMaxHealthForThreshold; // 0xc7c        
        // metadata: MPropertyStartGroup
        // m_mapStartingStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EStatsType,float> m_mapStartingStats;
        char m_mapStartingStats[0x28]; // 0xc80        
        // m_mapScalingStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EStatsType,client::HeroScalingStat_t> m_mapScalingStats;
        char m_mapScalingStats[0x28]; // 0xca8        
        // m_mapModCostBonuses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EItemSlotTypes_t,CUtlVector<client::ModCostBonuses_t>> m_mapModCostBonuses;
        char m_mapModCostBonuses[0x28]; // 0xcd0        
        [[maybe_unused]] std::uint8_t pad_0xcf8[0x18]; // 0xcf8
        // m_mapBoundAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities;
        char m_mapBoundAbilities[0x28]; // 0xd10        
        // m_mapWIPAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapWIPAbilities;
        char m_mapWIPAbilities[0x28]; // 0xd38        
        // m_mapItemSlotInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EItemSlotTypes_t,client::ItemSlotInfo_t> m_mapItemSlotInfo;
        char m_mapItemSlotInfo[0x28]; // 0xd60        
        // m_mapRecommendedUpgradeHints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<CUtlString,client::RecommendedUpgradeHints_t> m_mapRecommendedUpgradeHints;
        char m_mapRecommendedUpgradeHints[0x28]; // 0xd88        
        [[maybe_unused]] std::uint8_t pad_0xdb0[0x28]; // 0xdb0
        // m_RecommendedUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSubclassName<4>> m_RecommendedUpgrades;
        char m_RecommendedUpgrades[0x18]; // 0xdd8        
        [[maybe_unused]] std::uint8_t pad_0xdf0[0x18]; // 0xdf0
        // m_RecommendedUpgradeTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_RecommendedUpgradeTags;
        char m_RecommendedUpgradeTags[0x18]; // 0xe08        
        [[maybe_unused]] std::uint8_t pad_0xe20[0x70]; // 0xe20
        // m_RecommendedAbilityOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSubclassName<4>> m_RecommendedAbilityOrder;
        char m_RecommendedAbilityOrder[0x18]; // 0xe90        
        [[maybe_unused]] std::uint8_t pad_0xea8[0x18]; // 0xea8
        client::EAbilityResourceType m_eAbilityResourceType; // 0xec0        
        [[maybe_unused]] std::uint8_t pad_0xec4[0x1c]; // 0xec4
        // m_mapStandardLevelUpUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EModifierValue,float> m_mapStandardLevelUpUpgrades;
        char m_mapStandardLevelUpUpgrades[0x28]; // 0xee0        
        // m_mapLevelInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<int32_t,client::HeroLevel_t> m_mapLevelInfo;
        char m_mapLevelInfo[0x28]; // 0xf08        
        // m_mapPurchaseBonuses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EItemSlotTypes_t,CUtlVector<client::HeroPurchaseBonus_t>> m_mapPurchaseBonuses;
        char m_mapPurchaseBonuses[0x28]; // 0xf30        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelHeroData_t, m_vecAnimGraphDefaultValueOverrides) == 0x8);
    static_assert(offsetof(CitadelHeroData_t, m_HeroID) == 0x28);
    static_assert(offsetof(CitadelHeroData_t, m_sAG2VariationName) == 0x30);
    static_assert(offsetof(CitadelHeroData_t, m_hDamageTakenParticle) == 0x110);
    static_assert(offsetof(CitadelHeroData_t, m_hGroundDamageTakenParticle) == 0x1f0);
    static_assert(offsetof(CitadelHeroData_t, m_hDeathParticle) == 0x2d0);
    static_assert(offsetof(CitadelHeroData_t, m_hLowHealthParticle) == 0x3b0);
    static_assert(offsetof(CitadelHeroData_t, m_strSelectionImage) == 0x490);
    static_assert(offsetof(CitadelHeroData_t, m_strIconImageSmall) == 0x4a0);
    static_assert(offsetof(CitadelHeroData_t, m_strIconHeroCard) == 0x4b0);
    static_assert(offsetof(CitadelHeroData_t, m_strMinimapImage) == 0x4c0);
    static_assert(offsetof(CitadelHeroData_t, m_strTopBarImage) == 0x4d0);
    static_assert(offsetof(CitadelHeroData_t, m_strTopBarVertical) == 0x4e0);
    static_assert(offsetof(CitadelHeroData_t, m_hRespawnParticle) == 0x4f0);
    static_assert(offsetof(CitadelHeroData_t, m_colorUI) == 0x5d0);
    static_assert(offsetof(CitadelHeroData_t, m_colorGlowFriendly) == 0x5d4);
    static_assert(offsetof(CitadelHeroData_t, m_colorGlowEnemy) == 0x5d8);
    static_assert(offsetof(CitadelHeroData_t, m_colorGlowTeam1) == 0x5dc);
    static_assert(offsetof(CitadelHeroData_t, m_colorGlowTeam2) == 0x5e0);
    static_assert(offsetof(CitadelHeroData_t, m_strModelName) == 0x5e8);
    static_assert(offsetof(CitadelHeroData_t, m_nModelSkin) == 0x6c8);
    static_assert(offsetof(CitadelHeroData_t, m_strWIPModelName) == 0x6d0);
    static_assert(offsetof(CitadelHeroData_t, m_strMainOnlyModelName) == 0x7b0);
    static_assert(offsetof(CitadelHeroData_t, m_iAddedTime) == 0x890);
    static_assert(offsetof(CitadelHeroData_t, m_strUIPortraitMap) == 0x898);
    static_assert(offsetof(CitadelHeroData_t, m_strUIShoppingMap) == 0x8a0);
    static_assert(offsetof(CitadelHeroData_t, m_heroStatsUI) == 0x8a8);
    static_assert(offsetof(CitadelHeroData_t, m_heroStatsDisplay) == 0x8d8);
    static_assert(offsetof(CitadelHeroData_t, m_ShopStatDisplay) == 0x968);
    static_assert(offsetof(CitadelHeroData_t, m_strDeathSound) == 0xa10);
    static_assert(offsetof(CitadelHeroData_t, m_strLastHitSound) == 0xa20);
    static_assert(offsetof(CitadelHeroData_t, m_strRosterSelectedSound) == 0xa30);
    static_assert(offsetof(CitadelHeroData_t, m_strRosterRemovedSound) == 0xa40);
    static_assert(offsetof(CitadelHeroData_t, m_strLowHealthSound) == 0xa50);
    static_assert(offsetof(CitadelHeroData_t, m_strHeroSpecificLowHealthSound) == 0xa60);
    static_assert(offsetof(CitadelHeroData_t, m_strMovementLoop) == 0xa70);
    static_assert(offsetof(CitadelHeroData_t, m_hGameSoundEventScript) == 0xa80);
    static_assert(offsetof(CitadelHeroData_t, m_hGeneratedVOEventScript) == 0xb60);
    static_assert(offsetof(CitadelHeroData_t, m_flStealthSpeedMetersPerSecond) == 0xc40);
    static_assert(offsetof(CitadelHeroData_t, m_flCollisionRadius) == 0xc44);
    static_assert(offsetof(CitadelHeroData_t, m_flCollisionHeight) == 0xc48);
    static_assert(offsetof(CitadelHeroData_t, m_flStepHeight) == 0xc4c);
    static_assert(offsetof(CitadelHeroData_t, m_bInDevelopment) == 0xc50);
    static_assert(offsetof(CitadelHeroData_t, m_bAssignedPlayersOnly) == 0xc51);
    static_assert(offsetof(CitadelHeroData_t, m_bNewPlayerRecommended) == 0xc52);
    static_assert(offsetof(CitadelHeroData_t, m_bLaneTestingRecommended) == 0xc53);
    static_assert(offsetof(CitadelHeroData_t, m_bNeedsTesting) == 0xc54);
    static_assert(offsetof(CitadelHeroData_t, m_bLimitedTesting) == 0xc55);
    static_assert(offsetof(CitadelHeroData_t, m_bDisabled) == 0xc56);
    static_assert(offsetof(CitadelHeroData_t, m_bPlayerSelectable) == 0xc57);
    static_assert(offsetof(CitadelHeroData_t, m_bAvailableInHeroLabs) == 0xc58);
    static_assert(offsetof(CitadelHeroData_t, m_nComplexity) == 0xc5c);
    static_assert(offsetof(CitadelHeroData_t, m_nAllyBotDifficulty) == 0xc60);
    static_assert(offsetof(CitadelHeroData_t, m_nEnemyBotDifficulty) == 0xc64);
    static_assert(offsetof(CitadelHeroData_t, m_flMinLowHealthPercentage) == 0xc68);
    static_assert(offsetof(CitadelHeroData_t, m_flMaxLowHealthPercentage) == 0xc6c);
    static_assert(offsetof(CitadelHeroData_t, m_flMinMidHealthPercentage) == 0xc70);
    static_assert(offsetof(CitadelHeroData_t, m_flMaxMidHealthPercentage) == 0xc74);
    static_assert(offsetof(CitadelHeroData_t, m_flMinHealthForThreshold) == 0xc78);
    static_assert(offsetof(CitadelHeroData_t, m_flMaxHealthForThreshold) == 0xc7c);
    static_assert(offsetof(CitadelHeroData_t, m_mapStartingStats) == 0xc80);
    static_assert(offsetof(CitadelHeroData_t, m_mapScalingStats) == 0xca8);
    static_assert(offsetof(CitadelHeroData_t, m_mapModCostBonuses) == 0xcd0);
    static_assert(offsetof(CitadelHeroData_t, m_mapBoundAbilities) == 0xd10);
    static_assert(offsetof(CitadelHeroData_t, m_mapWIPAbilities) == 0xd38);
    static_assert(offsetof(CitadelHeroData_t, m_mapItemSlotInfo) == 0xd60);
    static_assert(offsetof(CitadelHeroData_t, m_mapRecommendedUpgradeHints) == 0xd88);
    static_assert(offsetof(CitadelHeroData_t, m_RecommendedUpgrades) == 0xdd8);
    static_assert(offsetof(CitadelHeroData_t, m_RecommendedUpgradeTags) == 0xe08);
    static_assert(offsetof(CitadelHeroData_t, m_RecommendedAbilityOrder) == 0xe90);
    static_assert(offsetof(CitadelHeroData_t, m_eAbilityResourceType) == 0xec0);
    static_assert(offsetof(CitadelHeroData_t, m_mapStandardLevelUpUpgrades) == 0xee0);
    static_assert(offsetof(CitadelHeroData_t, m_mapLevelInfo) == 0xf08);
    static_assert(offsetof(CitadelHeroData_t, m_mapPurchaseBonuses) == 0xf30);
    
    static_assert(sizeof(CitadelHeroData_t) == 0xf58);
};
