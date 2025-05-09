#pragma once
#include "source2sdk/mathlib_extended/PackedAABB_t.hpp"
#include "source2sdk/modellib/CDrawCullingData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMeshletDescriptor
    {
    public:
        mathlib_extended::PackedAABB_t m_PackedAABB; // 0x0        
        modellib::CDrawCullingData m_CullingData; // 0x8        
        uint32_t m_nVertexOffset; // 0xc        
        uint32_t m_nTriangleOffset; // 0x10        
        uint8_t m_nVertexCount; // 0x14        
        uint8_t m_nTriangleCount; // 0x15        
        [[maybe_unused]] std::uint8_t pad_0x16[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMeshletDescriptor, m_PackedAABB) == 0x0);
    static_assert(offsetof(CMeshletDescriptor, m_CullingData) == 0x8);
    static_assert(offsetof(CMeshletDescriptor, m_nVertexOffset) == 0xc);
    static_assert(offsetof(CMeshletDescriptor, m_nTriangleOffset) == 0x10);
    static_assert(offsetof(CMeshletDescriptor, m_nVertexCount) == 0x14);
    static_assert(offsetof(CMeshletDescriptor, m_nTriangleCount) == 0x15);
    
    static_assert(sizeof(CMeshletDescriptor) == 0x18);
};
