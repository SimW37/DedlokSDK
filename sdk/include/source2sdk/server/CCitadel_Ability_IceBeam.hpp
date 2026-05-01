#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAbilityBeam_t.hpp"
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
        // Size: 0x23b0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIceBeaming"
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam"
        #pragma pack(push, 1)
        class CCitadel_Ability_IceBeam : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIceBeaming; // 0xf90            
            uint8_t _pad0f91[0x40b]; // 0xf91
            source2sdk::entity2::GameTime_t m_flNextDamageTick; // 0x139c            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAbilityBeam_t m_beam; // 0x13a0            
            uint8_t _pad2360[0x38]; // 0x2360
            // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecEntitiesHit;
            char m_vecEntitiesHit[0x18]; // 0x2398            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_IceBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_IceBeam) == 0x23b0);
    };
};
