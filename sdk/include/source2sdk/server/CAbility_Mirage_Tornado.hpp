#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelProjectile;
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
        // Size: 0xd70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CCitadelProjectile> m_hActiveProjectile"
        #pragma pack(push, 1)
        class CAbility_Mirage_Tornado : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            Vector m_vLastValidMovementPosition; // 0xba0            
            // metadata: MNetworkEnable
            // m_hActiveProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelProjectile> m_hActiveProjectile;
            char m_hActiveProjectile[0x4]; // 0xbac            
            uint8_t _pad0bb0[0x1c0];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Mirage_Tornado because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Mirage_Tornado) == 0xd70);
    };
};
