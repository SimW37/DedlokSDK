#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0xc
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CNmClip__ModelSpaceSamplingChainLink_t
    {
    public:
        int32_t m_nBoneIdx; // 0x0        
        int32_t m_nParentBoneIdx; // 0x4        
        int32_t m_nParentChainLinkIdx; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmClip__ModelSpaceSamplingChainLink_t, m_nBoneIdx) == 0x0);
    static_assert(offsetof(CNmClip__ModelSpaceSamplingChainLink_t, m_nParentBoneIdx) == 0x4);
    static_assert(offsetof(CNmClip__ModelSpaceSamplingChainLink_t, m_nParentChainLinkIdx) == 0x8);
    
    static_assert(sizeof(CNmClip__ModelSpaceSamplingChainLink_t) == 0xc);
};
