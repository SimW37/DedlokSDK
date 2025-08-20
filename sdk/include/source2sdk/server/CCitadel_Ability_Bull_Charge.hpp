#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf28
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "QAngle m_anglesCharging"
        // static metadata: MNetworkVarNames "GameTime_t m_flChargeStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flFastChargeStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
        // static metadata: MNetworkVarNames "bool m_bHitAPlayer"
        #pragma pack(push, 1)
        class CCitadel_Ability_Bull_Charge : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEntities;
            char m_vecHitEntities[0x18]; // 0xb98            
            bool m_bGainedWeaponPowerBuff; // 0xbb0            
            uint8_t _pad0bb1[0x347]; // 0xbb1
            // metadata: MNetworkEnable
            QAngle m_anglesCharging; // 0xef8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnChargingStateChanged"
            source2sdk::entity2::GameTime_t m_flChargeStartTime; // 0xf04            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFastChargeStartTime; // 0xf08            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFastChargeEndTime; // 0xf0c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bHitAPlayer; // 0xf10            
            uint8_t _pad0f11[0x3]; // 0xf11
            bool m_bFirstTick; // 0xf14            
            uint8_t _pad0f15[0x3]; // 0xf15
            Vector m_vGoalDir; // 0xf18            
            uint8_t _pad0f24[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bull_Charge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Bull_Charge) == 0xf28);
    };
};
