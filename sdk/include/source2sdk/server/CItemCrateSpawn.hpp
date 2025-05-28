#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyPointEntity.hpp"

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
        // Size: 0x508
        // Has VTable
        #pragma pack(push, 1)
        class CItemCrateSpawn : public source2sdk::server::CServerOnlyPointEntity
        {
        public:
            uint8_t _pad04e0[0x28];
            // Datamap fields:
            // int32_t m_eLootType; // 0x4f8
            // int32_t m_eObjectivePosition; // 0x4fc
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CItemCrateSpawn) == 0x508);
    };
};
