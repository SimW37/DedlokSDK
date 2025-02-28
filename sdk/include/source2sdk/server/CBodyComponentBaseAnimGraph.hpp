#pragma once
#include "source2sdk/server/CBaseAnimGraphController.hpp"
#include "source2sdk/server/CBodyComponentSkeletonInstance.hpp"
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
    // Size: 0xaa0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CBaseAnimGraphController m_animationController"
    #pragma pack(push, 1)
    class CBodyComponentBaseAnimGraph : public server::CBodyComponentSkeletonInstance
    {
    public:
        // metadata: MNetworkEnable
        server::CBaseAnimGraphController m_animationController; // 0x510        
        [[maybe_unused]] std::uint8_t pad_0xa98[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBodyComponentBaseAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CBodyComponentBaseAnimGraph) == 0xaa0);
};
