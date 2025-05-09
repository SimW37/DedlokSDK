#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x290
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "HModelStrong m_hModel"
    // static metadata: MNetworkVarNames "bool m_bClientClothCreationSuppressed"
    // static metadata: MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
    // static metadata: MNetworkVarNames "int32 m_nBodyGroupChoices"
    // static metadata: MNetworkVarNames "int8 m_nIdealMotionType"
    #pragma pack(push, 1)
    class CModelState
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0xd0]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "skeletonModelChanged"
        // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel;
        char m_hModel[0x8]; // 0xd0        
        CUtlSymbolLarge m_ModelName; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xe0[0x45]; // 0xe0
        // metadata: MNetworkEnable
        bool m_bClientClothCreationSuppressed; // 0x125        
        [[maybe_unused]] std::uint8_t pad_0x126[0xba]; // 0x126
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
        uint64_t m_MeshGroupMask; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1e8[0x48]; // 0x1e8
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "bodyGroupChoiceChanged"
        // m_nBodyGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<int32_t> m_nBodyGroupChoices;
        char m_nBodyGroupChoices[0x18]; // 0x230        
        [[maybe_unused]] std::uint8_t pad_0x248[0x32]; // 0x248
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "skeletonMotionTypeChanged"
        int8_t m_nIdealMotionType; // 0x27a        
        int8_t m_nForceLOD; // 0x27b        
        int8_t m_nClothUpdateFlags; // 0x27c        
        [[maybe_unused]] std::uint8_t pad_0x27d[0x13];
        
        // Datamap fields:
        // void m_pVPhysicsAggregate; // 0x110
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CModelState, m_hModel) == 0xd0);
    static_assert(offsetof(CModelState, m_ModelName) == 0xd8);
    static_assert(offsetof(CModelState, m_bClientClothCreationSuppressed) == 0x125);
    static_assert(offsetof(CModelState, m_MeshGroupMask) == 0x1e0);
    static_assert(offsetof(CModelState, m_nBodyGroupChoices) == 0x230);
    static_assert(offsetof(CModelState, m_nIdealMotionType) == 0x27a);
    static_assert(offsetof(CModelState, m_nForceLOD) == 0x27b);
    static_assert(offsetof(CModelState, m_nClothUpdateFlags) == 0x27c);
    
    static_assert(sizeof(CModelState) == 0x290);
};
