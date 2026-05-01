#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1620
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vStrikeVel"
        // static metadata: MNetworkVarNames "float m_flInitialYaw"
        // static metadata: MNetworkVarNames "float m_flStartHeight"
        #pragma pack(push, 1)
        class CCitadel_Ability_LashDownStrike : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x180]; // 0xf90
            source2sdk::entity2::GameTime_t m_ImpactTime; // 0x1110            
            Vector m_vDamagePos; // 0x1114            
            Vector m_vDamageDir; // 0x1120            
            uint8_t _pad112c[0x4]; // 0x112c
            // m_vHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitEnemies;
            char m_vHitEnemies[0x18]; // 0x1130            
            uint8_t _pad1148[0x20]; // 0x1148
            // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEntities;
            char m_vecHitEntities[0x18]; // 0x1168            
            source2sdk::client::ParticleIndex_t m_PreviewEffect; // 0x1180            
            uint8_t _pad1184[0x484]; // 0x1184
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStrikeVel; // 0x1608            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flInitialYaw; // 0x1614            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flStartHeight; // 0x1618            
            uint8_t _pad161c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_LashDownStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_LashDownStrike) == 0x1620);
    };
};
