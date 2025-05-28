#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysicsProp.hpp"

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
        // Size: 0xe40
        // Has VTable
        #pragma pack(push, 1)
        class CItemParachute : public source2sdk::server::CPhysicsProp
        {
        public:
            uint8_t _pad0e28[0x18];
            // Datamap fields:
            // CHandle< CBaseEntity > m_hAttachedEntity; // 0xe28
            // int32_t m_eObjectivePosition; // 0xe3c
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CItemParachute) == 0xe40);
    };
};
