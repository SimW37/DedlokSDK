#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xad0
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_flTimeScale"
        // static metadata: MNetworkOverride "m_flTimeScale"
        // static metadata: MNetworkOverride "m_flTimeScale"
        // static metadata: MNetworkVarNames "Vector m_vInitialVelocity"
        // static metadata: MNetworkVarNames "VectorWS m_vInitialPosition"
        // static metadata: MNetworkVarNames "AbilityID_t m_abilityID"
        // static metadata: MNetworkVarNames "string_t m_sParticleName"
        // static metadata: MNetworkVarNames "Vector m_vecSpawnPosition"
        // static metadata: MNetworkVarNames "float m_flProjectileSpeed"
        // static metadata: MNetworkVarNames "float m_flMaxLifetime"
        #pragma pack(push, 1)
        class C_CitadelProjectile : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad09a0[0x40]; // 0x9a0
            float m_flMaxDistance; // 0x9e0            
            uint8_t _pad09e4[0x4]; // 0x9e4
            std::uint64_t m_nCachedExcludeFlags; // 0x9e8            
            bool m_bInPortalEnvironment; // 0x9f0            
            bool m_bHandlingPortalResult; // 0x9f1            
            uint8_t _pad09f2[0x2]; // 0x9f2
            float m_flArmingTime; // 0x9f4            
            float m_flChargeAmount; // 0x9f8            
            bool m_bCollideWithThrower; // 0x9fc            
            bool m_bNewCollideWithThrower; // 0x9fd            
            uint8_t _pad09fe[0xa]; // 0x9fe
            float m_flTickSoundInterval; // 0xa08            
            uint8_t _pad0a0c[0x4]; // 0xa0c
            // metadata: MNetworkEnable
            Vector m_vInitialVelocity; // 0xa10            
            // metadata: MNetworkEnable
            VectorWS m_vInitialPosition; // 0xa1c            
            // metadata: MNetworkEnable
            CUtlStringToken m_abilityID; // 0xa28            
            uint8_t _pad0a2c[0x4]; // 0xa2c
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_sParticleName; // 0xa30            
            // metadata: MNetworkEnable
            Vector m_vecSpawnPosition; // 0xa38            
            // metadata: MNetworkEnable
            float m_flProjectileSpeed; // 0xa44            
            // metadata: MNetworkEnable
            float m_flMaxLifetime; // 0xa48            
            uint8_t _pad0a4c[0x4]; // 0xa4c
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ParticleRadiusChanged"
            float m_flParticleRadius; // 0xa50            
            uint8_t _pad0a54[0x74]; // 0xa54
            float m_flPreviousTimeScale; // 0xac8            
            uint8_t _pad0acc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelProjectile) == 0xad0);
    };
};
