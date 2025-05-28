#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"

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
        // Size: 0xac0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_DoorwayPortal : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0ab8[0x4]; // 0xab8
            // m_hLinkedDoorway has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadel_DoorwayPortal> m_hLinkedDoorway;
            char m_hLinkedDoorway[0x4]; // 0xabc            
            
            // Datamap fields:
            // CHandle< CBaseEntity > other_door; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_DoorwayPortal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_DoorwayPortal) == 0xac0);
    };
};
