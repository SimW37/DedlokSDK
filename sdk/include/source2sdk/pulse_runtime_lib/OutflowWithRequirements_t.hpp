#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x78
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct OutflowWithRequirements_t
        {
        public:
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_Connection; // 0x0            
            // m_RequirementNodeIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::PulseDocNodeID_t> m_RequirementNodeIDs;
            char m_RequirementNodeIDs[0x18]; // 0x48            
            // m_nCursorStateBlockIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nCursorStateBlockIndex;
            char m_nCursorStateBlockIndex[0x18]; // 0x60            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::OutflowWithRequirements_t, m_Connection) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::OutflowWithRequirements_t, m_RequirementNodeIDs) == 0x48);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::OutflowWithRequirements_t, m_nCursorStateBlockIndex) == 0x60);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::OutflowWithRequirements_t) == 0x78);
    };
};
