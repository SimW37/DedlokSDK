#pragma once
#include "source2sdk/server/CBodyComponent.hpp"
#include "source2sdk/server/CSkeletonInstance.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x520
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CSkeletonInstance m_skeletonInstance"
    #pragma pack(push, 1)
    class CBodyComponentSkeletonInstance : public server::CBodyComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x78[0x8]; // 0x78
        // metadata: MNetworkEnable
        server::CSkeletonInstance m_skeletonInstance; // 0x80        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBodyComponentSkeletonInstance because it is not a standard-layout class
    static_assert(sizeof(CBodyComponentSkeletonInstance) == 0x520);
};
