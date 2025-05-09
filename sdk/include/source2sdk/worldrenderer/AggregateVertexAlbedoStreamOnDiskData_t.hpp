#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AggregateVertexAlbedoStreamOnDiskData_t
    {
    public:
        CUtlBinaryBlock m_BufferData; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AggregateVertexAlbedoStreamOnDiskData_t, m_BufferData) == 0x0);
    
    static_assert(sizeof(AggregateVertexAlbedoStreamOnDiskData_t) == 0x18);
};
