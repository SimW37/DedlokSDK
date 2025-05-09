#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x310
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
        [[maybe_unused]] std::uint8_t pad_0xe0[0xc9]; // 0xe0
        // metadata: MNetworkEnable
        bool m_bClientClothCreationSuppressed; // 0x1a9        
        [[maybe_unused]] std::uint8_t pad_0x1aa[0xb6]; // 0x1aa
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
        uint64_t m_MeshGroupMask; // 0x260        
        [[maybe_unused]] std::uint8_t pad_0x268[0x48]; // 0x268
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "bodyGroupChoiceChanged"
        // m_nBodyGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<int32_t> m_nBodyGroupChoices;
        char m_nBodyGroupChoices[0x18]; // 0x2b0        
        [[maybe_unused]] std::uint8_t pad_0x2c8[0x32]; // 0x2c8
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "skeletonMotionTypeChanged"
        int8_t m_nIdealMotionType; // 0x2fa        
        int8_t m_nForceLOD; // 0x2fb        
        int8_t m_nClothUpdateFlags; // 0x2fc        
        [[maybe_unused]] std::uint8_t pad_0x2fd[0x13];
        
        // Datamap fields:
        // void m_pVPhysicsAggregate; // 0x110
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CModelState, m_hModel) == 0xd0);
    static_assert(offsetof(CModelState, m_ModelName) == 0xd8);
    static_assert(offsetof(CModelState, m_bClientClothCreationSuppressed) == 0x1a9);
    static_assert(offsetof(CModelState, m_MeshGroupMask) == 0x260);
    static_assert(offsetof(CModelState, m_nBodyGroupChoices) == 0x2b0);
    static_assert(offsetof(CModelState, m_nIdealMotionType) == 0x2fa);
    static_assert(offsetof(CModelState, m_nForceLOD) == 0x2fb);
    static_assert(offsetof(CModelState, m_nClothUpdateFlags) == 0x2fc);
    
    static_assert(sizeof(CModelState) == 0x310);
};
