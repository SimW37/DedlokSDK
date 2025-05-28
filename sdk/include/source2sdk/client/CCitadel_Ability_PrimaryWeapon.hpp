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
        // Size: 0xeb0
        // Has VTable
        // 
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
            source2sdk::entity2::GameTime_t m_flNextPrimaryAttack; // 0xdc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextPrimaryAttackStartTime; // 0xdc4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iClip; // 0xdc8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iBonusClip; // 0xdcc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkPriority "32"
            std::int32_t m_nNumContinuousShots; // 0xdd0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_flContinuousShotStartTime; // 0xdd4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flSpreadPenalty; // 0xdd8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flZoomTime; // 0xddc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flZoomOutTime; // 0xde0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::int8_t m_iSpreadIndex; // 0xde4            
            uint8_t _pad0de5[0x1]; // 0xde5
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::int16_t m_nShotRecoilIndex; // 0xde6            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_flNextShotRecoilRecoveryTime; // 0xde8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIsZoomed; // 0xdec            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint8_t m_nBurstShotsRemaining; // 0xded            
            uint8_t _pad0dee[0x2]; // 0xdee
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint32_t m_nShotNumber; // 0xdf0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInReload; // 0xdf4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSingleShotReloadFirstBullet; // 0xdf5            
            uint8_t _pad0df6[0x2]; // 0xdf6
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_reloadQueuedStartTime; // 0xdf8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flReloadAvailableTime; // 0xdfc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanActiveReload; // 0xe00            
            uint8_t _pad0e01[0x3]; // 0xe01
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0xe04            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttackDelayStartTime; // 0xe08            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttackDelayEndTime; // 0xe0c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flAttackDelayPauseTotalTime; // 0xe10            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAttackDelayPauseEndTime; // 0xe14            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xe18            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInputPressedWhileSelected; // 0xe1c            
            uint8_t _pad0e1d[0x3]; // 0xe1d
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EFireMode_t m_eActiveFireMode; // 0xe20            
            QAngle m_angRecoilAngles; // 0xe24            
            QAngle m_angRecoilToAdd; // 0xe30            
            QAngle m_angRecoilRecovery; // 0xe3c            
            source2sdk::entity2::GameTime_t m_flRecoilStartTime; // 0xe48            
            float m_flRecoilRecoverySpeed; // 0xe4c            
            float m_flAddApproachSpeed; // 0xe50            
            bool m_bFireBackwards; // 0xe54            
            uint8_t _pad0e55[0x3]; // 0xe55
            float m_currentSpread; // 0xe58            
            float m_currentMaxSpread; // 0xe5c            
            float m_currentFireSpread; // 0xe60            
            float m_flCurrentSpinRate; // 0xe64            
            uint8_t _pad0e68[0x4]; // 0xe68
            float m_fFireDuration; // 0xe6c            
            uint8_t _pad0e70[0x1]; // 0xe70
            bool m_bFireOnEmpty; // 0xe71            
            bool m_bHasReleasedForSemiAuto; // 0xe72            
            uint8_t _pad0e73[0x1]; // 0xe73
            source2sdk::entity2::GameTime_t m_flNextDisarmSound; // 0xe74            
            uint8_t _pad0e78[0x38];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PrimaryWeapon) == 0xeb0);
    };
};
