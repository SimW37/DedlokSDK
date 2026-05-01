#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AILOD_t.hpp"
#include "source2sdk/client/CAI_ScheduleBits.hpp"
#include "source2sdk/client/CRandStopwatch.hpp"
#include "source2sdk/client/CSimpleSimTimer.hpp"
#include "source2sdk/client/NPC_STATE.hpp"
#include "source2sdk/client/SquadSlotNPCEntry_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/CNPCPhysicsHull.hpp"
#include "source2sdk/server/AI_VolumetricEventHandle_t.hpp"
#include "source2sdk/server/CAI_Scheduler.hpp"
#include "source2sdk/server/CBaseCombatCharacter.hpp"
#include "source2sdk/server/CRelativeLocation.hpp"
#include "source2sdk/server/CUnreachableTargetList.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_AnimGraphServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_BehaviorHost;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_EnemyServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_FacingServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_Motor;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_Navigator;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_Pathfinder;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_Senses;
    };
};
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
        struct CBaseFilter;
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
        // Size: 0x1130
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "NPC_STATE m_NPCState"
        // static metadata: MNetworkVarNames "CAI_Motor * m_pMotor"
        // static metadata: MNetworkVarNames "bool m_bFadeCorpse"
        // static metadata: MNetworkVarNames "bool m_bImportantRagdoll"
        #pragma pack(push, 1)
        class CAI_BaseNPC : public source2sdk::server::CBaseCombatCharacter
        {
        public:
            uint8_t _pad0b90[0x10]; // 0xb90
            source2sdk::modellib::CNPCPhysicsHull m_currentNPCBasePhysicsHull; // 0xba0            
            bool m_bCheckContacts; // 0xbd8            
            bool m_bForceDynamicHull; // 0xbd9            
            uint8_t _pad0bda[0x26]; // 0xbda
            source2sdk::server::CRelativeLocation m_lastNavLocation; // 0xc00            
            float m_flLastPositionTolerance; // 0xc40            
            // m_hSynchronizedPrimaryNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CAI_BaseNPC> m_hSynchronizedPrimaryNPC;
            char m_hSynchronizedPrimaryNPC[0x4]; // 0xc44            
            // m_vecSynchronizedSecondaryNPCs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CAI_BaseNPC>> m_vecSynchronizedSecondaryNPCs;
            char m_vecSynchronizedSecondaryNPCs[0x18]; // 0xc48            
            // metadata: MNetworkEnable
            source2sdk::client::NPC_STATE m_NPCState; // 0xc60            
            source2sdk::client::NPC_STATE m_nPreModifierNPCState; // 0xc64            
            source2sdk::client::NPC_STATE m_IdealNPCState; // 0xc68            
            source2sdk::entity2::GameTime_t m_flLastStateChangeTime; // 0xc6c            
            source2sdk::server::CAI_Senses* m_pSenses; // 0xc70            
            source2sdk::client::CAI_ScheduleBits m_Conditions; // 0xc78            
            source2sdk::client::CAI_ScheduleBits m_ExistingConditionsAsync; // 0xc9c            
            source2sdk::client::CAI_ScheduleBits m_NonGatherConditions; // 0xcc0            
            source2sdk::client::CAI_ScheduleBits m_CustomInterruptConditions; // 0xce4            
            bool m_bForceConditionsGather; // 0xd08            
            bool m_bConditionsGathered; // 0xd09            
            bool m_bConditionsGatheredAsync; // 0xd0a            
            uint8_t _pad0d0b[0x1]; // 0xd0b
            source2sdk::entity2::GameTick_t m_nTickGatheredConditions; // 0xd0c            
            uint8_t _pad0d10[0x4]; // 0xd10
            source2sdk::entity2::GameTime_t m_flLastTimeIgnited; // 0xd14            
            source2sdk::entity2::GameTime_t m_flTimeIgnitionStarted; // 0xd18            
            // metadata: MNotSaved
            bool m_bDoPostRestoreRefindPath; // 0xd1c            
            uint8_t _pad0d1d[0x3]; // 0xd1d
            source2sdk::server::CAI_BehaviorHost* m_pBehaviorHost; // 0xd20            
            CGlobalSymbol m_sDeathAnim; // 0xd28            
            source2sdk::server::CAI_EnemyServices* m_pEnemyServices; // 0xd30            
            source2sdk::client::CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xd38            
            source2sdk::client::CSimpleSimTimer m_FailChooseEnemyTimer; // 0xd4c            
            source2sdk::entity2::GameTime_t m_flAcceptableTimeSeenEnemy; // 0xd54            
            bool m_bSkippedChooseEnemy; // 0xd58            
            bool m_bIgnoreUnseenEnemies; // 0xd59            
            uint8_t _pad0d5a[0x2]; // 0xd5a
            // m_hEnemyFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hEnemyFilter;
            char m_hEnemyFilter[0x4]; // 0xd5c            
            CUtlSymbolLarge m_iszEnemyFilterName; // 0xd60            
            // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEnt;
            char m_hTargetEnt[0x4]; // 0xd68            
            bool m_bClearTargetOnScheduleEnd; // 0xd6c            
            uint8_t _pad0d6d[0x3]; // 0xd6d
            source2sdk::entity2::GameTime_t m_flSoundWaitTime; // 0xd70            
            std::int32_t m_nSoundPriority; // 0xd74            
            bool m_bSuppressFootsteps; // 0xd78            
            uint8_t _pad0d79[0x3]; // 0xd79
            std::int32_t m_afCapability; // 0xd7c            
            float m_flGroundSpeed; // 0xd80            
            source2sdk::entity2::GameTime_t m_lastTimeBashedObstacle; // 0xd84            
            source2sdk::entity2::GameTime_t m_nextMantleTime; // 0xd88            
            source2sdk::entity2::GameTime_t m_flMoveWaitFinished; // 0xd8c            
            // m_hOpeningDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOpeningDoor;
            char m_hOpeningDoor[0x4]; // 0xd90            
            uint8_t _pad0d94[0x4]; // 0xd94
            source2sdk::server::CUnreachableTargetList m_UnreachableTargets; // 0xd98            
            // m_hPathObstructor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPathObstructor;
            char m_hPathObstructor[0x4]; // 0xdb8            
            // metadata: MNotSaved
            float m_flJumpMaxRise; // 0xdbc            
            // metadata: MNotSaved
            float m_flJumpMaxDrop; // 0xdc0            
            // metadata: MNotSaved
            float m_flJumpMaxDist; // 0xdc4            
            // metadata: MNotSaved
            float m_flJumpMinDist; // 0xdc8            
            uint8_t _pad0dcc[0x4]; // 0xdcc
            source2sdk::server::CAI_FacingServices* m_pFacingServices; // 0xdd0            
            source2sdk::server::CAI_AnimGraphServices* m_pAnimGraphServices; // 0xdd8            
            bool m_bAnimGraphIsAnimatingDeath; // 0xde0            
            uint8_t _pad0de1[0x1]; // 0xde1
            // metadata: MNotSaved
            bool m_bDeferredNavigation; // 0xde2            
            uint8_t _pad0de3[0x5]; // 0xde3
            source2sdk::server::CAI_Scheduler m_Scheduler; // 0xde8            
            source2sdk::server::CAI_Navigator* m_pNavigator; // 0xe98            
            source2sdk::server::CAI_Pathfinder* m_pPathfinder; // 0xea0            
            source2sdk::server::CAI_Pathfinder* m_pPathfinderNet; // 0xea8            
            uint8_t _pad0eb0[0x10]; // 0xeb0
            // metadata: MNetworkEnable
            source2sdk::server::CAI_Motor* m_pMotor; // 0xec0            
            source2sdk::entity2::GameTime_t m_flTimeLastMovement; // 0xec8            
            source2sdk::entity2::GameTime_t m_flTimeLastFootstep; // 0xecc            
            source2sdk::server::AI_VolumetricEventHandle_t m_hFootstepEvent; // 0xed0            
            source2sdk::client::CSimpleSimTimer m_CheckOnGroundTimer; // 0xed8            
            CUtlSymbolLarge m_strNavRestrictionVolume; // 0xee0            
            std::int32_t m_afMemory; // 0xee8            
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0xeec            
            source2sdk::entity2::GameTime_t m_flLastTookDamageTime; // 0xef0            
            source2sdk::entity2::GameTime_t m_flLastTookDamageFromPlayerTime; // 0xef4            
            Vector m_vecLastTookDamageAttackVector; // 0xef8            
            uint8_t _pad0f04[0x4]; // 0xf04
            CUtlSymbolLarge m_iszSquadName; // 0xf08            
            // m_vecMySquadSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SquadSlotNPCEntry_t> m_vecMySquadSlots;
            char m_vecMySquadSlots[0x18]; // 0xf10            
            uint8_t _pad0f28[0x8]; // 0xf28
            std::int32_t m_nPrevHealthDuringModifyDamage; // 0xf30            
            uint8_t _pad0f34[0x4]; // 0xf34
            // metadata: MNetworkEnable
            bool m_bFadeCorpse; // 0xf38            
            // metadata: MNetworkEnable
            bool m_bImportantRagdoll; // 0xf39            
            bool m_bDidDeathCleanup; // 0xf3a            
            bool m_bReceivedEnemyDeadNotification; // 0xf3b            
            uint8_t _pad0f3c[0x8]; // 0xf3c
            source2sdk::entity2::GameTime_t m_flWaitFinished; // 0xf44            
            bool m_fNoDamageDecal; // 0xf48            
            uint8_t _pad0f49[0x7]; // 0xf49
            // metadata: MNotSaved
            // m_pVecAttachments has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>>* m_pVecAttachments;
            char m_pVecAttachments[0x8]; // 0xf50            
            source2sdk::entity2::CEntityIOOutput m_OnDamaged; // 0xf58            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0xf70            
            source2sdk::entity2::CEntityIOOutput m_OnDeath; // 0xf88            
            source2sdk::entity2::CEntityIOOutput m_OnQuarterHealth; // 0xfa0            
            source2sdk::entity2::CEntityIOOutput m_OnHalfHealth; // 0xfb8            
            source2sdk::entity2::CEntityIOOutput m_OnThreeQuarterHealth; // 0xfd0            
            // m_OnFoundEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CHandle<source2sdk::server::CBaseEntity>> m_OnFoundEnemy;
            char m_OnFoundEnemy[0x20]; // 0xfe8            
            source2sdk::entity2::CEntityIOOutput m_OnLostEnemy; // 0x1008            
            source2sdk::entity2::CEntityIOOutput m_OnLostPlayer; // 0x1020            
            source2sdk::entity2::CEntityIOOutput m_OnDamagedByPlayer; // 0x1038            
            source2sdk::entity2::CEntityIOOutput m_OnDamagedByPlayerSquad; // 0x1050            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0x1068            
            source2sdk::entity2::CEntityIOOutput m_OnUse; // 0x1080            
            source2sdk::entity2::CEntityIOOutput m_OnStartTouchMaterial; // 0x1098            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouchMaterial; // 0x10b0            
            source2sdk::entity2::CEntityIOOutput m_OnLostEnemyLOS; // 0x10c8            
            source2sdk::entity2::CEntityIOOutput m_OnLostPlayerLOS; // 0x10e0            
            std::uint64_t m_nAITraceMask; // 0x10f8            
            bool m_bDynamicAILOD; // 0x1100            
            uint8_t _pad1101[0x3]; // 0x1101
            source2sdk::client::AILOD_t m_aiLOD; // 0x1104            
            float m_flThinkTime; // 0x1108            
            uint8_t _pad110c[0x1c]; // 0x110c
            // metadata: MNotSaved
            std::int32_t m_nDebugCurIndex; // 0x1128            
            uint8_t _pad112c[0x4];
            
            // Datamap fields:
            // void m_pSquad; // 0xf28
            // void CAI_BaseNPCForceSelectedGoLoopThink; // 0x0
            // void m_vecTaskThinkTimes; // 0x1110
            // void m_hDamagedFX; // 0xf34
            // CUtlSymbolLarge InputSetEnemyFilter; // 0x0
            // int32_t InputOverrideHealth; // 0x0
            // int32_t InputSetHealth; // 0x0
            // CUtlSymbolLarge InputSetSquad; // 0x0
            // CUtlSymbolLarge InputForgetEntity; // 0x0
            // void InputBreak; // 0x0
            // void InputGagEnable; // 0x0
            // void InputGagDisable; // 0x0
            // void InputInsideTransition; // 0x0
            // void InputOutsideTransition; // 0x0
            // CUtlSymbolLarge InputUpdateEnemyMemory; // 0x0
            // CUtlSymbolLarge InputSetNavRestrictionVolume; // 0x0
            // void CAI_BaseNPCCallNPCThink; // 0x0
            // void CAI_BaseNPCCallNPCPerTickThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_BaseNPC because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_BaseNPC) == 0x1130);
    };
};
