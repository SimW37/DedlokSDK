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
        // Size: 0xc28
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Gunslinger_Salvo : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x4]; // 0xb98
            // m_CastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_CastTarget;
            char m_CastTarget[0x4]; // 0xb9c            
            std::int32_t m_iCurrentShots; // 0xba0            
            std::int32_t m_iTotalShots; // 0xba4            
            uint8_t _pad0ba8[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Gunslinger_Salvo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Gunslinger_Salvo) == 0xc28);
    };
};
