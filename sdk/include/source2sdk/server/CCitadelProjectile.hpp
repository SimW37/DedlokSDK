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
        // Size: 0x880
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_flTimeScale"
        // static metadata: MNetworkOverride "m_flTimeScale"
        // static metadata: MNetworkOverride "m_flTimeScale"
        // static metadata: MNetworkVarNames "Vector m_vInitialVelocity"
        // static metadata: MNetworkVarNames "Vector m_vInitialPosition"
        // static metadata: MNetworkVarNames "AbilityID_t m_abilityID"
        // static metadata: MNetworkVarNames "EHANDLE m_hThrower"
        // static metadata: MNetworkVarNames "string_t m_sParticleName"
        // static metadata: MNetworkVarNames "Vector m_vecSpawnPosition"
        // static metadata: MNetworkVarNames "float m_flProjectileSpeed"
        // static metadata: MNetworkVarNames "float m_flMaxLifetime"
        // static metadata: MNetworkVarNames "float m_flParticleRadius"
        #pragma pack(push, 1)
        class CCitadelProjectile : public source2sdk::server::CBaseModelEntity
        {
        public:
            float m_flMaxDistance; // 0x7d0            
            float m_flArmingTime; // 0x7d4            
            float m_flChargeAmount; // 0x7d8            
            bool m_bCollideWithThrower; // 0x7dc            
            bool m_bNewCollideWithThrower; // 0x7dd            
            uint8_t _pad07de[0xa]; // 0x7de
            float m_flTickSoundInterval; // 0x7e8            
            uint8_t _pad07ec[0x4]; // 0x7ec
            Vector m_vLastAbsOrigin; // 0x7f0            
            Vector m_vLastAbsVelocity; // 0x7fc            
            uint8_t _pad0808[0x18]; // 0x808
            // m_vecTargetToIgnore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecTargetToIgnore;
            char m_vecTargetToIgnore[0x18]; // 0x820            
            bool m_bDetonateStarted; // 0x838            
            bool m_bTouchDisabled; // 0x839            
            uint8_t _pad083a[0x2]; // 0x83a
            // metadata: MNetworkEnable
            Vector m_vInitialVelocity; // 0x83c            
            // metadata: MNetworkEnable
            Vector m_vInitialPosition; // 0x848            
            // metadata: MNetworkEnable
            CUtlStringToken m_abilityID; // 0x854            
            // metadata: MNetworkEnable
            // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hThrower;
            char m_hThrower[0x4]; // 0x858            
            uint8_t _pad085c[0x4]; // 0x85c
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_sParticleName; // 0x860            
            // metadata: MNetworkEnable
            Vector m_vecSpawnPosition; // 0x868            
            // metadata: MNetworkEnable
            float m_flProjectileSpeed; // 0x874            
            // metadata: MNetworkEnable
            float m_flMaxLifetime; // 0x878            
            // metadata: MNetworkEnable
            float m_flParticleRadius; // 0x87c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelProjectile) == 0x880);
    };
};
