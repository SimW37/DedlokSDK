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
    // Size: 0x1320
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
        [[maybe_unused]] std::uint8_t pad_0xbe8[0x10]; // 0xbe8
        bool m_bCheckContacts; // 0xbf8        
        bool m_bIsUsingSmallHull; // 0xbf9        
        bool m_bForceDynamicHull; // 0xbfa        
        [[maybe_unused]] std::uint8_t pad_0xbfb[0x1]; // 0xbfb
        Vector m_vecLastPosition; // 0xbfc        
        float m_flLastPositionTolerance; // 0xc08        
        // m_hSynchronizedPrimaryNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CAI_BaseNPC> m_hSynchronizedPrimaryNPC;
        char m_hSynchronizedPrimaryNPC[0x4]; // 0xc0c        
        // m_vecSynchronizedSecondaryNPCs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CAI_BaseNPC>> m_vecSynchronizedSecondaryNPCs;
        char m_vecSynchronizedSecondaryNPCs[0x18]; // 0xc10        
        // metadata: MNetworkEnable
        client::NPC_STATE m_NPCState; // 0xc28        
        client::NPC_STATE m_nPreModifierNPCState; // 0xc2c        
        client::NPC_STATE m_IdealNPCState; // 0xc30        
        entity2::GameTime_t m_flLastStateChangeTime; // 0xc34        
        [[maybe_unused]] std::uint8_t pad_0xc38[0x8]; // 0xc38
        client::CAI_ScheduleBits m_Conditions; // 0xc40        
        client::CAI_ScheduleBits m_NonGatherConditions; // 0xc64        
        client::CAI_ScheduleBits m_CustomInterruptConditions; // 0xc88        
        bool m_bForceConditionsGather; // 0xcac        
        bool m_bConditionsGathered; // 0xcad        
        bool m_bDoPostRestoreRefindPath; // 0xcae        
        [[maybe_unused]] std::uint8_t pad_0xcaf[0x1]; // 0xcaf
        server::CAI_BehaviorHost* m_pBehaviorHost; // 0xcb0        
        [[maybe_unused]] std::uint8_t pad_0xcb8[0x8]; // 0xcb8
        entity2::GameTime_t m_flBlinkTime; // 0xcc0        
        [[maybe_unused]] std::uint8_t pad_0xcc4[0x4]; // 0xcc4
        server::CAI_EnemyServices* m_pEnemyServices; // 0xcc8        
        client::CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xcd0        
        client::CSimpleSimTimer m_FailChooseEnemyTimer; // 0xce4        
        entity2::GameTime_t m_flAcceptableTimeSeenEnemy; // 0xcec        
        bool m_bSkippedChooseEnemy; // 0xcf0        
        bool m_bIgnoreUnseenEnemies; // 0xcf1        
        [[maybe_unused]] std::uint8_t pad_0xcf2[0x2]; // 0xcf2
        // m_hEnemyFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hEnemyFilter;
        char m_hEnemyFilter[0x4]; // 0xcf4        
        CUtlSymbolLarge m_iszEnemyFilterName; // 0xcf8        
        // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEnt;
        char m_hTargetEnt[0x4]; // 0xd00        
        bool m_bClearTargetOnScheduleEnd; // 0xd04        
        [[maybe_unused]] std::uint8_t pad_0xd05[0x3]; // 0xd05
        entity2::GameTime_t m_flSoundWaitTime; // 0xd08        
        int32_t m_nSoundPriority; // 0xd0c        
        bool m_bSuppressFootsteps; // 0xd10        
        [[maybe_unused]] std::uint8_t pad_0xd11[0x3]; // 0xd11
        int32_t m_afCapability; // 0xd14        
        [[maybe_unused]] std::uint8_t pad_0xd18[0x170]; // 0xd18
        float m_flGroundSpeed; // 0xe88        
        entity2::GameTime_t m_flMoveWaitFinished; // 0xe8c        
        // m_hOpeningDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOpeningDoor;
        char m_hOpeningDoor[0x4]; // 0xe90        
        [[maybe_unused]] std::uint8_t pad_0xe94[0x4]; // 0xe94
        server::CUnreachableTargetList m_UnreachableTargets; // 0xe98        
        // m_hPathObstructor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPathObstructor;
        char m_hPathObstructor[0x4]; // 0xeb8        
        float m_flJumpMaxRise; // 0xebc        
        float m_flJumpMaxDrop; // 0xec0        
        float m_flJumpMaxDist; // 0xec4        
        float m_flJumpMinDist; // 0xec8        
        [[maybe_unused]] std::uint8_t pad_0xecc[0x4]; // 0xecc
        server::CAI_FacingServices* m_pFacingServices; // 0xed0        
        server::CAI_AnimGraphServices* m_pAnimGraphServices; // 0xed8        
        bool m_bAnimGraphIsAnimatingDeath; // 0xee0        
        bool m_bDeferredNavigation; // 0xee1        
        [[maybe_unused]] std::uint8_t pad_0xee2[0x6]; // 0xee2
        server::CAI_Scheduler m_Scheduler; // 0xee8        
        server::CAI_Navigator* m_pNavigatorNavmesh; // 0xf90        
        [[maybe_unused]] std::uint8_t pad_0xf98[0x18]; // 0xf98
        server::CAI_Motor* m_pMotor; // 0xfb0        
        entity2::GameTime_t m_flTimeLastMovement; // 0xfb8        
        entity2::GameTime_t m_flTimeLastFootstep; // 0xfbc        
        client::CSimpleSimTimer m_CheckOnGroundTimer; // 0xfc0        
        CUtlSymbolLarge m_strNavRestrictionVolume; // 0xfc8        
        Vector m_vDefaultEyeOffset; // 0xfd0        
        int32_t m_afMemory; // 0xfdc        
        entity2::GameTime_t m_flLastAttackTime; // 0xfe0        
        entity2::GameTime_t m_flLastTookDamageTime; // 0xfe4        
        entity2::GameTime_t m_flLastTookDamageFromPlayerTime; // 0xfe8        
        Vector m_vecLastTookDamageAttackVector; // 0xfec        
        CUtlSymbolLarge m_iszSquadName; // 0xff8        
        // m_vecMySquadSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SquadSlotNPCEntry_t> m_vecMySquadSlots;
        char m_vecMySquadSlots[0x18]; // 0x1000        
        [[maybe_unused]] std::uint8_t pad_0x1018[0x8]; // 0x1018
        int32_t m_nPrevHealthDuringModifyDamage; // 0x1020        
        [[maybe_unused]] std::uint8_t pad_0x1024[0x4]; // 0x1024
        // metadata: MNetworkEnable
        bool m_bFadeCorpse; // 0x1028        
        // metadata: MNetworkEnable
        bool m_bImportantRagdoll; // 0x1029        
        [[maybe_unused]] std::uint8_t pad_0x102a[0x6]; // 0x102a
        client::CTakeDamageResult m_deathBlowResult; // 0x1030        
        bool m_bDidDeathCleanup; // 0x1050        
        bool m_bReceivedEnemyDeadNotification; // 0x1051        
        [[maybe_unused]] std::uint8_t pad_0x1052[0x2]; // 0x1052
        entity2::GameTime_t m_flWaitFinished; // 0x1054        
        bool m_fNoDamageDecal; // 0x1058        
        [[maybe_unused]] std::uint8_t pad_0x1059[0x7]; // 0x1059
        // m_pVecAttachments has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>>* m_pVecAttachments;
        char m_pVecAttachments[0x8]; // 0x1060        
        entity2::CEntityIOOutput m_OnDamaged; // 0x1068        
        entity2::CEntityIOOutput m_OnDeath; // 0x1090        
        entity2::CEntityIOOutput m_OnQuarterHealth; // 0x10b8        
        entity2::CEntityIOOutput m_OnHalfHealth; // 0x10e0        
        entity2::CEntityIOOutput m_OnThreeQuarterHealth; // 0x1108        
        // m_OnFoundEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnFoundEnemy;
        char m_OnFoundEnemy[0x28]; // 0x1130        
        entity2::CEntityIOOutput m_OnLostEnemy; // 0x1158        
        entity2::CEntityIOOutput m_OnLostPlayer; // 0x1180        
        entity2::CEntityIOOutput m_OnDamagedByPlayer; // 0x11a8        
        entity2::CEntityIOOutput m_OnDamagedByPlayerSquad; // 0x11d0        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0x11f8        
        entity2::CEntityIOOutput m_OnUse; // 0x1220        
        entity2::CEntityIOOutput m_OnStartTouchMaterial; // 0x1248        
        entity2::CEntityIOOutput m_OnEndTouchMaterial; // 0x1270        
        entity2::CEntityIOOutput m_OnLostEnemyLOS; // 0x1298        
        entity2::CEntityIOOutput m_OnLostPlayerLOS; // 0x12c0        
        uint64_t m_nAITraceMask; // 0x12e8        
        bool m_bDynamicAILOD; // 0x12f0        
        [[maybe_unused]] std::uint8_t pad_0x12f1[0x3]; // 0x12f1
        client::AILOD_t m_aiLOD; // 0x12f4        
        float m_flThinkTime; // 0x12f8        
        [[maybe_unused]] std::uint8_t pad_0x12fc[0x1c]; // 0x12fc
        int32_t m_nDebugCurIndex; // 0x1318        
        [[maybe_unused]] std::uint8_t pad_0x131c[0x4];
        
        // Datamap fields:
        // CAI_Senses m_pSenses; // 0xc38
        // void m_pSquad; // 0x1018
        // void CAI_BaseNPCForceSelectedGoLoopThink; // 0x0
        // void m_vecTaskThinkTimes; // 0x1300
        // CAI_Pathfinder m_pPathfinderNavmesh; // 0xf98
        // void m_hDamagedFX; // 0x1024
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
    static_assert(sizeof(CAI_BaseNPC) == 0x1320);
};
