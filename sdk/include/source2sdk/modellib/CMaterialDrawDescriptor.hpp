#pragma once
#include "source2sdk/modellib/CMaterialDrawDescriptor__RigidMeshPart_t.hpp"
#include "source2sdk/modellib/CRenderBufferBinding.hpp"
#include "source2sdk/rendersystemdx11/RenderPrimitiveType_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x100
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMaterialDrawDescriptor
    {
    public:
        float m_flUvDensity; // 0x0        
        Vector m_vTintColor; // 0x4        
        float m_flAlpha; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x2]; // 0x14
        uint16_t m_nNumMeshlets; // 0x16        
        [[maybe_unused]] std::uint8_t pad_0x18[0x4]; // 0x18
        uint32_t m_nFirstMeshlet; // 0x1c        
        uint32_t m_nAppliedIndexOffset; // 0x20        
        uint8_t m_nDepthVertexBufferIndex; // 0x24        
        uint8_t m_nMeshletPackedIVBIndex; // 0x25        
        [[maybe_unused]] std::uint8_t pad_0x26[0x2]; // 0x26
        // m_rigidMeshParts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVector<modellib::CMaterialDrawDescriptor__RigidMeshPart_t> m_rigidMeshParts;
        char m_rigidMeshParts[0x10]; // 0x28        
        rendersystemdx11::RenderPrimitiveType_t m_nPrimitiveType; // 0x38        
        int32_t m_nBaseVertex; // 0x3c        
        int32_t m_nVertexCount; // 0x40        
        int32_t m_nStartIndex; // 0x44        
        int32_t m_nIndexCount; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x4c[0x64]; // 0x4c
        modellib::CRenderBufferBinding m_indexBuffer; // 0xb0        
        modellib::CRenderBufferBinding m_meshletPackedIVB; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xf0[0x8]; // 0xf0
        // m_material has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_material;
        char m_material[0x8]; // 0xf8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMaterialDrawDescriptor, m_flUvDensity) == 0x0);
    static_assert(offsetof(CMaterialDrawDescriptor, m_vTintColor) == 0x4);
    static_assert(offsetof(CMaterialDrawDescriptor, m_flAlpha) == 0x10);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nNumMeshlets) == 0x16);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nFirstMeshlet) == 0x1c);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nAppliedIndexOffset) == 0x20);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nDepthVertexBufferIndex) == 0x24);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nMeshletPackedIVBIndex) == 0x25);
    static_assert(offsetof(CMaterialDrawDescriptor, m_rigidMeshParts) == 0x28);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nPrimitiveType) == 0x38);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nBaseVertex) == 0x3c);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nVertexCount) == 0x40);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nStartIndex) == 0x44);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nIndexCount) == 0x48);
    static_assert(offsetof(CMaterialDrawDescriptor, m_indexBuffer) == 0xb0);
    static_assert(offsetof(CMaterialDrawDescriptor, m_meshletPackedIVB) == 0xd0);
    static_assert(offsetof(CMaterialDrawDescriptor, m_material) == 0xf8);
    
    static_assert(sizeof(CMaterialDrawDescriptor) == 0x100);
};
