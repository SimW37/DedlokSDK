#pragma once
#include "source2sdk/modellib/CRenderSkeleton.hpp"
#include "source2sdk/modellib/CSceneObjectData.hpp"
#include "source2sdk/modellib/DynamicMeshDeformParams_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    class CBaseConstraint;
};

namespace source2sdk::modellib
{
    class CRenderGroom;
};

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x1f0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CRenderMesh
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        // m_sceneObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVectorFixedGrowable<modellib::CSceneObjectData,1> m_sceneObjects;
        char m_sceneObjects[0x98]; // 0x10        
        // m_constraints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVector<modellib::CBaseConstraint*> m_constraints;
        char m_constraints[0x10]; // 0xa8        
        modellib::CRenderSkeleton m_skeleton; // 0xb8        
        [[maybe_unused]] std::uint8_t pad_0x108[0xac]; // 0x108
        bool m_bUseUV2ForCharting; // 0x1b4        
        bool m_bEmbeddedMapMesh; // 0x1b5        
        [[maybe_unused]] std::uint8_t pad_0x1b6[0x22]; // 0x1b6
        modellib::DynamicMeshDeformParams_t m_meshDeformParams; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1e4[0x4]; // 0x1e4
        modellib::CRenderGroom* m_pGroomData; // 0x1e8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CRenderMesh, m_sceneObjects) == 0x10);
    static_assert(offsetof(CRenderMesh, m_constraints) == 0xa8);
    static_assert(offsetof(CRenderMesh, m_skeleton) == 0xb8);
    static_assert(offsetof(CRenderMesh, m_bUseUV2ForCharting) == 0x1b4);
    static_assert(offsetof(CRenderMesh, m_bEmbeddedMapMesh) == 0x1b5);
    static_assert(offsetof(CRenderMesh, m_meshDeformParams) == 0x1d8);
    static_assert(offsetof(CRenderMesh, m_pGroomData) == 0x1e8);
    
    static_assert(sizeof(CRenderMesh) == 0x1f0);
};
