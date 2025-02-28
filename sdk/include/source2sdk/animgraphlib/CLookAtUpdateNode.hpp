#pragma once
#include "source2sdk/animgraphlib/AnimVectorSource.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/LookAtOpFixedSettings_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x160
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CLookAtUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        animgraphlib::LookAtOpFixedSettings_t m_opFixedSettings; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x140[0x8]; // 0x140
        animgraphlib::AnimVectorSource m_target; // 0x148        
        animgraphlib::CAnimParamHandle m_paramIndex; // 0x14c        
        animgraphlib::CAnimParamHandle m_weightParamIndex; // 0x14e        
        bool m_bResetChild; // 0x150        
        bool m_bLockWhenWaning; // 0x151        
        [[maybe_unused]] std::uint8_t pad_0x152[0xe];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLookAtUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CLookAtUpdateNode) == 0x160);
};
