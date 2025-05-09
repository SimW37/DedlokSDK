#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Size: 0x998
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAlignCameraOnAutoDismount"
    #pragma pack(push, 1)
    class CCitadelClimbRopeTrigger : public server::CBaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        bool m_bAlignCameraOnAutoDismount; // 0x990        
        [[maybe_unused]] std::uint8_t pad_0x991[0x3]; // 0x991
        CUtlStringToken m_tModifier; // 0x994        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelClimbRopeTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelClimbRopeTrigger) == 0x998);
};
