#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSimpleSimTimer.hpp"
#include "source2sdk/server/CAI_LocalNavigatorBase.hpp"

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
        // Size: 0x100
        // Has VTable
        #pragma pack(push, 1)
        class CAI_LocalNavigator : public source2sdk::server::CAI_LocalNavigatorBase
        {
        public:
            bool m_bLastWasClear; // 0x50            
            uint8_t _pad0051[0x97]; // 0x51
            source2sdk::client::CSimpleSimTimer m_FullDirectTimer; // 0xe8            
            uint8_t _pad00f0[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_LocalNavigator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_LocalNavigator) == 0x100);
    };
};
