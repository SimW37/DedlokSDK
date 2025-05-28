#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x50
        #pragma pack(push, 1)
        struct CitadelAbilityProjectileCreateInfo_t
        {
        public:
            Vector m_vecCreatePosition; // 0x0            
            QAngle m_angAngles; // 0xc            
            Vector m_vecVelocity; // 0x18            
            float m_flGravity; // 0x24            
            float m_flLifeTime; // 0x28            
            bool m_bPrimaryAttack; // 0x2c            
            bool m_bWantsInitialVelocity; // 0x2d            
            uint8_t _pad002e[0x2]; // 0x2e
            float m_flChargeAmount; // 0x30            
            uint8_t _pad0034[0x4]; // 0x34
            CUtlString m_sOverrideClassName; // 0x38            
            bool m_bShouldHitThrower; // 0x40            
            bool m_bLagCompensatePosition; // 0x41            
            uint8_t _pad0042[0x2]; // 0x42
            float m_flHitThrowerDelay; // 0x44            
            uint8_t _pad0048[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_vecCreatePosition) == 0x0);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_angAngles) == 0xc);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_vecVelocity) == 0x18);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_flGravity) == 0x24);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_flLifeTime) == 0x28);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_bPrimaryAttack) == 0x2c);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_bWantsInitialVelocity) == 0x2d);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_flChargeAmount) == 0x30);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_sOverrideClassName) == 0x38);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_bShouldHitThrower) == 0x40);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_bLagCompensatePosition) == 0x41);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_flHitThrowerDelay) == 0x44);
        
        static_assert(sizeof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t) == 0x50);
    };
};
