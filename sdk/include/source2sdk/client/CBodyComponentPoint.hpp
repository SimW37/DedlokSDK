#pragma once
#include "source2sdk/client/CBodyComponent.hpp"
#include "source2sdk/client/CGameSceneNode.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1e0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CGameSceneNode m_sceneNode"
    #pragma pack(push, 1)
    class CBodyComponentPoint : public client::CBodyComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x78[0x8]; // 0x78
        // metadata: MNetworkEnable
        client::CGameSceneNode m_sceneNode; // 0x80        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBodyComponentPoint because it is not a standard-layout class
    static_assert(sizeof(CBodyComponentPoint) == 0x1e0);
};
