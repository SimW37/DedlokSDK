#pragma once
#include "source2sdk/client/AILOD_t.hpp"
#include "source2sdk/client/CAI_ScheduleBits.hpp"
#include "source2sdk/client/CRandStopwatch.hpp"
#include "source2sdk/client/CSimpleSimTimer.hpp"
#include "source2sdk/client/CTakeDamageResult.hpp"
#include "source2sdk/client/NPC_STATE.hpp"
#include "source2sdk/client/SquadSlotNPCEntry_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/CNPCPhysicsHull.hpp"
#include "source2sdk/server/CAI_NavLocation.hpp"
#include "source2sdk/server/CAI_Scheduler.hpp"
#include "source2sdk/server/CBaseCombatCharacter.hpp"
#include "source2sdk/server/CUnreachableTargetList.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CAI_AnimGraphServices;
};

namespace source2sdk::server
{
    class CAI_BehaviorHost;
};

namespace source2sdk::server
{
    class CAI_EnemyServices;
};

namespace source2sdk::server
{
    class CAI_FacingServices;
};

namespace source2sdk::server
{
    class CAI_Motor;
};

namespace source2sdk::server
{
    class CAI_Navigator;
};

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CBaseFilter;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x13f0
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_lifeState"
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "NPC_STATE m_NPCState"
    // static metadata: MNetworkVarNames "bool m_bFadeCorpse"
    // static metadata: MNetworkVarNames "bool m_bImportantRagdoll"
    #pragma pack(push, 1)
    class CAI_BaseNPC : public server::CBaseCombatCharacter
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc10[0x10]; // 0xc10
        modellib::CNPCPhysicsHull m_currentNPCBasePhysicsHull; // 0xc20        
        bool m_bCheckContacts; // 0xc58        
        bool m_bForceDynamicHull; // 0xc59        
        [[maybe_unused]] std::uint8_t pad_0xc5a[0x1e]; // 0xc5a
        server::CAI_NavLocation m_lastNavLocation; // 0xc78        
        float m_flLastPositionTolerance; // 0xcb8        
        // m_hSynchronizedPrimaryNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CAI_BaseNPC> m_hSynchronizedPrimaryNPC;
        char m_hSynchronizedPrimaryNPC[0x4]; // 0xcbc        
        // m_vecSynchronizedSecondaryNPCs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CAI_BaseNPC>> m_vecSynchronizedSecondaryNPCs;
        char m_vecSynchronizedSecondaryNPCs[0x18]; // 0xcc0        
        // metadata: MNetworkEnable
        client::NPC_STATE m_NPCState; // 0xcd8        
        client::NPC_STATE m_nPreModifierNPCState; // 0xcdc        
        client::NPC_STATE m_IdealNPCState; // 0xce0        
        entity2::GameTime_t m_flLastStateChangeTime; // 0xce4        
        [[maybe_unused]] std::uint8_t pad_0xce8[0x8]; // 0xce8
        client::CAI_ScheduleBits m_Conditions; // 0xcf0        
        client::CAI_ScheduleBits m_NonGatherConditions; // 0xd14        
        client::CAI_ScheduleBits m_CustomInterruptConditions; // 0xd38        
        bool m_bForceConditionsGather; // 0xd5c        
        bool m_bConditionsGathered; // 0xd5d        
        bool m_bDoPostRestoreRefindPath; // 0xd5e        
        [[maybe_unused]] std::uint8_t pad_0xd5f[0x1]; // 0xd5f
        server::CAI_BehaviorHost* m_pBehaviorHost; // 0xd60        
        entity2::GameTime_t m_flBlinkTime; // 0xd68        
        [[maybe_unused]] std::uint8_t pad_0xd6c[0x4]; // 0xd6c
        CGlobalSymbol m_sDeathAnim; // 0xd70        
        server::CAI_EnemyServices* m_pEnemyServices; // 0xd78        
        client::CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xd80        
        client::CSimpleSimTimer m_FailChooseEnemyTimer; // 0xd94        
        entity2::GameTime_t m_flAcceptableTimeSeenEnemy; // 0xd9c        
        bool m_bSkippedChooseEnemy; // 0xda0        
        bool m_bIgnoreUnseenEnemies; // 0xda1        
        [[maybe_unused]] std::uint8_t pad_0xda2[0x2]; // 0xda2
        // m_hEnemyFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hEnemyFilter;
        char m_hEnemyFilter[0x4]; // 0xda4        
        CUtlSymbolLarge m_iszEnemyFilterName; // 0xda8        
        // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEnt;
        char m_hTargetEnt[0x4]; // 0xdb0        
        bool m_bClearTargetOnScheduleEnd; // 0xdb4        
        [[maybe_unused]] std::uint8_t pad_0xdb5[0x3]; // 0xdb5
        entity2::GameTime_t m_flSoundWaitTime; // 0xdb8        
        int32_t m_nSoundPriority; // 0xdbc        
        bool m_bSuppressFootsteps; // 0xdc0        
        [[maybe_unused]] std::uint8_t pad_0xdc1[0x3]; // 0xdc1
        int32_t m_afCapability; // 0xdc4        
        [[maybe_unused]] std::uint8_t pad_0xdc8[0x170]; // 0xdc8
        float m_flGroundSpeed; // 0xf38        
        entity2::GameTime_t m_flMoveWaitFinished; // 0xf3c        
        // m_hOpeningDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOpeningDoor;
        char m_hOpeningDoor[0x4]; // 0xf40        
        [[maybe_unused]] std::uint8_t pad_0xf44[0x4]; // 0xf44
        server::CUnreachableTargetList m_UnreachableTargets; // 0xf48        
        // m_hPathObstructor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPathObstructor;
        char m_hPathObstructor[0x4]; // 0xf68        
        float m_flJumpMaxRise; // 0xf6c        
        float m_flJumpMaxDrop; // 0xf70        
        float m_flJumpMaxDist; // 0xf74        
        float m_flJumpMinDist; // 0xf78        
        [[maybe_unused]] std::uint8_t pad_0xf7c[0x4]; // 0xf7c
        server::CAI_FacingServices* m_pFacingServices; // 0xf80        
        server::CAI_AnimGraphServices* m_pAnimGraphServices; // 0xf88        
        bool m_bAnimGraphIsAnimatingDeath; // 0xf90        
        bool m_bDeferredNavigation; // 0xf91        
        [[maybe_unused]] std::uint8_t pad_0xf92[0x6]; // 0xf92
        server::CAI_Scheduler m_Scheduler; // 0xf98        
        server::CAI_Navigator* m_pNavigatorNavmesh; // 0x1040        
        [[maybe_unused]] std::uint8_t pad_0x1048[0x18]; // 0x1048
        server::CAI_Motor* m_pMotor; // 0x1060        
        entity2::GameTime_t m_flTimeLastMovement; // 0x1068        
        entity2::GameTime_t m_flTimeLastFootstep; // 0x106c        
        client::CSimpleSimTimer m_CheckOnGroundTimer; // 0x1070        
        CUtlSymbolLarge m_strNavRestrictionVolume; // 0x1078        
        int32_t m_afMemory; // 0x1080        
        entity2::GameTime_t m_flLastAttackTime; // 0x1084        
        entity2::GameTime_t m_flLastTookDamageTime; // 0x1088        
        entity2::GameTime_t m_flLastTookDamageFromPlayerTime; // 0x108c        
        Vector m_vecLastTookDamageAttackVector; // 0x1090        
        [[maybe_unused]] std::uint8_t pad_0x109c[0x4]; // 0x109c
        CUtlSymbolLarge m_iszSquadName; // 0x10a0        
        // m_vecMySquadSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SquadSlotNPCEntry_t> m_vecMySquadSlots;
        char m_vecMySquadSlots[0x18]; // 0x10a8        
        [[maybe_unused]] std::uint8_t pad_0x10c0[0x8]; // 0x10c0
        int32_t m_nPrevHealthDuringModifyDamage; // 0x10c8        
        [[maybe_unused]] std::uint8_t pad_0x10cc[0x4]; // 0x10cc
        // metadata: MNetworkEnable
        bool m_bFadeCorpse; // 0x10d0        
        // metadata: MNetworkEnable
        bool m_bImportantRagdoll; // 0x10d1        
        [[maybe_unused]] std::uint8_t pad_0x10d2[0x6]; // 0x10d2
        client::CTakeDamageResult m_deathBlowResult; // 0x10d8        
        bool m_bDidDeathCleanup; // 0x10f8        
        bool m_bReceivedEnemyDeadNotification; // 0x10f9        
        [[maybe_unused]] std::uint8_t pad_0x10fa[0x2]; // 0x10fa
        entity2::GameTime_t m_flWaitFinished; // 0x10fc        
        bool m_fNoDamageDecal; // 0x1100        
        [[maybe_unused]] std::uint8_t pad_0x1101[0x7]; // 0x1101
        // m_pVecAttachments has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>>* m_pVecAttachments;
        char m_pVecAttachments[0x8]; // 0x1108        
        entity2::CEntityIOOutput m_OnDamaged; // 0x1110        
        entity2::CEntityIOOutput m_OnStartDeath; // 0x1138        
        entity2::CEntityIOOutput m_OnDeath; // 0x1160        
        entity2::CEntityIOOutput m_OnQuarterHealth; // 0x1188        
        entity2::CEntityIOOutput m_OnHalfHealth; // 0x11b0        
        entity2::CEntityIOOutput m_OnThreeQuarterHealth; // 0x11d8        
        // m_OnFoundEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnFoundEnemy;
        char m_OnFoundEnemy[0x28]; // 0x1200        
        entity2::CEntityIOOutput m_OnLostEnemy; // 0x1228        
        entity2::CEntityIOOutput m_OnLostPlayer; // 0x1250        
        entity2::CEntityIOOutput m_OnDamagedByPlayer; // 0x1278        
        entity2::CEntityIOOutput m_OnDamagedByPlayerSquad; // 0x12a0        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0x12c8        
        entity2::CEntityIOOutput m_OnUse; // 0x12f0        
        entity2::CEntityIOOutput m_OnStartTouchMaterial; // 0x1318        
        entity2::CEntityIOOutput m_OnEndTouchMaterial; // 0x1340        
        entity2::CEntityIOOutput m_OnLostEnemyLOS; // 0x1368        
        entity2::CEntityIOOutput m_OnLostPlayerLOS; // 0x1390        
        uint64_t m_nAITraceMask; // 0x13b8        
        bool m_bDynamicAILOD; // 0x13c0        
        [[maybe_unused]] std::uint8_t pad_0x13c1[0x3]; // 0x13c1
        client::AILOD_t m_aiLOD; // 0x13c4        
        float m_flThinkTime; // 0x13c8        
        [[maybe_unused]] std::uint8_t pad_0x13cc[0x1c]; // 0x13cc
        int32_t m_nDebugCurIndex; // 0x13e8        
        [[maybe_unused]] std::uint8_t pad_0x13ec[0x4];
        
        // Datamap fields:
        // CAI_Senses m_pSenses; // 0xce8
        // void m_pSquad; // 0x10c0
        // void CAI_BaseNPCForceSelectedGoLoopThink; // 0x0
        // void m_vecTaskThinkTimes; // 0x13d0
        // CAI_Pathfinder m_pPathfinderNavmesh; // 0x1048
        // void m_hDamagedFX; // 0x10cc
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
        // void CAI_BaseNPCBlinkThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_BaseNPC because it is not a standard-layout class
    static_assert(sizeof(CAI_BaseNPC) == 0x13f0);
};
