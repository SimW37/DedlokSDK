#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/AirheartLockOnTarget_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x1180
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint8 m_nState"
        // static metadata: MNetworkVarNames "AirheartLockOnTarget_t m_vecMarks"
        #pragma pack(push, 1)
        class CCitadel_Ability_Airheart_ChargeBlast : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x4]; // 0xf90
            // metadata: MNetworkEnable
            std::uint8_t m_nState; // 0xf94            
            uint8_t _pad0f95[0x3]; // 0xf95
            // metadata: MNetworkEnable
            // m_vecMarks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::AirheartLockOnTarget_t> m_vecMarks;
            char m_vecMarks[0x68]; // 0xf98            
            uint8_t _pad1000[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Airheart_ChargeBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Airheart_ChargeBlast) == 0x1180);
    };
};
