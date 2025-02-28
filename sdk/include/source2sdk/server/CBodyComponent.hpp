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
    class CGameSceneNode;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x78
    // Has VTable
    #pragma pack(push, 1)
    class CBodyComponent : public entity2::CEntityComponent
    {
    public:
        server::CGameSceneNode* m_pSceneNode; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x10[0x38]; // 0x10
        entity2::CNetworkVarChainer __m_pChainEntity; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x70[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBodyComponent because it is not a standard-layout class
    static_assert(sizeof(CBodyComponent) == 0x78);
};
