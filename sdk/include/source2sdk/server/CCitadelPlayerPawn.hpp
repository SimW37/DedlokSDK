#pragma once
#include "source2sdk/client/CMsgLaneColor.hpp"
#include "source2sdk/client/CTakeDamageResult.hpp"
#include "source2sdk/client/ECitadelPingLocation_t.hpp"
#include "source2sdk/client/FullSellPriceAbilityUpgrades_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelHeroComponent.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CCitadelPlayerPawnBase.hpp"
#include "source2sdk/server/CCitadelRegenComponent.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CCitadelBaseAbility;
};

namespace source2sdk::server
{
    class CCitadelPlayerBot;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x17d0
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_flEncodedController"
    // static metadata: MNetworkExcludeByName "m_flPoseParameter"
    // static metadata: MNetworkUserGroupProxy "CCitadelPlayerPawn"
    // static metadata: MNetworkUserGroupProxy "CCitadelPlayerPawn"
    // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
    // static metadata: MNetworkIncludeByName "m_pCameraServices"
    // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_MovementServices m_pMovementServices"
    // static metadata: MNetworkIncludeByName "m_pMovementServices"
    // static metadata: MNetworkVarNames "QAngle m_angClientCamera"
    // static metadata: MNetworkVarNames "QAngle m_angEyeAngles"
    // static metadata: MNetworkVarNames "QAngle m_angLockedEyeAngles"
    // static metadata: MNetworkVarNames "int32 m_nLevel"
    // static metadata: MNetworkVarNames "int32 m_nCurrencies"
    // static metadata: MNetworkVarNames "int32 m_nSpentCurrencies"
    // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastSpawnTime"
    // static metadata: MNetworkVarNames "bool m_bInRegenerationZone"
    // static metadata: MNetworkVarNames "bool m_bInItemShopZone"
    // static metadata: MNetworkVarNames "GameTime_t m_timeRevealedOnMinimapByNPC"
    // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecFullSellPriceItems"
    // static metadata: MNetworkVarNames "FullSellPriceAbilityUpgrades_t m_vecFullSellPriceAbilityUpgrades"
    // static metadata: MNetworkVarNames "bool m_bNetworkDisconnected"
    // static metadata: MNetworkVarNames "bool m_bHasIncomingThreats"
    // static metadata: MNetworkVarNames "bool m_bLearningAbility"
    // static metadata: MNetworkVarNames "int m_nFlashStartTick"
    // static metadata: MNetworkVarNames "int m_nFlashMaxStartTick"
    // static metadata: MNetworkVarNames "int m_nFlashFadeStartTick"
    // static metadata: MNetworkVarNames "int m_nFlashEndTick"
    // static metadata: MNetworkVarNames "int8 m_nFlashMaxAlpha"
    // static metadata: MNetworkVarNames "int32 m_nDeducedLane"
    // static metadata: MNetworkVarNames "bool m_bDismissedReportCard"
    // static metadata: MNetworkVarNames "float m_flCurrentHealingAmount"
    // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
    // static metadata: MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
    // static metadata: MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    // static metadata: MNetworkVarNames "CMsgLaneColor m_eZipLineLaneColor"
    // static metadata: MNetworkVarNames "int8 m_nSuccessiveDucks"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastDuckTime"
    // static metadata: MNetworkVarNames "bool m_bAnimGraphMovementClipped"
    // static metadata: MNetworkVarNames "bool m_bAnimGraphMovementDisableGravity"
    // static metadata: MNetworkVarNames "bool m_bAnimGraphMovementDirectAirControl"
    // static metadata: MNetworkVarNames "GameTime_t m_flPredTimeSlowedStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flPredTimeSlowedEnd"
    // static metadata: MNetworkVarNames "float32 m_flPredSlowSpeed"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeSlowedStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeSlowedEnd"
    // static metadata: MNetworkVarNames "float32 m_flSlowSpeed"
    // static metadata: MNetworkVarNames "GameTime_t m_flSprintAnimSuppressEndTime"
    #pragma pack(push, 1)
    class CCitadelPlayerPawn : public server::CCitadelPlayerPawnBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdb0[0x18]; // 0xdb0
        int32_t m_arrGoldSources[38]; // 0xdc8        
        [[maybe_unused]] std::uint8_t pad_0xe60[0x28]; // 0xe60
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "SourceTVExclusive"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angClientCamera; // 0xe88        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "RemotePlayersOnly"
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0xe94        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        QAngle m_angLockedEyeAngles; // 0xea0        
        // metadata: MNetworkEnable
        int32_t m_nLevel; // 0xeac        
        // metadata: MNetworkEnable
        int32_t m_nCurrencies[4]; // 0xeb0        
        // metadata: MNetworkEnable
        int32_t m_nSpentCurrencies[4]; // 0xec0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRespawnTime; // 0xed0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastSpawnTime; // 0xed4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        bool m_bInRegenerationZone; // 0xed8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bInItemShopZone; // 0xed9        
        [[maybe_unused]] std::uint8_t pad_0xeda[0x2]; // 0xeda
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xedc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
        char m_vecFullSellPriceItems[0x18]; // 0xee0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
        char m_vecFullSellPriceAbilityUpgrades[0x60]; // 0xef8        
        // metadata: MNetworkEnable
        bool m_bNetworkDisconnected; // 0xf58        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bHasIncomingThreats; // 0xf59        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bLearningAbility; // 0xf5a        
        [[maybe_unused]] std::uint8_t pad_0xf5b[0x1]; // 0xf5b
        // metadata: MNetworkEnable
        int32_t m_nFlashStartTick; // 0xf5c        
        // metadata: MNetworkEnable
        int32_t m_nFlashMaxStartTick; // 0xf60        
        // metadata: MNetworkEnable
        int32_t m_nFlashFadeStartTick; // 0xf64        
        // metadata: MNetworkEnable
        int32_t m_nFlashEndTick; // 0xf68        
        // metadata: MNetworkEnable
        int8_t m_nFlashMaxAlpha; // 0xf6c        
        [[maybe_unused]] std::uint8_t pad_0xf6d[0x3]; // 0xf6d
        // metadata: MNetworkEnable
        int32_t m_nDeducedLane; // 0xf70        
        // metadata: MNetworkEnable
        bool m_bDismissedReportCard; // 0xf74        
        [[maybe_unused]] std::uint8_t pad_0xf75[0x3]; // 0xf75
        // metadata: MNetworkEnable
        float m_flCurrentHealingAmount; // 0xf78        
        // m_hAbilityRequiresDebounce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbilityRequiresDebounce;
        char m_hAbilityRequiresDebounce[0x4]; // 0xf7c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        // metadata: MNetworkPriority "32"
        server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xf80        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelHeroComponent"
        // metadata: MNetworkAlias "CCitadelHeroComponent"
        // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
        server::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x1188        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelRegenComponent"
        // metadata: MNetworkAlias "CCitadelRegenComponent"
        // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
        server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x11a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1328        
        bool m_bHasShopOpen; // 0x1340        
        [[maybe_unused]] std::uint8_t pad_0x1341[0x3]; // 0x1341
        client::ECitadelPingLocation_t m_eCurrentPingLocation; // 0x1344        
        [[maybe_unused]] std::uint8_t pad_0x1348[0xc]; // 0x1348
        float m_flLastRegenThinkTime; // 0x1354        
        float m_flCitadelDamageAccumulator; // 0x1358        
        [[maybe_unused]] std::uint8_t pad_0x135c[0x34]; // 0x135c
        int32_t m_nBulletsFiredAtUs; // 0x1390        
        int32_t m_nBulletsHitOnUs; // 0x1394        
        int32_t m_nHeadshotsOnUs; // 0x1398        
        entity2::GameTime_t m_flLastGameStatsRecorded; // 0x139c        
        float m_flUnusedGoldRemainder; // 0x13a0        
        float m_flUnusedAbilityRemainder; // 0x13a4        
        int32_t m_nBulletsFiredAtEnemyHeroes; // 0x13a8        
        int32_t m_nBulletsHitOnEnemyHeroes; // 0x13ac        
        int32_t m_nHeadshotsOnEnemyHeroes; // 0x13b0        
        int32_t m_nLuckyShotsOnEnemyHeroes; // 0x13b4        
        int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x13b8        
        int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x13bc        
        // m_hEnemyHeroClientAimedAtAttackTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEnemyHeroClientAimedAtAttackTime;
        char m_hEnemyHeroClientAimedAtAttackTime[0x4]; // 0x13c0        
        bool m_bHasOverrideSpawnPos; // 0x13c4        
        [[maybe_unused]] std::uint8_t pad_0x13c5[0x3]; // 0x13c5
        Vector m_vecOverrideSpawnPos; // 0x13c8        
        int32_t m_iKillStreak; // 0x13d4        
        int32_t m_iTrooperWaveEventCount; // 0x13d8        
        int32_t m_iTrooperWaveNumber; // 0x13dc        
        int32_t m_iPrevTrooperWaveEventCount; // 0x13e0        
        int32_t m_iPrevTrooperWaveNumber; // 0x13e4        
        bool m_bHasStartedPlaying; // 0x13e8        
        [[maybe_unused]] std::uint8_t pad_0x13e9[0x3]; // 0x13e9
        // m_hRevengeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRevengeTarget;
        char m_hRevengeTarget[0x4]; // 0x13ec        
        [[maybe_unused]] std::uint8_t pad_0x13f0[0xc]; // 0x13f0
        entity2::GameTime_t m_flLastHurtTimeByEnemyHero; // 0x13fc        
        entity2::GameTime_t m_flLastHurtByNeutral; // 0x1400        
        entity2::GameTime_t m_flLastHurtByEnemyNPC; // 0x1404        
        entity2::GameTime_t m_flLastTimeLookedAtByDirector; // 0x1408        
        [[maybe_unused]] std::uint8_t pad_0x140c[0x4]; // 0x140c
        client::CTakeDamageResult m_ragdollDamage; // 0x1410        
        // m_vecThreats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecThreats;
        char m_vecThreats[0x18]; // 0x1430        
        [[maybe_unused]] std::uint8_t pad_0x1448[0x154]; // 0x1448
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::CMsgLaneColor m_eZipLineLaneColor; // 0x159c        
        bool m_bCanBecomeRagdoll; // 0x15a0        
        [[maybe_unused]] std::uint8_t pad_0x15a1[0x3]; // 0x15a1
        float m_blindUntilTime; // 0x15a4        
        float m_blindStartTime; // 0x15a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int8_t m_nSuccessiveDucks; // 0x15ac        
        [[maybe_unused]] std::uint8_t pad_0x15ad[0x3]; // 0x15ad
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flLastDuckTime; // 0x15b0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementClipped; // 0x15b4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementDisableGravity; // 0x15b5        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementDirectAirControl; // 0x15b6        
        [[maybe_unused]] std::uint8_t pad_0x15b7[0x1]; // 0x15b7
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flPredTimeSlowedStart; // 0x15b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x15bc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flPredSlowSpeed; // 0x15c0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x15c4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x15d4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flSlowSpeed[4]; // 0x15e4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x15f4        
        bool m_bPreventAbilityLearning; // 0x15f8        
        [[maybe_unused]] std::uint8_t pad_0x15f9[0x3]; // 0x15f9
        int32_t m_iCurSlowSlot; // 0x15fc        
        [[maybe_unused]] std::uint8_t pad_0x1600[0x4]; // 0x1600
        client::ParticleIndex_t m_nRespawnParticleIndex; // 0x1604        
        client::ParticleIndex_t m_nShoppingParticle; // 0x1608        
        [[maybe_unused]] std::uint8_t pad_0x160c[0x2c]; // 0x160c
        server::CCitadelPlayerBot* m_pBot; // 0x1638        
        [[maybe_unused]] std::uint8_t pad_0x1640[0x158]; // 0x1640
        bool m_bLocoLeanTriggeredForDirection; // 0x1798        
        bool m_bLocoRunToStopCanTrigger; // 0x1799        
        [[maybe_unused]] std::uint8_t pad_0x179a[0x2]; // 0x179a
        float m_flCrouchFraction; // 0x179c        
        float m_flCrouchSpeed; // 0x17a0        
        Vector m_vShootTestOffsetStanding; // 0x17a4        
        Vector m_vShootTestOffsetCrouching; // 0x17b0        
        entity2::GameTime_t m_leanStartTime; // 0x17bc        
        entity2::GameTick_t m_nLastUnpredictableMovementTick; // 0x17c0        
        [[maybe_unused]] std::uint8_t pad_0x17c4[0xc];
        
        // Datamap fields:
        // CCitadelPlayer_CameraServices m_pCameraServices; // 0xc20
        // CCitadelPlayer_MovementServices m_pMovementServices; // 0xc28
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerPawn) == 0x17d0);
};
