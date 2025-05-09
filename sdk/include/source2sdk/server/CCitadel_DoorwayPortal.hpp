#pragma once
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xac0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_DoorwayPortal : public server::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xab8[0x4]; // 0xab8
        // m_hLinkedDoorway has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadel_DoorwayPortal> m_hLinkedDoorway;
        char m_hLinkedDoorway[0x4]; // 0xabc        
        
        // Datamap fields:
        // CHandle< CBaseEntity > other_door; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_DoorwayPortal because it is not a standard-layout class
    static_assert(sizeof(CCitadel_DoorwayPortal) == 0xac0);
};
