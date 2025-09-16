#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CNPC_TrooperNeutralVData.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1568
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_TrooperNeutralNodeMoverVData : public source2sdk::client::CNPC_TrooperNeutralVData
        {
        public:
            // metadata: MPropertyStartGroup "Node Movement"
            bool m_bEnableMovementToNodes; // 0x1540            
            uint8_t _pad1541[0x3]; // 0x1541
            source2sdk::tier2::CRangeFloat m_flExposedDuration; // 0x1544            
            source2sdk::tier2::CRangeFloat m_flHideDuration; // 0x154c            
            uint8_t _pad1554[0x4]; // 0x1554
            // m_HidingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_HidingModifier;
            char m_HidingModifier[0x10]; // 0x1558            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperNeutralNodeMoverVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNPC_TrooperNeutralNodeMoverVData) == 0x1568);
    };
};
