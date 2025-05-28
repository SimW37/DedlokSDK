#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x4f0
        // Has VTable
        #pragma pack(push, 1)
        class CInfoHeroTestingPoint : public source2sdk::server::CPointEntity
        {
        public:
            std::int32_t m_ePointType; // 0x4e0            
            uint8_t _pad04e4[0x4]; // 0x4e4
            CUtlSymbolLarge m_sMoveTarget; // 0x4e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoHeroTestingPoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoHeroTestingPoint) == 0x4f0);
    };
};
