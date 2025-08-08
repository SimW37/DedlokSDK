#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
#include "source2sdk/client/CCitadelHeroComponent.hpp"
#include "source2sdk/client/CCitadelPlayerPawnBase.hpp"
#include "source2sdk/client/CCitadelRecentDamage.hpp"
#include "source2sdk/client/CMsgLaneColor.hpp"
#include "source2sdk/client/EWallJumpFacing.hpp"
#include "source2sdk/client/FullSellPriceAbilityUpgrades_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18c8
        // Has VTable
        // 
        // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
        // static metadata: MNetworkIncludeByName "m_pCameraServices"
        // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_MovementServices m_pMovementServices"
        // static metadata: MNetworkIncludeByName "m_pMovementServices"
        // static metadata: MNetworkVarNames "CMsgLaneColor m_eZipLineLaneColor"
        // static metadata: MNetworkVarNames "int32 m_nLevel"
        // static metadata: MNetworkVarNames "int32 m_nCurrencies"
        // static metadata: MNetworkVarNames "int32 m_nSpentCurrencies"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastSpawnTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
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
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sInCombat"
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sPlayerDamageTaken"
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sPlayerDamageDealt"
        // static metadata: MNetworkVarNames "int8 m_nSuccessiveDucks"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDuckTime"
        // static metadata: MNetworkVarNames "bool m_bDismissedReportCard"
        // static metadata: MNetworkVarNames "float m_flCurrentHealingAmount"
        // static metadata: MNetworkVarNames "QAngle m_angLockedEyeAngles"
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        // static metadata: MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
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
        class C_CitadelPlayerPawn : public source2sdk::client::CCitadelPlayerPawnBase
        {
        public:
            uint8_t _pad1138[0x80]; // 0x1138
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkChangeCallback "angEyeAnglesChanged"
            // metadata: MNetworkPriority "32"
            QAngle m_angEyeAngles; // 0x11b8            
            uint8_t _pad11c4[0x84]; // 0x11c4
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkChangeCallback "angClientCameraChanged"
            // metadata: MNetworkPriority "32"
            QAngle m_angClientCamera; // 0x1248            
            uint8_t _pad1254[0x84]; // 0x1254
            // metadata: MNetworkEnable
            source2sdk::client::CMsgLaneColor m_eZipLineLaneColor; // 0x12d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "LevelChanged"
            std::int32_t m_nLevel; // 0x12dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "CurrenciesChanged"
            std::int32_t m_nCurrencies[4]; // 0x12e0            
            // metadata: MNetworkEnable
            std::int32_t m_nSpentCurrencies[4]; // 0x12f0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastSpawnTime; // 0x1300            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RespawnTimeChanged"
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x1304            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InRegenZoneChanged"
            bool m_bInRegenerationZone; // 0x1308            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InItemShopZoneChanged"
            bool m_bInItemShopZone; // 0x1309            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InHideoutZoneChanged"
            bool m_bInHideoutZone; // 0x130a            
            uint8_t _pad130b[0x1]; // 0x130b
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0x130c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ItemSellPriceChanged"
            // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
            char m_vecFullSellPriceItems[0x18]; // 0x1310            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
            // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
            char m_vecFullSellPriceAbilityUpgrades[0x18]; // 0x1328            
            // metadata: MNetworkEnable
            bool m_bNetworkDisconnected; // 0x1340            
            // metadata: MNetworkEnable
            bool m_bHasIncomingThreats; // 0x1341            
            // metadata: MNetworkEnable
            bool m_bLearningAbility; // 0x1342            
            uint8_t _pad1343[0x1]; // 0x1343
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFlashStartChanged"
            std::int32_t m_nFlashStartTick; // 0x1344            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashMaxStartTick; // 0x1348            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashFadeStartTick; // 0x134c            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashEndTick; // 0x1350            
            // metadata: MNetworkEnable
            std::int8_t m_nFlashMaxAlpha; // 0x1354            
            uint8_t _pad1355[0x3]; // 0x1355
            // metadata: MNetworkEnable
            std::int32_t m_nDeducedLane; // 0x1358            
            uint8_t _pad135c[0x4]; // 0x135c
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelRecentDamage m_sInCombat; // 0x1360            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelRecentDamage m_sPlayerDamageTaken; // 0x1378            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelRecentDamage m_sPlayerDamageDealt; // 0x1390            
            // metadata: MNetworkEnable
            std::int8_t m_nSuccessiveDucks; // 0x13a8            
            uint8_t _pad13a9[0x3]; // 0x13a9
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDuckTime; // 0x13ac            
            Vector m_vWallJumpFacingDir; // 0x13b0            
            source2sdk::client::EWallJumpFacing m_eWallJumpFacing; // 0x13bc            
            uint8_t _pad13be[0x2]; // 0x13be
            Vector m_vCurrentWallNormal; // 0x13c0            
            Vector m_vLastWallCollidedWithNormal; // 0x13cc            
            Vector m_vLastValidWallJumpNormal; // 0x13d8            
            Vector m_vLastValidWallJumpNormal_PlayerPosition; // 0x13e4            
            source2sdk::entity2::GameTime_t m_flLastWallJumpTime; // 0x13f0            
            // metadata: MNetworkEnable
            bool m_bDismissedReportCard; // 0x13f4            
            uint8_t _pad13f5[0x3]; // 0x13f5
            // metadata: MNetworkEnable
            float m_flCurrentHealingAmount; // 0x13f8            
            // metadata: MNetworkEnable
            QAngle m_angLockedEyeAngles; // 0x13fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1408            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelHeroComponent"
            // metadata: MNetworkAlias "CCitadelHeroComponent"
            // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
            source2sdk::client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x15d8            
            uint8_t _pad15f8[0xac]; // 0x15f8
            float m_flRichPresenceUpdateInterval; // 0x16a4            
            uint8_t _pad16a8[0xf8]; // 0x16a8
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementClipped; // 0x17a0            
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementDisableGravity; // 0x17a1            
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementDirectAirControl; // 0x17a2            
            uint8_t _pad17a3[0x1]; // 0x17a3
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedStart; // 0x17a4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x17a8            
            // metadata: MNetworkEnable
            float m_flPredSlowSpeed; // 0x17ac            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x17b0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x17c0            
            // metadata: MNetworkEnable
            float m_flSlowSpeed[4]; // 0x17d0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x17e0            
            std::int32_t m_iCurSlowSlot; // 0x17e4            
            bool m_bLocoLeanTriggeredForDirection; // 0x17e8            
            bool m_bLocoRunToStopCanTrigger; // 0x17e9            
            uint8_t _pad17ea[0x2]; // 0x17ea
            float m_flCrouchFraction; // 0x17ec            
            float m_flCrouchSpeed; // 0x17f0            
            Vector m_vShootTestOffsetStanding; // 0x17f4            
            Vector m_vShootTestOffsetCrouching; // 0x1800            
            source2sdk::entity2::GameTime_t m_leanStartTime; // 0x180c            
            uint8_t _pad1810[0xb8];
            
            // Datamap fields:
            // CCitadelPlayer_CameraServices m_pCameraServices; // 0xf80
            // CCitadelPlayer_MovementServices m_pMovementServices; // 0xf88
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelPlayerPawn) == 0x18c8);
    };
};
