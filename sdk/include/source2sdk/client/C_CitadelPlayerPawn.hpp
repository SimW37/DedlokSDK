#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
#include "source2sdk/client/CCitadelHeroComponent.hpp"
#include "source2sdk/client/CCitadelPlayerPawnBase.hpp"
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
        // Size: 0x1800
        // Has VTable
        // 
        // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
        // static metadata: MNetworkIncludeByName "m_pCameraServices"
        // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_MovementServices m_pMovementServices"
        // static metadata: MNetworkIncludeByName "m_pMovementServices"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastCombatTime"
        // static metadata: MNetworkVarNames "QAngle m_angClientCamera"
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
            // metadata: MNetworkChangeCallback "playerEyeAnglesChanged"
            // metadata: MNetworkPriority "32"
            QAngle m_angEyeAngles; // 0x11b8            
            uint8_t _pad11c4[0x84]; // 0x11c4
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastCombatTime; // 0x1248            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkPriority "32"
            QAngle m_angClientCamera; // 0x124c            
            // metadata: MNetworkEnable
            source2sdk::client::CMsgLaneColor m_eZipLineLaneColor; // 0x1258            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "LevelChanged"
            std::int32_t m_nLevel; // 0x125c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "CurrenciesChanged"
            std::int32_t m_nCurrencies[4]; // 0x1260            
            // metadata: MNetworkEnable
            std::int32_t m_nSpentCurrencies[4]; // 0x1270            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastSpawnTime; // 0x1280            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RespawnTimeChanged"
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x1284            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InRegenZoneChanged"
            bool m_bInRegenerationZone; // 0x1288            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InItemShopZoneChanged"
            bool m_bInItemShopZone; // 0x1289            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InHideoutZoneChanged"
            bool m_bInHideoutZone; // 0x128a            
            uint8_t _pad128b[0x1]; // 0x128b
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0x128c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ItemSellPriceChanged"
            // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
            char m_vecFullSellPriceItems[0x18]; // 0x1290            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
            // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
            char m_vecFullSellPriceAbilityUpgrades[0x18]; // 0x12a8            
            // metadata: MNetworkEnable
            bool m_bNetworkDisconnected; // 0x12c0            
            // metadata: MNetworkEnable
            bool m_bHasIncomingThreats; // 0x12c1            
            // metadata: MNetworkEnable
            bool m_bLearningAbility; // 0x12c2            
            uint8_t _pad12c3[0x1]; // 0x12c3
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFlashStartChanged"
            std::int32_t m_nFlashStartTick; // 0x12c4            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashMaxStartTick; // 0x12c8            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashFadeStartTick; // 0x12cc            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashEndTick; // 0x12d0            
            // metadata: MNetworkEnable
            std::int8_t m_nFlashMaxAlpha; // 0x12d4            
            uint8_t _pad12d5[0x3]; // 0x12d5
            // metadata: MNetworkEnable
            std::int32_t m_nDeducedLane; // 0x12d8            
            // metadata: MNetworkEnable
            std::int8_t m_nSuccessiveDucks; // 0x12dc            
            uint8_t _pad12dd[0x3]; // 0x12dd
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDuckTime; // 0x12e0            
            Vector m_vWallJumpFacingDir; // 0x12e4            
            source2sdk::client::EWallJumpFacing m_eWallJumpFacing; // 0x12f0            
            uint8_t _pad12f2[0x2]; // 0x12f2
            Vector m_vCurrentWallNormal; // 0x12f4            
            Vector m_vLastWallCollidedWithNormal; // 0x1300            
            Vector m_vLastValidWallJumpNormal; // 0x130c            
            Vector m_vLastValidWallJumpNormal_PlayerPosition; // 0x1318            
            source2sdk::entity2::GameTime_t m_flLastWallJumpTime; // 0x1324            
            // metadata: MNetworkEnable
            bool m_bDismissedReportCard; // 0x1328            
            uint8_t _pad1329[0x3]; // 0x1329
            // metadata: MNetworkEnable
            float m_flCurrentHealingAmount; // 0x132c            
            // metadata: MNetworkEnable
            QAngle m_angLockedEyeAngles; // 0x1330            
            uint8_t _pad133c[0x4]; // 0x133c
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1340            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelHeroComponent"
            // metadata: MNetworkAlias "CCitadelHeroComponent"
            // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
            source2sdk::client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x1510            
            uint8_t _pad1530[0xac]; // 0x1530
            float m_flRichPresenceUpdateInterval; // 0x15dc            
            uint8_t _pad15e0[0xf8]; // 0x15e0
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementClipped; // 0x16d8            
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementDisableGravity; // 0x16d9            
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementDirectAirControl; // 0x16da            
            uint8_t _pad16db[0x1]; // 0x16db
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedStart; // 0x16dc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x16e0            
            // metadata: MNetworkEnable
            float m_flPredSlowSpeed; // 0x16e4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x16e8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x16f8            
            // metadata: MNetworkEnable
            float m_flSlowSpeed[4]; // 0x1708            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x1718            
            std::int32_t m_iCurSlowSlot; // 0x171c            
            bool m_bLocoLeanTriggeredForDirection; // 0x1720            
            bool m_bLocoRunToStopCanTrigger; // 0x1721            
            uint8_t _pad1722[0x2]; // 0x1722
            float m_flCrouchFraction; // 0x1724            
            float m_flCrouchSpeed; // 0x1728            
            Vector m_vShootTestOffsetStanding; // 0x172c            
            Vector m_vShootTestOffsetCrouching; // 0x1738            
            source2sdk::entity2::GameTime_t m_leanStartTime; // 0x1744            
            uint8_t _pad1748[0xb8];
            
            // Datamap fields:
            // CCitadelPlayer_CameraServices m_pCameraServices; // 0xf80
            // CCitadelPlayer_MovementServices m_pMovementServices; // 0xf88
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelPlayerPawn) == 0x1800);
    };
};
