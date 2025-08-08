#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CMsgLaneColor.hpp"
#include "source2sdk/client/CTakeDamageResult.hpp"
#include "source2sdk/client/ECitadelPingLocation_t.hpp"
#include "source2sdk/client/EWallJumpFacing.hpp"
#include "source2sdk/client/FullSellPriceAbilityUpgrades_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelHeroComponent.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CCitadelPlayerPawnBase.hpp"
#include "source2sdk/server/CCitadelRecentDamage.hpp"
#include "source2sdk/server/CCitadelRegenComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBaseAbility;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCitadelPlayerBot;
    };
};

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
        // Size: 0x1968
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
        // static metadata: MNetworkVarNames "bool m_bInHideoutZone"
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
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sInCombat"
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sPlayerDamageTaken"
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sPlayerDamageDealt"
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
        class CCitadelPlayerPawn : public source2sdk::server::CCitadelPlayerPawnBase
        {
        public:
            uint8_t _pad0dd8[0x20]; // 0xdd8
            std::int32_t m_arrGoldSources[41]; // 0xdf8            
            uint8_t _pad0e9c[0x2c]; // 0xe9c
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "SourceTVExclusive"
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkPriority "32"
            QAngle m_angClientCamera; // 0xec8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "RemotePlayersOnly"
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkPriority "32"
            QAngle m_angEyeAngles; // 0xed4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            QAngle m_angLockedEyeAngles; // 0xee0            
            // metadata: MNetworkEnable
            std::int32_t m_nLevel; // 0xeec            
            // metadata: MNetworkEnable
            std::int32_t m_nCurrencies[4]; // 0xef0            
            // metadata: MNetworkEnable
            std::int32_t m_nSpentCurrencies[4]; // 0xf00            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0xf10            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastSpawnTime; // 0xf14            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            bool m_bInRegenerationZone; // 0xf18            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInItemShopZone; // 0xf19            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInHideoutZone; // 0xf1a            
            uint8_t _pad0f1b[0x1]; // 0xf1b
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xf1c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
            char m_vecFullSellPriceItems[0x18]; // 0xf20            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
            char m_vecFullSellPriceAbilityUpgrades[0x60]; // 0xf38            
            // metadata: MNetworkEnable
            bool m_bNetworkDisconnected; // 0xf98            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bHasIncomingThreats; // 0xf99            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bLearningAbility; // 0xf9a            
            uint8_t _pad0f9b[0x1]; // 0xf9b
            // metadata: MNetworkEnable
            std::int32_t m_nFlashStartTick; // 0xf9c            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashMaxStartTick; // 0xfa0            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashFadeStartTick; // 0xfa4            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashEndTick; // 0xfa8            
            // metadata: MNetworkEnable
            std::int8_t m_nFlashMaxAlpha; // 0xfac            
            uint8_t _pad0fad[0x3]; // 0xfad
            // metadata: MNetworkEnable
            std::int32_t m_nDeducedLane; // 0xfb0            
            // metadata: MNetworkEnable
            bool m_bDismissedReportCard; // 0xfb4            
            uint8_t _pad0fb5[0x3]; // 0xfb5
            // metadata: MNetworkEnable
            float m_flCurrentHealingAmount; // 0xfb8            
            // m_hAbilityRequiresDebounce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hAbilityRequiresDebounce;
            char m_hAbilityRequiresDebounce[0x4]; // 0xfbc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            // metadata: MNetworkPriority "32"
            source2sdk::server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xfc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelHeroComponent"
            // metadata: MNetworkAlias "CCitadelHeroComponent"
            // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
            source2sdk::server::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x1200            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelRegenComponent"
            // metadata: MNetworkAlias "CCitadelRegenComponent"
            // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
            source2sdk::server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x1220            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x13a0            
            bool m_bHasShopOpen; // 0x13b8            
            uint8_t _pad13b9[0x3]; // 0x13b9
            source2sdk::client::ECitadelPingLocation_t m_eCurrentPingLocation; // 0x13bc            
            uint8_t _pad13c0[0xc]; // 0x13c0
            float m_flLastRegenThinkTime; // 0x13cc            
            float m_flCitadelDamageAccumulator; // 0x13d0            
            uint8_t _pad13d4[0x34]; // 0x13d4
            std::int32_t m_nBulletsFiredAtUs; // 0x1408            
            std::int32_t m_nBulletsHitOnUs; // 0x140c            
            std::int32_t m_nHeadshotsOnUs; // 0x1410            
            source2sdk::entity2::GameTime_t m_flLastGameStatsRecorded; // 0x1414            
            float m_flUnusedGoldRemainder; // 0x1418            
            float m_flUnusedAbilityRemainder; // 0x141c            
            std::int32_t m_nBulletsFiredAtEnemyHeroes; // 0x1420            
            std::int32_t m_nBulletsHitOnEnemyHeroes; // 0x1424            
            std::int32_t m_nHeadshotsOnEnemyHeroes; // 0x1428            
            std::int32_t m_nLuckyShotsOnEnemyHeroes; // 0x142c            
            std::int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x1430            
            std::int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x1434            
            // m_hEnemyHeroClientAimedAtAttackTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEnemyHeroClientAimedAtAttackTime;
            char m_hEnemyHeroClientAimedAtAttackTime[0x4]; // 0x1438            
            bool m_bHasOverrideSpawnPos; // 0x143c            
            uint8_t _pad143d[0x3]; // 0x143d
            Vector m_vecOverrideSpawnPos; // 0x1440            
            std::int32_t m_iKillStreak; // 0x144c            
            std::int32_t m_iTrooperWaveEventCount; // 0x1450            
            std::int32_t m_iTrooperWaveNumber; // 0x1454            
            std::int32_t m_iPrevTrooperWaveEventCount; // 0x1458            
            std::int32_t m_iPrevTrooperWaveNumber; // 0x145c            
            bool m_bHasStartedPlaying; // 0x1460            
            uint8_t _pad1461[0x3]; // 0x1461
            // m_hRevengeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRevengeTarget;
            char m_hRevengeTarget[0x4]; // 0x1464            
            uint8_t _pad1468[0xc]; // 0x1468
            source2sdk::entity2::GameTime_t m_flLastHurtTimeByEnemyHero; // 0x1474            
            source2sdk::entity2::GameTime_t m_flLastHurtByNeutral; // 0x1478            
            source2sdk::entity2::GameTime_t m_flLastHurtByEnemyNPC; // 0x147c            
            source2sdk::entity2::GameTime_t m_flLastTimeLookedAtByDirector; // 0x1480            
            uint8_t _pad1484[0x4]; // 0x1484
            source2sdk::client::CTakeDamageResult m_ragdollDamage; // 0x1488            
            // m_vecThreats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecThreats;
            char m_vecThreats[0x18]; // 0x14a8            
            uint8_t _pad14c0[0xa0]; // 0x14c0
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelRecentDamage m_sInCombat; // 0x1560            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelRecentDamage m_sPlayerDamageTaken; // 0x1578            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelRecentDamage m_sPlayerDamageDealt; // 0x1590            
            uint8_t _pad15a8[0xd4]; // 0x15a8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::client::CMsgLaneColor m_eZipLineLaneColor; // 0x167c            
            bool m_bCanBecomeRagdoll; // 0x1680            
            uint8_t _pad1681[0x3]; // 0x1681
            float m_blindUntilTime; // 0x1684            
            float m_blindStartTime; // 0x1688            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::int8_t m_nSuccessiveDucks; // 0x168c            
            uint8_t _pad168d[0x3]; // 0x168d
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flLastDuckTime; // 0x1690            
            Vector m_vWallJumpFacingDir; // 0x1694            
            source2sdk::client::EWallJumpFacing m_eWallJumpFacing; // 0x16a0            
            uint8_t _pad16a2[0x2]; // 0x16a2
            Vector m_vCurrentWallNormal; // 0x16a4            
            Vector m_vLastWallCollidedWithNormal; // 0x16b0            
            Vector m_vLastValidWallJumpNormal; // 0x16bc            
            Vector m_vLastValidWallJumpNormal_PlayerPosition; // 0x16c8            
            source2sdk::entity2::GameTime_t m_flLastWallJumpTime; // 0x16d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bAnimGraphMovementClipped; // 0x16d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bAnimGraphMovementDisableGravity; // 0x16d9            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bAnimGraphMovementDirectAirControl; // 0x16da            
            uint8_t _pad16db[0x1]; // 0x16db
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedStart; // 0x16dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x16e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flPredSlowSpeed; // 0x16e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x16e8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x16f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flSlowSpeed[4]; // 0x1708            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x1718            
            bool m_bPreventAbilityLearning; // 0x171c            
            uint8_t _pad171d[0x3]; // 0x171d
            std::int32_t m_iCurSlowSlot; // 0x1720            
            uint8_t _pad1724[0x4]; // 0x1724
            source2sdk::client::ParticleIndex_t m_nRespawnParticleIndex; // 0x1728            
            source2sdk::client::ParticleIndex_t m_nShoppingParticle; // 0x172c            
            uint8_t _pad1730[0x30]; // 0x1730
            source2sdk::server::CCitadelPlayerBot* m_pBot; // 0x1760            
            uint8_t _pad1768[0x158]; // 0x1768
            bool m_bLocoLeanTriggeredForDirection; // 0x18c0            
            bool m_bLocoRunToStopCanTrigger; // 0x18c1            
            uint8_t _pad18c2[0x2]; // 0x18c2
            float m_flCrouchFraction; // 0x18c4            
            float m_flCrouchSpeed; // 0x18c8            
            Vector m_vShootTestOffsetStanding; // 0x18cc            
            Vector m_vShootTestOffsetCrouching; // 0x18d8            
            source2sdk::entity2::GameTime_t m_leanStartTime; // 0x18e4            
            source2sdk::entity2::GameTick_t m_nLastUnpredictableMovementTick; // 0x18e8            
            uint8_t _pad18ec[0x7c];
            
            // Datamap fields:
            // CCitadelPlayer_CameraServices m_pCameraServices; // 0xc48
            // CCitadelPlayer_MovementServices m_pMovementServices; // 0xc50
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPlayerPawn) == 0x1968);
    };
};
