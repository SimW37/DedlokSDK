#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBaseAbility;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xab0
        // Has VTable
        #pragma pack(push, 1)
        class CProjectile_Airheart_Package : public source2sdk::server::CBaseAnimGraph
        {
        public:
            Vector m_vVelocity; // 0xa80            
            float m_flFloorDist; // 0xa8c            
            bool m_bPunchedOnce; // 0xa90            
            bool m_bOnGround; // 0xa91            
            uint8_t _pad0a92[0x6]; // 0xa92
            source2sdk::server::CCitadelBaseAbility* m_pAbility; // 0xa98            
            float m_flStunDuration; // 0xaa0            
            float m_flStunRadius; // 0xaa4            
            uint8_t _pad0aa8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectile_Airheart_Package because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CProjectile_Airheart_Package) == 0xab0);
    };
};
