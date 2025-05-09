#pragma once
#include "source2sdk/server/AI_NavLocationType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x40
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CAI_NavLocation
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18]; // 0x0
        server::AI_NavLocationType_t m_Type; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x19[0x3]; // 0x19
        uint32_t m_nNavAreaID; // 0x1c        
        uint32_t m_nSpaceBlockID; // 0x20        
        Vector m_vLocalSpacePos; // 0x24        
        Vector m_vWorldSpacePos; // 0x30        
        // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEntity;
        char m_hEntity[0x4]; // 0x3c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAI_NavLocation, m_Type) == 0x18);
    static_assert(offsetof(CAI_NavLocation, m_nNavAreaID) == 0x1c);
    static_assert(offsetof(CAI_NavLocation, m_nSpaceBlockID) == 0x20);
    static_assert(offsetof(CAI_NavLocation, m_vLocalSpacePos) == 0x24);
    static_assert(offsetof(CAI_NavLocation, m_vWorldSpacePos) == 0x30);
    static_assert(offsetof(CAI_NavLocation, m_hEntity) == 0x3c);
    
    static_assert(sizeof(CAI_NavLocation) == 0x40);
};
