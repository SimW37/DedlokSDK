#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
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
        // Size: 0x858
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
        // static metadata: MNetworkVarNames "float m_flParticleRadius"
        #pragma pack(push, 1)
        class CCitadelProjectile : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad0778[0x28]; // 0x778
            float m_flMaxDistance; // 0x7a0            
            uint8_t _pad07a4[0x4]; // 0x7a4
            std::uint64_t m_nCachedExcludeFlags; // 0x7a8            
            bool m_bInPortalEnvironment; // 0x7b0            
            bool m_bHandlingPortalResult; // 0x7b1            
            uint8_t _pad07b2[0x2]; // 0x7b2
            float m_flArmingTime; // 0x7b4            
            float m_flChargeAmount; // 0x7b8            
            bool m_bCollideWithThrower; // 0x7bc            
            bool m_bNewCollideWithThrower; // 0x7bd            
            uint8_t _pad07be[0xa]; // 0x7be
            float m_flTickSoundInterval; // 0x7c8            
            uint8_t _pad07cc[0x4]; // 0x7cc
            Vector m_vLastAbsOrigin; // 0x7d0            
            Vector m_vLastAbsVelocity; // 0x7dc            
            uint8_t _pad07e8[0x18]; // 0x7e8
            // m_vecTargetToIgnore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecTargetToIgnore;
            char m_vecTargetToIgnore[0x18]; // 0x800            
            bool m_bDetonateStarted; // 0x818            
            bool m_bTouchDisabled; // 0x819            
            uint8_t _pad081a[0x2]; // 0x81a
            // metadata: MNetworkEnable
            Vector m_vInitialVelocity; // 0x81c            
            // metadata: MNetworkEnable
            VectorWS m_vInitialPosition; // 0x828            
            // metadata: MNetworkEnable
            CUtlStringToken m_abilityID; // 0x834            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_sParticleName; // 0x838            
            // metadata: MNetworkEnable
            Vector m_vecSpawnPosition; // 0x840            
            // metadata: MNetworkEnable
            float m_flProjectileSpeed; // 0x84c            
            // metadata: MNetworkEnable
            float m_flMaxLifetime; // 0x850            
            // metadata: MNetworkEnable
            float m_flParticleRadius; // 0x854            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelProjectile) == 0x858);
    };
};
