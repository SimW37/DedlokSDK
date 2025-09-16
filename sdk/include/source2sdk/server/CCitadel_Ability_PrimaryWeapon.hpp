#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFireMode_t.hpp"
#include "source2sdk/client/ENextAttackDelayReason_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0xd70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flLastReloadStartTime"
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
        class CCitadel_Ability_PrimaryWeapon : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLastReloadStartTime; // 0xb98            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextPrimaryAttack; // 0xb9c            
            source2sdk::entity2::GameTime_t m_flDelayedShotCreateTime; // 0xba0            
            uint8_t _pad0ba4[0x104]; // 0xba4
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iClip; // 0xca8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iBonusClip; // 0xcac            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkPriority "32"
            std::int32_t m_nNumContinuousShots; // 0xcb0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_flContinuousShotStartTime; // 0xcb4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flSpreadPenalty; // 0xcb8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flZoomTime; // 0xcbc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flZoomOutTime; // 0xcc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::int8_t m_iSpreadIndex; // 0xcc4            
            uint8_t _pad0cc5[0x1]; // 0xcc5
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::int16_t m_nShotRecoilIndex; // 0xcc6            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_flNextShotRecoilRecoveryTime; // 0xcc8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIsZoomed; // 0xccc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint8_t m_nBurstShotsRemaining; // 0xccd            
            uint8_t _pad0cce[0x2]; // 0xcce
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint32_t m_nShotNumber; // 0xcd0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInReload; // 0xcd4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSingleShotReloadFirstBullet; // 0xcd5            
            uint8_t _pad0cd6[0x2]; // 0xcd6
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_reloadQueuedStartTime; // 0xcd8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flReloadAvailableTime; // 0xcdc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanActiveReload; // 0xce0            
            uint8_t _pad0ce1[0x3]; // 0xce1
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0xce4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttackDelayStartTime; // 0xce8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttackDelayEndTime; // 0xcec            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flAttackDelayPauseTotalTime; // 0xcf0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAttackDelayPauseEndTime; // 0xcf4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xcf8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInputPressedWhileSelected; // 0xcfc            
            uint8_t _pad0cfd[0x3]; // 0xcfd
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EFireMode_t m_eActiveFireMode; // 0xd00            
            QAngle m_angRecoilAngles; // 0xd04            
            QAngle m_angRecoilToAdd; // 0xd10            
            QAngle m_angRecoilRecovery; // 0xd1c            
            source2sdk::entity2::GameTime_t m_flRecoilStartTime; // 0xd28            
            float m_flRecoilRecoverySpeed; // 0xd2c            
            float m_flAddApproachSpeed; // 0xd30            
            float m_currentSpread; // 0xd34            
            float m_currentMaxSpread; // 0xd38            
            float m_currentFireSpread; // 0xd3c            
            float m_flCurrentSpinRate; // 0xd40            
            uint8_t _pad0d44[0x4]; // 0xd44
            float m_fFireDuration; // 0xd48            
            uint8_t _pad0d4c[0x1]; // 0xd4c
            bool m_bFireOnEmpty; // 0xd4d            
            bool m_bHasReleasedForSemiAuto; // 0xd4e            
            uint8_t _pad0d4f[0x1]; // 0xd4f
            source2sdk::entity2::GameTime_t m_flNextDisarmSound; // 0xd50            
            std::int32_t m_nPrimaryMuzzleIndex; // 0xd54            
            source2sdk::entity2::GameTime_t m_flPrimaryMuzzleResetTime; // 0xd58            
            std::int32_t m_nSecondaryMuzzleIndex; // 0xd5c            
            source2sdk::entity2::GameTime_t m_flSecondaryMuzzleResetTime; // 0xd60            
            std::int32_t m_nRandomStreak; // 0xd64            
            std::int32_t m_nLastUsedMuzzleIndex; // 0xd68            
            std::int32_t m_nClipSizeBeforeSwap; // 0xd6c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PrimaryWeapon) == 0xd70);
    };
};
