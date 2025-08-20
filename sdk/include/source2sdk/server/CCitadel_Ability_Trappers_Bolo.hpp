#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xd40
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Trappers_Bolo : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x40]; // 0xb98
            // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hProjectile;
            char m_hProjectile[0x4]; // 0xbd8            
            // m_hNextTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hNextTarget;
            char m_hNextTarget[0x4]; // 0xbdc            
            // m_hHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitTargets;
            char m_hHitTargets[0x18]; // 0xbe0            
            std::int32_t m_iBounces; // 0xbf8            
            bool m_bReturning; // 0xbfc            
            uint8_t _pad0bfd[0x143];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Trappers_Bolo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Trappers_Bolo) == 0xd40);
    };
};
