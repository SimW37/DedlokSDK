#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelProjectile.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAbility_Mirage_Tornado;
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
        // Size: 0xa08
        // Has VTable
        #pragma pack(push, 1)
        class CProjectile_Mirage_Tornado : public source2sdk::server::CCitadelProjectile
        {
        public:
            std::int32_t m_cTicksNoMovement; // 0x880            
            // m_TornadoAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CAbility_Mirage_Tornado> m_TornadoAbility;
            char m_TornadoAbility[0x4]; // 0x884            
            uint8_t _pad0888[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectile_Mirage_Tornado because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CProjectile_Mirage_Tornado) == 0xa08);
    };
};
