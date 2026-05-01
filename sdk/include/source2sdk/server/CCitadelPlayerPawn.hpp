#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CMsgLaneColor.hpp"
#include "source2sdk/client/CTakeDamageResult.hpp"
#include "source2sdk/client/ECitadelPingLocation_t.hpp"
#include "source2sdk/client/FullSellPriceAbilityUpgrades_t.hpp"
#include "source2sdk/client/HeroBuildID_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelHeroComponent.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CCitadelPlayerPawnBase.hpp"
#include "source2sdk/server/CCitadelRecentDamage.hpp"
#include "source2sdk/server/CCitadelRegenComponent.hpp"
#include "source2sdk/server/ItemDraftRoundState_t.hpp"
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x2200
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
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
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecQuickbuyQueue"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecQuickbuySellQueue"
        // static metadata: MNetworkVarNames "bool m_bQuickbuyAutoPurchase"
        // static metadata: MNetworkVarNames "AbilityID_t m_unQuickbuyAutoPurchaseRequest"
        // static metadata: MNetworkVarNames "bool m_bQuickbuyAutoQueueBuild"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecRestrictedToItems"
        // static metadata: MNetworkVarNames "HeroBuildID_t m_unHeroBuildID"
        // static metadata: MNetworkVarNames "CUtlString m_sHeroBuildSerialized"
        // static metadata: MNetworkVarNames "EHANDLE m_hViewEntityForObserver"
        // static metadata: MNetworkVarNames "bool m_bNetworkDisconnected"
        // static metadata: MNetworkVarNames "bool m_bLearningAbility"
        // static metadata: MNetworkVarNames "int m_nFlashStartTick"
        // static metadata: MNetworkVarNames "int m_nFlashMaxStartTick"
        // static metadata: MNetworkVarNames "int m_nFlashFadeStartTick"
        // static metadata: MNetworkVarNames "int m_nFlashEndTick"
        // static metadata: MNetworkVarNames "int8 m_nFlashMaxAlpha"
        // static metadata: MNetworkVarNames "int32 m_nDeducedLane"
        // static metadata: MNetworkVarNames "EHANDLE m_hEnemyPlayerAimTarget"
        // static metadata: MNetworkVarNames "ItemDraftRoundState_t m_ItemDraftRoundState"
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
        // static metadata: MNetworkVarNames "GameTime_t m_flForceInCombatAnimsUntilTime"
        // static metadata: MNetworkVarNames "bool m_arrPreventAbilityLearning"
        // static metadata: MNetworkVarNames "uint8 m_nAudioEnclosure"
        // static metadata: MNetworkVarNames "bool m_bAudioHasSkyExposure"
        #pragma pack(push, 1)
        class CCitadelPlayerPawn : public source2sdk::server::CCitadelPlayerPawnBase
        {
        public:
            uint8_t _pad0d60[0x80]; // 0xd60
            std::int32_t m_arrGoldSources[45]; // 0xde0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "SourceTVExclusive"
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkPriority "32"
            QAngle m_angClientCamera; // 0xe94            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "RemotePlayersOnly"
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkPriority "32"
            QAngle m_angEyeAngles; // 0xea0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            QAngle m_angLockedEyeAngles; // 0xeac            
            // metadata: MNetworkEnable
            std::int32_t m_nLevel; // 0xeb8            
            // metadata: MNetworkEnable
            std::int32_t m_nCurrencies[6]; // 0xebc            
            // metadata: MNetworkEnable
            std::int32_t m_nSpentCurrencies[6]; // 0xed4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0xeec            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastSpawnTime; // 0xef0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            bool m_bInRegenerationZone; // 0xef4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInItemShopZone; // 0xef5            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInHideoutZone; // 0xef6            
            uint8_t _pad0ef7[0x1]; // 0xef7
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xef8            
            uint8_t _pad0efc[0x4]; // 0xefc
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
            char m_vecFullSellPriceItems[0x18]; // 0xf00            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
            char m_vecFullSellPriceAbilityUpgrades[0x60]; // 0xf18            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            // m_vecQuickbuyQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlStringToken> m_vecQuickbuyQueue;
            char m_vecQuickbuyQueue[0x18]; // 0xf78            
            uint8_t _pad0f90[0x18]; // 0xf90
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            // m_vecQuickbuySellQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlStringToken> m_vecQuickbuySellQueue;
            char m_vecQuickbuySellQueue[0x18]; // 0xfa8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            bool m_bQuickbuyAutoPurchase; // 0xfc0            
            uint8_t _pad0fc1[0x3]; // 0xfc1
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            CUtlStringToken m_unQuickbuyAutoPurchaseRequest; // 0xfc4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            bool m_bQuickbuyAutoQueueBuild; // 0xfc8            
            uint8_t _pad0fc9[0x2f]; // 0xfc9
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            // m_vecRestrictedToItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlStringToken> m_vecRestrictedToItems;
            char m_vecRestrictedToItems[0x18]; // 0xff8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            source2sdk::client::HeroBuildID_t m_unHeroBuildID; // 0x1010            
            uint8_t _pad1014[0x4]; // 0x1014
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            CUtlString m_sHeroBuildSerialized; // 0x1018            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            // m_hViewEntityForObserver has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewEntityForObserver;
            char m_hViewEntityForObserver[0x4]; // 0x1020            
            // metadata: MNetworkEnable
            bool m_bNetworkDisconnected; // 0x1024            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bLearningAbility; // 0x1025            
            uint8_t _pad1026[0x2]; // 0x1026
            // metadata: MNetworkEnable
            std::int32_t m_nFlashStartTick; // 0x1028            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashMaxStartTick; // 0x102c            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashFadeStartTick; // 0x1030            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashEndTick; // 0x1034            
            // metadata: MNetworkEnable
            std::int8_t m_nFlashMaxAlpha; // 0x1038            
            uint8_t _pad1039[0x3]; // 0x1039
            // metadata: MNetworkEnable
            std::int32_t m_nDeducedLane; // 0x103c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "RemotePlayersOnly"
            // metadata: MNetworkPriority "32"
            // m_hEnemyPlayerAimTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEnemyPlayerAimTarget;
            char m_hEnemyPlayerAimTarget[0x4]; // 0x1040            
            uint8_t _pad1044[0x4]; // 0x1044
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            source2sdk::server::ItemDraftRoundState_t m_ItemDraftRoundState; // 0x1048            
            uint8_t _pad10d0[0x18]; // 0x10d0
            // metadata: MNetworkEnable
            bool m_bDismissedReportCard; // 0x10e8            
            uint8_t _pad10e9[0x3]; // 0x10e9
            // metadata: MNetworkEnable
            float m_flCurrentHealingAmount; // 0x10ec            
            // m_hAbilityRequiresDebounce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hAbilityRequiresDebounce;
            char m_hAbilityRequiresDebounce[0x4]; // 0x10f0            
            uint8_t _pad10f4[0x4]; // 0x10f4
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            // metadata: MNetworkPriority "32"
            source2sdk::server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x10f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelHeroComponent"
            // metadata: MNetworkAlias "CCitadelHeroComponent"
            // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
            source2sdk::server::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x1360            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelRegenComponent"
            // metadata: MNetworkAlias "CCitadelRegenComponent"
            // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
            source2sdk::server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x13a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1500            
            bool m_bHasShopOpen; // 0x1520            
            uint8_t _pad1521[0x3]; // 0x1521
            source2sdk::client::ECitadelPingLocation_t m_eCurrentPingLocation; // 0x1524            
            uint8_t _pad1528[0x6c0]; // 0x1528
            float m_flLastRegenThinkTime; // 0x1be8            
            float m_flCitadelDamageAccumulator; // 0x1bec            
            uint8_t _pad1bf0[0x38]; // 0x1bf0
            std::int32_t m_nBulletsFiredAtUs; // 0x1c28            
            std::int32_t m_nBulletsHitOnUs; // 0x1c2c            
            std::int32_t m_nHeadshotsOnUs; // 0x1c30            
            source2sdk::entity2::GameTime_t m_flLastGameStatsRecorded; // 0x1c34            
            float m_flUnusedGoldRemainder; // 0x1c38            
            float m_flUnusedAbilityRemainder; // 0x1c3c            
            std::int32_t m_nBulletsFiredAtEnemyHeroes; // 0x1c40            
            std::int32_t m_nBulletsHitOnEnemyHeroes; // 0x1c44            
            std::int32_t m_nHeadshotsOnEnemyHeroes; // 0x1c48            
            std::int32_t m_nLuckyShotsOnEnemyHeroes; // 0x1c4c            
            std::int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x1c50            
            std::int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x1c54            
            // m_hEnemyHeroClientAimedAtAttackTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEnemyHeroClientAimedAtAttackTime;
            char m_hEnemyHeroClientAimedAtAttackTime[0x4]; // 0x1c58            
            bool m_bHasOverrideSpawnPos; // 0x1c5c            
            uint8_t _pad1c5d[0x3]; // 0x1c5d
            Vector m_vecOverrideSpawnPos; // 0x1c60            
            std::int32_t m_iTrooperWaveEventCount; // 0x1c6c            
            std::int32_t m_iTrooperWaveNumber; // 0x1c70            
            std::int32_t m_iPrevTrooperWaveEventCount; // 0x1c74            
            std::int32_t m_iPrevTrooperWaveNumber; // 0x1c78            
            bool m_bHasStartedPlaying; // 0x1c7c            
            uint8_t _pad1c7d[0x3]; // 0x1c7d
            // m_hRevengeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRevengeTarget;
            char m_hRevengeTarget[0x4]; // 0x1c80            
            uint8_t _pad1c84[0x10]; // 0x1c84
            source2sdk::entity2::GameTime_t m_flLastHurtTimeByEnemyHero; // 0x1c94            
            source2sdk::entity2::GameTime_t m_flLastHurtByNeutral; // 0x1c98            
            source2sdk::entity2::GameTime_t m_flLastHurtByEnemyNPC; // 0x1c9c            
            source2sdk::entity2::GameTime_t m_flLastTimeLookedAtByDirector; // 0x1ca0            
            uint8_t _pad1ca4[0x4]; // 0x1ca4
            source2sdk::client::CTakeDamageResult m_ragdollDamage; // 0x1ca8            
            uint8_t _pad1cd8[0x88]; // 0x1cd8
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelRecentDamage m_sInCombat; // 0x1d60            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelRecentDamage m_sPlayerDamageTaken; // 0x1d78            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelRecentDamage m_sPlayerDamageDealt; // 0x1d90            
            uint8_t _pad1da8[0xbc]; // 0x1da8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::client::CMsgLaneColor m_eZipLineLaneColor; // 0x1e64            
            bool m_bCanBecomeRagdoll; // 0x1e68            
            uint8_t _pad1e69[0x3]; // 0x1e69
            float m_blindUntilTime; // 0x1e6c            
            float m_blindStartTime; // 0x1e70            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::int8_t m_nSuccessiveDucks; // 0x1e74            
            uint8_t _pad1e75[0x3]; // 0x1e75
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flLastDuckTime; // 0x1e78            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bAnimGraphMovementClipped; // 0x1e7c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bAnimGraphMovementDisableGravity; // 0x1e7d            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bAnimGraphMovementDirectAirControl; // 0x1e7e            
            uint8_t _pad1e7f[0x1]; // 0x1e7f
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedStart; // 0x1e80            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x1e84            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flPredSlowSpeed; // 0x1e88            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x1e8c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x1e9c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flSlowSpeed[4]; // 0x1eac            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flForceInCombatAnimsUntilTime; // 0x1ebc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_arrPreventAbilityLearning[4]; // 0x1ec0            
            std::int32_t m_iCurSlowSlot; // 0x1ec4            
            uint8_t _pad1ec8[0x4]; // 0x1ec8
            source2sdk::client::ParticleIndex_t m_nRespawnParticleIndex; // 0x1ecc            
            source2sdk::client::ParticleIndex_t m_nShoppingParticle; // 0x1ed0            
            uint8_t _pad1ed4[0x2c]; // 0x1ed4
            source2sdk::server::CCitadelPlayerBot* m_pBot; // 0x1f00            
            uint8_t _pad1f08[0x280]; // 0x1f08
            bool m_bLocoLeanTriggeredForDirection; // 0x2188            
            bool m_bLocoRunToStopCanTrigger; // 0x2189            
            uint8_t _pad218a[0x2]; // 0x218a
            float m_flCrouchFraction; // 0x218c            
            float m_flCrouchSpeed; // 0x2190            
            source2sdk::entity2::GameTime_t m_fidgetTime; // 0x2194            
            Vector m_vShootTestOffsetStanding; // 0x2198            
            Vector m_vShootTestOffsetCrouching; // 0x21a4            
            source2sdk::entity2::GameTime_t m_leanStartTime; // 0x21b0            
            source2sdk::entity2::GameTick_t m_nLastUnpredictableMovementTick; // 0x21b4            
            uint8_t _pad21b8[0x40]; // 0x21b8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "RemotePlayersOnly"
            std::uint8_t m_nAudioEnclosure; // 0x21f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "RemotePlayersOnly"
            bool m_bAudioHasSkyExposure; // 0x21f9            
            uint8_t _pad21fa[0x6];
            
            // Datamap fields:
            // CCitadelPlayer_CameraServices m_pCameraServices; // 0xbc8
            // CCitadelPlayer_MovementServices m_pMovementServices; // 0xbd0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPlayerPawn) == 0x2200);
    };
};
