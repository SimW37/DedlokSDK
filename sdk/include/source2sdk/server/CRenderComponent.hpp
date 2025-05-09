#pragma once
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0xb0
    // Has VTable
    #pragma pack(push, 1)
    class CRenderComponent : public entity2::CEntityComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x08[0x8]; // 0x8
        entity2::CNetworkVarChainer __m_pChainEntity; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x38[0x18]; // 0x38
        bool m_bIsRenderingWithViewModels; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x3]; // 0x51
        uint32_t m_nSplitscreenFlags; // 0x54        
        bool m_bEnableRendering; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x59[0x4f]; // 0x59
        bool m_bInterpolationReadyToDraw; // 0xa8        
        [[maybe_unused]] std::uint8_t pad_0xa9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRenderComponent because it is not a standard-layout class
    static_assert(sizeof(CRenderComponent) == 0xb0);
};
