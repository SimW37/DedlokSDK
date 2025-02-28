#pragma once
#include "source2sdk/client/EMidStairsLocation_t.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x500
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    // static metadata: MNetworkVarNames "EMidStairsLocation_t m_eLocation"
    #pragma pack(push, 1)
    class CCitadel_BaseProp_MidStairs : public server::CPointEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x4e0        
        // metadata: MNetworkEnable
        client::EMidStairsLocation_t m_eLocation; // 0x4f8        
        [[maybe_unused]] std::uint8_t pad_0x4fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_BaseProp_MidStairs because it is not a standard-layout class
    static_assert(sizeof(CCitadel_BaseProp_MidStairs) == 0x500);
};
