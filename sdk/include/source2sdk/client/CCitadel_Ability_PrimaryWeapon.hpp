#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EFireMode_t.hpp"
#include "source2sdk/client/ENextAttackDelayReason_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xe90
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flLastReloadStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextPrimaryAttack"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextPrimaryAttackStartTime"
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
        class CCitadel_Ability_PrimaryWeapon : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLastReloadStartTime; // 0xd88            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextPrimaryAttack; // 0xd8c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextPrimaryAttackStartTime; // 0xd90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iClip; // 0xd94            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iBonusClip; // 0xd98            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkPriority "32"
            std::int32_t m_nNumContinuousShots; // 0xd9c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_flContinuousShotStartTime; // 0xda0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flSpreadPenalty; // 0xda4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flZoomTime; // 0xda8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flZoomOutTime; // 0xdac            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::int8_t m_iSpreadIndex; // 0xdb0            
            uint8_t _pad0db1[0x1]; // 0xdb1
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::int16_t m_nShotRecoilIndex; // 0xdb2            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_flNextShotRecoilRecoveryTime; // 0xdb4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIsZoomed; // 0xdb8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint8_t m_nBurstShotsRemaining; // 0xdb9            
            uint8_t _pad0dba[0x2]; // 0xdba
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint32_t m_nShotNumber; // 0xdbc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInReload; // 0xdc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSingleShotReloadFirstBullet; // 0xdc1            
            uint8_t _pad0dc2[0x2]; // 0xdc2
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_reloadQueuedStartTime; // 0xdc4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flReloadAvailableTime; // 0xdc8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanActiveReload; // 0xdcc            
            uint8_t _pad0dcd[0x3]; // 0xdcd
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0xdd0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttackDelayStartTime; // 0xdd4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttackDelayEndTime; // 0xdd8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flAttackDelayPauseTotalTime; // 0xddc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAttackDelayPauseEndTime; // 0xde0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xde4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInputPressedWhileSelected; // 0xde8            
            uint8_t _pad0de9[0x3]; // 0xde9
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EFireMode_t m_eActiveFireMode; // 0xdec            
            QAngle m_angRecoilAngles; // 0xdf0            
            QAngle m_angRecoilToAdd; // 0xdfc            
            QAngle m_angRecoilRecovery; // 0xe08            
            source2sdk::entity2::GameTime_t m_flRecoilStartTime; // 0xe14            
            float m_flRecoilRecoverySpeed; // 0xe18            
            float m_flAddApproachSpeed; // 0xe1c            
            float m_currentSpread; // 0xe20            
            float m_currentMaxSpread; // 0xe24            
            float m_currentFireSpread; // 0xe28            
            float m_flCurrentSpinRate; // 0xe2c            
            uint8_t _pad0e30[0x4]; // 0xe30
            float m_fFireDuration; // 0xe34            
            uint8_t _pad0e38[0x1]; // 0xe38
            bool m_bFireOnEmpty; // 0xe39            
            bool m_bHasReleasedForSemiAuto; // 0xe3a            
            uint8_t _pad0e3b[0x1]; // 0xe3b
            source2sdk::entity2::GameTime_t m_flNextDisarmSound; // 0xe3c            
            std::int32_t m_nPrimaryMuzzleIndex; // 0xe40            
            source2sdk::entity2::GameTime_t m_flPrimaryMuzzleResetTime; // 0xe44            
            std::int32_t m_nSecondaryMuzzleIndex; // 0xe48            
            source2sdk::entity2::GameTime_t m_flSecondaryMuzzleResetTime; // 0xe4c            
            std::int32_t m_nRandomStreak; // 0xe50            
            std::int32_t m_nLastUsedMuzzleIndex; // 0xe54            
            uint8_t _pad0e58[0x38];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PrimaryWeapon) == 0xe90);
    };
};
