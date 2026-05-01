#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECitadelGameMode.hpp"
#include "source2sdk/client/ECitadelMatchMode.hpp"
#include "source2sdk/client/EGameState.hpp"
#include "source2sdk/client/MatchID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CStreetBrawlController.hpp"
#include "source2sdk/server/CTeamplayRules.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        struct CCitadelPlayOfTheGame;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCitadelTrooperMinimap;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x29f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bFreezePeriod"
        // static metadata: MNetworkVarNames "GameTime_t m_fLevelStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGameStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGameStateStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGameStateEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flRoundStartTime"
        // static metadata: MNetworkVarNames "EGameState m_eGameState"
        // static metadata: MNetworkVarNames "EHANDLE m_hTowerAmber"
        // static metadata: MNetworkVarNames "EHANDLE m_hTowerSapphire"
        // static metadata: MNetworkVarNames "bool m_bEnemyInAmberBase"
        // static metadata: MNetworkVarNames "bool m_bEnemyInSapphireBase"
        // static metadata: MNetworkVarNames "bool m_bEnemyPlayersInAmberBase"
        // static metadata: MNetworkVarNames "bool m_bEnemyPlayersInSapphireBase"
        // static metadata: MNetworkVarNames "Vector m_vMinimapMins"
        // static metadata: MNetworkVarNames "Vector m_vMinimapMaxs"
        // static metadata: MNetworkVarNames "bool m_bMatchSafeToAbandon"
        // static metadata: MNetworkVarNames "bool m_bMatchNotScored"
        // static metadata: MNetworkVarNames "bool m_bNoDeathEnabled"
        // static metadata: MNetworkVarNames "bool m_bFastCooldownsEnabled"
        // static metadata: MNetworkVarNames "bool m_bStaminaCooldownsEnabled"
        // static metadata: MNetworkVarNames "bool m_bUnlimitedAmmoEnabled"
        // static metadata: MNetworkVarNames "bool m_bInfiniteResourcesEnabled"
        // static metadata: MNetworkVarNames "bool m_bFlexSlotsForcedUnlocked"
        // static metadata: MNetworkVarNames "ECitadelMatchMode m_eMatchMode"
        // static metadata: MNetworkVarNames "ECitadelGameMode m_eGameMode"
        // static metadata: MNetworkVarNames "uint32 m_unSpectatorCount"
        // static metadata: MNetworkVarNames "uint32 m_unExpectedPlayerCount"
        // static metadata: MNetworkVarNames "AccountID_t m_nHideoutOwner"
        // static metadata: MNetworkVarNames "CHandle<CCitadelTrooperMinimap> m_hTrooperMinimap"
        // static metadata: MNetworkVarNames "CitadelTeam_t m_iWinningTeam"
        // static metadata: MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterRebels"
        // static metadata: MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterCombine"
        // static metadata: MNetworkVarNames "int m_iMidbossKillCount"
        // static metadata: MNetworkVarNames "int m_iAmberRejuvCount"
        // static metadata: MNetworkVarNames "int m_iSapphireRejuvCount"
        // static metadata: MNetworkVarNames "float m_tNextMidBossSpawnTime"
        // static metadata: MNetworkVarNames "bool m_bServerPaused"
        // static metadata: MNetworkVarNames "int m_iPauseTeam"
        // static metadata: MNetworkVarNames "int m_nMatchClockUpdateTick"
        // static metadata: MNetworkVarNames "float m_flMatchClockAtLastUpdate"
        // static metadata: MNetworkVarNames "bool m_bRequiresReportCardDismissal"
        // static metadata: MNetworkVarNames "int m_eGGTeam"
        // static metadata: MNetworkVarNames "GameTime_t m_flGGEndsAtTime"
        // static metadata: MNetworkVarNames "MatchID_t m_unMatchID"
        // static metadata: MNetworkVarNames "CUtlString m_sGameplayExperiment"
        // static metadata: MNetworkVarNames "uint32 m_ExperimentTokenHashCode"
        // static metadata: MNetworkVarNames "GameTime_t m_flHeroDiedTime"
        // static metadata: MNetworkVarNames "CCitadelPlayOfTheGame* m_pPlayOfTheGame"
        // static metadata: MNetworkVarNames "CStreetBrawlController m_tStreetBrawl"
        #pragma pack(push, 1)
        class CCitadelGameRules : public source2sdk::server::CTeamplayRules
        {
        public:
            uint8_t _pad00d0[0x10]; // 0xd0
            // metadata: MNetworkEnable
            bool m_bFreezePeriod; // 0xe0            
            uint8_t _pad00e1[0x3]; // 0xe1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fLevelStartTime; // 0xe4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameStartTime; // 0xe8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameStateStartTime; // 0xec            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameStateEndTime; // 0xf0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRoundStartTime; // 0xf4            
            float m_flPlayOfTheGameStateEndTime; // 0xf8            
            // metadata: MNetworkEnable
            source2sdk::client::EGameState m_eGameState; // 0xfc            
            // metadata: MNetworkEnable
            // m_hTowerAmber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTowerAmber;
            char m_hTowerAmber[0x4]; // 0x100            
            // metadata: MNetworkEnable
            // m_hTowerSapphire has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTowerSapphire;
            char m_hTowerSapphire[0x4]; // 0x104            
            // metadata: MNetworkEnable
            bool m_bEnemyInAmberBase; // 0x108            
            // metadata: MNetworkEnable
            bool m_bEnemyInSapphireBase; // 0x109            
            // metadata: MNetworkEnable
            bool m_bEnemyPlayersInAmberBase; // 0x10a            
            // metadata: MNetworkEnable
            bool m_bEnemyPlayersInSapphireBase; // 0x10b            
            // metadata: MNetworkEnable
            Vector m_vMinimapMins; // 0x10c            
            // metadata: MNetworkEnable
            Vector m_vMinimapMaxs; // 0x118            
            // metadata: MNetworkEnable
            bool m_bMatchSafeToAbandon; // 0x124            
            // metadata: MNetworkEnable
            bool m_bMatchNotScored; // 0x125            
            // metadata: MNetworkEnable
            bool m_bNoDeathEnabled; // 0x126            
            // metadata: MNetworkEnable
            bool m_bFastCooldownsEnabled; // 0x127            
            // metadata: MNetworkEnable
            bool m_bStaminaCooldownsEnabled; // 0x128            
            // metadata: MNetworkEnable
            bool m_bUnlimitedAmmoEnabled; // 0x129            
            // metadata: MNetworkEnable
            bool m_bInfiniteResourcesEnabled; // 0x12a            
            // metadata: MNetworkEnable
            bool m_bFlexSlotsForcedUnlocked; // 0x12b            
            // metadata: MNetworkEnable
            source2sdk::client::ECitadelMatchMode m_eMatchMode; // 0x12c            
            // metadata: MNetworkEnable
            source2sdk::client::ECitadelGameMode m_eGameMode; // 0x130            
            // metadata: MNetworkEnable
            std::uint32_t m_unSpectatorCount; // 0x134            
            // metadata: MNetworkEnable
            std::uint32_t m_unExpectedPlayerCount; // 0x138            
            // metadata: MNetworkEnable
            std::uint32_t m_nHideoutOwner; // 0x13c            
            // metadata: MNetworkEnable
            // m_hTrooperMinimap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelTrooperMinimap> m_hTrooperMinimap;
            char m_hTrooperMinimap[0x4]; // 0x140            
            // metadata: MNetworkEnable
            std::int32_t m_iWinningTeam; // 0x144            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // m_hCurrentHeroDrafterRebels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentHeroDrafterRebels;
            char m_hCurrentHeroDrafterRebels[0x4]; // 0x148            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // m_hCurrentHeroDrafterCombine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentHeroDrafterCombine;
            char m_hCurrentHeroDrafterCombine[0x4]; // 0x14c            
            bool m_bDontUploadStats; // 0x150            
            bool m_bIsEndGameTest; // 0x151            
            uint8_t _pad0152[0x6e]; // 0x152
            bool m_bSpawnedBots; // 0x1c0            
            bool m_bGuideBotAssigned; // 0x1c1            
            uint8_t _pad01c2[0x2]; // 0x1c2
            float m_timeLastSpawnCrates; // 0x1c4            
            bool m_bNotifiedClientsOfNextCrateSpawn; // 0x1c8            
            bool m_bEarlyCratesSpawned; // 0x1c9            
            bool m_bIsEarlyCrateGamestate; // 0x1ca            
            uint8_t _pad01cb[0x26d]; // 0x1cb
            source2sdk::entity2::GameTime_t m_flGameTimeAllPlayersDisconnected; // 0x438            
            std::int32_t m_nNextHeroDraftPosition; // 0x43c            
            uint8_t _pad0440[0x1248]; // 0x440
            source2sdk::server::CountdownTimer m_CheckIdleTimer; // 0x1688            
            source2sdk::server::CountdownTimer m_CheckCheatersTimer; // 0x16a0            
            uint8_t _pad16b8[0x128]; // 0x16b8
            source2sdk::entity2::GameTime_t m_flTimeScaleStart; // 0x17e0            
            source2sdk::entity2::GameTime_t m_flTimeScaleEndTime; // 0x17e4            
            source2sdk::entity2::GameTime_t m_flTimeScaleRampInEndTime; // 0x17e8            
            source2sdk::entity2::GameTime_t m_flTimeScaleRampOutStartTime; // 0x17ec            
            float m_flTimeScaleRampInTime; // 0x17f0            
            float m_flTimeScaleDuration; // 0x17f4            
            float m_flTimeScaleRampOutTime; // 0x17f8            
            float m_flTimeScale; // 0x17fc            
            float m_flOriginalTimeScale; // 0x1800            
            bool m_bTimeScaleActive; // 0x1804            
            uint8_t _pad1805[0x3]; // 0x1805
            // metadata: MNetworkEnable
            std::int32_t m_iMidbossKillCount; // 0x1808            
            // metadata: MNetworkEnable
            std::int32_t m_iAmberRejuvCount; // 0x180c            
            // metadata: MNetworkEnable
            std::int32_t m_iSapphireRejuvCount; // 0x1810            
            // metadata: MNetworkEnable
            float m_tNextMidBossSpawnTime; // 0x1814            
            uint8_t _pad1818[0xfc0]; // 0x1818
            // metadata: MNetworkEnable
            bool m_bServerPaused; // 0x27d8            
            uint8_t _pad27d9[0x3]; // 0x27d9
            // metadata: MNetworkEnable
            std::int32_t m_iPauseTeam; // 0x27dc            
            // metadata: MNetworkEnable
            std::int32_t m_nMatchClockUpdateTick; // 0x27e0            
            // metadata: MNetworkEnable
            float m_flMatchClockAtLastUpdate; // 0x27e4            
            double m_flPauseTime; // 0x27e8            
            CPlayerSlot m_pausingPlayerId; // 0x27f0            
            CPlayerSlot m_unpausingPlayerId; // 0x27f4            
            float m_fPauseRawTime; // 0x27f8            
            float m_fPauseCurTime; // 0x27fc            
            float m_fUnpauseRawTime; // 0x2800            
            float m_fUnpauseCurTime; // 0x2804            
            uint8_t _pad2808[0x50]; // 0x2808
            // metadata: MNetworkEnable
            bool m_bRequiresReportCardDismissal; // 0x2858            
            uint8_t _pad2859[0x3]; // 0x2859
            source2sdk::entity2::GameTime_t m_flPreGameWaitEndTime; // 0x285c            
            source2sdk::entity2::GameTime_t m_flReportCardDismissalWaitStart; // 0x2860            
            std::int32_t m_nLastPreGameCount; // 0x2864            
            // metadata: MNetworkEnable
            std::int32_t m_eGGTeam; // 0x2868            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGGEndsAtTime; // 0x286c            
            // metadata: MNetworkEnable
            source2sdk::client::MatchID_t m_unMatchID; // 0x2870            
            // metadata: MNetworkEnable
            CUtlString m_sGameplayExperiment; // 0x2878            
            // metadata: MNetworkEnable
            std::uint32_t m_ExperimentTokenHashCode; // 0x2880            
            std::int32_t m_nPlayerDeathEventID; // 0x2884            
            std::int32_t m_nReplayChangedEvent; // 0x2888            
            std::int32_t m_nGameOverEvent; // 0x288c            
            uint8_t _pad2890[0x20]; // 0x2890
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flHeroDiedTime; // 0x28b0            
            uint8_t _pad28b4[0x4]; // 0x28b4
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelPlayOfTheGame* m_pPlayOfTheGame; // 0x28b8            
            // metadata: MNetworkEnable
            source2sdk::server::CStreetBrawlController m_tStreetBrawl; // 0x28c0            
            uint8_t _pad29f0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelGameRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelGameRules) == 0x29f8);
    };
};
