#pragma once
#include "source2sdk/client/EFireMode_t.hpp"
#include "source2sdk/client/ENextAttackDelayReason_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xbb8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flNextPrimaryAttack"
    // static metadata: MNetworkVarNames "int32 m_iClip"
    // static metadata: MNetworkVarNames "int32 m_iBonusClip"
    // static metadata: MNetworkVarNames "int32 m_nNumContinuousShots"
    // static metadata: MNetworkVarNames "GameTime_t m_flContinuousShotStartTime"
    // static metadata: MNetworkVarNames "float m_flSpreadPenalty"
    // static metadata: MNetworkVarNames "GameTime_t m_flZoomTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flZoomOutTime"
    // static metadata: MNetworkVarNames "int8 m_iSpreadIndex"
    // static metadata: MNetworkVarNames "int16 m_nShotRecoilIndex"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextShotRecoilRecoveryTime"
    // static metadata: MNetworkVarNames "bool m_bIsZoomed"
    // static metadata: MNetworkVarNames "uint8 m_nBurstShotsRemaining"
    // static metadata: MNetworkVarNames "uint32 m_nShotNumber"
    // static metadata: MNetworkVarNames "bool m_bInReload"
    // static metadata: MNetworkVarNames "bool m_bSingleShotReloadFirstBullet"
    // static metadata: MNetworkVarNames "GameTime_t m_reloadQueuedStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flReloadAvailableTime"
    // static metadata: MNetworkVarNames "bool m_bCanActiveReload"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastAttackTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextAttackDelayStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextAttackDelayEndTime"
    // static metadata: MNetworkVarNames "float m_flAttackDelayPauseTotalTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flAttackDelayPauseEndTime"
    // static metadata: MNetworkVarNames "ENextAttackDelayReason_t m_eNextAttackDelayReason"
    // static metadata: MNetworkVarNames "bool m_bInputPressedWhileSelected"
    // static metadata: MNetworkVarNames "EFireMode_t m_eActiveFireMode"
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeapon : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextPrimaryAttack; // 0xb00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkSerializer "minusone"
        // metadata: MNetworkPriority "32"
        int32_t m_iClip; // 0xb04        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkSerializer "minusone"
        // metadata: MNetworkPriority "32"
        int32_t m_iBonusClip; // 0xb08        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkPriority "32"
        int32_t m_nNumContinuousShots; // 0xb0c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        entity2::GameTime_t m_flContinuousShotStartTime; // 0xb10        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flSpreadPenalty; // 0xb14        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flZoomTime; // 0xb18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flZoomOutTime; // 0xb1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        int8_t m_iSpreadIndex; // 0xb20        
        [[maybe_unused]] std::uint8_t pad_0xb21[0x1]; // 0xb21
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        int16_t m_nShotRecoilIndex; // 0xb22        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        entity2::GameTime_t m_flNextShotRecoilRecoveryTime; // 0xb24        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bIsZoomed; // 0xb28        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        uint8_t m_nBurstShotsRemaining; // 0xb29        
        [[maybe_unused]] std::uint8_t pad_0xb2a[0x2]; // 0xb2a
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        uint32_t m_nShotNumber; // 0xb2c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bInReload; // 0xb30        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bSingleShotReloadFirstBullet; // 0xb31        
        [[maybe_unused]] std::uint8_t pad_0xb32[0x2]; // 0xb32
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        entity2::GameTime_t m_reloadQueuedStartTime; // 0xb34        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flReloadAvailableTime; // 0xb38        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bCanActiveReload; // 0xb3c        
        [[maybe_unused]] std::uint8_t pad_0xb3d[0x3]; // 0xb3d
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flLastAttackTime; // 0xb40        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextAttackDelayStartTime; // 0xb44        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextAttackDelayEndTime; // 0xb48        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flAttackDelayPauseTotalTime; // 0xb4c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flAttackDelayPauseEndTime; // 0xb50        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xb54        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bInputPressedWhileSelected; // 0xb58        
        [[maybe_unused]] std::uint8_t pad_0xb59[0x3]; // 0xb59
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EFireMode_t m_eActiveFireMode; // 0xb5c        
        QAngle m_angRecoilAngles; // 0xb60        
        QAngle m_angRecoilToAdd; // 0xb6c        
        QAngle m_angRecoilRecovery; // 0xb78        
        entity2::GameTime_t m_flRecoilStartTime; // 0xb84        
        float m_flRecoilRecoverySpeed; // 0xb88        
        float m_flAddApproachSpeed; // 0xb8c        
        bool m_bFireBackwards; // 0xb90        
        [[maybe_unused]] std::uint8_t pad_0xb91[0x3]; // 0xb91
        float m_currentSpread; // 0xb94        
        float m_currentMaxSpread; // 0xb98        
        float m_currentFireSpread; // 0xb9c        
        float m_flCurrentSpinRate; // 0xba0        
        [[maybe_unused]] std::uint8_t pad_0xba4[0x4]; // 0xba4
        float m_fFireDuration; // 0xba8        
        [[maybe_unused]] std::uint8_t pad_0xbac[0x1]; // 0xbac
        bool m_bFireOnEmpty; // 0xbad        
        bool m_bHasReleasedForSemiAuto; // 0xbae        
        [[maybe_unused]] std::uint8_t pad_0xbaf[0x1]; // 0xbaf
        entity2::GameTime_t m_flNextDisarmSound; // 0xbb0        
        int32_t m_nClipSizeBeforeSwap; // 0xbb4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon) == 0xbb8);
};
