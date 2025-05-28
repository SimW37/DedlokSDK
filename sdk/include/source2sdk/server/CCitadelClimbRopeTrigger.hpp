#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x998
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bAlignCameraOnAutoDismount"
        #pragma pack(push, 1)
        class CCitadelClimbRopeTrigger : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            bool m_bAlignCameraOnAutoDismount; // 0x990            
            uint8_t _pad0991[0x3]; // 0x991
            CUtlStringToken m_tModifier; // 0x994            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelClimbRopeTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelClimbRopeTrigger) == 0x998);
    };
};
